#include <Servo.h>
#include "ServoControl.h"

Servo servo1;
Servo servo2;

int servo1Pin = 3;
int servo2Pin = 4;

void setup() {
    servo1.attach(servo1Pin);
    servo2.attach(servo2Pin);
    Serial.begin(9600);
    servo1.write(65);
    servo2.write(175); // inicia com a pinça fechada
}

void loop() {
    // Movimento suave do braço mecânico
    for (int pos = 65; pos <= 145; pos++){
        servo1.write(pos);
        if(pos == 70){
            garra(servo2);
        }
        delay(50);
    }

    for (int pos = 145; pos >= 65; pos--){
        servo1.write(pos);
        if(pos == 140){
            garra(servo2);
        }
        delay(50);
    }
}
