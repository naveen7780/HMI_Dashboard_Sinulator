#include "Task5.h"
#include <iostream>
#include<vector>
#include <memory>
using namespace std;
class ModeObserver {
public:
    virtual void update(const string& mode) = 0;
};

class Button : public ModeObserver {
public:
    void update(const string& mode) override {
        if (mode == "Night") {
            cout << "Button visibility adjusted for Night mode." << endl;
        }
    }
};

class Slider : public ModeObserver {
public:
    void update(const string& mode) override {
        if (mode == "Night") {
            cout << "Slider visibility adjusted for Night mode." << endl;
        }
    }
};

class HMISystem {
private:
    static unique_ptr<HMISystem> instance;
    vector<shared_ptr<ModeObserver>> observers;

    HMISystem() {}

public:
    static HMISystem& getInstance() {
        if (!instance) {
            instance.reset(new HMISystem());
        }
        return *instance;
    }

    void addObserver(shared_ptr<ModeObserver> observer) {
        observers.push_back(observer);
    }

    void setMode(const string& mode) {
        for (auto& observer : observers) {
            observer->update(mode);
        }
    }
};

unique_ptr<HMISystem> HMISystem::instance = nullptr;

void task5() {
    auto button = make_shared<Button>();
    auto slider = make_shared<Slider>();

    HMISystem& system = HMISystem::getInstance();
    system.addObserver(button);
    system.addObserver(slider);

    system.setMode("Night");
}
