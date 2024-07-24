# Haptic-Translator
Haptic Translator provides the opportunity to translate formulated Morse code words and sentences using simple, haptic touches on your thumb, index, and middle finger.


# How does it work?
When the user puts pressure on either its thumb, index or middle finger, the value returned from the sensor is sent to the Arduino board. Each sensor is set up specifically for each Morse code character; thumb for space, index finger for ".", and middle finger for "-". Furthermore, with each tap, certain characters show up to combine for a certain letter. If the user has completed making their letter, they wait 2 seconds to time out the set timer and the board will convert the combined characters into a letter. This can be continued until the user is satisfied with their word or sentence.


# List of Materials 
- [3in x 2in Breadboard](https://www.amazon.ca/CANADUINO%C2%AE-Solderless-Breadboards-400-Points/dp/B0C2M5SRGZ/ref=sr_1_124?dib=eyJ2IjoiMSJ9.PIFA5xN2Jj2N4xhQ8QQH4oasNEPLmbp5Kkv3GsJW_g1K2E1XY9kOZ1YIObIwI9Irnc69p1JvkagRWHerWWr2bvsaw7phsaxgh4faqOgUCZiAMhPQivfZh5aWnSydvcqzGqfFTIccHpnDFEyG8FOtCb4NX7w-R-twSxaM66NsKVr6vf4EUcVxSJZXowgoTG-ugQMM3TTcgLtayl3GwRXRhLtigNo1EETCj9kk9e7capDC3w89_EFtPxSXsxuswcRcbNK4sA5-YPZgXqojOUG3Yf_D1ZdaWf8PiTSct8d0Mp4.cDyYGtkMt1uhi5x5c8MJAZ4L4bE08TScKTs43v6Yw_c&dib_tag=se&keywords=breadboard&qid=1721779992&sr=8-124) x1
- [Arduino Nano ESP32](https://store-usa.arduino.cc/products/nano-esp32?selectedStore=us) x1
- [Pressure Sensor](https://www.amazon.ca/Resistive-Pressure-Sensing-Resistor-Arduino/dp/B074QLDCXQ/ref=sr_1_48?dib=eyJ2IjoiMSJ9.3C_rCLQUiSB3yDaqKNmEgAkAKyQEGxMtT-uBA0tyFMdbDj2FP-MLdfZHJ_rsfcNtxrA46g4F7dJNeON6ryf6xSOU5E2o7QMVkcC7HBz_KCjgzPyll-tw5Uk41mFlprQSdVR7QCikTMYeaZtBTfbw5NcsqgMGYGKrLzyAwBB5kZ7EMBX5pyaxNqY5igxQ63oZdrVNybtNU7Nvy-OfPkP8_C5UK-RXQUU9Xoq0vM42Ojlf1Ex14Q4t6GTBvsJBFPbUpRq9TM4AN5hQSnSrL3ty4_5WIQojBJuiMLjYn0FLVkk.I0fiI71GUhc5i9Vu9mYfrNTcRT1b4Zr7a9joZLv9aCI&dib_tag=se&keywords=Pressure+Sensor&qid=1721780193&sr=8-48) x3
- [Jumper Wires](https://www.amazon.ca/IZOKEE-240pcs-Solderless-Breadboard-Arduino/dp/B08151TQHG/ref=sr_1_5?crid=14QFZQNYWBW4&dib=eyJ2IjoiMSJ9.Wh9JUafydRlTlmY0ctqdTmibVyB-B5qdW2mxqlSCncCQqizSLH37ClCJkDapbNC6ox5Em82qFnws3pKNSlzkmjZL7Pkm8Bo9mBNvkGW5y0fbvCJhg9_j_5nEoxoM7Sj0xWiah6WZB6q5ykPV1fekkTYs9yhb8tMKtJ-baZ7fms2e09--0oqnJWfRWg8Q9A1J463N2V7RtuorcbG0oYZqRu0CWOByizgQcKEgSThv4GcSD1nVIpYAHuuLgCNfbLOBFbBHFhJ-mEZuQiCIgdS_5LQz3OwHv5qn7pXLBx2ObTE.wuocWnivZReh7g67MqyKoa3ahEYAEoyupv2i7VdSsBg&dib_tag=se&keywords=breadboard+wires&qid=1721780310&sprefix=bradboard+wires%2Caps%2C83&sr=8-5) x 13
- 3D Printer Filament 

.timeline


