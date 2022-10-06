
int pinkie_pin = A0;
int ring_pin = A1;
int middle_pin = A2;
int index_pin = A3;
int thumb_pin = A4;

void setup(){
  Serial.begin(9600);
}

void loop(){
  //use serial monitor to calcultate flex sensor bounds - reacts in live time to glove
  int val0 = analogRead(pinkie_pin);
  Serial.print("Pinkie: ")
  Serial.println(val0)

  int val1 = analogRead(ring_pin);
  Serial.print("Ring: ")
  Serial.println(val1)
  
  int val2 = analogRead(middle_pin);
  Serial.print("Middle: ")
  Serial.println(val2)
  
  int val3 = analogRead(index_pin);
  Serial.print("Index: ")
  Serial.println(val3)
  
  int val4 = analogRead(thumb_pin);
  Serial.print("Thumb: ")
  Serial.println(val0)
    Serial.println("Thumb bent");
  }
  delay(500); //delay for efficiency 
}
