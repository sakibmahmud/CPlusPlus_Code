#ifndef STUDENT_RECORD_H
#define STUDENT_RECORD_H
#include <iostream>
using namespace std;
class StudentRecord
{
    private:
      int quiz1,quiz2,final_score,midterm_score,average_score=-1;
      char letter_grade;
    public:
    void setQuizMarks(int q1,int q2);
    void setFinalMark(int f);
    void setMidMark(int m);
    int getQuiz1Marks();
    int getQuiz2Marks();
    int getMidScore();
    int getFinalScore();
    int getAverageScore();
    char getLetterGrade();
};
#endif