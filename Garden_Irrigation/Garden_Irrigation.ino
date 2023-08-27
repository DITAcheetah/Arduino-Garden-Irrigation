#include <DS3231.h>

// water timer
int Relay = 4;

DS3231  rtc(SDA, SCL);
Time t;

const int OnHour = 18;
const int OnMin = 51;
const int OffHour = 18;
const int OffMin = 53;

void setup() {
  //water timer
  Serial.begin(115200);
  rtc.begin();
  pinMode(Relay, OUTPUT);
  digitalWrite(Relay, LOW);
}

void loop() {
  //water timer
  t = rtc.getTime();
  Serial.print(t.hour);
  Serial.print(" hour(s), ");
  Serial.print(t.min);
  Serial.print(" minute(s)");
  Serial.println(" ");
  delay (1000);
  
  if(t.hour == OnHour && t.min == OnMin){
    digitalWrite(Relay,HIGH);
    Serial.println("LIGHT ON");
    }
    
    else if(t.hour == OffHour && t.min == OffMin){
      digitalWrite(Relay,LOW);
      Serial.println("LIGHT OFF");
    }
}
