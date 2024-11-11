#include <bits/stdc++.h>
using namespace std;
class Student
{
protected:
    string s;
    int roll_no;

public:
    Student()
    {
        this->roll_no = 0;
        this->s = "";
    }
};
class Test : public Student
{
protected:
    int marks1;
    int marks2;
    int marks3;
    int marks4;

public:
    Test()
    {
        this->marks1 = 0;
        this->marks2 = 0;
        this->marks3 = 0;
        this->marks4 = 0;
    }
    void read()
    {
        cout << "Enter the marks of english: " << endl;
        cin >> this->marks1;
        cout << "Enter the marks of science: " << endl;
        cin >> this->marks2;
        cout << "Enter the marks of maths: " << endl;
        cin >> this->marks3;
        cout << "Enter the marks of marathi: " << endl;
        cin >> this->marks4;
    }
};
class Sport : public Student
{
protected:
    int score1;
    int score2;
    int score3;
    int score4;

public:
    Sport()
    {
        this->score1 = 0;
        this->score2 = 0;
        this->score3 = 0;
        this->score4 = 0;
    }
    void accept()
    {
        cout << "Enter the score of cricket: " << endl;
        cin >> this->score1;
        cout << "Enter the score of football: " << endl;
        cin >> this->score2;
        cout << "Enter the score of hockey: " << endl;
        cin >> this->score3;
        cout << "Enter the score of badminton: " << endl;
        cin >> this->score4;
    }
};
class Result : public Sport, public Test
{
private:
    int avg_mark;
    int avg_score;

public:
    // Student s1;
    // Test t1;
    // Sport sp1;
    Result()
    {
        this->avg_mark = 0;
        this->avg_score = 0;
    }
    void calculate()
    {
        accept();
        read();
        avg_mark = (marks1 + marks2 + marks3 + marks4) / 4;
        avg_score = (score1 + score2 + score3 + score4) / 4;
        cout << "The average marks is " << avg_mark << endl;
        cout << "The average score is " << avg_score << endl;
    }
    void total()
    {
        cout << "the total is: " << avg_mark + avg_score << endl;
    }
};
int main()
{

    Result r1;
    r1.calculate();
    r1.total();

    return 0;
}