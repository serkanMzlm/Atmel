// Flip Flop Devresi
const int led1 = 2;
const int led2 = 3;
int sure = 500 ; // milisaniye 
void setup() {  
pinMode(led1,OUTPUT);
pinMode(led2,OUTPUT);
}
void loop() {
 digitalWrite(led1,1);
 digitalWrite(led2,0);
 delay(sure);
 digitalWrite(led1,0);
 digitalWrite(led2,1);
 delay(sure);

}
