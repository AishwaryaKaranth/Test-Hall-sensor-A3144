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
    digitalWrite(led, LOW);
  }
  else{
    digitalWrite(led, HIGH);
  }
}
