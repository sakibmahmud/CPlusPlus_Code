#include "student_record.h"
void StudentRecord::setQuizMarks(int q1, int q2)
{

    quiz1 = q1;
    quiz2 = q2;
}

void StudentRecord::setMidMark(int m)
{
    midterm_score = m;
}

void StudentRecord::setFinalMark(int f)
{
    final_score = f;
}

int StudentRecord::getQuiz1Marks()
{
    return quiz1;
}

int StudentRecord::getQuiz2Marks()
{
    return quiz2;
}

int StudentRecord::getMidScore()
{

    return midterm_score;
}

int StudentRecord::getFinalScore()
{
    return final_score;
}

int StudentRecord::getAverageScore()
{
    float quiz_normalize = ((float)(quiz1) / 10 + (float)(quiz2) / 10) / 2;
    float quiz_average = quiz_normalize * 25;
    average_score = (final_score * 0.5) + (midterm_score * 0.25) + quiz_average;
    return average_score;
}

char StudentRecord::getLetterGrade()
{
    getAverageScore();
    if (average_score >= 90)
        letter_grade = 'A';
    else if (average_score >= 80 && average_score < 90)
        letter_grade = 'B';
    else if (average_score >= 70 && average_score < 80)
        letter_grade = 'C';
    else if (average_score >= 60 && average_score < 70)
        letter_grade = 'D';
    else
        letter_grade = 'F';

    return letter_grade;
}
