*/
 * Project Name :  Controlling Led via Xbee
 * Recreated and Implemented by :- Kiran Shinde and Rohan Kulkarni. For PVPIT Budhgaon, I/C - R&D Cell
 * Under Guidence of Dr.N.M.Dhawale, I/c- R&D Cell, P.V.P.I.T Budhgaon, Sangli, India in Aug 2020 
 /*
   
   int led = 13;
int received = 0;
int i;

void setup() {
  Serial.begin(9600); 
  pinMode(led, OUTPUT);
 // digitalWrite(led, HIGH);
}
 
void loop() {
  if (Serial.available() > 0) {
received = Serial.read();
//Serial.println(received);
  
    if (received == 'a'){
    digitalWrite(led, HIGH);
    delay(2000);
    digitalWrite(led, LOW);
    }
     else if (received == 'b'){
      for(i=0;i<5;i++){
    digitalWrite(led, HIGH);
    delay(1000);
    digitalWrite(led, LOW);
    delay(1000);
    }
  } 
}
}
