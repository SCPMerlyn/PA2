
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <experimental/filesystem>
using namespace std;
namespace fs = std::experimental::filesystem;

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
       
        cout<< "The total number of directories in directory " << pathName[1] <<   " is:  " << directCount <<endl;
        cout << "The total number of files in directory " << pathName[1] <<   " is:  " << fileCount <<endl;
        cout << "The total number of bytes occupied by all files in directory " << pathName[1] <<   " is: " << spaceTaken <<endl;
     } else {
         cout << "path does not exist." << endl;
     }


    return 0;

}

