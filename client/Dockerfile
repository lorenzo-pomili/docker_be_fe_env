# FROM node:12-alpine3.10
# RUN mkdir -p /app/FE/src
# WORKDIR /app/FE/src
# COPY package.json /app/FE
# RUN npm install
# COPY . /app/FE
# CMD ["npm", "start"]


# This stage installs our modules
FROM node:12
WORKDIR /app
COPY . ./
# Don't install dev dependencies
RUN npm install --prod
RUN npm build

# Multi-stage build: Use this as a nice small base image
# FROM mhart/alpine-node:slim-12
FROM node:12-alpine3.10
WORKDIR /app
# Copy files from build image
COPY --from=0 /app .
COPY . .
# RUN ls -a
# RUN ls -a src/
CMD ["npm", "run", "webpack"]

# FROM metaa/node-alpine-glibc
# RUN mkdir -p /app/FE/src
# WORKDIR /app/FE/src
# COPY package.json /app/FE
# RUN npm install
# COPY . /app/FE
# CMD ["npm", "start"]
