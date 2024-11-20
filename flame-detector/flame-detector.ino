
const int flameSensor = A0;
const int buzzer = 8;
int flameVal;
void setup() {
  Serial.begin(9600);
  pinMode(buzzer,OUTPUT); // define the buzzer as output
  pinMode(flameSensor,INPUT);// define the flame sensor as input
  // put your setup code here, to run once:
}

void loop() {
  int flameVal = analogRead(flameSensor);

  if(flameVal < 1000 ) {
    // fire the alarm 
    delay(200);
    tone(buzzer,600,800);
    delay(200);

  }
  else{
    // stop alarm
    digitalWrite(buzzer,LOW);
    noTone(buzzer);
  }
  Serial.println(flameVal);
}
