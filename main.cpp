#include <iostream>
#include <string>
#include "Board.h"

using namespace std;

int main()
{
    Board b;

    b.createGameBoard();
    b.createOs();
    b.createXs();
    b.movePiece(16, 2, 6, 2);
    b.printGameBoard();
    b.coordinateHelper("b","0");

    return 0;
}

