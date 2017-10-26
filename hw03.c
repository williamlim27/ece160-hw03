#include <stdio.h>
#include <stdlib.h>

typedef enum {
  NAME_ONLY = 0,
  MAJOR_AND_NAME = 1, 
  YEAR_AND_NAME = 2
} Mode;

typedef struct {
  char *first_name;
  char *last_name;
  char *major;
  int year;
  // TODO: add fields here for major and year
} Student;

void print_student(Mode m, Student s) {
  switch (m) {
    case NAME_ONLY:
      printf("%s %s\n", s.first_name, s.last_name);
      break;
	// TODO: handle other cases
	case MAJOR_AND_NAME:
		 printf("%s %s %s\n", s.major, s.first_name,s.last_name);
		 break;
	case YEAR_AND_NAME:
		 printf("%d %s %s\n", s.year, s.first_name, s.last_name);
		break;
	}
}

/*
	argv[1] will be the Mode integer
	argv[2...] will be student info in the form [first_name, last_name, major, year]
	the fields are all strings (char[])
	except year is a number (int)
*/
int main(int argc, char *argv[]) {
  // TODO: parse argv to populate student structs 
  // for now, here's two hardcoded students:
	Student s;
	int major = atoi(argv[1]);

  
    for (int i=2; i<=argc-2; i+=4){
		 int first = i;
		 int last = i+1;
		 int m = i+2;
		 int y = i+3;
		 
		 s.first_name = argv[first];
		 s.last_name = argv[last];
		 s.major = argv[m];
		 s.year = atoi(argv[y]);
		 
		 print_student(major, s);
	}   
  return 0;

}

