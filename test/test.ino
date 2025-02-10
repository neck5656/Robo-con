const int relayPin = 5;               // Chân điều khiển relay
const int delaytime =1000;

void setup()
{
  pinMode(relayPin, OUTPUT);          // Đặt chân relay làm OUTPUT
  digitalWrite(relayPin, HIGH);       // Ban đầu tắt relay (vì relay active LOW)
}

void loop()
{
  delay(delaytime);  
  digitalWrite(relayPin, LOW);        // Bật relay (active LOW)
  delay(delaytime);
  digitalWrite(relayPin, HIGH);       // Tắt relay (active LOW)
}
