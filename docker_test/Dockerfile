FROM php:7.2.4-fpm-stretch

WORKDIR /app

COPY . /app

RUN apt-get update && apt-get install nginx -y

EXPOSE 80
