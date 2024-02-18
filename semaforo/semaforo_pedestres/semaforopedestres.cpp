//Semaforo carros
int cGreen = 13;
int cYellow = 12;
int cRed = 8;
//semaforo pedestres
int pGreen = 2;
int pRed = 6;
//botao
int btn = 7;
//tempo de travessia
int crossingTime = 5000;

void setup()
{  
	pinMode(cGreen,OUTPUT);
	pinMode(cYellow,OUTPUT);
	pinMode(cRed,OUTPUT);
	pinMode(pGreen,OUTPUT);
	pinMode(pRed,OUTPUT);
	pinMode(btn,INPUT);
	Serial.begin(9600); 
  
	Serial.println("Carros passando");
	digitalWrite(cGreen, HIGH); 
	digitalWrite(pRed, HIGH);
	delay(4000);
	digitalWrite(cGreen, LOW);
	digitalWrite(pRed, LOW);
  
	Serial.println("Sinal amarelo");
	digitalWrite(cYellow, HIGH);
	digitalWrite(pRed, HIGH);
	delay(2000);
	digitalWrite(cYellow, LOW);
	digitalWrite(pRed, LOW);

	Serial.println("Pedestre atravessando"); 
	digitalWrite(pGreen, HIGH);
	digitalWrite(cRed, HIGH);
	delay(4000);  
	digitalWrite(pGreen, LOW);
	digitalWrite(cRed, LOW);
	Serial.println("Farol de pedestres fechado");
	digitalWrite(cRed, HIGH);
	digitalWrite(pRed, HIGH);
	delay(2000);
	digitalWrite(cRed, LOW);
	digitalWrite(pRed, LOW);
}
  
void loop()
{
	btn = 1;
	//manualmente
    
  if(btn == HIGH) 
  {  
		Serial.println("Botao acionado");  
		digitalWrite(cYellow, HIGH);
		digitalWrite(pRed, HIGH);
		delay(2000);
		digitalWrite(cYellow, LOW);
		Serial.println("Pedestre em espera");
		digitalWrite(cRed, HIGH);
		digitalWrite(pRed, HIGH);
		delay(2000);
		digitalWrite(cRed, LOW);
		digitalWrite(pRed, LOW);
		Serial.println("Pedestre atravessando");
		digitalWrite(pGreen, HIGH);
		digitalWrite(cRed, HIGH);
		delay(crossingTime);
		digitalWrite(pGreen, LOW);
		Serial.println("Tempo de travessia esgotando");
		digitalWrite(cYellow, LOW);
    
  	
  for(int i=0;i<10;i++)
  {
		digitalWrite(cRed, HIGH);
		digitalWrite(pGreen, HIGH);
		delay(160);
		digitalWrite(pGreen, LOW);
		delay(160);
		digitalWrite(cRed, LOW);
  }    
 }
} 
