#include "Task2.h"
#include <iostream>
#include <algorithm>
using namespace std;
void task2() {
    vector<string> dynamicWidgets = { "Speedometer", "Tachometer", "FuelGauge", "GPS", "Climate" };
    set<string> staticWidgets = { "Logo", "WarningLights", "Battery" };

    for (auto it = dynamicWidgets.begin(); it != dynamicWidgets.end(); ++it) {
        cout << "Dynamic widget: " << *it << endl;
    }

    auto searchWidget = staticWidgets.find("WarningLights");
    if (searchWidget != staticWidgets.end()) {
        cout << "Found static widget: " << *searchWidget << endl;
    }

    vector<string> allWidgets;
    copy(dynamicWidgets.begin(), dynamicWidgets.end(), back_inserter(allWidgets));
    copy(staticWidgets.begin(), staticWidgets.end(), back_inserter(allWidgets));

    auto foundWidget = find(allWidgets.begin(), allWidgets.end(), "GPS");
    if (foundWidget != allWidgets.end()) {
        cout << "Found widget: " << *foundWidget << endl;
    }
}
