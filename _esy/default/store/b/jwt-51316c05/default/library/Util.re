let foo = () => print_endline("Hello");

Jwt.header_of_algorithm_and_typ(
  Jwt.HS256("SecretKeyNotReallySecret"),
  "JWT",
);
