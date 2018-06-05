///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////MOSELEY MIRANDA GOES/////////
/////////////////////////////////////////////   teste potenciometro   /////////
///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
int val = 0; 
int lastVal = 0;
/////////////////
void setup(){


 Serial.begin(9600); 

}
void loop()
{ 
//////////////////////////////////////////////////////////////////////////    
   val = analogRead(0)/8;            // Divide by 8 to get range of 0-127 for midi
   if (val != lastVal)               // If the value does not = the last value the following command is made. This is because the pot has been turned. Otherwise the pot remains the same and no midi message is output.
   {
   MIDImessage(176,1,val);}           // 176 = CC command (channel 1 control change), 1 = Which Control, val = value read from Potentionmeter 1 NOTE THIS SAYS VAL not VA1 (lowercase of course)
   lastVal = val;
   delay(1);
}

//////////////////////////////////FIM//////////////////////////////////////////
void MIDImessage(byte command, byte data1, byte data2) //pass values out through standard Midi Command
{
   Serial.write(command);
   Serial.write(data1);
   Serial.write(data2);
}
