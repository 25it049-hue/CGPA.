#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    float totalCredits = 0, totalGradePoints = 0;

    cout << "Enter number of courses taken: ";
    cin >> n;

    vector<float> grade(n), credit(n);

    // Input grades and credits
    for (int i = 0; i < n; i++) {
        cout << "\nCourse " << i + 1 << endl;
        cout << "Enter grade point: ";
        cin >> grade[i];
        cout << "Enter credit hours: ";
        cin >> credit[i];

        totalCredits += credit[i];
        totalGradePoints += grade[i] * credit[i];
    }

    // Calculate CGPA
    float cgpa = totalGradePoints / totalCredits;

    // Display individual course details
    cout << "\n----- Course Details -----\n";
    for (int i = 0; i < n; i++) {
        cout << "Course " << i + 1
             << " | Grade Point: " << grade[i]
             << " | Credits: " << credit[i] << endl;
    }

    // Display final result
    cout << "\nTotal Credits = " << totalCredits << endl;
    cout << "Total Grade Points = " << totalGradePoints << endl;
    cout << "Final CGPA = " << cgpa << endl;

    return 0;
}
