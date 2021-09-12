//Kapı zili projesi
int buzz=2;

int butt=3;
int buttd;


void setup() {
  
 pinMode(buzz,OUTPUT);

 pinMode(butt,INPUT);
 Serial.begin(9600);
 
}

void loop() {

 buttd=digitalRead(butt);

 if(buttd==HIGH){
  
  Serial.println("BUTON AKTİFF");
 delay(100);
  digitalWrite(buzz,HIGH);
  delay(1000);
  digitalWrite(buzz,LOW);
  delay(1000);
  
 
  }else{
    
    Serial.println("BUTONA BASILMADI");
    delay(1000);
    }
  
}
//12.09.2021 F C Y B E R ZAMAN C O K CABUK G E C İ Y O R
