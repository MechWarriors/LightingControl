int luz = 13;
int sensorSonido = 4;
int sonido = 0;
int var = 0;
void setup() {
  Serial.begin(9600);
  pinMode(sensorSonido, INPUT);
  pinMode(luz, OUTPUT);
}
void loop() {
  var = digitalRead(sensorSonido);
  if (var == 1) {
    Serial.print("ENCENDIDO");
    digitalWrite(luz, 1);
    sonido += 1;
    delay(100);
  }
  if (var == 2) {
    Serial.print("APAGADO");
    digitalWrite(luz, 0);
    sonido = 0;
    delay(100);
  }
}