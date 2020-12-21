//Kara Şimşek
const int led[9]={2,3,4,5,6,7,8,9,10}; //Diziler yardımıyla arduinonun çıkışları belirleniyor.
void setup() {
for(int i= 0; i< 9; i++){ // Tüm pinlerin  çıkış birimi ayarlama kısmı 
  pinMode(led[i],OUTPUT);
}
}
void loop() {
for( int i= 0; i< 9; i++){//İleriye dogru gitme 
digitalWrite(led[i],HIGH);
delay(250);
digitalWrite(led[i-1],LOW);
}
 for(int i= 8; i>= 0; i--){//Geri gelmesi  
  digitalWrite(led[i],HIGH);
  delay(250);
  digitalWrite(led[i+1],LOW);
  }
}
