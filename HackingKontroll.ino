const int LEDpin = 2;
unsigned long t = 0;


void setup() {
  pinMode(LEDpin, OUTPUT);
  Serial.begin(57600);
  Serial.println("Serial started");

}

void loop() {
  if (Serial.available() > 0) {  //I beilev this checks wether or not you have written anything in the serial command window.
    char Writing = Serial.read();
    Serial.print("YESMATE");
    if(Writing == 'g'){
      Serial.print("WORKED");
      digitalWrite(LEDpin, HIGH);
      if (millis() > t + 3000){
        digitalWrite(LEDpin, LOW);
        t = millis();
      }
    }
  }

}
