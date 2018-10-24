
/*
arduino    led
GND        GND(short leg)
Pin3       Poaitive(long leg)
 */
int red=13;
void setup() 
{
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(red,OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(red,LOW);   // turn the LED on (HIGH is the voltage level)
  delay(500);                       // wait for a second
  digitalWrite(red,HIGH);    // turn the LED off by making the voltage LOW
  delay(500);                       // wait for a second
}
