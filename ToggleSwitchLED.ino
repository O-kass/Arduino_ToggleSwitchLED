int redLED = 8;
int buttonPin = 12;
int dt = 20;
int buttonRead;
int count = 0;
bool checker= false;


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(redLED, OUTPUT);
pinMode(buttonPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
buttonRead = digitalRead(buttonPin);
Serial.println(buttonRead);



if(buttonRead == 0){
    checker = true;
}

if(checker == true){
  count = count + 1;
}
  
while(checker == true){
    if(count % 2 != 0){
      digitalWrite(redLED, HIGH);
      }

    if(count % 2 == 0){
      digitalWrite(redLED, LOW);
      }
    
    buttonRead = digitalRead(buttonPin);
    
    if(buttonRead == 1){
      checker = false;
      }
  }


delay(dt); // to allow for system to prevent quick button presses or checker changing value to quickly




}
