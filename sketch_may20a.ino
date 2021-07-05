int red = 10;
int white = 9;
int green = 8;

void setup(){
  pinMode(red , OUTPUT);
  pinMode(white , OUTPUT);
  pinMode(green , OUTPUT);
  }

  void loop(){
    changeLights();
    delay(15000);
    }

  void changeLights(){

    digitalWrite(green , LOW);
    digitalWrite(white , HIGH);
    delay(3000);

    digitalWrite(white , LOW);
    digitalWrite(red , HIGH);
    delay(5000);

    digitalWrite(white , HIGH);
    delay(2000);

    digitalWrite(white , LOW);
    digitalWrite(red , LOW);
    digitalWrite(green , HIGH);

    delay(3000);
  }
