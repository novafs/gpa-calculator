#include <iostream>

using namespace std;

class findGrade
{
    float q1, q2, qT, midMarks, finalMarks;
    float precentage, percQ, percM, percF;
    string grade;

public:
    void getMarks();
    void calcMarks();
    void calcGrade();
    void showGrade();
} obj;

int main()
{
    obj.getMarks();
    obj.calcMarks();
    obj.calcGrade();
    obj.showGrade();
    return 0;
}

void findGrade ::getMarks()
{
    cout << "Enter obatained marks of Quiz # 1 out of (10) :: ";
    cin >> q1;
    cout << "Enter obatained marks of Quiz # 2 out of (10) :: ";
    cin >> q2;
    cout << "Enter obatained marks of Mid term out of (100) :: ";
    cin >> midMarks;
    cout << "Enter obatained marks of Final term out of (100) :: ";
    cin >> finalMarks;
    cout << endl;
}

void findGrade ::calcMarks()
{
    qT = q1 + q2;
    percQ = (25.0 / 20.0) * qT;
    percM = (25.0 / 100.0) * midMarks;
    percF = (50.0 / 100.0) * finalMarks;
    precentage = percQ + percM + percF;
}

void findGrade::calcGrade()
{
    if (precentage >= 90.0)
    {
        grade = "A";
    }
    else if (precentage >= 80.0 && precentage < 90.0)
    {
        grade = "B";
    }
    else if (precentage >= 70.0 && precentage < 80.0)
    {
        grade = "C";
    }
    else if (precentage >= 60.0 && precentage < 70.0)
    {
        grade = "D";
    }
    else if (precentage >= 50.0 && precentage < 60.0)
    {
        grade = "E";
    }
    else if (precentage >= 0.0 && precentage < 50.0)
    {
        grade = "Failed!!";
    }
}

void findGrade::showGrade()
{
    cout << "\n";
    cout << "\n------------------------------------------" << endl;
    cout << "The Obtained Grade :: " << grade;
    cout << "\n------------------------------------------" << endl;
}