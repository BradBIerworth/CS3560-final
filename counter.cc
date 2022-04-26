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
 
	return 0;
}


/**
 * @brief counts the number of lines in the text files
 * 
 * @return int count - the number of lines in the text file
 */
int countLine(string filename)
{
    string line;   // To read each line from code
	int count=0;    // Variable to keep count of each line
	
	ifstream mFile (filename);   
	
	if(mFile.is_open()) 
	{
		while(mFile.peek()!=EOF)
		{
			getline(mFile, line);
			count++;
		}
		mFile.close();
	} else
    {
        for (int i = 0; i < filename.length(); i++)
        {
            getline(mFile, line);
            count++;
        }  
    }
    
    return count;
}