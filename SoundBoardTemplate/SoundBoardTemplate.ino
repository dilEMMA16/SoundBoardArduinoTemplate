//make and include pitch.h from TutorialsPoint - Arduino Tone Library

//Pin for the buzzer

//Pins for the RGB LED


//Pins for the Buttons


// A struct to store different note lengths aka how long each note will play
// code courtesy of Borderliner from arduino.cc
struct LengthStruct {
  float half = 0.5;
  float one = 1.0;
  float one_half = 1.5;
  float two = 2.0;
  float two_half = 2.5;
}Length;

//Define the tempo = rate or speed, pace
int tempo = 400;

// put your setup code here, to run once:
void setup() {
  //Setup the buzzer as an output
  
 //Setup the buttons as inputs
  

  //Setup the RGB LED pins as outputs


}

// code courtesy of Borderliner from arduino.cc
// PIN = number of the pin you attached your buzzer to
// NOTE = aka frequency, a number between 31 and 10000 = change this to create new sounds
// DURATION = how long the sound will kee buzzing
void setTone(int pin, int note, int duration) {
  tone(pin, note, duration);
  delay(duration);
  noTone(pin);
}

// put your main code here, to run repeatedly:
void loop() {
  //check if any buttons are being pressed, then make LED color and play corresponding melody
  
  //see what the button's status is */
  
  
  if(currentButton1State == HIGH) {
    analogWrite(red_pin, 0);
    analogWrite(green_pin, 0);
    analogWrite(blue_pin, 255);
    playDespacitoSong(); 
  }
  if (currentButton2State == HIGH){
    //Harry Potter Theme and Red    
  }
  if (currentButton3State == HIGH){
    //Mario Theme and Purple   
  }
  if (currentButton4State == HIGH){
    //Make your own melody and color!

  }
}


//function to switch the LED to having no color = be off
void resetRGBLED() {
    
}

//your own melody
void myMelody() {
  
}


// notes courtesty of Borderliner from arduino.cc
void playHarryPotterThemeSong() {
  
}

// notes courtesty of PrinceTronics.com
void playMarioThemeSong() {
  setTone(buzzer_pin, NOTE_E7, tempo * Length.half);
  setTone(buzzer_pin, NOTE_E7, tempo * Length.half);
  delay(tempo * Length.half);
  setTone(buzzer_pin, NOTE_E7, tempo * Length.half);
  delay(tempo * Length.half);
  setTone(buzzer_pin, NOTE_C7, tempo * Length.half);
  setTone(buzzer_pin, NOTE_E7, tempo * Length.half);
  delay(tempo * Length.half);
  setTone(buzzer_pin, NOTE_G7, tempo * Length.half);
  delay(3 * tempo * Length.half);
  setTone(buzzer_pin, NOTE_G6, tempo * Length.half);
  delay(3 * tempo * Length.half);

  setTone(buzzer_pin, NOTE_C7, tempo * Length.half);
  delay(2 * tempo * Length.half);
  setTone(buzzer_pin, NOTE_G6, tempo * Length.half);
  delay(2 * tempo * Length.half);
  setTone(buzzer_pin, NOTE_E6, tempo * Length.half);
  delay(2 * tempo * Length.half);
  setTone(buzzer_pin, NOTE_A6, tempo * Length.half);
  delay(tempo * Length.half);
  setTone(buzzer_pin, NOTE_B6, tempo * Length.half);
  delay(tempo * Length.half);
  setTone(buzzer_pin, NOTE_AS6, tempo * Length.half);
  setTone(buzzer_pin, NOTE_A6, tempo * Length.half);
  delay(tempo * Length.half);

  setTone(buzzer_pin, NOTE_G6, tempo * Length.half);
  setTone(buzzer_pin, NOTE_E7, tempo * Length.half);
  setTone(buzzer_pin, NOTE_G7, tempo * Length.half);
  setTone(buzzer_pin, NOTE_A7, tempo * Length.half);
  setTone(buzzer_pin, NOTE_F7, tempo * Length.half);
  setTone(buzzer_pin, NOTE_G7, tempo * Length.half);
  delay(tempo * Length.half);
  setTone(buzzer_pin, NOTE_E7, tempo * Length.half);
  delay(tempo * Length.half);
  setTone(buzzer_pin, NOTE_C7, tempo * Length.half);
  setTone(buzzer_pin, NOTE_D7, tempo * Length.half);
  setTone(buzzer_pin, NOTE_B6, tempo * Length.half);
  delay(2 * tempo * Length.half);

  setTone(buzzer_pin, NOTE_C7, tempo * Length.half);
  delay(2 * tempo * Length.half);
  setTone(buzzer_pin, NOTE_G6, tempo * Length.half);
  delay(2 * tempo * Length.half);
  setTone(buzzer_pin, NOTE_E6, tempo * Length.half);
  delay(2 * tempo * Length.half);
  setTone(buzzer_pin, NOTE_A6, tempo * Length.half);
  delay(tempo * Length.half);
  setTone(buzzer_pin, NOTE_B6, tempo * Length.half);
  delay(tempo * Length.half);
  setTone(buzzer_pin, NOTE_AS6, tempo * Length.half);
  setTone(buzzer_pin, NOTE_A6, tempo * Length.half);
  delay(tempo * Length.half);

  setTone(buzzer_pin, NOTE_G6, tempo * Length.half);
  setTone(buzzer_pin, NOTE_E7, tempo * Length.half);
  setTone(buzzer_pin, NOTE_G7, tempo * Length.half);
  setTone(buzzer_pin, NOTE_A7, tempo * Length.half);
  delay(tempo * Length.half);
  setTone(buzzer_pin, NOTE_F7, tempo * Length.half);
  setTone(buzzer_pin, NOTE_G7, tempo * Length.half);
  delay(tempo * Length.half);
  setTone(buzzer_pin, NOTE_E7, tempo * Length.half);
  delay(tempo * Length.half);
  setTone(buzzer_pin, NOTE_C7, tempo * Length.half);
  setTone(buzzer_pin, NOTE_D7, tempo * Length.half);
  setTone(buzzer_pin, NOTE_B6, tempo * Length.half);
}

//notes courtesty of msr048 from arduino.cc
void playDespacitoSong(){
  setTone(buzzer_pin, NOTE_D5, tempo * Length.two);
  setTone(buzzer_pin, NOTE_CS5, tempo * Length.two);
  setTone(buzzer_pin, NOTE_B4, tempo * Length.one);
  setTone(buzzer_pin, NOTE_FS4, tempo * Length.half);
  delay(tempo * Length.half);
  setTone(buzzer_pin, NOTE_FS4, tempo * Length.half);
  setTone(buzzer_pin, NOTE_FS4, tempo * Length.half);
  setTone(buzzer_pin, NOTE_FS4, tempo * Length.half);
  setTone(buzzer_pin, NOTE_FS4, tempo * Length.half);
  setTone(buzzer_pin, NOTE_FS4, tempo * Length.half);
  setTone(buzzer_pin, NOTE_B4, tempo * Length.half);
  setTone(buzzer_pin, NOTE_B4, tempo * Length.half);
  setTone(buzzer_pin, NOTE_B4, tempo * Length.half);
  setTone(buzzer_pin, NOTE_B4, tempo * Length.one);
  setTone(buzzer_pin, NOTE_A4, tempo * Length.half);
  setTone(buzzer_pin, NOTE_B4, tempo * Length.half);
  delay(tempo * Length.one);
  setTone(buzzer_pin, NOTE_G4, tempo * Length.half);
  delay(tempo * Length.half);
  setTone(buzzer_pin, NOTE_G4, tempo * Length.half);
  setTone(buzzer_pin, NOTE_G4, tempo * Length.half);
  setTone(buzzer_pin, NOTE_G4, tempo * Length.half);
  setTone(buzzer_pin, NOTE_G4, tempo * Length.half);
  setTone(buzzer_pin, NOTE_G4, tempo * Length.half);
  setTone(buzzer_pin, NOTE_B4, tempo * Length.half);
  setTone(buzzer_pin, NOTE_B4, tempo * Length.half);
  setTone(buzzer_pin, NOTE_B4, tempo * Length.half);
  setTone(buzzer_pin, NOTE_B4, tempo * Length.one);
  setTone(buzzer_pin, NOTE_CS5, tempo * Length.half);
  setTone(buzzer_pin, NOTE_D5, tempo * Length.half);
  delay(tempo * Length.one);
  setTone(buzzer_pin, NOTE_A4, tempo * Length.half);
  delay(tempo * Length.half);
  setTone(buzzer_pin, NOTE_A4, tempo * Length.half);
  setTone(buzzer_pin, NOTE_A4, tempo * Length.half);
  setTone(buzzer_pin, NOTE_A4, tempo * Length.half);
  setTone(buzzer_pin, NOTE_A4, tempo * Length.half);
  setTone(buzzer_pin, NOTE_D5, tempo * Length.half);
  setTone(buzzer_pin, NOTE_CS5, tempo * Length.half);
  setTone(buzzer_pin, NOTE_D5, tempo * Length.half);
  setTone(buzzer_pin, NOTE_CS5, tempo * Length.half);
  setTone(buzzer_pin, NOTE_D5, tempo * Length.one);
  setTone(buzzer_pin, NOTE_E5, tempo * Length.half);
  setTone(buzzer_pin, NOTE_E5, tempo * Length.half);
  setTone(buzzer_pin, NOTE_E5, tempo * Length.one);
  setTone(buzzer_pin, NOTE_CS5, tempo * Length.one);
  setTone(buzzer_pin, NOTE_CS5, tempo * Length.one);
  setTone(buzzer_pin, NOTE_CS5, tempo * Length.half);
  setTone(buzzer_pin, NOTE_CS5, tempo * Length.half);
  setTone(buzzer_pin, NOTE_D5, tempo * Length.two);
  setTone(buzzer_pin, NOTE_CS5, tempo * Length.two);
  setTone(buzzer_pin, NOTE_B4, tempo * Length.one);
  setTone(buzzer_pin, NOTE_FS4, tempo * Length.half);
}


//RESOURCES:
//https://www.princetronics.com/supermariothemesong/
//https://www.tutorialspoint.com/arduino/arduino_tone_library.htm
//https://www.instructables.com/id/Arduino-Harry-Potter-Theme-Song/
//https://create.arduino.cc/projecthub/msr048/despacito-melody-9dcab7
