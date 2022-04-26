// Brad Bierworth
// CS3560
// April, 26, 2022
// Final
/**
 * @file counter.cc
 * @brief counts the number of lines and the number of characters
 */

#include<iostream>
#include<fstream>
#include<string>
 
using namespace std;
 
int countLine(string filename);
int countChar(string filename);


/**
 * @brief gets the file and calls the functions countLines() and countChar()
 * 
 * @return int - 0 indicates a successful program run
 */
int main(int argc, char *argv[])
{
	string filename = "Ohio University"; 
    string filename2 = "Athens";  // Name of the file
    if(argv[0] && argv[1])
    {
        filename = argv[0];
        filename2 = argv[1];
        cout << countLine(filename) << " Lines\n";
        cout << countChar(filename2) << " Characters\n";

    } else if (argv[0]  && !argv[1])
    {
        filename = argv[0];
        cout << countLine(filename) << " Lines\n";
        cout << countChar(filename) << " Characters\n";
    }
    
    
 
    countLine(filename);
    countChar(filename);

    cout << countLine(filename) << " Lines\n";
    cout << countChar(filename) << " Characters\n";
 
	return 0;
}