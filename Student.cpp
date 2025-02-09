#include "Student.h"

using namespace std;

Student::Student() {
  //Input prompt student details
  first = new char[80];
  cout << "First name?" << endl;
  cin >> first;
  last = new char[80];
  cout << "Last name?" << endl;
  cin >> last;
  id = 0;
  cout << "ID Number?" << endl;
  cin >> id;
  gpa = 0;
  cout << "Grade Point Average?" << endl;
  cin >> gpa;
}

Student::~Student() {
  delete[] first;
  delete[] last;
}

char* Student::getFirst() {
  return first;
}

char* Student::getLast() {
  return last;
}

int Student::getID() {
  return id;
}

float Student::getGPA() {
  return gpa;
}

void Student::setFirst(char* newFirst) {
  first = new char[80];
  strcpy(first, newFirst);
}

void Student::setLast(char* newLast) {
  last = new char[80];
  strcpy(last, newLast);
}

void Student::setID(int newID) {
  id = newID;
}

void Student::setGPA(float newGPA) {
  gpa = newGPA;
}
