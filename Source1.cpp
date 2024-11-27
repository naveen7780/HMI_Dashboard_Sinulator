#include "Task1.h"
#include <iostream>
#include <algorithm>
#include<iostream>
using namespace std;
void task1() {
    vector<Control> controls = {
        {1, "button", "visible"},
        {2, "button", "invisible"},
        {3, "slider", "disabled"},
        {4, "button", "visible"},
        {5, "slider", "invisible"},
        {6, "button", "disabled"},
        {7, "slider", "visible"},
        {8, "button", "invisible"},
        {9, "slider", "visible"},
        {10, "slider", "disabled"}
    };

    for_each(controls.begin(), controls.end(), [](const Control& ctrl) {
        cout << "ID: " << ctrl.id << ", Type: " << ctrl.type << ", State: " << ctrl.state << endl;
        });

    // Other algorithms like find, count, etc.
}
