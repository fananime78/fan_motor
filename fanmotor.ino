int INA = 9 ;
int INB = 8 ;
int delay1[5] = {1, 2, 3, 4, 5}; //temps où le moteur tourne
int delay2[5] = {2, 4, 6, 8, 10}; //temps où le moteur est à l'arrêt

void setup()
{
pinMode(INA, OUTPUT);
pinMode(INB, OUTPUT);
}

void loop()
{
digitalWrite(INA, LOW);
for(int i=0; i<=5; i++) {
    digitalWrite(INB, HIGH);
    delay(delay1[i]*1000);
    digitalWrite(INB, LOW);
    delay(delay2[i]*1000);
   }
   digitalWrite(INB, LOW);
}
