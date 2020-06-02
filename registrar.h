#pragma once
#include "student.h"

//RegistrarWindow defines each window of the registrar office
class RegistrarWindow{
public:
    bool isFree;
    Student* s;
    int timeLastOccupied;
    int timeLastVacated;
};

class Registrar{
private:
    int numWindows;
    RegistrarWindow* windows;
    int busy_windows;

public:
    Registrar(int numWindows, int totalStudents);
    ~Registrar();
    bool any_window_busy();
    bool any_window_free();
    void add_student(Student* s, int curr_time);
    void minute(int curr_time);
    void printStats(int currTime);
};