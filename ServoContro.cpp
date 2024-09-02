#include "ServoControl.h"

void garra(Servo &servo2){
    int pos2 = 175;
    unsigned long previousMillis = 0;
    const long interval = 150;

    while(pos2 > 150){
        unsigned long currentMillis = millis();
        if (currentMillis - previousMillis >= interval) {
            previousMillis = currentMillis;
            pos2--;
            servo2.write(pos2);
        }
    }

    while(pos2 < 175){
        unsigned long currentMillis = millis();
        if (currentMillis - previousMillis >= interval) {
            previousMillis = currentMillis;
            pos2++;
            servo2.write(pos2);
        }
    }
}
