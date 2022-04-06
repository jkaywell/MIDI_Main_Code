// Button/Potontiometer Functions

// Initialize Buttons
void initButtons(){
  for (int i = 0; i < numButtons; i++) {
    buttons[i].attach(buttonPins[i], INPUT);
    buttons[i].interval(25);
  }
}

// Check Buttons
void checkButtons(){
  for (int i = 0; i < numButtons; i++)  {
    buttons[i].update();
    if (buttons[i].rose() ) {
      buttonStates[i] = !buttonStates[i];
    }
  }
}

// Check Pots
void checkPots(){
  for (int i = 0; i < numPots; i++){
    potStates[i] = analogRead(potPins[i]);
  }
}

//check pots
void checkPots(){
  for (int i = 0; i < numPots; i++){
    int newPot = analonRead(potPins[i]);
    int curPot = potStates[i];
    if(abs(newPot - curPot) > potTolerance){
    Serial.print ("Potentiometer") Serial.print(1); Serial.print":");Serial.println("newPot");
    int outPot = map(newPot, i +10, outPot);
    potStates[i] = newPot;
    }
  }
}

//intialize pots
void setPots(){
  int initpotVal = 60;
  int maxpotVal = 1023;
  if (abs maxpotVal = initpotVal)
  potStates == true 
}
