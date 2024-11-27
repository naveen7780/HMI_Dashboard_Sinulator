#include "Task3.h"
#include <iostream>
#include <algorithm>
#include <cstdlib>
using namespace std;
void task3() {
    vector<Control> controls = {
        {1, "button", "visible"},
        {2, "slider", "disabled"},
        {3, "button", "invisible"},
        {4, "slider", "visible"},
        {5, "button", "disabled"},
        {6, "slider", "invisible"},
        {7, "button", "visible"},
        {8, "slider", "disabled"},
        {9, "button", "invisible"},
        {10, "slider", "visible"}
    };

    vector<Control> backupControls = controls;

    fill(controls.begin(), controls.end(), Control{ 0, "button", "disabled" });
    cout << "All controls set to disabled." << endl;

    generate(controls.begin(), controls.end(), []() {
        return Control{ rand() % 10, rand() % 2 == 0 ? "button" : "slider", rand() % 3 == 0 ? "visible" : rand() % 2 == 0 ? "invisible" : "disabled" };
        });

    transform(controls.begin(), controls.end(), controls.begin(), [](Control& ctrl) {
        if (ctrl.type == "slider") {
            ctrl.state = "invisible";
        }
        return ctrl;
        });
}
