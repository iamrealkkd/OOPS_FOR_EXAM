#include <iostream>
using namespace std;

class Engineer {
public:
    string speci;

    void money() {
        cout << "Hello World" << endl;
    }

    void work() {
        cout << "Specialization in " << speci << endl;
    }
};

class Youtuber {
public:
    int subscribers;

    void content() {
        cout << "I have subs of " << subscribers << endl;
    }
};

class CodeTeacher : public Engineer, public Youtuber {//jisko pehle likha jayega uska constructor pehle call hoga
public:
    string name;

    CodeTeacher(string name, string speci, int subscribers) {
        this->name = name;
        this->speci = speci;
        this->subscribers = subscribers;
    }

    void showCase() {
        cout << "My name is " << name << endl;
        work();
        content();
    }
};

int main() {
    CodeTeacher A1("Rohit", "CSE", 49000);
    A1.showCase();
    A1.money();
    return 0;
}
