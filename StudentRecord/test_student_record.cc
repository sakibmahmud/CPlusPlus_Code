#include "student_record.cc"

int main()
{
    StudentRecord s1;
    s1.setQuizMarks(8,10);
    s1.setMidMark(90);
    s1.setFinalMark(80);
    cout << s1.getLetterGrade();
}