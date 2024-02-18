//semáforo para carros 

void setup()
{
	pinMode(13,OUTPUT); //verde
	pinMode(12,OUTPUT); //amarelo
	pinMode(8,OUTPUT); //vermelho
}

void loop()
{
	digitalWrite(13, HIGH);
	delay(5000); 
	digitalWrite(13, LOW);
	digitalWrite(12, HIGH);
	delay(2000); 
	digitalWrite(12, LOW);
	digitalWrite(8, HIGH);
	delay(5000);
	digitalWrite(8, LOW);
}