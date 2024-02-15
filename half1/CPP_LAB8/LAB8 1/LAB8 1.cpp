#include <iostream>
#include <vector>
#include <string>
using namespace std;
string s;


class Person {
protected:
    string name;
    int age;
public:
    Person(const string& name, int age) : name(name), age(age) {}
    string getName() const {
        return name;
    }
    int getAge() const {
        return age;
    }
};

class Student : public Person {
private:
    vector<int> grades;
    int kt1;
    int kt2;
    double finalGrade;

public:
    Student(const string& name, int age) : Person(name, age) {}

    void inputGrades(int numGrades) {
        cout << "Enter grades for " << getName() << " (separated by spaces): ";
        for (int i = 0; i < numGrades; i++) {
            int grade;
            cin >> grade;
            grades.push_back(grade);
        }

        kt1 = 0;
        kt2 = 0;
        for (int grade : grades) {
            kt1 += grade * 2;
            if (kt1 > 100) {
                kt2 += kt1 - 100;
                kt1 = 100;
            }
        }
    }

    void calculateResults() {
        finalGrade = (kt1 + kt2) / 2.0;
    }

    void displayInfo() const {
        cout << getName() << "\t" << getAge() << "\t" << kt1 << "\t" << kt2 << "\t" << finalGrade << "\t" << "\t" << (finalGrade >= 50 ? " +" : " -") << endl;
    }
};

class Group {
private:
    vector<Student> students;
public:
    void addStudent(const Student& student) {
        students.push_back(student);
    }

    void displayGroupInfo() const {
        cout << "Table of the group's results " << s << endl;
        cout << "Name\tAge\tKt1\tKt2\tFinal Grade\tAutomatic" << endl;
        for (const Student& student : students) {
            student.displayInfo();
        }
    }
};

int main() {
    Group group;
    int numStudents, numGrades;
    int groupSize;
    cout << "Enter the group: ";
    cin >> s;
    cout << "Enter the number of students: ";
    cin >> numStudents;
    cout << "Enter the number of grades for each student: ";
    cin >> numGrades;

    for (int i = 0; i < numStudents; i++) {
        string name;
        int age;
        cout << "Enter name of student " << i + 1 << ": ";
        cin >> name;
        cout << "Enter age of student " << i + 1 << ": ";
        cin >> age;
        Student student(name, age);
        student.inputGrades(numGrades);
        student.calculateResults();
        group.addStudent(student);
    }
    cout << "\n";
    group.displayGroupInfo();

    return 0;
}