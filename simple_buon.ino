///////// PIN 0 ////////////
int b = LOW;
int bA = LOW;
///////// PIN 01 ////////////
int b1 = LOW;
int b1A = LOW;

///////////////////////////////////////
void setup() {
 Serial.begin(9600);
     pinMode(0, INPUT);
     pinMode(1, INPUT);
     pinMode(9, OUTPUT); //led on pin 9
}
//////////////////////////////////////
void loop(){
///////// PIN 0 ////////////
b1 = digitalRead(0);
 
 if (b1 == HIGH && b1A == LOW) {
 Serial.write(144); // 1001 0000 = Note On Kanal 1
 Serial.write(36); //Note C1
 Serial.write(127);//Note on
 digitalWrite(9, HIGH);
 b1A = b1;
 }
 if (b1 == LOW && b1A == HIGH) {
 Serial.write(144); // 1001 0000 = Note On Kanal 1
 Serial.write(36); //Note C1
 Serial.write(0); //Note off
 digitalWrite(9, LOW);
 b1A = b1;
 }

///////// PIN 01 ////////////
b1 = digitalRead(1);
 
 if (b1 == HIGH && b1A == LOW) {
 Serial.write(144); // 1001 0000 = Note On Kanal 1
 Serial.write(36); //Note C1
 Serial.write(127);//Note on
 b1A = b1;
 }
 if (b1 == LOW && b1A == HIGH) {
 Serial.write(144); // 1001 0000 = Note On Kanal 1
 Serial.write(36); //Note C1
 Serial.write(0); //Note off
 b1A = b1;
 }

}
