#include <Keyboard.h>

const int nkey[5][12] = { // normal keys
  {KEY_ESC, '1','2','3','4','5','6','7','8','9',             '0',            KEY_BACKSPACE},
  {KEY_TAB, 'q','w','e','r','t','y','u','i','o',             'p',            0xE0}, // 0xE0 = KEY_KP_ENTER
  {0x0,     'a','s','d','f','g','h','j','k','l',             ';',            '\''},
  {0x0,     'z','x','c','v','b','n','m',',','.',             KEY_UP_ARROW,   '\\'},
  {0x0,      0,  0,  0,  0, ' ', 0,  0,  0,  KEY_LEFT_ARROW, KEY_DOWN_ARROW, KEY_RIGHT_ARROW}
};

/*
const int skey[][] = { // con Shift
  {},
  {},
  {},
  {},
  {}
};
const int ckey[][] = { // con CTRL
  {},
  {},
  {},
  {},
  {}
};
const int nkey[][] = { // con ALT
  {},
  {},
  {},
  {},
  {}
};
const int skey[][] = { // con FN
  {},
  {},
  {},
  {},
  {}
};
const int fkey[][] = { // con Fn
  {},
  {},
  {},
  {},
  {}
};
*/
