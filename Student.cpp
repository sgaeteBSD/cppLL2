#include "Student.h"

using namespace std;

Student::Student(char* first, char* last, int id, float gpa) {
  this->first = new char[strlen(first) + 1];
  strcpy(this->first, first);
  this->last = new char[strlen(last) + 1];
  strcpy(this->last, last);
  this->id = id;
  this->gpa = gpa;
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
  first = new char[strlen(newFirst) + 1];
  strcpy(first, newFirst);
}

void Student::getLast(char* newLast) {
  last = new char[strlen(newLast) + 1];
  strcpy(last, newLast);
}

void Student::getID(int newID) {
  id = newID;
}

void Student::getGPA(float newGPA;) {
  gpa = newGPA;
}
