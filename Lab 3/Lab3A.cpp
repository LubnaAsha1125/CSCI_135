//extra comment :D <3
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
using namespace std;

int main()
{
    ifstream fin ("Current_Reservoir_Levels.tsv");
    if (fin.fail())
    {
        cerr << "File cannot be opned for reading." << endl;
        exit(1); // exit if failed to open the file
    }

    string junk; // new string variable
    getline (fin, junk); 
    // read one line from the file and 
    //assign it to variable 'junk'

    double EastStorage;
    string in_date;
    cout << "Enter date: " << endl;
    cin >> in_date;
    string Date;
    
    while (fin >> Date >> EastStorage)
    //this loop reads the file line by line
    //extracting 2 values on each iteration
    {
        fin.ignore(INT_MAX, '\n'); 
        //skips to the end of line, 
        //ignoring the remaining columns
        if (in_date == Date)
        {
            cout << "East basin storage: " << EastStorage << " billion gallons" << endl;
        }
    }
    fin.close();
    return 0;
}