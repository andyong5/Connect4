//
// Created by Andy Nguyen on 7/17/18.
//

#include <iostream>
#include "Move.h"

void Move::playGame(){
  b.drawBoard();
  while(!w.winCondition(b))
  {
    getValidMove();
    makeMove();
    b.drawBoard();
    changeTurn();
  }
  w.declareWinner(b,turn);
}
void Move::makeMove() {
  char pieces[]={'X','O'};
  for(int i=5; i>=0; i--){
    if(b.boardCord[i][location-1]==" "){
      b.boardCord[i][location-1]=pieces[turn];
      break;
    }
  }
}
void Move::changeTurn() {
  turn++;
  if(turn>1)
  turn=0;
}
Move::Move() {
  turn=0;
  p1="X";
  p2="O";
}
void Move::getValidMove() {
  do{
    std::cout << "Player " << turn+1
              << " enter a column between 1 and 7 to play your piece" << std::endl;
    std::cin >> location;
  }while(!validMove());
}
bool Move::validMove() {
  if(location<0 || location>8) {
    return false;
  }
  if(b.boardCord[0][location-1]!=" ") {
    return false;
  }
  return true;
}
const Board &Move::getB() const {
  return b;
}

