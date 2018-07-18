//
// Created by Andy Nguyen on 7/18/18.
//

#ifndef CONNECT4_WIN_H
#define CONNECT4_WIN_H

#include "Board.h"
class Win {
 public:
  bool winCondition(const Board b);
  bool filledBoard(const Board b);
  bool horizontalWin(const Board b);
  bool verticalWin(const Board b);
  bool rightDiagonal(const Board b);
  bool leftDiagonal(const Board b);
  bool declareWinner(const Board b,const int turn);
};

#endif //CONNECT4_WIN_H
