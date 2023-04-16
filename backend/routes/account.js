const express = require('express');
const router = express.Router();
const account = require('../models/account_model');
const transactionHistory = require('../models/transactionHistory_model');

router.get('/', function (request, response) {
  account.getAll(function (err, dbResult) {
    if (err) {
      response.json(err);
    }
    else {
      response.json(dbResult);
    }
  })
});

router.get('/:id',
  function (request, response) {
    account.getById(request.params.id, function (err, dbResult) {
      if (err) {
        response.json(err);
      } else {
        response.json(dbResult[0]);
      }
    })
  });


router.post('/',
  function (request, response) {
    account.add(request.body, function (err, dbResult) {
      if (err) {
        response.json(err);
      } else {
        //response.json(dbResult);
        response.json(dbResult.affectedRows);
      }
    });
  });


router.delete('/:id',
  function (request, response) {
    account.delete(request.params.id, function (err, dbResult) {
      if (err) {
        response.json(err);
      } else {
        response.json(dbResult.affectedRows);
      }
    });
  });


router.put('/',
  function (request, response) {
    if (request.body.id && request.body.amount && request.body.type) {
      const id = request.body.id;
      const amount = request.body.amount;
      const type = request.body.type;

      console.log("id: ", id);
      console.log("amount: ", amount);
      console.log("type: ", type);

      transactionHistory.insert(id, amount, type, function (err, dbResult) {
        if (err) {
          console.log("transac.insert error");
          response.json(err);
        }
        else if (dbResult.affectedRows <= 0) {
          console.log("transac.insert 0 affected");
          response.json(dbResult.affectedRows);
        }
        else {
          account.update(id, amount, type, function (err, dbResult) {
            if (err) {
              console.log("account.update error");
              response.json(err);
            } else {
              console.log("account.update affected rows: ", dbResult.affectedRows);
              response.json(dbResult.affectedRows);
            }
          });
        }
      });
    }
    else {
      console.log("account put amount body malformed");
      response.send(false);
    }
  });


module.exports = router;