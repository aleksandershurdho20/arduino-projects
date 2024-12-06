float temp; 
int temperaturePin = A0;  
float temperatureC;  

void setup() {
  Serial.begin(9600);  
}

void loop() {
  temp = analogRead(temperaturePin); 
temperatureC = (temp * 5.0) / 1023.0 * 100;  

  Serial.print("TEMPERATURE : ");
  Serial.print(temperatureC);  
  Serial.print("°C");
  Serial.print("Raw Analog Value: ");
  Serial.println(temp);
  delay(1000);  
}
