#include "Statistics.h"
#include "registrar.h"
#include <iostream>

using namespace std;

int mean = 0;
int median = 0;
int longestWait = 0;
int waitOver10 = 0;
int meanWindowIdleTime = 0;
int longestWindowIdletime = 0;
int windowsIdleOver5Min = 0;
int totalWait = 0;
int totalWindowIdleTime = 0;
int totalWindowBusyTime = 0;
int currStudent = 0;



//when students leave window

Statistics::Statistics(int studentCount, int numWindows){
    if(wait > longestWait){
        longestWait = wait;
    }
    if(wait > 10){
        waitOver10++;
    }
    totalWait += wait;
    studentWait[currStudent++] = wait;

    totalWindowIdleTime += idleTime;
    if(idleTime > longestWindowIdletime){
        longestWindowIdletime = idleTime;
    }
    if(idleTime > 5) {
        windowsIdleOver5Min++;
    }
}


//when a window is empty
void Statistics::windowEmpty(RegistrarWindow *w, int currTime){
    int busyTime = currTime - w->timeLastOccupied;
    totalWindowBusyTime += busyTime;
}

void Statistics::printStats(int currTime, RegistrarWindow* windows){
    cout << "Mean Wait Time: " << (totalWait / studentCount) << endl;
    cout << "Median Wait Time: " << (studentWait[studentCount/2]) << endl;
    cout << "Longest Wait Time: " << longestWait << endl;
    cout << "Students Waiting 10+ Minutes: " << waitOver10 << endl;
    cout << "Mean Idle Time: " << (totalWindowIdleTime / numWindows) << endl;
    cout << "Longest Idle Time: " << longestWindowIdletime << endl;
    cout << "Idle Windows For 5+ Minutes: " << windowsIdleOver5Min << endl;
}
