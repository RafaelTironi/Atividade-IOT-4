// C++ code
//
int buttonPin = 7;
int ledAzul = 10;
int ledAmarelo = 9;

bool estado = false;

void setup() {
  pinMode(buttonPin, INPUT);
  pinMode(ledAzul, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
}

void loop() {

  if (digitalRead(buttonPin) == HIGH) {

    estado = !estado;

    if (estado == true) {
      digitalWrite(ledAzul, HIGH);
      digitalWrite(ledAmarelo, LOW);
    } 
    else {
      digitalWrite(ledAzul, LOW);
      digitalWrite(ledAmarelo, HIGH);
    }

    delay(500);
  }
}
