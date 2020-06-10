#FROM node:12-alpine3.10
#RUN mkdir -p /app/BE/src
#WORKDIR /app/BE/src
#COPY package.json /app/BE
#RUN npm install
#COPY . /app/BE
#CMD ["npm", "build"]

# # This stage installs our modules
# FROM node:12
# WORKDIR /app
# COPY . ./
# # Don't install dev dependencies
# # RUN npm install --prod
# RUN npm install
# # RUN npm build
# RUN ls -a
# RUN ls -a node_modules
# RUN ls -a src/

# # Multi-stage build: Use this as a nice small base image
# # FROM mhart/alpine-node:slim-12
# FROM node:12-alpine3.10
# WORKDIR /app
# # Copy files from build image
# COPY --from=0 /app .
# COPY . .
# RUN ls -a
# RUN ls -a src/
# CMD ["node", "src/demo.bs.js"]

# # This stage installs our modules
# FROM node:12
# WORKDIR /app
# COPY . ./
# # Don't install dev dependencies
# RUN yarn install --prod
# RUN yarn re:build

# # Multi-stage build: Use this as a nice small base image
# FROM mhart/alpine-node:slim-12
# WORKDIR /app
# # Copy files from build image
# COPY --from=0 /app .
# COPY . .
# RUN ls -a
# RUN ls -a src/
# CMD ["node", "src/Server.bs.js"]

FROM metaa/node-alpine-glibc
WORKDIR /app
COPY . ./
RUN npm install
CMD ["npm", "start"]