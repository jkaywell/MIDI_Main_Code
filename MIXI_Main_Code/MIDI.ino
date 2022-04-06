// MIDI Functions

void controlChange(byte channel, byte control, byte value) {
  midiEventPacket_t event = {0x0B, 0xB0 | channel, control, value};
  MidiUSB.sendMIDI(event);
  MidiUSB.flush();
  
}

void noteChange(byte channel, byte pitch, byte velocity, boolean on) {
  if(on){midiEventPacket_t noteOn = {0x09, 0x90 | channel, pitch, velocity}; MidiUSB.sendMIDI(noteOn);MidiUSB.flush();}
  else{midiEventPacket_t noteOff = {0x08, 0x80 | channel, pitch, velocity}; MidiUSB.sendMIDI(noteOff);MidiUSB.flush();}
}



if(buttons[0].rose()){
  controlChange(0,1,127);
  controlChange(0,2,127);
  controlChange(0,3,127);
  controlChange(0,4,127);
  controlChange(0,5,127);
  controlChange(0,6,127);
  controlChange(0,7,127);
  controlChange(0,8,127);
  MidiUSB.sendMIDI
}
