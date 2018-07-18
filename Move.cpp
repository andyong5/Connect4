//
// Created by Andy Nguyen on 7/17/18.
//

#include <iostream>
#include "Move.h"
void Move::playGame(){
  b.drawBoard();
  int count=0;
  while(count!=5)
  {
    getValidMove();
    makeMove();
    b.drawBoard();
    changeTurn();
    count++;
  }

}
void Move::makeMove() {
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
              << " choose where to place your piece" << std::endl;
    std::cin >> location;
  }while(location<0  && location>8);
}
