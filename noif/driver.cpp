/*
Rewrite the following program without using if-else (or ?:)
*/

#include <iostream>

using namespace std;

char getLetterGrade(int grade) {
  if (grade >= 90)
    return 'A';
  else if (grade >= 80)
    return 'B';
  else if (grade >= 70)
    return 'C';
  else if (grade >= 60)
    return 'D';
  else
    return 'F';

}

int main() {
  int grade;
  cout << "Enter grade: ";
  cin >> grade;
  char letter = getLetterGrade(grade);
  cout << "The letter grade is: " << letter << endl;

  return 0;
}
