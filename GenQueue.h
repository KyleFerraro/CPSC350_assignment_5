#pragma once

#include <iostream>
using namespace std;

class GenQueue
{
public:
    GenQueue(); //default constructor
    ~GenQueue();
    //aux functions
    char peek();
    bool isFull();
    bool isEmpty();
    int getSize();
    int numElements;
    char *myQueue; //array
};