int cam = 11;

void setup() {                
  pinMode(cam, OUTPUT);         
  digitalWrite(cam, HIGH); 
}

void loop() {
  digitalWrite(cam, LOW);
  delay(50);               
  digitalWrite(cam, HIGH);    
  delay(1000);               
  
}
