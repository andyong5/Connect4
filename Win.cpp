//
// Created by Andy Nguyen on 7/18/18.
//

#include <iostream>
#include "Win.h"
bool Win::winCondition(const Board b) {
  return filledBoard(b) || horizontalWin(b) || verticalWin(b);
}
bool Win::filledBoard(const Board b) {
  for(int i=0; i<6; i++) {
    for (int g = 0; g < 7; g++) {
      if (b.boardCord[i][g] == " ")
      return false;
    }
  }
  return true;
}
bool Win::horizontalWin(const Board b) {
  int countx=0;
  int county=0;
  for(int i=0; i<6; i++) {
    for (int j = 0; j < 7; j++)
    {
      if (b.boardCord[i][j] == "X")
      {
        for(int g=j;g<j+4;g++) {
          if(b.boardCord[i][g] == "X") {
            countx++;
            if(countx==4)

              return true;
          }
          else {
            countx=0;
            break;
          }
        }
      }
      if(b.boardCord[i][j] == "O"){
        for(int g=j;g<j+4;g++) {
          if (b.boardCord[i][g] == "O") {
            county++;
            if (county == 4)
              return true;
          } else {
            county = 0;
            break;
          }
        }
      }
    }
  }
  return false;
}
bool Win::verticalWin(const Board b) {
  int countx=0;
  int county=0;
  for(int i=0; i<6; i++) {
    for (int j = 0; j < 7; j++)
    {
      if (b.boardCord[i][j] == "X")
      {
        for(int k=i;k<4;k++) {
          if(b.boardCord[k][j] == "X") {
            countx++;
            if(countx==3)
              return true;
          }
          else {
            countx=0;
            break;
          }
        }
      }
      if(b.boardCord[i][j] == "O"){
        for(int k=i;k<4;k++) {
          if (b.boardCord[k][j] == "O") {
            county++;
            if (county == 4)
              return true;
          } else {
            county = 0;
            break;
          }
        }
      }
    }
  }
  return false;
}
bool Win::rightDiagonal(const Board b) {
  return false;
}
bool Win::leftDiagonal(const Board b) {
  return false;
}
bool Win::declareWinner(const Board b,const int turn) {
  if(winCondition(b)) {
    if(turn==0)
      std::cout<<"Player 2 wins"<<std::endl;
    else
      std::cout<<"Player 1 wins"<<std::endl;
  }
  else
    std::cout<<"Tie Game!\n";
}
