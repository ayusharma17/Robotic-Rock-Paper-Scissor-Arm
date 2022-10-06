int sensorPin   = A0;    
int numReadings = 64;
int msDelayFor  = 1;
int msDelayLoop = 100;
int minMedian = 1023; 

/******************************************
 *                  SETUP
 ******************************************/
void setup() {
  Serial.begin(115200);
  pinMode(sensorPin, INPUT_PULLUP);
}
/******************************************
 *                  LOOP
 ******************************************/
void loop() {
  float median = 0;
  for (int i=0; i < numReadings; i++) {
    median += analogRead(sensorPin);
    // for stabilization between analog readings
    delay(msDelayFor); 
  }
  median /= float(numReadings);
  if ( median < minMedian) minMedian = median;

  Serial.println(median-minMedian);
 
  int currentDelay = msDelayLoop - (msDelayFor * numReadings);
  if (currentDelay > 0) delay( currentDelay );
} 
