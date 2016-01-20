#include <fstream>
#include <iostream>
#include <cstdlib>   // for exit()

int main()
{
    using namespace std;

    // ofstream is used for writing files
    // we'll make a file called Sample.dat
    ofstream outf("Sample.dat");

    // If we couldn't open the output file stream for writing 
    if(!outf)
    {
        // Print an error and exit
        cerr << "Uh oh, Sample.dat could not be opened for writing!" << endl;
        exit(1);
    }

    // We'll write two lines into this file
    outf << "This is line 1" << endl;
    outf << "This is line 2" << endl;
    outf.close();    // explicitly close the file - important to prevent data loss

    return 0;

    // When outf goes out of scope, the ofstream 
    // destructer will close the file
}