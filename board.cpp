#include "Board.h"
#include <iostream>
#include <string>

using namespace std;

Board::Board()
{
    //ctor
}

Board::~Board()
{
    //dtor
}

void Board::createGameBoard()
{
    int x = 0;
    char z = 'a';

    for (int r = 0; r < 18; r++)
    {
        for (int c = 0; c < 18; c++)
        {
            arr[r][c] = ' ';
        }
    }
    for (int c = 2; c < 18; c++)
    {

        if(c % 2!= 0)
        {
            arr[0][c] = ' ';
        }
        else
        {
            string n = to_string(x);
            arr[0][c] = n;
            x = x+1;
        }
    }
    for (int r = 2; r < 18; r++)
    {
        if(r % 2!= 0)
        {
            arr[r][0] = ' ';
        }
        else
        {
            arr[r][0] = z;
            z = z+1;
        }
    }
    for (int r = 1; r < 18; r++)
    {
        for(int c = 1; c < 18; c++)
        {
            if(r % 2!= 0)
            {
                arr[r][c] = '-';
            }
        }
    }
    for (int r = 2; r < 18; r++)
    {
        if (r % 2 == 0)
        {
            for(int c = 1; c < 18; c++)
            {
                if(c % 2 != 0)
                {
                    arr[r][c] = '|';
                }
                else
                {
                    arr[r][c] = ' ';
                }
            }
        }
    }
}

void Board::createOs()
{
    arr[14][10] = 'O';

    for (int r = 16; r < 17; r++)
    {
        for(int c = 2; c < 18; c++)
        {
            if(c % 2 == 0)
            {
                arr[r][c] = 'o';
            }
        }
    }
}

void Board::createXs()
{
    arr[4][8] = 'X';

    for (int r = 2; r < 3; r++)
    {
        for(int c = 2; c < 18; c++)
        {
            if(c % 2 == 0)
            {
                arr[r][c] = 'x';
            }
        }
    }
}

int* Board::coordinateHelper(string row, string col)
{
    char Xrow = row[0];
    int x = 0;

    switch(Xrow)
    {
        case 'a': x = 2;
            break;
        case 'b': x = 4;
            break;
        case 'c': x = 6;
            break;
        case 'd': x = 8;
            break;
        case 'e': x = 10;
            break;
        case 'f': x = 12;
            break;
        case 'g': x = 14;
            break;
        case 'h': x = 16;
            break;
    }

    char Ycol = col[0];
    int y = 0;

    switch(Ycol)
    {
        case '0': y = 2;
            break;
        case '1': y = 4;
            break;
        case '2': y = 6;
            break;
        case '3': y = 8;
            break;
        case '4': y = 10;
            break;
        case '5': y = 12;
            break;
        case '6': y = 14;
            break;
        case '7': y = 16;
            break;
    }
    int arr[2] = {x,y};
    cout << arr[0] << arr[1];
    return arr;
}



//prints game board
void Board::printGameBoard()
{
    for(int r = 0; r < 18; r++) {
        for(int c = 0; c < 18; c++) {
            cout << arr[r][c];
        }
        cout << endl;
    }
}

void Board::movePiece(int startX, int startY, int endX, int endY)
{
    if(startX != endX)
    {
        for (int i = 1; i >= endX ; i++)
        {
            if (arr[i][startY] == " " || arr[i][startY] == "-" )
            {
                //boolean
            }
        }
    }
    else if(startY != endY)
    {
        for (int j = 1; j >= endY ; j++)
        {
            if (arr[startX][j] == " " || arr[startX][j] == "-" )
            {

            }
        }
    }
    //srtring point is different than ending point..starting x is different from your ending x
    //inside of that if statement loop from starting point to ending point legnth i <= x for length
    //arr[iterator][strtY] only looping through one dimension

    if(arr[endX][endY] == " ")
    {
        arr[endX][endY] = arr[startX][startY];
        arr[startX][startY] = " ";
    }
    else
    {
        cout << "bad move" << endl<< endl;
        return;
    }

}
