int testovaciPiny[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 15, 18, 19, 20, 22};

void setup() { 
   Serial.begin(115200); 
   Serial.println("starting test");

   for (int i= 0; i < sizeof(testovaciPiny) / sizeof(int); i++) { 
     pinMode(testovaciPiny[i], OUTPUT);
     digitalWrite(testovaciPiny[i], HIGH);
     Serial.print("ACTIVATING PIN: ");
     Serial.println(testovaciPiny[i]);
   }
   Serial.println("All pins are under electricity, you can start testing");
}

void loop() {
}
