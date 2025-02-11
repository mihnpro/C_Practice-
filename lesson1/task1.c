#include <stdio.h>
#include <stdlib.h>

void task1(){
  int m;

  scanf("%d", &m);
  if (m < 60 ||  m > 90){
    printf("Ne goden");

  } else {
    printf("Goden");
    
  }

}

void task2(){

  int s;
  scanf("%d", &s);
  if (s < 0){
    printf("Not valid data");

  }

  if (s < 500){
    printf("da");
  }else{
    printf("net");

  }

}

void task3(){
  char c = getchar();
  int ascii_code;
  ascii_code = (int)c;
  if (ascii_code < 65 || ascii_code > 90) {
    printf("ne ok");
  }else{

    printf("ok");
  }
  
}

void task4(){
  int d;

  scanf("%d", &d);
  if (d > 20250211){
    printf("Future");
  }else{
    printf("not future");
  }


}

void task5(){
  double r,f;
  scanf("%lf%lf", &f, &r);
  if (f - r >= 0.1){
    printf("Nestabilno");

  }else{
    printf("Stabilno");
  }
}

void task7(){
  float x;
  scanf("%f", &x);
  if (x < 2.5 || x > 3.5000000){
    printf("NeStabilno");

  }else{
    printf("Stabilno");
  }

}

void task8(){
  int x;
  scanf("%d", &x);
  if (x % 4 > 0){
    printf("It is imposible");
  }else{
    int f = x / 4;
    printf("It is posible, %d kg in 1 cluster", f);


  }
}


int main(int argc, char **argv){

  switch (atoi(argv[1])) {
  
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
    case 7:
    task7();
    break;
    case 8:
    task8();
    break;
}
return 0;
}
