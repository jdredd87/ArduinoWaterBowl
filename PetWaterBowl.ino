// Pet Water Bowl - Steven Chesser

const int buttonPin = 2; // Push button to manually add water PIN
const int relay1Pin = 3; // Relay to control 12v water solenoid valve PIN
const int levelPin = 4;  // Water Level PIN 
const int ledPin =  5;  // LED PIN for when you push button PIN

int buttonState = 0;  // Store button push state
int wCounter = 0;     // Dummy counter
int levelState = 0;   // Store level sensor state

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  pinMode(relay1Pin, OUTPUT);
  pinMode(levelPin, INPUT);
  pinMode(buttonPin, INPUT);  
  digitalWrite(relay1Pin, HIGH); // set relays so they are open
}

void loop() {
  delay(100);

  levelState = digitalRead(levelPin); 
  buttonState = digitalRead(buttonPin);

  Serial.print("Water level state : ");
  Serial.println(int(levelState));
  Serial.print("Manual push button state : ");
  Serial.println(int(buttonState));

  if (levelState == 1) {
    wCounter++;

    if (wCounter == 1) { // just show this messge once when counter value is 1 
     Serial.println("Low water detected. Waiting 5 seconds before adding more"); 
    }
     
    if (wCounter >= 50) { // wait 5 seconds before adding water.  This helps with water that maybe sloshing around from pet.
      Serial.println("Sensor low adding water..");
      digitalWrite(ledPin, HIGH);  // turn LED on:
      digitalWrite(relay1Pin, LOW);
      if (wCounter  >= 100) { // waits another 5 seconds of adding water then forces a stop. 
        Serial.println("5 seconds of adding water is over");
        digitalWrite(ledPin, LOW); // turn LED off:
        digitalWrite(relay1Pin, LOW);        
        wCounter = 0;
      }
    }
  } else
  if (buttonState == HIGH) {
    Serial.println("Manual adding water..");
    digitalWrite(ledPin, HIGH);  // turn LED on:
    digitalWrite(relay1Pin, LOW);
  } 
  else
  {
    wCounter = 0;
    Serial.println("Water level is good");
    digitalWrite(ledPin, LOW); // turn LED off:
    digitalWrite(relay1Pin, HIGH);
  }

 Serial.println("");
 Serial.println("");
 
}
