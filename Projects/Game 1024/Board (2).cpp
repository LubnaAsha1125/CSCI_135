#include "Board.hpp"
#include <iomanip>
#include <iostream>
#include <vector>
#include <random>
#include <algorithm>
using namespace std;


void Board::print() const
{
    for(unsigned int i = 0; i < numRows; i++){
        cout << '+';
        for(unsigned int j = 0; j < numCols; j++)
            cout << "----+";        
        cout << '\n';
        cout << '|';
        for(unsigned int j = 0; j < numCols; j++)
            if(panel[i][j] == 0) cout << right <<setw(4) << ' ' << '|';
            else cout << right << setw(4) << panel[i][j] << '|';
        cout << '\n';
    }
    cout << '+';
    for(unsigned int j = 0; j < numCols; j++)
        cout << "----+";
    cout << '\n';
}

void mergeList(vector<unsigned int> &myList)
{
    vector<unsigned int> new_list;
    for(unsigned int i = 0; i < myList.size(); i++){
        if(i == myList.size()-1){
            new_list.push_back(myList[i]);
            continue;            }
        if(myList[i] == myList[i+1]){
            new_list.push_back(myList[i] * 2);
            i++;
            continue;
        }
        new_list.push_back(myList[i]);
    }
    myList = new_list;
}

void Board::pressUp()
{
    for(unsigned int i = 0; i < numCols; i++){
        vector<unsigned int> myList;
        for(unsigned int j = 0; j < numRows; j++)
            if(panel[j][i] != 0){
                myList.push_back(panel[j][i]);
                panel[j][i] = 0;
            }
        mergeList(myList);
        for(unsigned int j = 0; j < myList.size(); j++)
            panel[j][i] = myList[j];
    }
    int row, col;
    selectRandomCell(row, col);
}

void Board::pressDown()
{
    for(unsigned int i = 0; i < numCols; i++){
        vector<unsigned int> myList;
        for(unsigned int j = 0; j < numRows; j++)
            if(panel[j][i] != 0){
                myList.push_back(panel[j][i]);
                panel[j][i] = 0;
            }
        reverse(myList.begin(), myList.end());
        mergeList(myList);
        for(int j = myList.size() - 1; j >= 0; j--)
            panel[numRows - j - 1][i] = myList[j];
    }
    int row, col;
    selectRandomCell(row, col);
}

void Board::pressLeft()
{
    for(unsigned int i = 0; i < numRows; i++){
        vector<unsigned int> myList;
        for(unsigned int j = 0; j < numCols; j++)
            if(panel[i][j] != 0){
                myList.push_back(panel[i][j]);
                panel[i][j] = 0;
            }
        mergeList(myList);
        for(unsigned int j = 0; j < myList.size(); j++)
            panel[i][j] = myList[j];
    }
    int row, col;
    selectRandomCell(row, col);
}

void Board::pressRight()
{
    for(unsigned int i = 0; i < numRows; i++){
        vector<unsigned int> myList;
        for(unsigned int j = 0; j < numCols; j++)
            if(panel[i][j] != 0){
                myList.push_back(panel[i][j]);
                panel[i][j] = 0;
            }
        reverse(myList.begin(), myList.end());
        mergeList(myList);
        for(unsigned int j = 0; j < myList.size(); j++)
            panel[i][numCols - j - 1] = myList[j];
    }
    int row, col;
    selectRandomCell(row, col);
}