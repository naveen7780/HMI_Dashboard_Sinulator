#include "Task4.h"
#include <iostream>
#include <algorithm>
#include <iterator>
using namespace std;
bool compareControls(const Control& a, const Control& b) {
    return a.id < b.id;
}
void task4() {
    vector<Control> controls1 = {
        {3, "slider", "visible"},
        {1, "button", "invisible"},
        {4, "slider", "disabled"},
        {2, "button", "visible"}
    };

    vector<Control> controls2 = {
        {5, "slider", "disabled"},
        {6, "button", "visible"}
    };

    // Sort the controls before merging using the custom comparison function
    sort(controls1.begin(), controls1.end(), compareControls);
    sort(controls2.begin(), controls2.end(), compareControls);

    vector<Control> mergedControls;
    // Merge the sorted controls
    merge(controls1.begin(), controls1.end(), controls2.begin(), controls2.end(), back_inserter(mergedControls), compareControls);

    for (const auto& ctrl : mergedControls) {
        cout << "ID: " << ctrl.id << ", Type: " << ctrl.type << ", State: " << ctrl.state << endl;
    }
}
