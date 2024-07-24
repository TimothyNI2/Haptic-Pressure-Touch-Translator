# Haptic-Translator
Haptic Translator creates the opportunity to translate formulated Morse code words and sentences through simple haptic touches of your thumb, index and middle finger.


#How does it work?
When the user puts pressure on either its thumb, index or middle finger, the value returned from the sensor is sent to the Arduino board. Each sensor is set up specifically for each Morse code character; thumb for space, index finger for ".", and middle finger for "-". Furthermore, with each tap, certain characters show up to combine for a certain letter. If the user is completed with making their letter, they simply just wait 2 seconds to time out the set timer and the board will convert the combined characters into a letter. This can be continued until the user is satisfied with their word or sentence.




