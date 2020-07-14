// CODE BY ABHISHEK NAIR //

#define LEDPin 9

#define LDRPin A0

void setup() {


pinMode(LEDPin, OUTPUT);

pinMode(LDRPin, INPUT);

}

void loop() {

int LDRStatus = analogRead(LDRPin);

if (LDRStatus <= 200) {

digitalWrite(LEDPin, HIGH);

Serial.println(LDRStatus);

} 
else {

digitalWrite(LEDPin, LOW);

Serial.println(LDRStatus);

}
}

