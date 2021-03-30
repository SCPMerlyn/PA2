
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <experimental/filesystem>
using namespace std;
namespace fs = std::experimental::filesystem;

void filterFunc(int argCount, string pathName, string opt, int directC, int fileC, long long spaceT);

int main(int argCount, char *pathName[]) {
    int directCount = 0, fileCount = 0;
    long long spaceTaken = 0;
      if(fs::exists(pathName[1]) == 1) {
        for(auto& p: fs::recursive_directory_iterator(pathName[1])) {
            if(fs::is_regular_file(p)) {
                    fileCount++;
                    spaceTaken += fs::file_size(p);
            } else if (fs::is_directory(p)) {
                directCount++;
            }
        }
     
        if (argCount == 2) {
            filterFunc(argCount,string(pathName[1]), string(pathName[0]), directCount, fileCount, directCount); 
     
        } else if (argCount == 3) {
            filterFunc(argCount,string(pathName[1]), string(pathName[2]), directCount, fileCount, directCount);  
        } else {
            cout << "invalid number of arguments" << endl;
        }
     } else {
         cout << "path does not exist." << endl;
     }

    return 0;

}

