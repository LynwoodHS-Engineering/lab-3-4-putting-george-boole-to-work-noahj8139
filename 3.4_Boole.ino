int LED = 7;
int LED2 = 8;
int LED3 = 9;
int LED4 = 10;


int x = 1;
int z = 1;

void setup()
{
 Serial.begin(9600);
 pinMode(LED, OUTPUT);
 pinMode(LED2, OUTPUT);
 pinMode(LED3, OUTPUT);
 pinMode(LED4, OUTPUT);
 
    while(z < 4){ 
     
       for(int w = 1; w < 256; w++){
      analogWrite(LED, w);
      delay(2);
    }
    delay(2);
   
      for(int w = 255; w > 0; w--){
      analogWrite(LED, w);
      delay(2);
        }
     
     digitalWrite((x+7), LED2);
      delay(2);
      x++;
      z++;
     
   
    } 
   

}

  void loop()
{
 
}
