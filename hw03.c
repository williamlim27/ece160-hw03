#include <stdio.h>

typedef enum {
  NAME_ONLY,
  MAJOR_AND_NAME, 
  YEAR_AND_NAME
} Mode;

typedef struct {
  char *first_name;
  char *last_name;
  // add fields here
} Student;

void print_student(Mode m, Student s) {
  switch (m) {
    case NAME_ONLY:
      printf("%s %s\n", s.first_name, s.last_name);
      break;
  }
}

int main() {
  // parse argv to populate student info 
  // argv[1] will be the Mode integer
  // argv[2...] will be student info in the form [first_name, last_name, major, year]
  // the fields are all strings (char[]) except year is a number (int)
  // for now, here's a hardcoded student:
  
  Student s;
  s.first_name = "Julia";
  s.last_name = "A";
  print_student(NAME_ONLY, s);
  return 0;
}
