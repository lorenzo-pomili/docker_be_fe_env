# FROM metaa/node-alpine-glibc
FROM node:slim
WORKDIR /app
COPY . ./
RUN npm install
CMD ["npm", "start"]