FROM node:12-alpine3.10

RUN mkdir -p /app/FE/src
WORKDIR /app/FE/src

COPY package.json /app/FE

RUN npm install

COPY . /app/FE

CMD ["npm", "start"]
