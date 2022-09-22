// Include the required Wire library for I2C<br>
 # include<Wire.h>
//int x = 1;
int val;
const int pulsador = 7;
void setup() {
  // Start the I2C Bus as Master
  Wire.begin(); 
  
  pinMode(pulsador, INPUT);
  
}
void loop() {
  
  val= digitalRead(pulsador);
  if (val==HIGH){ 
  Wire.beginTransmission(9); // transmite a slave #9
  Wire.write(val);              // envia la variable val
  Wire.endTransmission();    // para l atransmisión
  //x++; // Increment x
  //if (x > 5) x = 0; // `reset x once it gets 6
  delay(500);
   
  }
  else{
    if( val == LOW){
       Wire.beginTransmission(9); // transmit to device #9
       Wire.write(val);              // sends x 
       Wire.endTransmission();    // stop transmitting
  //x++; // Increment x
  //if (x > 5) x = 0; // `reset x once it gets 6
       delay(500);
    }
  }
      
  }
