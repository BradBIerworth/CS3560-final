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
int main()
{
	string filename = "text.txt";   // Name of the file

 
    countLine(filename);
    countChar(filename);

    cout << countLine(filename) << " Lines\n";
    cout << countChar(filename) << " Characters\n";
 
	return 0;
}