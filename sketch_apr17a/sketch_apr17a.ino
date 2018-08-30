#include <Bridge.h>

void setup() {
    pinMode(13,OUTPUT);
    pinMode(2,OUTPUT);    
    pinMode(3,OUTPUT);
    pinMode(4,OUTPUT);    
    pinMode(5,OUTPUT);    
    pinMode(6,OUTPUT);    
    pinMode(7,OUTPUT);
    pinMode(8,OUTPUT);    
    pinMode(9,OUTPUT);        

    Bridge.begin();   // Pins 0 and 1 should be avoided as they are used by the Bridge library.
}
 
void loop() {
    char pin13[2];
    char valueStr[23];
    int valueInt;
   
    Bridge.get("Reg_done",  pin13, 2);
    digitalWrite(13, atoi(pin13));    

//////////////// For ODF ////////////////////////////	
    Bridge.get("D2",  valueStr, 5);
    if (strcmp(valueStr,"") != 0){
        valueInt = atoi(valueStr);
        if (valueInt >= 1) valueInt=1; else valueInt=0;
        digitalWrite(2, valueInt);        
        Bridge.put("D2", "");
    }

    Bridge.get("D3",  valueStr, 5);
    if (strcmp(valueStr,"") != 0){
        valueInt = atoi(valueStr);
        if (valueInt >= 1) valueInt=1; else valueInt=0;
        digitalWrite(3, valueInt);        
        Bridge.put("D3", "");
    }

    Bridge.get("D4",  valueStr, 5);
    if (strcmp(valueStr,"") != 0){
        valueInt = atoi(valueStr);
        if (valueInt >= 1) valueInt=1; else valueInt=0;
        digitalWrite(4, valueInt);        
        Bridge.put("D4", "");
    }

    Bridge.get("D5~PWM",  valueStr, 5);
    if (strcmp(valueStr,"") != 0){
        valueInt = atoi(valueStr);
        if (valueInt >= 255) valueInt=255;
        else if (valueInt <= 0) valueInt=0;
        analogWrite(5, valueInt);        
        Bridge.put("D5~PWM", "");
    }

    Bridge.get("D6~PWM",  valueStr, 5);
    if (strcmp(valueStr,"") != 0){
        valueInt = atoi(valueStr);
        if (valueInt >= 255) valueInt=255;
        else if (valueInt <= 0) valueInt=0;
        analogWrite(6, valueInt);        
        Bridge.put("D6~PWM", "");
    }

    Bridge.get("D7",  valueStr, 5);
    if (strcmp(valueStr,"") != 0){
        valueInt = atoi(valueStr);
        if (valueInt >= 1) valueInt=1; else valueInt=0;
        digitalWrite(7, valueInt);        
        Bridge.put("D7", "");
    }

    Bridge.get("D8",  valueStr, 5);
    if (strcmp(valueStr,"") != 0){
        valueInt = atoi(valueStr);
        if (valueInt >= 1) valueInt=1; else valueInt=0;
        digitalWrite(8, valueInt);        
        Bridge.put("D8", "");
    }

    Bridge.get("D9~PWM",  valueStr, 5);
    if (strcmp(valueStr,"") != 0){
        valueInt = atoi(valueStr);
        if (valueInt >= 255) valueInt=255;
        else if (valueInt <= 0) valueInt=0;
        analogWrite(9, valueInt);        
        Bridge.put("D9~PWM", "");
    }

//////////////// For IDF ////////////////////////////	
    valueInt = analogRead(0);
    itoa(valueInt, valueStr, 10); 
    Bridge.put("A0", valueStr);

    valueInt = analogRead(1);
    itoa(valueInt, valueStr, 10); 
    Bridge.put("A1", valueStr);

    valueInt = analogRead(2);
    itoa(valueInt, valueStr, 10); 
    Bridge.put("A2", valueStr);

    valueInt = analogRead(3);
    itoa(valueInt, valueStr, 10); 
    Bridge.put("A3", valueStr);

    valueInt = analogRead(4);
    itoa(valueInt, valueStr, 10); 
    Bridge.put("A4", valueStr);

    valueInt = analogRead(5);
    itoa(valueInt, valueStr, 10); 
    Bridge.put("A5", valueStr);
}
