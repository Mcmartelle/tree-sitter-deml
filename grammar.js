const newline = /[\r\n\u2028\u2029]/;
const char = /[^\r\n\u2028\u2029]/;
const ascii_alpha = /[A-Za-z]/;
const ascii_digit = /[0-9]/;

module.exports = grammar({
  name: 'deml',
  extras: $ => [$.comment, ' '],
  rules: {
    dag: $ => seq(repeat1($._node), repeat(seq( $.shelf, repeat1($._node)))),
    shelf: $ => seq('----', newline),
    _name: $ => token(seq( ascii_alpha, repeat(choice(ascii_alpha, ascii_digit, '_')))),
    node_name: $ => $._name,
    before_name: $ => $._name,
    after_name: $ => $._name,
    _node: $ => seq($.node_name, repeat(choice($.before_nodes, $.after_nodes)), optional(seq('=', $.command)), optional(newline)),
    command: $ => repeat1(char),
    before: $ => '<',
    after: $ => '>',
    before_nodes: $ => seq($.before, $.before_name, repeat(seq('|', $.before_name))),
    after_nodes: $ => seq($.after, $.after_name, repeat(seq('|', $.after_name))),
    comment: _ => token(choice(
      seq('//', /[^\r\n\u2028\u2029]*/),
      seq(
        '/*',
        /[^*]*\*+([^/*][^*]*\*+)*/,
        '/',
      ),
    )),
  }
});