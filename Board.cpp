//
// Created by Andy Nguyen on 7/17/18.
//

#include <iostream>
#include "Board.h"

void Board::drawBoard() {
  for(int i=0; i<6; i++)
  {
    for(int g=0;g<7; g++)
    {
      std::cout<<"|";
      std::cout<<boardCord[i][g];
      if(g==6)
        std::cout<<"|";
    }
    std::cout<<std::endl;
  }
  std::cout<<" 1 2 3 4 5 6 7"<<std::endl;
}
Board::Board(){
  for(int i=0; i<6; i++)
  {
    boardCord.push_back(std::vector<std::string>());
    for(int g=0;g<7; g++)
    {
      boardCord[i].push_back(" ");
    }
  }
}
