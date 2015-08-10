/**************************************
	BLINKING LED (BASIC DIGITAL WRITE)
	Autor: 	Hector I. Melendez Rivera
	FROM: 	(00784), PUERTO RICO
	DATE: 	APRIL 1, 2015
	MODELS 	TESTED: MEGA & UNO(REV3)
**************************************/

int led = 9;	//LED is in port 9

void setup(){
	pinMode(led, OUTPUT);	//LED as an Output
}

void loop(){
	digitalWrite(led, HIGH);	//set LED ON (High)
	delay(1000);				//wait 1 sec. (1000ms = 1sec)
	digitalWrite(led, LOW);		//set LED OFF (Low)
	delay(1000);
}
