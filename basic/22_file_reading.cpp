#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream myfile ("1st_cpp_txt_file.txt");
    myfile << "files can be tricky";
    myfile.close();
    
    return 0;
}