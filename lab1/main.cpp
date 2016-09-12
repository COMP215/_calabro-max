#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <algorithm>
#include <fstream>

using namespace std;

void createRandomStrings()
{
    string alphabet;
    alphabet = ("abcdefghijklmnopqrstuvwxyz");

    int random_num;

    int random_string_length;
    random_string_length = 90;//rand() % 9 + 8;

    //File Stuff
    ofstream outfile;
    outfile.open("theData.dat");

    int i=0;
    while ( i<random_string_length )
    {
        random_num = rand() % 26 + 0;
        outfile << alphabet[random_num];
        i=i+1;
    }

    outfile.close();

}

void sortFileAlphabetically()
{

    ifstream infile;
    infile.open("theData.dat");
    string line;

    while ( getline (infile,line) )
    {
        std::sort(line.begin(), line.end());
        cout << line << '\n';
    }
    infile.close();
}


int main()
{
    srand (time(NULL));

    for (int i=0; i<3; i=i+1 )
    {
        createRandomStrings();
        sortFileAlphabetically();
    }

    return 0;
}
