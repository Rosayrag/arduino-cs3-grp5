
/*
Notes chart:
  C     C#     D     Eb   E     F     F#    G     G#    A     Bb    B
0 16.35 17.32 18.35 19.45 20.60 21.83 23.12 24.50 25.96 27.50 29.14 30.87
1 32.70 34.65 36.71 38.89 41.20 43.65 46.25 49.00 51.91 55.00 58.27 61.74
2 65.41 69.30 73.42 77.78 82.41 87.31 92.50 98.00 103.8 110.0 116.5 123.5
3 130.8 138.6 146.8 155.6 164.8 174.6 185.0 196.0 207.7 220.0 233.1 246.9
4 261.6 277.2 293.7 311.1 329.6 349.2 370.0 392.0 415.3 440.0 466.2 493.9
5 523.3 554.4 587.3 622.3 659.3 698.5 740.0 784.0 830.6 880.0 932.3 987.8
6 1047  1109  1175  1245  1319  1397  1480  1568  1661  1760  1865  1976
7 2093  2217  2349  2489  2637  2794  2960  3136  3322  3520  3729  3951
8 4186  4435  4699  4978  5274  5588  5920  6272  6645  7040  7459  7902
*/


void setup()
{
  int tempo = 1;
  int output = 13;
  int half = 2000/tempo;
  int eighth = 500/tempo;
  int dotquarter = 1500/tempo;
  int quarter = 1000/tempo;
  int dothalf = 3000/tempo;
  int sixteenth = 250/tempo;
  int Fs4 = 370;
  int G4 = 392;
  int A4 = 440;
  int B4 = 494;
  int C5 = 523;
  int D5 = 587;
  int E5 = 659;
  int Fs5 = 740;
  int E4 = 330;
  int F5 = 699;
  int Ds5 = 622;
  int C4 = 262;
  int noNote = 100/tempo;
}
void loop()
{
  int tempo = 1;
  int output = 13;
  int half = 2000/tempo;
  int eighth = 500/tempo;
  int dotquarter = 1500/tempo;
  int quarter = 1000/tempo;
  int dothalf = 3000/tempo;
  int sixteenth = 250/tempo;
  int Fs4 = 370;
  int G4 = 392;
  int A4 = 440;
  int B4 = 494;
  int C5 = 523;
  int D5 = 587;
  int E5 = 659;
  int Fs5 = 740;
  int E4 = 330;
  int F5 = 699;
  int Ds5 = 622;
  int C4 = 262;
  int G5 = 784;
  int Ef5 = 622;
  int Ds4 = 311;
  int noNote = 100/tempo;

  noTone(output);
  delay(quarter);

    // Darlene code here
for (int i = 0; i < 1; i++){
    // Measure 1, 2 seconds
    // C4
    tone(output, B4);    // tone(outputPin,frequency)
      delay(half);  //  delay(milliseconds) 
    noTone(output);
      delay(100);
    // C4
    tone(output, E4);   
      delay(eighth);   
    noTone(output);  
      delay(100);  
    // Measure 2, 2 seconds
    // C4
    tone(output, Fs4);    
      delay(eighth);  
    noTone(output);
      delay(100);

    tone(output, G4);    
      delay(eighth);  
    noTone(output);
      delay(100);

    tone(output, A4);    
      delay(eighth);  
    noTone(output);
      delay(100);

    tone(output, B4);    
      delay(dotquarter);  
    noTone(output);
      delay(100);

    tone(output, G4);    
      delay(eighth);  
    noTone(output);
      delay(100);
    
    tone(output, B4);    
      delay(dotquarter);  
    noTone(output);
      delay(100);

    tone(output, G4);    
      delay(eighth);  
    noTone(output);
      delay(100);

    tone(output, B4);    
      delay(dotquarter);  
    noTone(output);
      delay(100);

    tone(output, E4);    
      delay(eighth);  
    noTone(output);
      delay(100);

    tone(output, G4);    
      delay(eighth);  
    noTone(output);
      delay(100);

    tone(output, E4);    
      delay(eighth);  
    noTone(output);
      delay(100);

    tone(output, C4);    
      delay(eighth);  
    noTone(output);
      delay(100);

    tone(output, G4);    
      delay(eighth);  
    noTone(output);
      delay(100);

    tone(output, E4);    
      delay(half);
    tone(output, E4);    
      delay(eighth);  
    noTone(output);
      delay(100);

    tone(output, A4);    
      delay(eighth);  
    noTone(output);
      delay(100);

    tone(output, G4);    
      delay(eighth);  
    noTone(output);
      delay(100);
  
  tone(output, Fs4);    
      delay(eighth);  
    noTone(output);
      delay(100);

    tone(output, B4);    
      delay(half);  
    noTone(output);
      delay(100);

    tone(output, E4);    
      delay(eighth);  
    noTone(output);
      delay(100);

    tone(output, Fs4);    
      delay(eighth);  
    noTone(output);
      delay(100);

    tone(output, G4);    
      delay(eighth);  
    noTone(output);
      delay(100);

    tone(output, A4);    
      delay(eighth);  
    noTone(output);
      delay(100);

    tone(output, B4);    
      delay(dotquarter);  
    noTone(output);
      delay(100);

    tone(output, G4);    
      delay(eighth);  
    noTone(output);
      delay(100);

    tone(output, B4);    
      delay(dotquarter);  
    noTone(output);
      delay(100);
    
    tone(output, G4);    
      delay(eighth);  
    noTone(output);
      delay(100);

    tone(output, B4);    
      delay(dotquarter);  
    noTone(output);
      delay(100);

    tone(output, E4);    
      delay(eighth);  
    noTone(output);
      delay(100);

    tone(output, G4);    
      delay(eighth);  
    noTone(output);
      delay(100);

    tone(output, E4);    
      delay(eighth);  
    noTone(output);
      delay(100);

    tone(output, C4);    
      delay(eighth);  
    noTone(output);
      delay(100);

    tone(output, G4);    
      delay(eighth);  
    noTone(output);
      delay(100);

    tone(output, E4);    
      delay(dothalf);  
    noTone(output);
      delay(100);

    tone(output, E4);    
      delay(quarter);  
    noTone(output);
      delay(100);
    // END
    noTone(output); // stop playing
}
// Rosayra code
for (int i = 0; i < 1; i++)
{
    tone(output, Fs4);   
      delay(quarter);   
    noTone(output);
      delay(noNote);
    
    tone(output, G4);   
      delay(quarter);   
    noTone(output);
      delay(noNote); 
    
    tone(output, A4);   
      delay(quarter);   
    noTone(output);
      delay(noNote); 
    
    tone(output, B4);   
      delay(eighth);   
    noTone(output);
      delay(noNote);  
    
    tone(output, C5);   
      delay(eighth);   
    noTone(output);
      delay(noNote);
    
    tone(output, D5);   
      delay(dotquarter);   
    noTone(output);
      delay(noNote); 
     
    tone(output, C5);   
      delay(eighth);   
    noTone(output);
      delay(noNote);
    
    tone(output, B4);   
      delay(quarter);   
    noTone(output);
      delay(noNote); 
    
    tone(output, C5);   
      delay(eighth);   
    noTone(output);
      delay(noNote); 
    
    tone(output, D5);   
      delay(eighth);   
    noTone(output);
      delay(noNote); 
  
  tone(output, E5);   
      delay(dotquarter);   
    noTone(output);
      delay(noNote);

      tone(output, D5);   
      delay(eighth);   
    noTone(output);
      delay(noNote);

      tone(output, C5);   
      delay(quarter);   
    noTone(output);
      delay(noNote);

      tone(output, D5);   
      delay(eighth);   
    noTone(output);
      delay(noNote);

      tone(output, E5);   
      delay(eighth);   
    noTone(output);
      delay(noNote);

      tone(output, Fs5);   
      delay(quarter);   
    noTone(output);
      delay(noNote);

      tone(output, E5);   
      delay(eighth);   
    noTone(output);
      delay(noNote);

      tone(output, B4);   
      delay(eighth);   
    noTone(output);
      delay(noNote);

      tone(output, G4);   
      delay(eighth);   
    noTone(output);
      delay(noNote);

      tone(output, Fs4);   
      delay(eighth);   
    noTone(output);
      delay(noNote);
    
    tone(output, E4);   
      delay(eighth);   
    noTone(output);
      delay(noNote);

      tone(output, Fs4);   
      delay(quarter);   
    noTone(output);
      delay(noNote);
      
      tone(output, G4);   
      delay(quarter);   
    noTone(output);
      delay(noNote);

      tone(output, A4);   
      delay(quarter);   
    noTone(output);
      delay(noNote);

      tone(output, B4);   
      delay(eighth);   
    noTone(output);
      delay(noNote);

      tone(output, C5);   
      delay(eighth);   
    noTone(output);
      delay(noNote);

      tone(output, D5);   
      delay(dotquarter);   
    noTone(output);
      delay(noNote);

      tone(output, C5);   
      delay(eighth);   
    noTone(output);
      delay(noNote);

      tone(output, B4);   
      delay(quarter);   
    noTone(output);
      delay(noNote);

      tone(output, C5);   
      delay(eighth);   
    noTone(output);
      delay(noNote);

      tone(output, D5);   
      delay(eighth);   
    noTone(output);
      delay(noNote);

      tone(output, E5);   
      delay(dotquarter);   
    noTone(output);
      delay(noNote);

      tone(output, D5);   
      delay(eighth);   
    noTone(output);
      delay(noNote);

      tone(output, C5);   
      delay(quarter);   
    noTone(output);
      delay(noNote);

      tone(output, D5);   
      delay(eighth);   
    noTone(output);
      delay(noNote);

      tone(output, E5);   
      delay(eighth);   
    noTone(output);
      delay(noNote);

}
 
// Smruthi code
  for (int i = 0; i < 1; i++){
    tone(output,F5);
      delay(eighth);
    noTone(output);
      delay(noNote);

    tone(output,C5);
      delay(eighth);
    noTone(output);
      delay(noNote);

    tone(output,F5);
      delay(eighth);
    noTone(output);
      delay(noNote);

    tone(output,E5);
      delay(dotquarter);
    noTone(output);
      delay(noNote);

    tone(output,Ds5);
      delay(eighth);
    noTone(output);
      delay(noNote);

    tone(output,B4);
      delay(eighth);
    noTone(output);
      delay(noNote);

    tone(output,Ds5);
      delay(eighth);
    noTone(output);
      delay(noNote);

    tone(output,E5);
      delay(dotquarter);
    noTone(output);
      delay(noNote);

    tone(output,E5);
      delay(eighth);
    noTone(output);
      delay(noNote);
    
    tone(output,F5);
      delay(eighth);
    noTone(output);
      delay(noNote);

    tone(output,C5);
      delay(eighth);
    noTone(output);
      delay(noNote);

    tone(output,F5);
      delay(eighth);
    noTone(output);
      delay(noNote);

    tone(output,E5);
      delay(dotquarter);
    noTone(output);
      delay(noNote);

    tone(output,E5);
      delay(eighth);
    noTone(output);
      delay(noNote);

    tone(output,Ds5);
      delay(eighth);
    noTone(output);
      delay(noNote);

    tone(output,B4);
      delay(eighth);
    noTone(output);
      delay(noNote);

    tone(output,Ds5);
      delay(eighth);
    noTone(output);
      delay(noNote);

    tone(output,E5);
      delay(quarter);
    noTone(output);
      delay(noNote);

    tone(output,E5);
      delay(eighth);
    noTone(output);
      delay(noNote);

    tone(output,F5);
      delay(eighth);
    noTone(output);
      delay(noNote);

    tone(output,C5);
      delay(eighth);
    noTone(output);
      delay(noNote);

    tone(output,F5);
      delay(eighth);
    noTone(output);
      delay(noNote);

    tone(output,F5);
      delay(eighth);
    noTone(output);
      delay(noNote);

    tone(output,C5);
      delay(eighth);
    noTone(output);
      delay(noNote);

    tone(output,F5);
      delay(eighth);
    noTone(output);
      delay(noNote);

    tone(output,C5);
      delay(half);
    noTone(output);
      delay(noNote);

    tone(output,B4);
      delay(half);
    noTone(output);
      delay(noNote);
    
    tone(output,F5);
      delay(eighth);
    noTone(output);
      delay(noNote);

    tone(output,C5);
      delay(eighth);
    noTone(output);
      delay(noNote);

    tone(output,F5);
      delay(eighth);
    noTone(output);
      delay(noNote);

    tone(output,F5);
      delay(eighth);
    noTone(output);
      delay(noNote);

    tone(output,C5);
      delay(eighth);
    noTone(output);
      delay(noNote);

    tone(output,F5);
      delay(eighth);
    noTone(output);
      delay(noNote);

    tone(output,Fs5);
      delay(quarter);
    tone(output,F5);
      delay(quarter);
    noTone(output);
      delay(noNote);

    tone(output,Fs5);
      delay(half);
    noTone(output);
      delay(noNote); 

}

// Elena code starts here
for (int i = 0; i < 2; i++)
  {
    // Measure 1, 2 seconds
    // G4
    tone(output, G5);
    pinMode (2, OUTPUT);
    digitalWrite (2,HIGH);
    delay(eighth);
    pinMode (2, OUTPUT);
    digitalWrite (2,LOW);
    noTone(output);
    delay(100);
    // E4
    tone(output, Ef5);
    pinMode (4, OUTPUT);
    digitalWrite (4,HIGH);
    delay(eighth);
    pinMode (4, OUTPUT);
    digitalWrite (4,LOW);
    noTone(output);
    delay(100);
    // G4
      tone(output, G5);
    pinMode (2, OUTPUT);
    digitalWrite (2,HIGH);
    delay(eighth);
    pinMode (2, OUTPUT);
    digitalWrite (2,LOW);
    noTone(output);
    delay(100); // stop playing
  }
  for (int i = 0; i < 3; i++)
  {
    for (int f = 0; f < 6; f++)
    {
      // G5
      tone(output, G5);
      pinMode (2, OUTPUT);
      digitalWrite (2,HIGH);
      delay(sixteenth);
      pinMode (2, OUTPUT);
      digitalWrite (2,LOW);
      noTone(output);
      delay(100);
    }
    // F#5
    tone(output, Fs5);
     pinMode (4, OUTPUT);
    digitalWrite (4,HIGH);
    delay(sixteenth);
     pinMode (4, OUTPUT);
    digitalWrite (4,LOW);
    noTone(output); // stop playing
    delay(100);
    // F#5
   tone(output, Fs5);
     pinMode (4, OUTPUT);
    digitalWrite (4,HIGH);
    delay(sixteenth);
     pinMode (4, OUTPUT);
    digitalWrite (4,LOW);
    noTone(output); // stop playing
    delay(100);
  }
  {
    // G5
  tone(output, G5);
      pinMode (2, OUTPUT);
      digitalWrite (2,HIGH);
      delay(sixteenth);
      pinMode (2, OUTPUT);
      digitalWrite (2,LOW);
      noTone(output);
      delay(100);
    // G5
  tone(output, G5);
      pinMode (2, OUTPUT);
      digitalWrite (2,HIGH);
      delay(sixteenth);
      pinMode (2, OUTPUT);
      digitalWrite (2,LOW);
      noTone(output);
      delay(100);
    // G5
 tone(output, G5);
      pinMode (2, OUTPUT);
      digitalWrite (2,HIGH);
      delay(sixteenth);
      pinMode (2, OUTPUT);
      digitalWrite (2,LOW);
      noTone(output);
      delay(100);
    // G5
 tone(output, G5);
      pinMode (2, OUTPUT);
      digitalWrite (2,HIGH);
      delay(sixteenth);
      pinMode (2, OUTPUT);
      digitalWrite (2,LOW);
      noTone(output);
      delay(100);
    // F#5
    tone(output, Fs5);
     pinMode (4, OUTPUT);
    digitalWrite (4,HIGH);
    delay(sixteenth);
     pinMode (4, OUTPUT);
    digitalWrite (4,LOW);
    noTone(output); // stop playing
    delay(100);
    // F#5
    tone(output, Fs5);
     pinMode (4, OUTPUT);
    digitalWrite (4,HIGH);
    delay(sixteenth);
     pinMode (4, OUTPUT);
    digitalWrite (4,LOW);
    noTone(output); // stop playing
    delay(100);
    // F#5
   tone(output, Fs5);
     pinMode (4, OUTPUT);
    digitalWrite (4,HIGH);
    delay(sixteenth);
     pinMode (4, OUTPUT);
    digitalWrite (4,LOW);
    noTone(output); // stop playing
    delay(100);
    // F#5
   tone(output, Fs5);
     pinMode (4, OUTPUT);
    digitalWrite (4,HIGH);
    delay(sixteenth);
     pinMode (4, OUTPUT);
    digitalWrite (4,LOW);
    noTone(output); // stop playing
    delay(100);
    // C4
    tone(output, B4);
    pinMode (2, OUTPUT);
    digitalWrite (2,HIGH);
    delay(half);
    pinMode (2, OUTPUT);
    digitalWrite (2,LOW);
    noTone(output); // stop playing
    delay(100);
  }

    tone(output, E4);   
      delay(eighth);   
    noTone(output);  
      delay(100);  
    // Measure 2, 2 seconds
    // C4
    tone(output, Fs4);    
      delay(eighth);  
    noTone(output);
      delay(100);

    tone(output, G4);    
      delay(eighth);  
    noTone(output);
      delay(100);

    tone(output, A4);    
      delay(eighth);  
    noTone(output);
      delay(100);

    tone(output, B4);    
      delay(dotquarter);  
    noTone(output);
      delay(100);

    tone(output, G4);    
      delay(eighth);  
    noTone(output);
      delay(100);
    
    tone(output, B4);    
      delay(dotquarter);  
    noTone(output);
      delay(100);

    tone(output, G4);    
      delay(eighth);  
    noTone(output);
      delay(100);

    tone(output, B4);    
      delay(dotquarter);  
    noTone(output);
      delay(100);

    tone(output, E4);    
      delay(eighth);  
    noTone(output);
      delay(100);

    tone(output, G4);    
      delay(eighth);  
    noTone(output);
      delay(100);

    tone(output, Ds4);    
      delay(eighth);  
    noTone(output);
      delay(100);

    tone(output, C4);    
      delay(eighth);  
    noTone(output);
      delay(100);

    tone(output, G4);    
      delay(eighth);  
    noTone(output);
      delay(100);

    tone(output, E4);    
      delay(half);  
    noTone(output);
      delay(100);
  
    noTone(output);
      delay(eighth);

    tone(output, A4);    
      delay(eighth);  
    noTone(output);
      delay(100);

    tone(output, G4);    
      delay(eighth);  
    noTone(output);
      delay(100);
  
  tone(output, Fs4);    
      delay(eighth);  
    noTone(output);
      delay(100);

    tone(output, B4);    
      delay(half);  
    noTone(output);
      delay(100);

    tone(output, E4);    
      delay(eighth);  
    noTone(output);
      delay(100);

    tone(output, Fs4);    
      delay(eighth);  
    noTone(output);
      delay(100);

    tone(output, G4);    
      delay(eighth);  
    noTone(output);
      delay(100);

    tone(output, A4);    
      delay(eighth);  
    noTone(output);
      delay(100);

    tone(output, B4);    
      delay(dotquarter);  
    noTone(output);
      delay(100);

    tone(output, G4);    
      delay(eighth);  
    noTone(output);
      delay(100);

    tone(output, B4);    
      delay(dotquarter);  
    noTone(output);
      delay(100);
    
    tone(output, G4);    
      delay(eighth);  
    noTone(output);
      delay(100);

    tone(output, B4);    
      delay(dotquarter);  
    noTone(output);
      delay(100);

    tone(output, E4);    
      delay(eighth);  
    noTone(output);
      delay(100);

    tone(output, G4);    
      delay(eighth);  
    noTone(output);
      delay(100);
  
  tone(output, Ds4);    
      delay(eighth);  
    noTone(output);
      delay(100);

    tone(output, C4);    
      delay(eighth);  
    noTone(output);
      delay(100);

    tone(output, G4);    
      delay(eighth);  
    noTone(output);
      delay(100);

    tone(output, E4);    
      delay(half);
    tone(output, E4);    
      delay(half);  
    noTone(output);
      delay(100);

    noTone(output);
      delay(dothalf);      
}




