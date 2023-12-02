void c4(){
  for(j=0; j<=260; j++){
    digitalWrite(spk, HIGH);
    delayMicroseconds(1923);
    digitalWrite(spk, LOW);
    delayMicroseconds(1923);
    j++;
  }
}
void c5(){
  for(j=0; j<=520; j++){
    digitalWrite(spk, HIGH);
    delayMicroseconds(961);
    digitalWrite(spk, LOW);
    delayMicroseconds(961);
    j++;
  }
}