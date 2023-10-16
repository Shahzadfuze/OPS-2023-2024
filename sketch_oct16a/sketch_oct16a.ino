
#define LED 2 // Digital Input for the D2 Pin
#define POT A5 // Analog Input for the A5 Pin


void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
  pinMode(POT, INPUT);

  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  double value = analogRead(POT);
  
  digitalWrite(LED, HIGH);
  delay(value);
  digitalWrite(LED, LOW);
  delay(value);

}
