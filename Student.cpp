#include <iostream>
using namespace std;

class Student {
private:
    int studentID;
    string name;
    int marks[5];

public:
    Student(int id, string n, int m[]) {
        studentID = id;
        name = n;
        for (int i = 0; i < 5; i++)
            marks[i] = m[i];
    }

    float calculateAverage() {
        int sum = 0;
        for (int i = 0; i < 5; i++)
            sum += marks[i];
        return sum / 5.0;
    }

    void displayDetails() {
        cout << "ID: " << studentID << ", Name: " << name << ", Average: " << calculateAverage() << endl;
    }
};

int main() {
    int m1[5] = {80, 85, 90, 75, 95};
    int m2[5] = {70, 60, 75, 80, 85};
    Student s1(1, "Arun", m1);
    Student s2(2, "Priya", m2);

    s1.displayDetails();
    s2.displayDetails();
    return 0;
}
