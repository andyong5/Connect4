//
// Created by Andy Nguyen on 7/17/18.
//

#ifndef CONNECT4_MOVE_H
#define CONNECT4_MOVE_H

#include <string>
#include "Board.h"
class Move {
 public:
  Move();
  void playGame();
  void changeTurn();
  void getValidMove();
  void validLocation();
  void makeMove();
  int getTurn();
 private:
  int turn;
  int location;
  std::string p1;
  std::string p2;
  Board b;
};

#endif //CONNECT4_MOVE_H
