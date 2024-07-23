void setup() {#define FORCE_SENSOR_1 A0 // Thumb
#define FORCE_SENSOR_2 A1 // Index
#define FORCE_SENSOR_3 A2 // Middle

const int max1 = 42, max2 = 42;
const unsigned long letter_space_threshold = 5000; // Time to consider the end of a letter
unsigned long last_input_time = 0;
String morse_code_sentence = "";
String sentence = ""; 
const unsigned long delay_time = 500; 


const String Morse_code_matrix[max1] =
{
    ".-",    "-...",   "-.-.",   "-..",    ".",      "..-.",   "--.",
    "....",  "..",     ".---",   "-.-",    ".-..",   "--",     "-.",
    "---",   ".--.",   "--.-",   ".-.",    "...",    "-",      "..-",
    "...-",  ".--",    "-..-",   "-.--",   "--..",   ".----",  "..---",
    "...--", "....-",  ".....",  "-....",  "--...",  "---..",  "----.",
    "-----", "--..--", "..--..", "-.-.--", ".-.-.-", "---...", "-....-"
};

const String alphabet[max2] =
{
    "A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N",
    "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z", "1", "2",
    "3", "4", "5", "6", "7", "8", "9", "0", ",", "?", "!", ".", ":", "-"
};

String find_Letter(String morse_input)
{
  for (int i = 0; i < max1; i++) 
  {
    if (morse_input == Morse_code_matrix[i]) 
    {
      return alphabet[i];
    }
  }
  return ""; // Return an empty string if no match is found
}

void setup() 
{ 
  Serial.begin(9600); 
}

void loop()
{
  int ForceValue1 = analogRead(FORCE_SENSOR_1);
  int ForceValue2 = analogRead(FORCE_SENSOR_2);
  int ForceValue3 = analogRead(FORCE_SENSOR_3);

  Serial.println("Sensor 1 = ");
  Serial.println(ForceValue1);
  Serial.println("Sensor 2 = ");
  Serial.println(ForceValue2);
  Serial.println("Sensor 3 = ");
  Serial.println(ForceValue3);

  delay(3000);


  ForceValue1 = analogRead(FORCE_SENSOR_1);
  ForceValue2 = analogRead(FORCE_SENSOR_2);
  ForceValue3 = analogRead(FORCE_SENSOR_3);


  unsigned long current_time = millis();
    
  if (ForceValue3 > 4000)
  {
    sentence += " ";
    Serial.println("Space Added");
    last_input_time = current_time;
    delay(delay_time);
  }
  if (ForceValue1 > 4000) // These Values may need to be changed
  {
    morse_code_sentence += ".";
    Serial.print("Dot added. Morse code: ");
    Serial.println(morse_code_sentence);
    last_input_time = current_time; // Update the last input time
    delay(delay_time); // Delay to prevent multiple readings for the same press
  }
  if (ForceValue2 > 4000)
  {
    morse_code_sentence += "-";
    Serial.print("Dash added. Morse code: ");
    Serial.println(morse_code_sentence);
    last_input_time = current_time;
    delay(delay_time);
  }
  else if (current_time - last_input_time > letter_space_threshold && morse_code_sentence.length() > 0)
  {
    // End of a letter detected
    String character = find_Letter(morse_code_sentence);
    if (character != "")
    {
      sentence += character;
      Serial.print("Character Detected: ");
      Serial.println(character);
    }
    morse_code_sentence = ""; // Reset for the next letter
  }

  Serial.print("Current Sentence: ");
  Serial.println(sentence);
  
  delay(200); // Add a delay to slow down the loop
}





