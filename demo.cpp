#include <iostream>
#include <fstream>   //for file handling fstream header file is included.
using namespace std;
int main()
{
    ofstream outfile ("my.txt",ios::trunc); //this ios::trunc mode removes the content                  of the my.txt file without
                                         //erasing the data in it.

//ios::trunc is the default mode we can use it without writing ios::trunc also.
    
    outfile<<"Hello"<<endl; //adding Hello in the my.txt file.
    outfile <<"25"<<endl;   //adding 25 in the my.txt file.
    outfile.close();  // this command closes the stream and the file is free form the program.
}