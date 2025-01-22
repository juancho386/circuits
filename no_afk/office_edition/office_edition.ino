#include <Keyboard.h>

const int buttonPin = 1;
int buttonState = 0;
int btnOnOff = 0;

void on_off() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(100);
  digitalWrite(LED_BUILTIN, LOW);
  delay(100);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(100);
  digitalWrite(LED_BUILTIN, LOW);
  if (btnOnOff == 0) {
    btnOnOff = 1;
  } else {
    btnOnOff = 0;
  }
  delay(500);
}

void setup() {
  digitalWrite(LED_BUILTIN, HIGH);
  Keyboard.begin();
  pinMode(buttonPin, INPUT_PULLDOWN);
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, LOW);
}

void loop() {
  buttonState = digitalRead(buttonPin);
  if (buttonState == HIGH)
    on_off();
  if (btnOnOff == 1) {
    Keyboard.press(KEY_LEFT_CTRL);
    delay(50);
    Keyboard.releaseAll();
    digitalWrite(LED_BUILTIN, HIGH);
    delay(1500);
    digitalWrite(LED_BUILTIN, LOW);
    delay(1500);
    digitalWrite(LED_BUILTIN, HIGH);
    delay(1500);
    digitalWrite(LED_BUILTIN, LOW);
    delay(500);
  }
}
