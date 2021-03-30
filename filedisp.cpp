//comment
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <experimental/filesystem>
using namespace std;
namespace fs = std::experimental::filesystem;

void displayVersion();

void filterFunc(int argCount, string pathName, string opt, int directC, int fileC, long long spaceT) {
    displayVersion();
    if(argCount == 3) {
    if(opt.compare("-d") == 0) {
        cout<< "The total number of directories in directory " << pathName <<   " is:  " << directC <<endl;
     } else if(opt.compare("-f") == 0) {
        cout << "The total number of files in directory " << pathName <<   " is:  " << fileC <<endl;
     } else if(opt.compare("-b") == 0) {
         cout << "The total number of bytes occupied by all files in directory " << pathName <<   " is: " << spaceT <<endl;
     } else{
        cout << "Not a valid argument." << endl;
     }
    } else if (argCount == 2) {
        cout<< "The total number of directories in directory " << pathName <<   " is:  " << directC <<endl;
        cout << "The total number of files in directory " << pathName <<   " is:  " << fileC <<endl;
        cout << "The total number of bytes occupied by all files in directory " << pathName <<   " is: " << spaceT <<endl;

    } else {
       cout << "Invalid number of arguments" << endl; 
    }
}

