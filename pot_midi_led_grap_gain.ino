/////////////////////////////////////////////////
////////////////////////////////////////////////
int val = 0; //Our initial pot values. We need one for the first value and a second to test if there has been a change made. This needs to be done for all 3 pots.
int lastVal = 0;
int val2 = 0;
int lastVal2 = 0;
int val3 = 0;
int lastVal3 = 0;
int val4 = 0;
int lastVal4 = 0;
int val5 = 0;
int lastVal5 = 0;
int val6 = 0;
int lastVal6 = 0;
int val7 = 0;
int lastVal7 = 0;
int val8 = 0;
int lastVal8 = 0;
int val9 = 0;
int lastVal9 = 0;
int val10 = 0;
int lastVal10 = 0;
int val11 = 0;
int lastVal11 = 0;
int val12 = 0;
int lastVal12 = 0;
int val13 = 0;
int lastVal13 = 0;
int val14 = 0;
int lastVal14 = 0;
int val15 = 0;
int lastVal15 = 0;
int val16 = 0;
int lastVal16 = 0;
const int NbrLEDs1 = 6;
const int NbrLEDs2 = 6;
const int ledPins1[] = { 2, 3, 4, 5, 6, 7};
const int ledPins2[] = { 19, 18, 17, 16, 15, 14};
const int analogInPin1 = 2; // Analog input pin connected to the variable
const int analogInPin2 = 14; // Analog input pin connected to the variable



const int wait = 30;
// Swap values of the following two constants if cathodes are connected to Gnd
const boolean LED_ON = LOW;
const boolean LED_OFF = HIGH;
int sensorValue1 = 0; // value read from the sensor
int sensorValue2 = 0; // value read from the sensor
int ledLevel1 = 0; // sensor value converted into LED 'bars'
int ledLevel2 = 0; // sensor value converted into LED 'bars'

void setup(){
for (int led = 0; led < NbrLEDs1; led++)
{
pinMode(ledPins1[led], OUTPUT); // make all the LED pins outputs
}
/////////////////////////////////////////
for (int led = 0; led < NbrLEDs2; led++)
{
pinMode(ledPins2[led], OUTPUT); // make all the LED pins outputs
}

   Serial.begin(9600); 
   // Set the speed of the midi port to the same as we will be using in the Hairless Midi software 
}

void loop()
{
   val = analogRead(0)/8;   // Divide by 8 to get range of 0-127 for midi
   if (val != lastVal) // If the value does not = the last value the following command is made. This is because the pot has been turned. Otherwise the pot remains the same and no midi message is output.
   {
   MIDImessage(176,1,val);}         // 176 = CC command (channel 1 control change), 1 = Which Control, val = value read from Potentionmeter 1 NOTE THIS SAYS VAL not VA1 (lowercase of course)
   lastVal = val;

   val2 = analogRead(1)/8;   // Divide by 8 to get range of 0-127 for midi
   if (val2 != lastVal2) 
   {
   MIDImessage(176,2,val2);}         // 176 = CC command, 2 = Which Control, val = value read from Potentionmeter 2
   lastVal2 = val2;
   
   val3 = analogRead(2)/8;   // Divide by 8 to get range of 0-127 for midi
   if (val3 != lastVal3) 
   {
   MIDImessage(176,3,val3);}         // 176 = CC command, 3 = Which Control, val = value read from Potentionmeter 3
   lastVal3 = val3;
   
   val4 = analogRead(3)/8;   // Divide by 8 to get range of 0-127 for midi
   if (val4 != lastVal4) 
   {
   MIDImessage(176,4,val4);}         // 176 = CC command, 4 = Which Control, val = value read from Potentionmeter 4
   lastVal4 = val4;
   
   val5 = analogRead(4)/8;   // Divide by 8 to get range of 0-127 for midi
   if (val3 != lastVal3) 
   {
   MIDImessage(176,5,val5);}         // 176 = CC command, 5 = Which Control, val = value read from Potentionmeter 5
   lastVal5 = val5;
   
   val6 = analogRead(5)/8;   // Divide by 8 to get range of 0-127 for midi
   if (val6 != lastVal6) 
   {
   MIDImessage(176,6,val6);}         // 176 = CC command, 6 = Which Control, val = value read from Potentionmeter 6
   lastVal6 = val6;
   
   val7 = analogRead(6)/8;   // Divide by 8 to get range of 0-127 for midi
   if (val7 != lastVal7) 
   {
   MIDImessage(176,7,val7);}         // 176 = CC command, 7 = Which Control, val = value read from Potentionmeter 7
   lastVal7 = val7;
   
   val8 = analogRead(7)/8;   // Divide by 8 to get range of 0-127 for midi
   if (val8 != lastVal8) 
   {
   MIDImessage(176,8,val8);}         // 176 = CC command, 8 = Which Control, val = value read from Potentionmeter 8
   lastVal8 = val8;
   
   val9 = analogRead(8)/8;   // Divide by 8 to get range of 0-127 for midi
   if (val9 != lastVal9) 
   {
   MIDImessage(176,9,val9);}         // 176 = CC command, 9 = Which Control, val = value read from Potentionmeter 9
   lastVal9 = val9;
   
   val10 = analogRead(9)/8;   // Divide by 8 to get range of 0-127 for midi
   if (val10 != lastVal10) 
   {
   MIDImessage(176,9,val10);}         // 176 = CC command, 10 = Which Control, val = value read from Potentionmeter 10
   lastVal10 = val10;
   
   val11 = analogRead(10)/8;   // Divide by 8 to get range of 0-127 for midi
   if (val11 != lastVal11) 
   {
   MIDImessage(176,11,val11);}         // 176 = CC command, 11 = Which Control, val = value read from Potentionmeter 11
   lastVal11 = val11;
   
   val12 = analogRead(11)/8;   // Divide by 8 to get range of 0-127 for midi
   if (val12 != lastVal12) 
   {
   MIDImessage(176,12,val12);}         // 176 = CC command, 12 = Which Control, val = value read from Potentionmeter 12
   lastVal12 = val12;
   
   val13 = analogRead(12)/8;   // Divide by 8 to get range of 0-127 for midi
   if (val13 != lastVal13) 
   {
   MIDImessage(176,13,val13);}         // 176 = CC command, 13 = Which Control, val = value read from Potentionmeter 13
   lastVal13 = val13;
   
   val14 = analogRead(13)/8;   // Divide by 8 to get range of 0-127 for midi
   if (val14 != lastVal14) 
   {
   MIDImessage(176,14,val14);}         // 176 = CC command, 14 = Which Control, val = value read from Potentionmeter 14
   lastVal14 = val14;
   
   val15 = analogRead(14)/8;   // Divide by 8 to get range of 0-127 for midi
   if (val15 != lastVal15) 
   {
   MIDImessage(176,15,val15);}         // 176 = CC command, 15 = Which Control, val = value read from Potentionmeter 15
   lastVal15 = val15;
   
   val16 = analogRead(15)/8;   // Divide by 8 to get range of 0-127 for midi
   if (val15 != lastVal16) 
   {
   MIDImessage(176,16,val16);}         // 176 = CC command, 16 = Which Control, val = value read from Potentionmeter 16
   lastVal16 = val16;
   
    
delay(10); //here we add a short delay to help prevent slight fluctuations, knocks on the pots etc. Adding this helped to prevent my pots from jumpin up or down a value when slightly touched or knocked.


 //////////////////////////////////////////
sensorValue1 = analogRead(analogInPin1); // read the analog in value
ledLevel1 = map(sensorValue1, 0, 1023, 0, NbrLEDs1); // map to the number of LEDs
for (int led = 0; led < NbrLEDs1; led++)
{
if (led > ledLevel1 ) {
digitalWrite(ledPins1[led], LED_ON); // turn on pins less than the level
}
else {
digitalWrite(ledPins1[led], LED_OFF); // turn off pins higher than the

}

///////////////////////////////////////
sensorValue2 = analogRead(analogInPin2); // read the analog in value
ledLevel2 = map(sensorValue2, 0, 1023, 0, NbrLEDs2); // map to the number of LEDs
for (int led = 0; led < NbrLEDs2; led++)
{
if (led > ledLevel2 ) {
digitalWrite(ledPins2[led], LED_ON); // turn on pins less than the level
}
else {
digitalWrite(ledPins2[led], LED_OFF); // turn off pins higher than the
level1:;

}
}
}
}

void MIDImessage(byte command, byte data1, byte data2) //pass values out through standard Midi Command
{
   Serial.write(command);
   Serial.write(data1);
   Serial.write(data2);
}
