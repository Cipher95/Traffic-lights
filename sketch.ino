void setup(){
    for(char I=2;I<14;I++){
    pinMode(I,OUTPUT);
    }
    
    for(char I=2;I<14;I++){
    digitalWrite(I,0);
    }
        
  //Red light
    digitalWrite(4,1);
    digitalWrite(5,1);
    digitalWrite(8,1);
    digitalWrite(11,1);
}

void loop(){
    
  //Street 1
    digitalWrite(2,0);
    digitalWrite(3,0);
    digitalWrite(4,1);
    delay(9000);
    digitalWrite(2,0);
    digitalWrite(3,1);
    digitalWrite(4,0);
    delay(3000);
    digitalWrite(2,1);
    digitalWrite(3,0);
    digitalWrite(4,0);
    delay(3000);

  //Street 2
    digitalWrite(5,0);
    digitalWrite(6,0);
    digitalWrite(7,1);
    delay(9000);
    digitalWrite(5,0);
    digitalWrite(6,1);
    digitalWrite(7,0);
    delay(3000);
    digitalWrite(5,1);
    digitalWrite(6,0);
    digitalWrite(7,0);
    delay(3000);

  //Street 3
    digitalWrite(8,0);
    digitalWrite(9,0);
    digitalWrite(10,1);
    delay(9000);
    digitalWrite(8,0);
    digitalWrite(9,1);
    digitalWrite(10,0);
    delay(3000);
    digitalWrite(8,1);
    digitalWrite(9,0);
    digitalWrite(10,0);
    delay(3000);
  
   //Street 4
    digitalWrite(11,0);
    digitalWrite(12,0);
    digitalWrite(13,1);
    delay(9000);
    digitalWrite(11,0);
    digitalWrite(12,1);
    digitalWrite(13,0);
    delay(3000);
    digitalWrite(11,1);
    digitalWrite(12,0);
    digitalWrite(13,0);
    delay(3000);
}