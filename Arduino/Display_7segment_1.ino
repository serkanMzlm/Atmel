// 7 segment gösterge
const int pin[8]={2,3,4,5,6,7,8,9};
int sure = 1000;
void setup() {
for(int i=0 ; i<9 ; i++){
  pinMode(pin[i],OUTPUT);
}
}
void loop() {
for(int a= 0; a <10; a++ ){
  Rakam(a);
  digitalWrite(pin[7],LOW);
  
  

}

}
void Rakam(int rakam ){
  

  switch(rakam){
    case 0:
        digitalWrite(pin[0],HIGH);
        digitalWrite(pin[1],HIGH);
        digitalWrite(pin[2],HIGH);
        digitalWrite(pin[3],HIGH);
        digitalWrite(pin[4],HIGH);
        digitalWrite(pin[5],HIGH);
        digitalWrite(pin[6],LOW);
        digitalWrite(pin[7],HIGH);
        delay(sure);
        break;
    case 1:
        digitalWrite(pin[0],LOW);
        digitalWrite(pin[1],HIGH);
        digitalWrite(pin[2],HIGH);
        digitalWrite(pin[3],LOW);
        digitalWrite(pin[4],LOW);
        digitalWrite(pin[5],LOW);
        digitalWrite(pin[6],LOW);
        digitalWrite(pin[7],HIGH);
        delay(sure);
        break;
    case 2:
        digitalWrite(pin[0],HIGH);
        digitalWrite(pin[1],HIGH);
        digitalWrite(pin[2],LOW);
        digitalWrite(pin[3],HIGH);
        digitalWrite(pin[4],HIGH);
        digitalWrite(pin[5],LOW);
        digitalWrite(pin[6],HIGH);
        digitalWrite(pin[7],HIGH);
        delay(sure);
        break;
    case 3:
        digitalWrite(pin[0],HIGH);
        digitalWrite(pin[1],HIGH);
        digitalWrite(pin[2],HIGH);
        digitalWrite(pin[3],HIGH);
        digitalWrite(pin[4],LOW);
        digitalWrite(pin[5],LOW);
        digitalWrite(pin[6],HIGH);
        digitalWrite(pin[7],HIGH);
        delay(sure);
        break;
    case 4:
        digitalWrite(pin[0],LOW);
        digitalWrite(pin[1],HIGH);
        digitalWrite(pin[2],HIGH);
        digitalWrite(pin[3],LOW);
        digitalWrite(pin[4],LOW);
        digitalWrite(pin[5],HIGH);
        digitalWrite(pin[6],HIGH);
        digitalWrite(pin[7],HIGH);
        delay(sure);
        break;
    case 5:        
        digitalWrite(pin[0],HIGH);
        digitalWrite(pin[1],LOW);
        digitalWrite(pin[2],HIGH);
        digitalWrite(pin[3],HIGH);
        digitalWrite(pin[4],LOW);
        digitalWrite(pin[5],HIGH);
        digitalWrite(pin[6],HIGH);
        digitalWrite(pin[7],HIGH);
        delay(sure);
        break;
    case 6:        
        digitalWrite(pin[0],HIGH);
        digitalWrite(pin[1],LOW);
        digitalWrite(pin[2],HIGH);
        digitalWrite(pin[3],HIGH);
        digitalWrite(pin[4],HIGH);
        digitalWrite(pin[5],HIGH);
        digitalWrite(pin[6],HIGH);
        digitalWrite(pin[7],HIGH);
        delay(sure);
        break;
    case 7:        
        digitalWrite(pin[0],HIGH);
        digitalWrite(pin[1],HIGH);
        digitalWrite(pin[2],HIGH);
        digitalWrite(pin[3],LOW);
        digitalWrite(pin[4],LOW);
        digitalWrite(pin[5],LOW);
        digitalWrite(pin[6],LOW);
        digitalWrite(pin[7],HIGH);
        delay(sure);
        break;
    case 8:       
        digitalWrite(pin[0],HIGH);
        digitalWrite(pin[1],HIGH);
        digitalWrite(pin[2],HIGH);
        digitalWrite(pin[3],HIGH);
        digitalWrite(pin[4],HIGH);
        digitalWrite(pin[5],HIGH);
        digitalWrite(pin[6],HIGH);
        digitalWrite(pin[7],HIGH);
        delay(sure);
        break;
    case 9:
        digitalWrite(pin[0],HIGH);
        digitalWrite(pin[1],HIGH);
        digitalWrite(pin[2],HIGH);
        digitalWrite(pin[3],HIGH);
        digitalWrite(pin[4],LOW);
        digitalWrite(pin[5],HIGH);
        digitalWrite(pin[6],HIGH);
        digitalWrite(pin[7],HIGH);
        delay(sure);
        break;
  }
}
