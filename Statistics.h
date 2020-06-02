#pragma once

#include "student.h"
#include "registrar.h"

class Statistics {
private:
    void finishStudent(Student *student, int currTime);
    void windowOccupied(RegistrarWindow *w, int currTime);
    void windowEmpty(RegistrarWindow *w, int currTime);
    void printStats(int currTime, RegistrarWindow* windows);

public:
    Statistics(int studentCount, int numWindows);
    ~Statistics();
    int wait;
    int idleTime;
    int mean;
    int median;
    double meanWindowIdleTime;
    int longestWait;
    int waitOver10;
    int longestWindowIdleTime;
    int windowsIdleOver5Min;
    int totalWait;
    int studentCount;
    int totalWindowIdleTime;
    int totalWindowBusyTime;
    int* studentWait;
    int currStudent;
    int numWindows;

};