#include <MozziGuts.h>
#include <Oscil.h>
#include <tables/sin2048_int8.h>

Oscil <2048, AUDIO_RATE> aSin(SIN2048_DATA);

#define CONTROL_RATE 64;

void setup() {
  startMozzi(CONTROL_RATE);
  aSin.setFreq(440);
}

void updateControl(){
  
}

int updateAudio(){
  return aSin.next();
}

void loop() {
  audioHook();
}
