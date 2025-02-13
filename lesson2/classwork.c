#include <stdio.h>
#include <stdlib.h>

typedef struct {
  char name[20];
  int age;
  float middle_mark;

}Student;



int main(){
  int n;
  scanf("%d", &n);
  Student* students = malloc(sizeof(Student) * n);

  for (int i = 0; i < n; i++) {
    scanf("%s%d%f", students[i].name, &students[i].age, &students[i].middle_mark);
  }
  for (int i = 0; i < n; i++) {
    printf("Name: %s,\n Age: %d,\n, GPA: %.2f\n\n", students[i].name, students[i].age, students[i].middle_mark);

  }
  return 0;



}
