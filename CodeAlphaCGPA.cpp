#include <iostream>
using namespace std;

int main() {
    int Sem_num;
    double total_credits = 0, total_grade_points = 0;

    cout << "Please enter the number of semesters: ";
    cin >> Sem_num;
    while(Sem_num<=0)
    {
        cout<<"number of semesters should be a positive integer \nEnter the number of semesters: ";
        cin>>Sem_num;
    }

    for (int i = 1; i <= Sem_num; i++) {
        int courses_num;
        double semester_credits = 0, semester_grade_points = 0;

        cout << "\nEnter number of courses in semester " << i << ": ";
        cin >> courses_num;
        while(courses_num<=0)
        {
            cout<<"Number of courses should be a positive integer \nEnter number of courses in semester: ";
            cin>>courses_num;
        }
        for (int j = 1; j <= courses_num; j++) {
            int credits;
            double grade_points, grade;

            cout << "\nCourse " << j << ": \n";
            cout << "Credits earned: ";
            cin >> credits;
        while(credits<=0)
        {
            cout<<"Credits earned should be a positive integer \nCredits earned: ";
            cin>>credits;
        }           
            cout << "Grade received (as grade points, e.g., 4.0 for A): ";
            cin >> grade;
            while(grade>4.0 || grade<0.0)
            {
                cout<<"Grade should be a positive integer between 0.0 and 4.0\nGrade received: ";
                cin>>grade;
            }
            grade_points = credits*grade;
            semester_credits += credits;
            semester_grade_points += grade_points;


            cout << "Course " << j << " summary: " << endl;
            cout << "Credits: " << credits << ", Grade Points: " << grade << ", Total Grade Points: " << grade_points << endl;
        }

        double semester_gpa = semester_grade_points / semester_credits;
        total_credits += semester_credits;
        total_grade_points += semester_grade_points;

        cout << "\nSummary for Semester " << i << ":" << endl;
        cout << "Total Credits: " << semester_credits << ", Total Grade Points: " << semester_grade_points << endl;
        cout << "GPA for Semester " << i << ": " << semester_gpa << endl;
    }

    double cgpa = total_grade_points / total_credits;


    cout << "\nOverall CGPA Summary:" << endl;
    cout << "Total Credits Earned: " << total_credits << endl;
    cout << "Total Grade Points Achieved: " << total_grade_points << endl;
    cout << "Cumulative GPA (CGPA): " << cgpa << endl;

    return 0;
}
