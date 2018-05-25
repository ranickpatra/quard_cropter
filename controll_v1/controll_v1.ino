


void setup() {
	DDRB |= B00100000;
}

void loop() {

	PORTD |= B00100000;
	delay(1000);
	PORTD &= B11011111;
	delay(1000);
}
