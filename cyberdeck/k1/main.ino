/*Empiezo por mapear los GPIOs*/
#define LED_FN    5
#define LED_SHIFT 7
#define LED_CTRL  9
#define LED_ALT   11
const byte ROW[] = {27,28,16,26,22};
const byte COL[] = {0,1,2,3,4,6,8,10,12,13,14,15};

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, HIGH); // {
  Keyboard.begin();

  for (byte i=0; i < 5; i++){
    pinMode(ROW[i], OUTPUT);
  }
  for (byte j=0; j < 12; j++){
    pinMode(COL[j] , INPUT_PULLDOWN);
  }
  pinMode(LED_FN,    OUTPUT);
  pinMode(LED_SHIFT, OUTPUT);
  pinMode(LED_CTRL,  OUTPUT);
  pinMode(LED_ALT,   OUTPUT);

  digitalWrite(LED_BUILTIN, LOW); // }
}

void loop() {
  for (byte i=0;i<5;i++) {
    digitalWrite(ROW[i], HIGH);
    for (byte j=0;j<12;j++) {
      int kpress = digitalRead(COL[j]);
      if (kpress == 1) {
        // manejar shift:

        // manejar ctrl
        // manejar alt
        // manejar fn
        Keyboard.press(nkey[i][j]);
        Keyboard.releaseAll();
        kpress=0;
      }
    }
    digitalWrite(ROW[i], LOW);
  }
}

