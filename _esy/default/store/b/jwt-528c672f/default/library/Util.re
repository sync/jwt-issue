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
