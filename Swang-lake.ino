
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
  int output = 13;
  int half = 2000;
  int eigth = 500;
  int dotquarter = 1500;
  int quarter = 1000;
  int F#4 = 370;
  int G4 = 392;
  int A4 = 440;
  int B4 = 494;
  int C5 = 523;
  int D5 = 587;
  int E5 = 659;
  int F#5 = 740;
  int E4 = 330;
  int F5 = 699;
  int D#5 = 622;
  int C4 = 262;
  int noNote = 100;
}

void loop()
{
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
    tone(output, F#4);    
      delay(eighth);  
    noTone(output)
      delay(100)

    tone(output, G4);    
      delay(eighth);  
    noTone(output)
      delay(100)

    tone(output, A4);    
      delay(eighth);  
    noTone(output)
      delay(100)

    tone(output, B4);    
      delay(dotquarter);  
    noTone(output)
      delay(100)

    tone(output, G4);    
      delay(eighth);  
    noTone(output)
      delay(100)
    
    tone(output, B4);    
      delay(dotquarter);  
    noTone(output)
      delay(100)

    tone(output, G4);    
      delay(eighth);  
    noTone(output)
      delay(100)

    tone(output, B4);    
      delay(dotquarter);  
    noTone(output)
      delay(100)

    tone(output, E4);    
      delay(eighth);  
    noTone(output)
      delay(100)

    tone(output, G4);    
      delay(eighth);  
    noTone(output)
      delay(100)

    tone(output, E4);    
      delay(eighth);  
    noTone(output)
      delay(100)

    tone(output, C4);    
      delay(eighth);  
    noTone(output)
      delay(100)

    tone(output, G4);    
      delay(eighth);  
    noTone(output)
      delay(100)

    tone(output, E4);    
      delay(half);  
    noTone(output)
      delay(100)

    tone(output, E4);    
      delay(eighth);  
    noTone(output)
      delay(100)

    tone(output, A4);    
      delay(eighth);  
    noTone(output)
      delay(100)

    tone(output, G4);    
      delay(eighth);  
    noTone(output)
      delay(100)
  
  tone(output, F#4);    
      delay(eighth);  
    noTone(output)
      delay(100)

    tone(output, B4);    
      delay(half);  
    noTone(output)
      delay(100)

    tone(output, E4);    
      delay(eighth);  
    noTone(output)
      delay(100)

    tone(output, F#4);    
      delay(eighth);  
    noTone(output)
      delay(100)

    tone(output, G4);    
      delay(eighth);  
    noTone(output)
      delay(100)

    tone(output, A4);    
      delay(eighth);  
    noTone(output)
      delay(100)

    tone(output, B4);    
      delay(dotquarter);  
    noTone(output)
      delay(100)

    tone(output, G4);    
      delay(eighth);  
    noTone(output)
      delay(100)

    tone(output, B4);    
      delay(dotquarter);  
    noTone(output)
      delay(100)
    
    tone(output, G4);    
      delay(eighth);  
    noTone(output)
      delay(100)

    tone(output, B4);    
      delay(dotquarter);  
    noTone(output)
      delay(100)

    tone(output, E4);    
      delay(eighth);  
    noTone(output)
      delay(100)

    tone(output, G4);    
      delay(eighth);  
    noTone(output)
      delay(100)

    tone(output, E4);    
      delay(eighth);  
    noTone(output)
      delay(100)

    tone(output, C4);    
      delay(eighth);  
    noTone(output)
      delay(100)

    tone(output, G4);    
      delay(eighth);  
    noTone(output)
      delay(100)

    tone(output, E4);    
      delay(dothalf);  
    noTone(output)
      delay(100)

    tone(output, E4);    
      delay(quarter);  
    noTone(output)
      delay(100)
    // END
    noTone(output); // stop playing
}
// Rosayra code
for (int i = 0; i < 1; i++)
{
    tone(output, F#4);   
      delay(eighth);   
    noTone(output);
      delay(noNote);
    
    tone(output, G4);   
      delay(eighth);   
    noTone(output);
      delay(noNote); 
    
    tone(output, A4);   
      delay(eighth);   
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
      delay(eighth);   
    noTone(output);
      delay(noNote); 
     
    tone(output, C5);   
      delay(eighth);   
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
      delay(eighth);   
    noTone(output);
      delay(noNote); 
  
  tone(output, E5);   
      delay(eighth);   
    noTone(output);
      delay(noNote);

      tone(output, D5);   
      delay(eighth);   
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
      delay(eighth);   
    noTone(output);
      delay(noNote);

      tone(output, F#5);   
      delay(eighth);   
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

      tone(output, F#4);   
      delay(eighth);   
    noTone(output);
      delay(noNote);
    
    tone(output, E4);   
      delay(eighth);   
    noTone(output);
      delay(noNote);

      tone(output, F#4);   
      delay(eighth);   
    noTone(output);
      delay(noNote);
      
      tone(output, G4);   
      delay(eighth);   
    noTone(output);
      delay(noNote);

      tone(output, A4);   
      delay(eighth);   
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
      delay(eighth);   
    noTone(output);
      delay(noNote);

      tone(output, C5);   
      delay(eighth);   
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
      delay(eighth);   
    noTone(output);
      delay(noNote);

      tone(output, E5);   
      delay(eighth);   
    noTone(output);
      delay(noNote);

      tone(output, D5);   
      delay(eighth);   
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
      delay(eighth);   
    noTone(output);
      delay(noNote);

      tone(output, F5);   
      delay(eighth);   
    noTone(output);
      delay(noNote);

      tone(output, C5);   
      delay(eighth);   
    noTone(output);
      delay(noNote);

      tone(output, F5);   
      delay(eighth);   
    noTone(output);
      delay(noNote);

      tone(output, E5);   
      delay(eighth);   
    noTone(output);
      delay(noNote);

      tone(output, D#5);   
      delay(eighth);   
    noTone(output);
      delay(noNote);


}
 
// Smruthi coode
  for (int i = 0; i < 1; i++)
{
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

  if (i = 0)
  {
    tone(output,D#5);
      delay(eighth);
    noTone(output);
      delay(noNote);

    tone(output,B4);
      delay(eighth);
    noTone(output);
      delay(noNote);

    tone(output,D#5);
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
  }

  if (i = 1)
  {
    tone(output,E5);
      delay(eighth);
    noTone(output);
      delay(noNote);

    tone(output,D#5);
      delay(eighth);
    noTone(output);
      delay(noNote);

    tone(output,B4);
      delay(eighth);
    noTone(output);
      delay(noNote);

    tone(output,D#5);
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
  }   
}

  for (int i = 0; i < 1; i++)
{
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

  if (i = 0)
  {
    tone(output,C5);
      delay(half);
    noTone(output);
      delay(noNote);

    tone(output,B4);
      delay(half);
    noTone(output);
      delay(noNote);
  }

  if (i = 1)
  {
    tone(output,F#5);
      delay(quarter);
    tone(output,F5);
      delay(quarter);
    noTone(output);
      delay(noNote);

    tone(output,F#5);
      delay(half);
    noTone(output);
      delay(noNote);
  }  

}

<<<<<<< HEAD
=======
// Darlene code here
for (int i = 0; i < 3; i++){
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
    tone(output, F#4);    
      delay(eighth);  
    noTone(output)
      delay(100)

    tone(output, G4);    
      delay(eighth);  
    noTone(output)
      delay(100)

    tone(output, A4);    
      delay(eighth);  
    noTone(output)
      delay(100)

    tone(output, B4);    
      delay(dotquarter);  
    noTone(output)
      delay(100)

    tone(output, G4);    
      delay(eighth);  
    noTone(output)
      delay(100)
    
    tone(output, B4);    
      delay(dotquarter);  
    noTone(output)
      delay(100)

    tone(output, G4);    
      delay(eighth);  
    noTone(output)
      delay(100)

    tone(output, B4);    
      delay(dotquarter);  
    noTone(output)
      delay(100)

    tone(output, E4);    
      delay(eighth);  
    noTone(output)
      delay(100)

    tone(output, G4);    
      delay(eighth);  
    noTone(output)
      delay(100)

    tone(output, E4);    
      delay(eighth);  
    noTone(output)
      delay(100)

    tone(output, C4);    
      delay(eighth);  
    noTone(output)
      delay(100)

    tone(output, G4);    
      delay(eighth);  
    noTone(output)
      delay(100)

    tone(output, E4);    
      delay(half);  
    noTone(output)
      delay(100)

    tone(output, E4);    
      delay(eighth);  
    noTone(output)
      delay(100)

    tone(output, A4);    
      delay(eighth);  
    noTone(output)
      delay(100)

    tone(output, G4);    
      delay(eighth);  
    noTone(output)
      delay(100)
  
  tone(output, F#4);    
      delay(eighth);  
    noTone(output)
      delay(100)

    tone(output, B4);    
      delay(half);  
    noTone(output)
      delay(100)

    tone(output, E4);    
      delay(eighth);  
    noTone(output)
      delay(100)

    tone(output, F#4);    
      delay(eighth);  
    noTone(output)
      delay(100)

    tone(output, G4);    
      delay(eighth);  
    noTone(output)
      delay(100)

    tone(output, A4);    
      delay(eighth);  
    noTone(output)
      delay(100)

    tone(output, B4);    
      delay(dotquarter);  
    noTone(output)
      delay(100)

    tone(output, G4);    
      delay(eighth);  
    noTone(output)
      delay(100)

    tone(output, B4);    
      delay(dotquarter);  
    noTone(output)
      delay(100)
    
    tone(output, G4);    
      delay(eighth);  
    noTone(output)
      delay(100)

    tone(output, B4);    
      delay(dotquarter);  
    noTone(output)
      delay(100)

    tone(output, E4);    
      delay(eighth);  
    noTone(output)
      delay(100)

    tone(output, G4);    
      delay(eighth);  
    noTone(output)
      delay(100)

    tone(output, E4);    
      delay(eighth);  
    noTone(output)
      delay(100)

    tone(output, C4);    
      delay(eighth);  
    noTone(output)
      delay(100)

    tone(output, G4);    
      delay(eighth);  
    noTone(output)
      delay(100)

    tone(output, E4);    
      delay(dothalf);  
    noTone(output)
      delay(100)

    tone(output, E4);    
      delay(quarter);  
    noTone(output)
      delay(100)
    // END
    noTone(output); // stop playing
>>>>>>> 558810f063c895d0be2bb964988d84822f4ad97d
}
}

// Elena code starts here


