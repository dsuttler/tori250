#ifndef TORI_250_BOARD_H
#define TORI_250_BOARD_H
#ifndef BOARD_H
#define BOARD_H
#include <string>

using namespace std;

class Board
{
public:
    Board();
    virtual ~Board();
    void createGameBoard();
    void createOs();
    void createXs();
    void printGameBoard();
    int* coordinateHelper(string row, string col);
    void movePiece(int startX, int startY, int endX, int endY);
    //string movement();

private:
    string arr[18][18];
};

#endif // BOARD_H
#endif //TORI_250_BOARD_H
