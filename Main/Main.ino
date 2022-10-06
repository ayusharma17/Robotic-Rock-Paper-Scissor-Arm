#include <Servo.h>
Servo index, middle, ring, pinkie, thumb;
    int thumb_bent = 30; 
    int thumb_straight = 130;
    int index_bent = 180;
    int index_straight = 0;
    int middle_bent = 90;
    int middle_straight = 180;
    int ring_bent = 0;
    int ring_straight = 180;
    int pinkie_bent = 0;
    int pinkie_straight = 110;

void setup() {
  // put your setup code here, to run once:
  randomSeed(analogRead(A5)); //use unused input pin instead of 0

  index.attach(4);
  middle.attach(5);
  ring.attach(6);
  pinkie.attach(7);
  thumb.attach(3);
  Serial.begin(9600);
          index.write(index_straight);
        middle.write(middle_straight);
        ring.write(ring_straight);
        pinkie.write(pinkie_straight);
        thumb.write(thumb_straight);

}

String playRobot(){
  //change values according to testing



    char choiceList[] = {'r','p','s'};
    int i = random(0,3);
    if (choiceList[i] == 'p'){
        index.write(index_straight);
        middle.write(middle_straight);
        ring.write(ring_straight);
        pinkie.write(pinkie_straight);
        thumb.write(thumb_straight);
        return "paper";
      }
    else if (choiceList[i] == 'r'){
        index.write(index_bent);
        middle.write(middle_bent);
        ring.write(ring_bent);
        pinkie.write(pinkie_bent);
        thumb.write(thumb_bent);
        return "rock";
      }
    else{
        index.write(index_straight);
        middle.write(middle_straight);
        ring.write(ring_bent);
        pinkie.write(pinkie_bent);
        thumb.write(thumb_bent);
        return "scissor";
      }
    
  }

String playUser(int userList[]){
    if (userList[0] == 1 && userList[1] == 0 && userList[2] == 0 && userList[3] == 0 && userList[4] == 0){
        return "paper";
      }
    else if (userList[0] == 1 && userList[1] == 1 && userList[2] == 1 && userList[3] == 1 && userList[4] == 1){
        return "rock";
      }
    else if (userList[0] == 1 && userList[1] == 0&& userList[2] == 0 && userList[3] == 1 && userList[4] == 1){
        return "scissor";
      }
    else{
        return "could not understand the move";
      }
  }

void loop() {
  delay(5000);
  int user_thumb = 0;  
  int user_index = 0;
  int user_middle = 0;
  int user_ring = 0;
  int user_pinkie = 0; 
  Serial.println("3");
  delay(1000);
  Serial.println("2");
  delay(1000);
  Serial.println("1");
  delay(1000);
  
  
  int val0 = analogRead(A0);
  if (val0 > 890){
    user_pinkie = 1;
    }
  int val1 = analogRead(A1);
  if(val1 > 180){
    user_ring = 1;
  }
  int val2 = analogRead(A2);
  if(val2 > 700){
    user_middle = 1;
  }
  int val3 = analogRead(A3);
  if(val3 > 150){
    user_index = 1;
  }
//  int val4 = analogRead(A4);
//  if(val4 > 870){
//    user_thumb = 1;
//  }
  user_thumb = 1;
  int userList[5] = {user_thumb, user_index, user_middle, user_ring, user_pinkie};
  String player_move = playUser(userList);
  Serial.print("User:");
  Serial.println(player_move);
  String robot_move = playRobot();
  Serial.print("Robot:");
  Serial.println(robot_move);
//  if (player_move.equals("could not understand the move")){
//      Serial.println("could not understand the move");
//    }
  if (player_move.equals(robot_move)){
      Serial.println("Its A Draw!");
    }
  else if (player_move.equals("scissor")){
      if (robot_move.equals("rock")){
          Serial.println("You Lose!");
        }
      else if (robot_move.equals("paper")){
          Serial.println("You Win!");
        }
    }
  else if (player_move.equals("paper")){
      if (robot_move.equals("rock")){
          Serial.println("You Win!");
        }
      else if (robot_move.equals("scissor")){
          Serial.println("You Lose!");
        }
    }
  else if (player_move.equals("rock")){
      if (robot_move.equals("paper")){
          Serial.println("You Lose!");
        }
      else if (robot_move.equals("scissor")){
          Serial.println("You Win!");
        }
    }

  
}
