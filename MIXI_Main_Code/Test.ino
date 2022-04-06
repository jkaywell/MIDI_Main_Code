// Test Program

long testTimer = 0;
long testInterval = 50;
int testColor = 0;

void testAll(){
  // Test LEDs
  if(millis() - testTimer > testInterval){testColor = (testColor + 1) % 255; testTimer = millis();}
  for(int i = 0; i < numLED; i++){strip.setPixelColor(i, Wheel(testColor));} strip.show();
  Serial.print(testColor); Serial.print("\t");

  // Test Buttons & Potentiometers
  for (int i = 0; i < numButtons; i++){Serial.print(buttonStates[i]); Serial.print("\t");}
  for (int i = 0; i < numPots; i++){Serial.print(potStates[i]); Serial.print("\t");}
  Serial.println();

  //Test register button mode
  for(int i = 0; i < button; i++){strip.setPixelColor(i, show (testColor));} strip.show();
  if(drumState[i]{controlChange(0,i,127);} else{controlChange(0,i,0); Serial.println("activate_code");
}
