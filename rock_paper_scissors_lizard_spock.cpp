//This is a game of Rock, Paper Scissors, Lizard, Spock

#include <iostream>
#include <stdlib.h>

int main() {
  srand (time(NULL));
  int computer = rand()%5+1;
  int user = 0;

  //prompt the user for input
  std::cout << "====================\n";
  std::cout << "rock paper scissors lizard spock!\n";
  std::cout << "====================\n";
 
  std::cout << "1) ✊\n";
  std::cout << "2) ✋\n";
  std::cout << "3) ✌️\n";
  std::cout << "4) lizard\n";
  std::cout << "5) spock\n\n";
 
  std::cout << "shoot! ";

  std::cin >> user;

  if (user == 1)
    std::cout << "you choose: ✊\n";
  else if (user == 2)
    std::cout << "you choose: ✋\n";
  else if (user == 3)
    std::cout << "you choose: ✌️\n";
  else if (user == 4)
    std::cout << "you choose: lizard\n";
  else 
    std::cout << "you choose: spock\n";

  if (computer == 1)
    std::cout << "cpu choose: ✊\n";
  else if (computer == 2)
    std::cout << "cpu choose: ✋\n";
  else if (computer == 3)
    std::cout << "cpu choose: ✌️\n";
  else if (computer == 4)
    std::cout << "cpu choose: lizard\n";
  else 
    std::cout << "cpu choose: spock\n";


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
    else if (computer==4){
      std::cout << "you won!\n";
    }
    else if (computer==5){
      std::cout << "you lost!\n";
    }
  }
  else if (user==2){
    if (computer==1){
      std::cout << "you won!\n";
    }
    else if (computer==3){
      std::cout << "you lost!\n";
    }
    else if (computer==4){
      std::cout << "you lost!\n";
    }
    else if (computer==5){
      std::cout << "you won!\n";
    }
  }
  else if (user==3){
    if (computer==1){
      std::cout << "you lost!\n";
    }
    else if (computer==2){
      std::cout << "you won!\n";
    }
    else if (computer==4){
      std::cout << "you won!\n";
    }
    else if (computer==5){
      std::cout << "you lost!\n";
    }
  }
  else if (user==4){
    if (computer==1){
      std::cout << "you lost!\n";
    }
    else if (computer==2){
      std::cout << "you won!\n";
    }
    else if (computer==3){
      std::cout << "you lost!\n";
    }
    else if (computer==5){
      std::cout << "you won!\n";
    }
  }
  else if (user==5){
    if (computer==1){
      std::cout << "you won!\n";
    }
    else if (computer==2){
      std::cout << "you lost!\n";
    }
    else if (computer==3){
      std::cout << "you won!\n";
    }
    else if (computer==4){
      std::cout << "you lost!\n";
    }
  }

  return 0;
}