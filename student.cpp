#include <iostream>
#include <cstdlib>

using namespace std;

struct Student
{
    char name[50];
    int testScore;
    float grade;

};

void enterDetails(Student student[])
{
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter name: ";
        cin.get(student[i].name, 50);
        cin.get();
        cout << "Enter testscore: ";
        while(!(cin >> student[i].testScore) || student[i].testScore < 0 || student[i].testScore > 100)
        {
            cin.ignore(80, '\n');
            cin.clear();
            cout << "Enter testscore: ";
        }
        cin.get();
    }

}

void determineGrade(Student student[])
{
    for (int i = 0; i < 5; i++)
    {
        if (student[i].testScore <= 59)
            student[i].grade = 5.00;
        else if (student[i].testScore <= 65)
            student[i].grade = 3.00;
        else if (student[i].testScore <= 70)
            student[i].grade = 2.75;
        else if (student[i].testScore <= 75)
            student[i].grade = 2.50;
        else if (student[i].testScore <= 80)
            student[i].grade = 2.25;
        else if (student[i].testScore <= 85)
            student[i].grade = 2.00;
        else if (student[i].testScore <= 90)
            student[i].grade = 1.75;
        else if (student[i].testScore <= 95)
            student[i].grade = 1.25;
        else
            student[i].grade = 1.00;
    }
}

void determineHighScore(Student student[])
{
    int highScore = 0;

    for (int i = 0; i < 5; i++)
    {
        if (student[i].testScore > highScore)
        {
            highScore = student[i].testScore;
        }
    }

    cout << "The student/s with the highest score is/are: " << endl;
    for (int j = 0; j < 5; j++)
    {
        if (student[j].testScore == highScore)
        {
            cout << student[j].name << " " << endl;
        }

    }
    cout << "\n";

}

void printDetails(Student student[])
{
    for (int i = 0; i < 5; i++)
    {
        cout << "Student name: " << student[i].name << endl;
        cout << "Test score: " << student[i].testScore << endl;
        printf("Student grade: %.2f\n", student[i].grade);
    }
    cout << "\n\n";

}

int main()
{
    Student student[5];
    enterDetails(student);
    determineGrade(student);
    printDetails(student);
    determineHighScore(student); 
}


