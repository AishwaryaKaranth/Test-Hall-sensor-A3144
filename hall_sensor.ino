const int hall_sensor = 4;
const int led = 13;
  int hallPin=0;
void setup() {
  pinMode(led, OUTPUT);
  pinMode(hall_sensor, INPUT);

}

void loop() {
  hallPin= digitalRead(hall_sensor);
  if(hallPin == HIGH){
    digitalWrite(led, LOW); //goes low when it senses magnetic field in its vicinity
  }
  else{
    digitalWrite(led, HIGH);//goes high when it does not sense magnetic field.
  }
}
