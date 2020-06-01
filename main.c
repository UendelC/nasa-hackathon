int buttonAlcohol = 4;
int buttonHypochlorite = 3;
int temperatureSensor = 6;

void setup()
{
    Serial.begin(9600);
    pinMode(buttonAlcohol, INPUT);
    pinMode(buttonHypochlorite, INPUT);
    pinMode(temperatureSensor, OUTPUT);
}

void loop()
{

    int Hypochlorite = degitalRead(buttonHypochlorite);
    int Alcohol = digitalRead(buttonAlcohol);
    int temperature = digitalRead(temperatureSensor);

    if (Hypochlorite == TRUE)
    {
        releasehypochlorite();
    }

    if (Alcohol == TRUE)
    {
        realeaseAlcohol();
    }

    Serial.print(temperature);
}