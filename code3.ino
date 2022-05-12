int led_green =12;
int led_yellow =2;
int vorudi =13;
float temp;

void setup() {

  Serial.begin(9600);
  
  pinMode(led_green, OUTPUT);
  pinMode (led_yellow, OUTPUT);
  pinMode(vorudi,INPUT);

}

void loop() {
 
  int input = digitalRead(vorudi);

  if (input == LOW){
     //LED
    digitalWrite(led_green, HIGH);
    digitalWrite(led_yellow, LOW);
    //LM35
    temp = analogRead(A0);
    temp = temp* 5000/1023/10;
    Serial.println("Temperature");
    Serial.println(temp);
    

    delay(500);
    
    
  }
  else{
    //LDR
    Serial.println("Sensor");
    Serial.println(analogRead(A1));
    delay(100);
    //LED
    digitalWrite(led_green,LOW);
    digitalWrite(led_yellow,HIGH);
    }
    
}
