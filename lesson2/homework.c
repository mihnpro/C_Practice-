#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
  char name[20];
  int age;
  float middle_mark;

}Student1;

void task1(){
  int n;
  scanf("%d", &n);
  Student1* students = malloc(sizeof(Student1) * n);
  for (int i = 0; i < n; i++){
    scanf("%s%d%f", students[i].name, &students[i].age, &students[i].middle_mark);
  }
  for (int i = 0; i < n; i++){
    printf("Name: %s\nAge: %d\nGPA: %.2f\n\n", students[i].name, students[i].age, students[i].middle_mark);
  }
}

typedef struct {
  char name[30];
  int k;
  float cost;
}Item;

void task2() {
  int n;
  scanf("%d", &n);

  Item* items = malloc(sizeof(Item) * n);

  for (int i = 0; i < n; i++){
    scanf("%s%d%f", items[i].name, &items[i].k, &items[i].cost);
  }

  for (int i = 0; i < n; i++){
    printf("Item: %s\nQuantity: %d\nPrice: %f\n\n", items[i].name, items[i].k, items[i].cost);
  }
}

typedef struct {
  int year;
  int month;
  int day;
}Date;

typedef struct {
  char name[50];
  Date date;
  char disc[50];
}Eevent;

void task3(){
  int n;
  scanf("%d", &n);
  Eevent* events = malloc(sizeof(Eevent) * n);
  for (int i = 0; i < n; i++){
    scanf("%s%d%d%d%s", events[i].name, &events[i].date.day, &events[i].date.month, &events[i].date.year, events[i].disc);

  }
  for (int i = 0; i < n; i++){
    printf("\nEvent: %s\nDate: %d/%d/%d\nDescription: %s\n\n", events[i].name, events[i].date.day, events[i].date.month, events[i].date.year, events[i].disc);
  }
}

typedef struct {
  char name[50];
  char position[50];
  int salary;
}Employee;

void task4(){
  int n;
  scanf("%d", &n);
  Employee* employees = malloc(sizeof(Employee) * n);
  for (int i = 0; i < n; i++){
    scanf("%s%s%d", employees[i].name, employees[i].position, &employees[i].salary);
  }
  for (int i = 0; i < n; i++){
    printf("Name: %s\nPosition: %s\nSalary: %d\n\n", employees[i].name, employees[i].position, employees[i].salary);
  }
}

typedef union{
  int i;
  float f;
  char str[20];
}Data;


void task5(){
  int n;
  scanf("%d", &n);
  Data data;
  switch (n)
  {
  case 1:
    scanf("%d", &data.i);
    printf("Integer: %d", data.i);
    break;
  
  case 2:
    scanf("%f", &data.f);
    printf("Float: %f", data.f);
    break;
  
  case 3:
    scanf("%s", data.str);
    printf("String: %s", data.str);
    break;
  
  default:
    break;
  }
}
typedef enum {
  Gasoline, Diesel, Electric
} Type_eng;

typedef struct {
  char brand[50];
  char model[50];
  int year;
  Type_eng engine;
} Venicle;

void task6(){
  int n;
  char *engine_types[3] = {"Gasoline", "Diesel", "Electric"};
  scanf("%d", &n);
  Venicle* venicles = malloc(sizeof(Venicle) * n);
  for (int i = 0; i < n; i++){
    char eng_type[20];
    scanf("%s%s%d%s", venicles[i].brand, venicles[i].model, &venicles[i].year, eng_type);
    if (*eng_type == *engine_types[0]){
      venicles[i].engine = Gasoline;
    }else if (*eng_type == *engine_types[1]){
      venicles[i].engine = Diesel;
    }else if (*eng_type == *engine_types[2]){
      venicles[i].engine = Electric;
    }
  }
  for (int i = 0; i < n; i++){
    printf("Venicle: %s %s\nYear: %d\nEngine: %s\n",venicles[i].brand, venicles[i].model, venicles[i].year, engine_types[venicles[i].engine]);
  }
}

typedef struct {
  char name[50];
  int age;
  float gpa;
}Student2;

void task7(){
  int n;
  scanf("%d", &n);
  Student2* students = malloc(sizeof(Student2) * n);
  for (int i = 0; i < n; i++){
    scanf("%s%d%f", students[i].name, &students[i].age, &students[i].gpa);
  }
  for (int i = 0; i < n; i++){
    Student2 *ptr = &students[i]; 
    printf("Name: %s\nAge: %d\nGPA: %.2f\n\n", ptr->name, ptr->age, ptr->gpa);
  }

}


typedef union 
{
  int i;
  char str[100];
}Grade;

void task8(){
  int n;
  scanf("%d", &n);
  getchar();
  for (int i = 0; i < n; i++){
    Grade grade;
    char *input = (char *)malloc(100 * sizeof(char));
    fgets(input, 100, stdin);
    int unicode_char = (int)input[0];
    if (unicode_char >= 65 && unicode_char <= 90){
      strcpy(grade.str, input);
      printf("Grade: %s\n", grade.str);
    }else if (unicode_char >= 48 && unicode_char <= 57){
      grade.i = atoi(input);
      printf("Grade: %d\n", grade.i);
    }else{
      printf("Not valid data\n");
      continue;
    }
  }

}

typedef enum {
  Sunny, Cloudy, Rainy
}Weather_type;

typedef struct {
  float temp;
  float humidity;
  Weather_type weather_t;
}Weather;


void task9(){
  char *weather_type[3] = {"Sunny", "Cloudy", "Rainy"};
  Weather weather;
  char weather_typ[20];
  scanf("%f%f%s", &weather.temp, &weather.humidity, weather_typ);
  if (*weather_typ == *weather_type[0]){
    weather.weather_t = Sunny;
  }else if (*weather_typ == *weather_type[1]){
    weather.weather_t = Cloudy;
  }else if (*weather_typ == *weather_type[2]){
    weather.weather_t = Rainy;
  }
  printf("Temperature: %.1f\nHumidity: %.1f\nCondition: %s\n", weather.temp, weather.humidity, weather_type[weather.weather_t]);

}

typedef struct{
  char name[30];
  int c;
  char teacher[30];
}Course;
void task10(){
  int n;
  scanf("%d", &n);
  Course* courses = malloc(sizeof(Course) * n);
  for (int i = 0; i < n; i++){
    scanf("%s%d%s", courses[i].name, &courses[i].c, courses[i].teacher);
  }
  for (int i = 0; i < n; i++){
    printf("Course: %s\nCredits: %d\nProfessor: %s\n\n", courses[i].name, courses[i].c, courses[i].teacher);
  } 
  
}
int main(int argc, char **argv){
  switch (atoi(argv[1])){

    case 1:
    task1();
    break;
    
    case 2:
    task2();
    break;

    case 3:
    task3();
    break;

    case 4:
    task4();
    break;

    case 5:
    task5();
    break;

    case 6:
    task6();
    break;

    case 7:
    task7();
    break;

    case 8:
    task8();
    break;

    case 9:
    task9();
    break;

    case 10:
    task10();
    break;

    return 0;
  }
}
