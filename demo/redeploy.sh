#!/bin/sh

# Stop current container.
docker-compose stop
docker-compose rm -f

# Build ices dev image
cd ../../ices
git pull
docker build -t integralces:dev .

# Build and run ices demo image
cd ../ices-deploy/demo
git pull
docker-compose up -d --build

