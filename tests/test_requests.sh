#!/bin/bash

echo "⚠️ Make sure server is running on port 8080"
sleep 2
echo "Testing GET /"
curl http://localhost:8080/

echo -e "\nTesting GET /hello"
curl http://localhost:8080/hello

echo -e "\nTesting POST /data"
curl -X POST http://localhost:8080/data -d "name=test"

echo -e "\nTesting DELETE /data"
curl -X DELETE http://localhost:8080/data

echo -e "\nTesting PATCH /data"
curl -X PATCH http://localhost:8080/data -d "name=updated"
