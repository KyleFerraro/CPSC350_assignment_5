#include <iostream>
#include <fstream>
#include <stack>
#include <string>
#include "Registrar.h"
#include "GenQueue.h"
#include "student.h"
#include "ListNode.h"

using namespace std;

Registrar* reg;

int currTime = 0;
fstream inputFile;

// read the input file, one line at a time
int read_num(){
    int num;
    string line;
    getline(inputFile, line);
}

int main(int argc, char** argv){
    string fileName = argv[1];
    int num_windows = read_num();
    currTime--; 
}