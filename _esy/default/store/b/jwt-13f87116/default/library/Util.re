let foo = () => print_endline("Hello");

let generate_random_string = length => {
  let random_character = () =>
    switch (Random.int(26 + 26 + 10)) {
    | n when n < 26 => int_of_char('a') + n
    | n when n < 26 + 26 => int_of_char('A') + n - 26
    | n => int_of_char('0') + n - 26 - 26
    };
  let random_character = _ =>
    String.make(1, char_of_int(random_character()));
  String.concat("", Array.to_list(Array.init(length, random_character)));
};

let check_payload = () => {
  let basic_json_payload =
    `Assoc([
      ("sub", `String("BeSport Connect")),
      ("iss", `String("https://chat.besport.com")),
    ]);

  let expected_string_payload = Yojson.Basic.to_string(basic_json_payload);
  let payload_build_with_fn =
    Jwt.(
      empty_payload
      |> add_claim(iss, "https://chat.besport.com")
      |> add_claim(sub, "BeSport Connect")
    );

  let payload_with_json = Jwt.payload_of_json(basic_json_payload);
  assert(
    Jwt.string_of_payload(payload_build_with_fn) == expected_string_payload,
  );
  assert(
    Jwt.string_of_payload(payload_with_json) == expected_string_payload,
  );
};
