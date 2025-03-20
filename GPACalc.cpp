#include <iostream>
#include <iomanip>
using namespace std;

// 등급에 따른 과목평점 변환 함수
double getGradePoint(string grade) {
    if (grade == "A+") return 4.5;
    if (grade == "A0") return 4.0;
    if (grade == "B+") return 3.5;
    if (grade == "B0") return 3.0;
    if (grade == "C+") return 2.5;
    if (grade == "C0") return 2.0;
    if (grade == "D+") return 1.5;
    if (grade == "D0") return 1.0;
    if (grade == "F") return 0.0;
    return -1.0; // 잘못된 입력 방지
}

int main() {
    double total_score = 0.0; // (학점 × 과목평점)의 합
    double total_credit = 0.0; // 학점의 총합

    for (int i = 0; i < 20; i++) {
        string subject, grade;
        double credit;
        cin >> subject >> credit >> grade;

        if (grade == "P") continue; // P등급 과목은 계산에서 제외

        total_score += credit * getGradePoint(grade);
        total_credit += credit;
    }

    double gpa = total_score / total_credit;
    cout << fixed << setprecision(6) << gpa << endl; // 소수점 6자리까지 출력

    return 0;
}