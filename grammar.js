const newline = /[\r\n\u2028\u2029]/;
const char = /[^\r\n\u2028\u2029]/;
const ascii_alpha = /[A-Za-z]/;
const ascii_digit = /[0-9]/;

module.exports = grammar({
  name: 'deml',
  extras: $ => [$.comment, ' '],
  rules: {
    source_file: $ => repeat(choice($._node, $.shelf, $.comment, newline)),
    shelf: $ => seq('----', newline),
    _name: $ => token(seq( ascii_alpha, repeat(choice(ascii_alpha, ascii_digit, '_')))),
    node_name: $ => $._name,
    before_name: $ => $._name,
    after_name: $ => $._name,
    _node: $ => seq($.node_name, repeat(choice($.before_nodes, $.after_nodes)), optional(seq($.assignment, $.command)), newline),
    command: $ => token.immediate(repeat1(char)),
    before: $ => '<',
    after: $ => '>',
    assignment: $ => '=',
    before_nodes: $ => seq($.before, $.before_name, repeat(seq($.concatenator, $.before_name))),
    after_nodes: $ => seq($.after, $.after_name, repeat(seq($.concatenator, $.after_name))),
    concatenator: $ => '|',
    comment: _ => token(seq('//', repeat1(char))),
  }
});
