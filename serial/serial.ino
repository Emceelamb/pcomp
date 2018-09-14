char val;
int ledPin = 13;
boolean ledState = LOW;
void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
  establishContact();

}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()){
    val=Serial.read();
  
  if (val == '1'){
    ledState = !ledState;
    digitalWrite(ledPin, HIGH);
  }
    delay(100);
    
  } else {
    digitalWrite(ledPin, LOW);
    Serial.println("Hello friend");
    delay(50);

  }
  

}

void establishContact(){
  while(Serial.available()<=0){
    Serial.println("A");
    delay(300);
  }
}

