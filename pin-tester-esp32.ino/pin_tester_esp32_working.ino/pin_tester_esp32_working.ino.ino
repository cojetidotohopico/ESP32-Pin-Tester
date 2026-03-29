int testovaciPiny[] = {2, 4, 5, 12, 13, 14, 15, 16, 17, 18, 19, 21, 22, 23, 25, 26, 27, 32, 33};

void setup() { 
   Serial.begin(115200); 
   Serial.println("starting test")

   for (int i= 0; i < sizeof(testovaciPiny) / sizeof(int); i++) { 
     pinMode(testovaciPiny[i], OUTPUT);
     digitalWrite(testovaciPiny[i], HIGH)
     Serial.print("ACTIVATING PIN: ");
     Serial.println(testovaciPiny[i]);
   }
   Serial.println("All pins are under electricity, you can start testing");
}

void loop() {
}