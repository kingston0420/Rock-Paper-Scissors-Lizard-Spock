//This is a game of Rock, Paper Scissors

#include <iostream>
#include <stdlib.h>

int main() {
  srand (time(NULL));
  int computer = rand()%3+1;
  int user = 0;

  //prompt the user for input
  std::cout << "====================\n";
  std::cout << "rock paper scissors!\n";
  std::cout << "====================\n";
 
  std::cout << "1) ✊\n";
  std::cout << "2) ✋\n";
  std::cout << "3) ✌️\n";
 
  std::cout << "shoot! ";

  std::cin >> user;

  if (user == 1)
    std::cout << "you choose: ✊\n";
  else if (user == 2)
    std::cout << "you choose: ✋\n";
  else
    std::cout << "you choose: ✌️\n";

  if (computer == 1)
    std::cout << "cpu choose: ✊\n";
  else if (computer == 2)
    std::cout << "cpu choose: ✋\n";
  else
    std::cout << "cpu choose: ✌️\n";

  if (computer == user){
    std::cout << "it's a tie!\n";
  }
  else if (user==1){
    if (computer==2){
      std::cout << "you lost!\n";
    }
    else if (computer==3){
      std::cout << "you won!\n";
    }
  }
  else if (user==2){
    if (computer==1){
      std::cout << "you won!\n";
    }
    else if (computer==3){
      std::cout << "you lost!\n";
    }
  }
  else if (user==3){
    if (computer==1){
      std::cout << "you lost!\n";
    }
    else if (computer==2){
      std::cout << "you won!\n";
    }
  }

  return 0;
}