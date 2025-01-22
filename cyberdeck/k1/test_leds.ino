void test_de_las_leds(int d) {
  digitalWrite(LED_ALT, LOW);
  digitalWrite(LED_FN, HIGH);
  delay(d);
  digitalWrite(LED_FN, LOW);
  digitalWrite(LED_SHIFT, HIGH);
  delay(d);
  digitalWrite(LED_SHIFT, LOW);
  digitalWrite(LED_CTRL, HIGH);
  delay(d);
  digitalWrite(LED_CTRL, LOW);
  digitalWrite(LED_ALT, HIGH);
  delay(d);
}
