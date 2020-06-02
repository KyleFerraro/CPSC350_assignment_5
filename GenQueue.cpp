#include "GenQueue.h"

GenQueue::GenQueue() {
    numElements = 0;
}

GenQueue::~GenQueue(){
    delete myQueue;
}

bool GenQueue::isEmpty(){
    return (numElements == 0);
}

int GenQueue::getSize(){
    return numElements;
}
