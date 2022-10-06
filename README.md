# Robotic-Rock-Paper-Scissor-Arm
Hey! This Github repository is to document my process of me building my rock paper scissor hand and to help anyone interested make one of their own.
Before I begin, the hand design is not mine.

[Original](https://create.arduino.cc/projecthub/laurencemlai/diy-glove-controlled-robotic-hand-ff5d63?ref=user&ref_id=1858882&offset=0) 

## Building The Glove
The glove is worn by the user and is used to read user input. It is equipped with 5 flex sensors which send input to the Arduino. Building the glove was easier as compared to building the robotic hand, however, building the glove had it's own ups and downs.
### Flex Sensors
The first thing you need are the flex sensors. I chose to create my own flex sensors but store bought flex sensors should work just fine. 
#### What You need (Links ):
* Couple sheets of paper
* A pencil
* [A transparent flexible sheet](https://www.amazon.com/Polystyrene-Flexible-Modeling-Projects-Paintings/dp/B0968YG7ZR/ref=sr_1_13?crid=3H9RM80XCE6C7&keywords=flexible%2Bperspex%2Bsheet&qid=1658641150&sprefix=flexible%2Bperspex%2Bsheet%2Caps%2C256&sr=8-13&th=1) (You only need 1 or 2 depending on how many flex sensors you want to make)
* [Multi Core Wires](https://www.amazon.com/Elegoo-EL-CP-004-Multicolored-Breadboard-arduino/dp/B01EV70C78/ref=sr_1_6?crid=26UAPN9GRYGZ1&keywords=jumper%2Bwires&qid=1658641292&sprefix=jumper%2Bwire%2Caps%2C292&sr=8-6&th=1) (You need 2 per flex sensors but they can get ruined when you try and strip them so get extra)

I don't think I'll be able explain how to make these better than this [video](https://www.youtube.com/watch?v=SJNYbSpvlP8).

Create 5 such flex sensors. After making each flex sensor make sure to test it using the Flex_Sensor_Tester file. All you need to check is if the number is changing when the flex sensor is bending.

Attach each flex sensor to a finger on the glove. Make sure you use a glove that has a bit of structure. It's easier to attach the flex sensors to these kind of gloves and it is less likely for flex sensors to fall out while putting on and taking of the glove.

![image](https://user-images.githubusercontent.com/102592750/194369497-d663d30d-a414-4fc3-b53f-deb7d9cb19a5.png)


Follow this Circuit diagram for the wiring of the glove. Now, to determine the bend limit of each finger run the Bend_Limit_Tester file. Note a suitable number for each of the fingers past which the finger is surely bent.
Now, run the Glove_test file and enter your determined limits. Make sure all of this is working fine and your done with the glove!

## Building The Robotic Hand
This was definitely the hardestand part of the whole project. I had to restart this step so many times and wasted so many resources here. Most of these could've been prevented if I knew what I now know.

### What You Need:
1) 5 - 10 Springs a bit longer than a finger (before you start looking for these read the section on springs)
2) Foam boards (before you start looking for these read the section on foam)
3) 5 Servos
4) String 
5) Masking or electrical tape

#### Springs:
Finding springs the length of a finger is not easy as these are not a standard size. Unless you know a somewhere where you can get a large variety of springs I don't think you will be able to find these. One option is soldering. But, if you're like me and aren't really good at soldering I wouldn't recommend this method. The springs od break at the solder joints and the final spring was usually bent. In the end what ended up working better for me was to use compressed springs around 3cm long and stretch them out.
#### Foam
Make sure to use foam that is rigid. Do not use the soft foam as these end up tearing very easily. Make sure the foam board is around the length of your forearm. 
