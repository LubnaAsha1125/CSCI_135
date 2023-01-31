#include "Board.hpp"
#include <iomanip>
#include <iostream>
#include <vector>
#include <random>
using namespace std;
/*
Board::Board()
{
    numRows = 3;
    numCols = 3;

    for (int i=0; i<numRows; i++)
    {
        for (int j=0; j<numCols; j++)
        {
            panel[i][j];
        }
    }
    max = 0;
    target = 32;
}

Board::Board(int m)
{
    if (m >= 1)
    {
        numRows = m;
        numCols = m;
    }
    else
    {
        numRows = 3;
        numCols = 3;
    }
    
    for (int i=0; i<numRows; i++)
    {
        for (int j=0; j<numCols; j++)
        {
            panel[i][j];
        }
    }

    max = 0;
    target = 32;
}

Board::Board(int m, int n)
{
    if ((m >= 1) && (n >= 1))
    {
        numRows = m;
        numCols = n;
    }
    else
    {
        numRows = 3;
        numCols = 3;
    }
    
    for (int i=0; i<numRows; i++)
    {
        for (int j=0; j<numCols; j++)
        {
            panel[i][j];
        }
    }
    
    max = 0;
    target = 32;
}
*/

Board::~Board()
{
    for(int i = 0; i < numRows; i++)
        delete [] panel[i];
    delete[] panel;
    panel = nullptr;

}

void Board::print() const
{
    for(unsigned int i = 0; i < numRows; i++){
        std::cout << '+';
        for(unsigned int j = 0; j < numCols; j++)
            std::cout << "----+";        
        std::cout << '\n';
        std::cout << '|';
        for(unsigned int j = 0; j < numCols; j++)
            if(panel[i][j] == 0) std::cout << std::right <<std::setw(4) << ' ' << '|';
            else std::cout << std::right <<std::setw(4) << panel[i][j] << '|';
        std::cout << '\n';
    }
    std::cout << '+';
    for(unsigned int j = 0; j < numCols; j++)
        std::cout << "----+";
    std::cout << '\n';
}

bool Board::noAdjacentSameValue() const
{
    for(unsigned int i = 0; i < numRows-1; i++)
        for(unsigned int j = 0; j < numCols; j++)
            if(panel[i][j] == panel[i+1][j]) return false;

    for(unsigned int i = 0; i < numRows; i++)
        for(unsigned int j = 0; j < numCols-1; j++)
            if(panel[i][j] == panel[i][j+1]) return false;

    return true;
}

void Board::selectRandomCell(int& row, int& col)
{
    vector<int> emptyCells;
    for(unsigned int i = 0; i < numRows; i++)
        for(unsigned int j = 0; j < numCols; j++)
            if(!panel[i][j])
                emptyCells.push_back(i * numCols + j);
    
    if(!emptyCells.size() && noAdjacentSameValue())
            cout << "Game over. Try again." << '\n';
    
    else 
    {
        unsigned int emptyCell = emptyCells[rand() % emptyCells.size()];
        row = emptyCell / numCols;
        col = emptyCell % numCols;
        panel[row][col] = 1;
        print();
        if(!(emptyCells.size() - 1) && noAdjacentSameValue())
            cout << "Game over. Try again." << '\n';
    }
}