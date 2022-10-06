
int pinkie_pin = A0;
int ring_pin = A1;
int middle_pin = A2;
int index_pin = A3;
int thumb_pin = A4;
int pinkie_bend = 890;
int ring_bend = 180;
int middle_bend = 700;
int index_bend = 150
int thumb_bend = 870;
void setup(){
  Serial.begin(9600);
}

void loop(){
  //use serial monitor to calcultate flex sensor bounds - reacts in live time to glove
  int val0 = analogRead(pinkie_pin);
  if (val0 > pinkie_bend){
    Serial.println("Pinkie bent");
    }

  int val1 = analogRead(ring_pin);
  if(val1 > ring_bend){
    Serial.println("Ring bent");
  }
  
  int val2 = analogRead(middle_pin);
  if(val2 > middle_bend){
    Serial.println("Middle bent");
  }
  
  int val3 = analogRead(index_pin);
  if(val3 > index_bend){
    Serial.println("Index bent");
  }
  
  int val4 = analogRead(thumb_pin);
  Serial.println(val4);
    if(val4 > thumb_bend){
    Serial.println("Thumb bent");
  }
  delay(500); //delay for efficiency 
}
