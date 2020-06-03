FROM node:12-alpine3.10

RUN mkdir -p /app/BE/src
WORKDIR /app/BE/src

COPY package.json /app/BE

RUN npm install

COPY . /app/BE

CMD ["npm", "build"]
