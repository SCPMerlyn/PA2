
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <experimental/filesystem>
using namespace std;
namespace fs = std::experimental::filesystem;

int main(int argCount, char **pathName) {

    if(string(pathName[1]) == "-d" ) {
        system("grep \"directories in\"");
     } else if(string(pathName[1]) == "-f") {
        system("grep \"number of files in\"");
     } else if(string(pathName[1]) == "-b") {
        system("grep \"bytes\"");
     } else{
        cout << "Not a valid argument." << endl;
     }

    return 0;
}

