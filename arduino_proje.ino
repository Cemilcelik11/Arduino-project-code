#define led_1 7
#define led_2 6
#define led_3 5
void setup() {
  // put your setup code here, to run once:
  pinMode(led_1,OUTPUT);
  pinMode(led_2,OUTPUT);
  pinMode(led_3,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  int lightness = analogRead(A0);
  if(lightness > 800){
    digitalWrite(led_1,LOW);
    digitalWrite(led_2,LOW);
    digitalWrite(led_3,LOW);
  }
  if(lightness < 800){
    digitalWrite(led_1,HIGH);
    digitalWrite(led_2,HIGH);
    digitalWrite(led_3,HIGH);
  }
  return 0;
  

}
