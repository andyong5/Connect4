//
// Created by Andy Nguyen on 7/17/18.
//

#ifndef CONNECT4_BOARD_H
#define CONNECT4_BOARD_H

#include <vector>
class Board {
 public:
  Board();
  void drawBoard();
  std::vector<std::vector<std::string>> boardCord;
};

#endif //CONNECT4_BOARD_H
