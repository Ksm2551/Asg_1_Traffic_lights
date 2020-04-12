int time_slot=0;

void setup()
{
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  if(Serial.available()>0){
    time_slot=Serial.read();
  }
   else if((time_slot==1)||(time_slot==4)){
      Serial.println(F("LIGHT TRAFFIC"));
      digitalWrite(1, LOW);
      digitalWrite(2, HIGH);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, HIGH);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      digitalWrite(8, HIGH);
      digitalWrite(9, LOW);
      digitalWrite(10, LOW);
      digitalWrite(11, HIGH);
      digitalWrite(12, LOW);
      delay(1000); // Wait for 1000 millisecond(s)
      digitalWrite(1, LOW);
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      digitalWrite(8, LOW);
      digitalWrite(9, LOW);
      digitalWrite(10, LOW);
      digitalWrite(11, LOW);
      digitalWrite(12, LOW);
      delay(1000);
    }
   else if(time_slot==2){
      Serial.println(F("MEDIUM TRAFFIC"));
      digitalWrite(1, HIGH);
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, HIGH);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      digitalWrite(8, LOW);
      digitalWrite(9, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(11, LOW);
      digitalWrite(12, LOW);
      delay(3000); // Wait for 1000 millisecond(s)
      digitalWrite(1, LOW);
      digitalWrite(2, HIGH);
      digitalWrite(3, LOW);
      digitalWrite(4, HIGH);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      digitalWrite(8, LOW);
      digitalWrite(9, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(11, LOW);
      digitalWrite(12, LOW);
      delay(1000); // Wait for 1000 millisecond(s)
      digitalWrite(1, LOW);
      digitalWrite(2, LOW);
      digitalWrite(3, HIGH);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, HIGH);
      digitalWrite(7, LOW);
      digitalWrite(8, LOW);
      digitalWrite(9, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(11, LOW);
      digitalWrite(12, LOW);
      delay(3000); // Wait for 1000 millisecond(s)
      digitalWrite(1, LOW);
      digitalWrite(2, LOW);
      digitalWrite(3, HIGH);
      digitalWrite(4, LOW);
      digitalWrite(5, HIGH);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      digitalWrite(8, LOW);
      digitalWrite(9, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(11, LOW);
      digitalWrite(12, LOW);
      delay(1000);
      digitalWrite(1, LOW);
      digitalWrite(2, LOW);
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, HIGH);
      digitalWrite(8, LOW);
      digitalWrite(9, LOW);
      digitalWrite(10, HIGH);
      digitalWrite(11, LOW);
      digitalWrite(12, LOW);
      delay(3000);
      digitalWrite(1, LOW);
      digitalWrite(2, LOW);
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      digitalWrite(8, HIGH);
      digitalWrite(9, LOW);
      digitalWrite(10, HIGH);
      digitalWrite(11, LOW);
      digitalWrite(12, LOW);
      delay(1000);
      digitalWrite(1, LOW);
      digitalWrite(2, LOW);
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      digitalWrite(8, LOW);
      digitalWrite(9, HIGH);
      digitalWrite(10, LOW);
      digitalWrite(11, LOW);
      digitalWrite(12, HIGH);
      delay(3000);
      digitalWrite(1, LOW);
      digitalWrite(2, LOW);
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      digitalWrite(8, LOW);
      digitalWrite(9, HIGH);
      digitalWrite(10, LOW);
      digitalWrite(11, HIGH);
      digitalWrite(12, LOW);
      delay(1000);
      }
   else if(time_slot==3){
      Serial.println(F("HEAVY TRAFFIC"));
      digitalWrite(1, LOW);
      digitalWrite(2, LOW);
      digitalWrite(3, HIGH);//red
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, HIGH);//green
      digitalWrite(7, LOW);
      digitalWrite(8, LOW);
      digitalWrite(9, HIGH);//red
      digitalWrite(10, LOW);
      digitalWrite(11, LOW);
      digitalWrite(12, HIGH);//green
      delay(3000); // Wait for 1000 millisecond(s)
      digitalWrite(1, LOW);//g
      digitalWrite(2, LOW);//y
      digitalWrite(3, HIGH);//r
      digitalWrite(4, LOW);//r
      digitalWrite(5, HIGH);//y
      digitalWrite(6, LOW);//g
      digitalWrite(7, LOW);//g
      digitalWrite(8, LOW);//y
      digitalWrite(9, HIGH);//r
      digitalWrite(10, LOW);//r
      digitalWrite(11, HIGH);//y
      digitalWrite(12, LOW);//g
      delay(1000); // Wait for 1000 millisecond(s)
      digitalWrite(1, HIGH);//g
      digitalWrite(2, LOW);//y
      digitalWrite(3, LOW);//r
      digitalWrite(4, HIGH);//r
      digitalWrite(5, LOW);//y
      digitalWrite(6, LOW);//g
      digitalWrite(7, HIGH);//g
      digitalWrite(8, LOW);//y
      digitalWrite(9, LOW);//r
      digitalWrite(10, HIGH);//r
      digitalWrite(11, LOW);//y
      digitalWrite(12, LOW);//g
      delay(1000); // Wait for 1000 millisecond(s)
      digitalWrite(1, LOW);
      digitalWrite(2, HIGH);
      digitalWrite(3, LOW);
      digitalWrite(4, HIGH);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      digitalWrite(8, HIGH);
      digitalWrite(9, LOW);
      digitalWrite(10, HIGH);
      digitalWrite(11, LOW);
      digitalWrite(12, LOW);
      }
}
