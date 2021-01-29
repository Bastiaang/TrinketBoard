/* TrinketBoard example*/

/* If input is high, then output is high */

#define PIN0 0
#define PIN1 1
#define PIN2 2
#define PIN4 4

void setup() 
{
  pinMode(PIN0, OUTPUT);
  pinMode(PIN1, OUTPUT);
  pinMode(PIN2, INPUT);
  pinMode(PIN3, INPUT);
}

void loop() 
{
	if(debouncedInput(PIN2, 50))
	{
		digitalWrite(PIN0, HIGH);
	}
  
	if(debouncedInput(PIN4, 50))
	{
		digitalWrite(PIN1, HIGH);
	}
  
	else
	{
		digitalWrite(PIN0, LOW);
		digitalWrite(PIN1, LOW);
	}
}

bool debouncedInput(uint8_t pinNumber, uint8_t debounceTimeValue)
{
  digitalRead(pinNumber);
  delay(debounceTimeValue);
  if(digitalRead(pinNumber))
  {
    return true;
  }
  else
  {
    return false;
  }
}
