int sure = 1000;
byte gosterge[10][8] = { { 1,1,1,1,1,1,0,1 },  // = 0
                         { 0,1,1,0,0,0,0,0 },  // = 1
                         { 1,1,0,1,1,0,1,1 },  // = 2
                         { 1,1,1,1,0,0,1,0 },  // = 3
                         { 0,1,1,0,0,1,1,1 },  // = 4
                         { 1,0,1,1,0,1,1,0},  // = 5
                         { 1,1,1,1,1,0,1,1},  // = 6
                         { 1,1,1,0,0,0,0,0},  // = 7
                         { 1,1,1,1,1,1,1,1},  // = 8
                         { 1,1,1,1,0,1,1,0}   // = 9
                         };
                         
void sayiyiYaz(byte sayi);

void setup() { 
  for (int i =2; i<=9; i++){
    pinMode(i,OUTPUT);               
  }
}

void loop() {
   int i= 3 ;
  for (int i = 0; i < 10; i ++) {
  sayiyiYaz(i); 
  
  }
}

void sayiyiYaz(byte sayi) {
  int pin = 2;
  for (int i = 0; i < 8; i++) {
   digitalWrite(pin, gosterge[sayi][i]);
   pin ++;
  }
    delay(sure);
}
