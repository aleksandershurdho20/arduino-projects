
const int flameSensor = A0;
const int buzzer = 8;
const int led = 12;
int flameVal;
void setup() {
  Serial.begin(9600);
  pinMode(buzzer,OUTPUT); // define the buzzer as output
  pinMode(flameSensor,INPUT);// define the flame sensor as input
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);// define the flame led as output

}

void loop() {
  int flameVal = analogRead(flameSensor);

  if(flameVal < 1000 ) {
    // fire the alarm and turn led on
    delay(200);
    tone(buzzer,600,800);
    delay(200);
    digitalWrite(led,HIGH);

  }
  else{
    // stop alarm
    digitalWrite(buzzer,LOW);
    noTone(buzzer);
    digitalWrite(led,LOW);

  }
  Serial.println(flameVal);
}
