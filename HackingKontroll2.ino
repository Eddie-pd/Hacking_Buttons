const int LEDpin = 2;
const int LED2pin = 4;
unsigned long t = 0;


void setup() {
  pinMode(LEDpin, OUTPUT);
  pinMode(LED2pin, OUTPUT);
  Serial.begin(57600);
  Serial.println("Serial started");

}

void loop() {
  if (millis() > t + 3000){
    digitalWrite(LEDpin, LOW);
    digitalWrite(LED2pin, LOW);
    t = millis();
      }
  if (Serial.available() > 0) {  //I believ this checks whether or not you have written anything in the serial command window.
    char Writing = Serial.read();
    Serial.print("YESMATE");
    if(Writing == 'g'){
      Serial.print("WORKED");
      digitalWrite(LEDpin, HIGH);
    }
    if(Writing == 'h'){
      Serial.print("WORKED2");
      digitalWrite(LED2pin, HIGH);
    }
  }

}
