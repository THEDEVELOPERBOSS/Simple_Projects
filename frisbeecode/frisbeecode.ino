
// BYU Chip Camp 2023
// Innovations Module - LED Frisbee
// Template code - turns on each light, one at a time


#define RED LOW,HIGH,HIGH
#define YELLOW LOW,LOW,HIGH
#define GREEN HIGH,LOW,HIGH
#define CYAN HIGH,LOW,LOW
#define BLUE HIGH,HIGH,LOW
#define MAGENTA LOW,HIGH,LOW
#define WHITE LOW,LOW,LOW
#define OFF HIGH,HIGH,HIGH

int LEDs[6][3] = {
    {20, 21, 19}, //LED1
    {17, 18, 16}, //LED2
    {3 , 4 , 2 }, //LED3
    {6 , 8 , 5 }, //LED4
    {10, 11, 9 }, //LED5
    {13, 14, 12} //LED6
    //RED, GREEN, BLUE
};

// Function that turns on a specified LED to a specific color
void writeRGB(int LEDNUM, int c1, int c2, int c3){
    digitalWrite(LEDs[LEDNUM-1][0], c1);
    digitalWrite(LEDs[LEDNUM-1][1], c2);
    digitalWrite(LEDs[LEDNUM-1][2], c3);
}

// Function that turns off all 6 LEDs
void clearLEDs()
{
    for(int x=1;x<=6;x++)
    {
        writeRGB(x,OFF);
    }
}

// put your setup code here, to run once:
void setup()
{
    // This code cycles through each pin and sets it up as an output
    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 3; j++){
            pinMode(LEDs[i][j], OUTPUT);
        }
    }
    clearLEDs();
}

void loop()
{ // it goes from right to left
    //Basic Colors - Red, Green, and Blue
    
    writeRGB(1,RED); //Turn them all red
    
    delay(300); //Wait 750 milliseconds
    
    writeRGB(2, RED); 
    
    delay(300);
    
    writeRGB(3, RED); 
    
    delay(300);
    
    writeRGB(4, RED); 
    
    delay(300);
    
    writeRGB(5,RED); 
    
    delay(300);
    
    writeRGB(6,RED); 
    
    delay(1000);
    
        //Basic Colors - Red, Green, and Blue
    
    writeRGB(1, GREEN); //Turn them all green
    
    delay(300); //Wait 750 milliseconds
    
    writeRGB(2, GREEN); 
    
    delay(300);
    
    writeRGB(3, GREEN); 
    
    delay(300);
    
    writeRGB(4, GREEN); 
    
    delay(300);
    
    writeRGB(5, GREEN); 
    
    delay(300);
    
    writeRGB(6, GREEN); 
    
    delay(1000);
    
    
           //Basic Colors - Red, Green, and Blue
    
    writeRGB(1, BLUE); //Turn them all Blue
    
    delay(300); //Wait 750 milliseconds
    
    writeRGB(2, BLUE); 
    
    delay(300);
    
    writeRGB(3, BLUE); 
    
    delay(300);
    
    writeRGB(4, BLUE); 
    
    delay(300);
    
    writeRGB(5, BLUE); 
    
    delay(300);
    
    writeRGB(6, BLUE); 
    
    delay(1000);
    
    //Basic Colors - Red, Green, and Blue
    
    writeRGB(1, RED); // Red white and blue sequence starts here
    
    delay(300); //Wait 750 milliseconds
    
    writeRGB(2, WHITE); 
    
    delay(300);
    
    writeRGB(3, BLUE); 
    
    delay(300);
    
    writeRGB(4, RED); 
    
    delay(300);
    
    writeRGB(5, WHITE); 
    
    delay(300);
    
    writeRGB(6, BLUE); 
    
    delay(1000);
    
       //Basic Colors - Red, Green, and Blue
    
    writeRGB(1, WHITE); // BLUE AND WHITE SEQUENCE
    
    delay(50); //Wait 750 milliseconds
    
    writeRGB(2, BLUE); 
    
    delay(50);
    
    writeRGB(3, WHITE); 
    
    delay(50);
    
    writeRGB(4, BLUE); 
    
    delay(50);
    
    writeRGB(5, WHITE); 
    
    delay(50);
    
    writeRGB(6, BLUE); 
    
    delay(1000);
    
           //Basic Colors - Red, Green, and Blue
    
    writeRGB(1, WHITE); 
    
    delay(50); //Wait 750 milliseconds
    
    writeRGB(2, BLUE); 
    
    delay(50);
    
    writeRGB(3, WHITE); 
    
    delay(50);
    
    writeRGB(4, BLUE); 
    
    delay(50);
    
    writeRGB(5, WHITE); 
    
    delay(50);
    
    writeRGB(6, BLUE); 
    
    delay(1000);
    
           //Basic Colors - Red, Green, and Blue
    
    writeRGB(1, WHITE); // Red white and blue sequence starts here
    
    delay(50); //Wait 750 milliseconds
    
    writeRGB(2, BLUE); 
    
    delay(50);
    
    writeRGB(3, WHITE); 
    
    delay(50);
    
    writeRGB(4, WHITE); 
    
    delay(50);
    
    writeRGB(5, BLUE);
    
    delay(50);
    
    writeRGB(6, WHITE); 
    
    delay(1000);
    
           //Basic Colors - Red, Green, and Blue
    
    writeRGB(1, BLUE); 
    
    delay(50); //Wait 750 milliseconds
    
    writeRGB(2, WHITE); 
    
    delay(50);
    
    writeRGB(3, BLUE); 
    
    delay(50);
    
    writeRGB(4, WHITE); 
    
    delay(50);
    
    writeRGB(5, BLUE); 
    
    delay(50);
    
    writeRGB(6, WHITE); 
    
    delay(1000);
    
           //Basic Colors - Red, Green, and Blue
    
    writeRGB(1, BLUE); // Red white and blue sequence starts here
    
    delay(50); //Wait 750 milliseconds
    
    writeRGB(2, WHITE); 
    
    delay(50);
    
    writeRGB(3, BLUE); 
    
    delay(50);
    
    writeRGB(4, BLUE); 
    
    delay(50);
    
    writeRGB(5, WHITE); 
    
    delay(50);
    
    writeRGB(6, BLUE); 
    
    delay(1000);
    
           //Basic Colors - Red, Green, and Blue
    
    writeRGB(1, RED); // FLASH SEQUENCE 
    
    delay(100); //Wait 750 milliseconds
    
    writeRGB(2, OFF); 
    
    delay(100);
    
    writeRGB(3, OFF); 
    
    delay(100);
    
    writeRGB(4, OFF); 
    
    delay(100);
    
    writeRGB(5, OFF); 
    
    delay(100);
    
    writeRGB(6, OFF); 
    
    delay(1000);
    
             //Basic Colors - Red, Green, and Blue
    
    writeRGB(1, YELLOW); // FLASH SEQUENCE 
    
    delay(100); //Wait 750 milliseconds
    
    writeRGB(2, RED); 
    
    delay(100);
    
    writeRGB(3, OFF); 
    
    delay(100);
    
    writeRGB(4, OFF); 
    
    delay(100);
    
    writeRGB(5, OFF); 
    
    delay(100);
    
    writeRGB(6, OFF); 
    
    delay(1000);
    
    
    writeRGB(1, YELLOW); // FLASH SEQUENCE 
    
    delay(100); //Wait 750 milliseconds
    
    writeRGB(2, YELLOW); 
    
    delay(100);
    
    writeRGB(3, RED); 
    
    delay(100);
    
    writeRGB(4, OFF); 
    
    delay(100);
    
    writeRGB(5, OFF); 
    
    delay(100);
    
    writeRGB(6, OFF); 
    
    delay(1000);
    
        writeRGB(1, YELLOW); // FLASH SEQUENCE 
    
    delay(100); //Wait 750 milliseconds
    
    writeRGB(2, YELLOW); 
    
    delay(100);
    
    writeRGB(3, YELLOW); 
    
    delay(100);
    
    writeRGB(4, RED); // CHANGE THE DELAY
    
    delay(100);
    
    writeRGB(5, OFF); 
    
    delay(100);
    
    writeRGB(6, OFF); 
    
    delay(1000);
    
            writeRGB(1, YELLOW); // FLASH SEQUENCE 
    
    delay(100); //Wait 750 milliseconds
    
    writeRGB(2, YELLOW); 
    
    delay(100);
    
    writeRGB(3, YELLOW); 
    
    delay(100);
    
    writeRGB(4, YELLOW); 
    
    delay(100);
    
    writeRGB(5, RED); 
    
    delay(100);
    
    writeRGB(6, OFF); 
    
    delay(1000);
    
    
    
    

    for(int i = 1; i < 7; ++i){
      writeRGB(i,OFF);
      delay(750);
    }

    delay(1250);
}

