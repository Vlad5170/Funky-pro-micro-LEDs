void funky() {
  for(i=0; i<=3; i++){
    digitalWrite(leds[i], HIGH);
    delay(200);
  }
  delay(1500);
  for(i=3; i>=0; i--){
    digitalWrite(leds[i], LOW);
    delay(200);
  }
}
void testing() {
  for(i=0; i<=3; i++){
    digitalWrite(leds[i], HIGH);
    delay(100);
    digitalWrite(leds[i], LOW);
    delay(750);
  }
}
void drag(){
  for(i=0; i<=3; i++){
    digitalWrite(leds[i], HIGH);
    if(leds[i] == 10){
      c5();
      c5();
    }
    else{
      c4();
    }
    delay(500);
  }
  delay(3000);
  for(i=3; i>=0; i--){
    digitalWrite(leds[i], LOW);
  }
}