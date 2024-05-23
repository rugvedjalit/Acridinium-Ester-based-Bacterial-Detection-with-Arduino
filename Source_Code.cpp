#include <LiquidCrystal.h> // Include the LiquidCrystal library

const int LDR_PIN = A0;      // Define the analog pin connected to the LDR sensor
const int RED_PIN = 9;       // Define the digital pin connected to the LED
const int BLUE_PIN = 8;
const float THRESHOLD = 0.1; // Define the threshold value for light intensity

// Initialize the LCD with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  Serial.begin(9600);    // Initialize serial communication
  pinMode(RED_PIN, OUTPUT);    // Set the LED pin as an output
  pinMode(BLUE_PIN, OUTPUT);   // Set the LED pin as an output
  lcd.begin(16, 2);       // Initialize the LCD with 16 columns and 2 rows
  lcd.print("Light Intensity:"); // Print initial message on LCD
}

void loop() {
  int lightIntensity = analogRead(LDR_PIN); // Read the analog value from the LDR sensor
  
  // Map the analog value to a range of 0.0 to 1.0
  float normalizedIntensity = map(lightIntensity, 0, 1023, 0, 1000) / 1000.0;
  
  // Print the light intensity to the LCD
  lcd.setCursor(0, 1); // Set cursor to the beginning of the second row
  lcd.print("              "); // Clear previous value
  lcd.setCursor(0, 1); // Set cursor to the beginning of the second row
  lcd.print(normalizedIntensity, 2); // Print the normalized light intensity value with 2 decimal places
  
  // Check if the normalized light intensity is above the threshold
  if (normalizedIntensity > THRESHOLD) {
    Serial.println("Bacteria detected!"); // Print a message indicating bacteria detection
    lcd.setCursor(0, 0);
    lcd.print("Bacteria detected!"); // Print message on LCD
    digitalWrite(RED_PIN, HIGH);
    digitalWrite(BLUE_PIN, LOW);     // Turn on the LED
  } else {
    Serial.println("Virus detected!");
    lcd.setCursor(0, 0);
    lcd.print("Virus detected!"); // Print message on LCD
    digitalWrite(RED_PIN, LOW); 
    digitalWrite(BLUE_PIN, HIGH);    // Turn off the LED
  }

  delay(1000); // Delay for stability
}
