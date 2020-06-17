type t;

type connection = {query: string => Js.Promise.t(t)};

type pool = {getConnection: unit => Js.Promise.t(connection)};

type host = string;
type user = string;
type password = string;
type connectionLimit = int;

type poolParams = {
  host,
  user,
  password,
  connectionLimit,
};

[@bs.module "mariadb"] external createPool: poolParams => pool = "createPool";

let pool =
  createPool({
    // host: "127.0.0.1",
    host: "database",
    user: "docker",
    password: "docker",
    connectionLimit: 5,
  });

pool.getConnection()
|> Js.Promise.then_(conn => {conn.query("SELECT 1 as val")})
|> Js.Promise.then_(r => {
     Js.log2("r: ", r);
     Js.Promise.resolve();
   });
