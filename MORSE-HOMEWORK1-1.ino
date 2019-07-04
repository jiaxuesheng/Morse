#include <Morse.h>
Morse morse(13);
int asc = 0;
void setup() {
  Serial.begin(9600);
  }
void loop() {
  if(Serial.available() > 0){
    asc = Serial.read();
    if(asc == 97){morse.dot();morse.dash();}
    if(asc == 98){morse.dash();morse.dot();morse.dot();morse.dot();}
    if(asc == 99){morse.dash();morse.dot();morse.dash();morse.dot();}
    if(asc == 100){morse.dash();morse.dot();morse.dot();}
    if(asc == 101){morse.dot();}
    
    if(asc == 102){morse.dot();morse.dot();morse.dash();morse.dot();}
    if(asc == 103){morse.dash();morse.dash();morse.dot();}
    if(asc == 104){morse.dot();morse.dot();morse.dot();morse.dot();}
    if(asc == 105){morse.dot();morse.dot();}
    if(asc == 106){morse.dot();morse.dash();morse.dash();morse.dash();}
    
    if(asc == 107){morse.dash();morse.dot();morse.dash();}
    if(asc == 108){morse.dot();morse.dash();morse.dot();morse.dot();}
    if(asc == 109){morse.dash();morse.dash();}
    if(asc == 110){morse.dash();morse.dot();}
    if(asc == 111){morse.dash();morse.dash();morse.dash();}
    
    if(asc == 112){morse.dot();morse.dash();morse.dash();morse.dot();}
    if(asc == 113){morse.dash();morse.dash();morse.dot();morse.dash();}
    if(asc == 114){morse.dot();morse.dash();morse.dot();}
    if(asc == 115){morse.dot();morse.dot();morse.dot();}
    if(asc == 116){morse.dash();}
    
    if(asc == 117){morse.dot();morse.dot();morse.dash();}
    if(asc == 118){morse.dot();morse.dot();morse.dot();morse.dash();}
    if(asc == 119){morse.dot();morse.dash();morse.dash();}
    if(asc == 120){morse.dash();morse.dot();morse.dot();morse.dash();}
    if(asc == 121){morse.dash();morse.dot();morse.dash();morse.dash();}
    
    if(asc == 122){morse.dash();morse.dash();morse.dot();morse.dot();}
    morse.c_space();
    if(asc == 32){morse.w_space();}
    }
  } 
