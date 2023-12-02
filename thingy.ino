/* This code was made for learning purposes. You can see how to read data from the serial monitor, how to make the microcontroller
do something based on the input from said serial monitor and how to use custom funcions

This code was made to flash multiple LEDs in various ways

The code was made based on a pro micro with the atmega32u4 microprocessor. if you're using a different microcontroller, change the pins
that are above 12 from bellow:

a red LED on pin 15
another red LED on pin 14
a yellow LED on pin 16
a green LED on pin 10
a passive buzzer on pin 9

last update on 02.12.2023
*/

int spk = 9;
int status = 0;
int i;
int j;
int leds[4] = {15, 14, 16, 10};

void setup() {
  pinMode(15, OUTPUT);
  pinMode(14, OUTPUT);
  pinMode(16, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(spk, OUTPUT);
  Serial.begin(9600);
}


void loop() {
  while (Serial.available() == 0) {}     //wait for data available
  String command = Serial.readString();  //read until timeout
  command.trim();                        // remove any \r \n whitespace at the end of the String
  if (command == "help"){
    Serial.println(" ");
    Serial.println("Here are the commands:");
    Serial.println("User commands:");
    Serial.println("funky, test the leds, drag race");
    Serial.println("Debugging commands:");
    Serial.println("red1, red2, yellow, green");
    status++;
  }
  if (command == "red1" || command == "Red1") {
    Serial.println("Red1");
    digitalWrite(15, HIGH);
    delay(1000);
    digitalWrite(15, LOW);
    status++;
  } 
  if (command == "red2" || command == "Red2") {
    Serial.println("Red2");
    digitalWrite(14, HIGH);
    delay(1000);
    digitalWrite(14, LOW);
    status++;
  }
  if (command == "yellow" || command == "Yellow") {
    Serial.println("Yellow");
    digitalWrite(16, HIGH);
    delay(1000);
    digitalWrite(16, LOW);
    status++;
  }
  if (command == "green" || command == "Green") {
    Serial.println("Green");
    digitalWrite(10, HIGH);
    delay(1000);
    digitalWrite(10, LOW);
    status++;
  }
  if (command == "funky" || command == "Funky") {
    Serial.println("Funky!");
    funky();
    status++;
  }
  if (command == "test the leds" || command == "Test the leds") {
    Serial.println("testing...");
    delay(1000);
    testing();
    status++;
  }
  if(command == "drag race" || command == "Drag race"){
    Serial.println("Drag race!");
    delay(1000);
    drag();
    status++;
  }
  if(command == "c4" || command == "C4"){
    c4();
    status++;
  }
  if(command == "c5" || command == "C5"){
    c5();
    status++;
  }
  if(status == 0) {
    Serial.print(command);
    Serial.println(" ? Really??");
    delay(1000);
    Serial.println("Bro... that's not a thing");
  }
  status = 0;
}