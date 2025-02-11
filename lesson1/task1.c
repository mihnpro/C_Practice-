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

void task6(){
  int n, tw, th, fo;
  scanf("%d", &n);
  tw = 0;
  th = 0;
  fo = 0;

  if (n % 2 == 0){
    tw = n / 2;
  }
  if (n % 3 == 0){

    th = n / 3;
  }
  if (n % 4 == 0){
    fo = n / 4;
  }
  printf("4 seats: %d, 3 setats: %d, 2 seats: %d\n", fo, th, tw);


  
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

void task9(){
  double t;
  scanf("%lf", &t);
  int m;
  double s;
  m = t / 60;
  s = t - m *60;
  printf("%d minute(s) %lf seconde(s)", m, s);


}

void task10(){
  int t;
  scanf("%d", &t);
  if (t < -150 || t > 120){
    printf("Ne legit");
  }else{
    printf("legit");
  }

}

void task11(){
  float o;
  scanf("%f", &o);
  if (o < 0.15000000){
    printf("Time to switch on emergency system");

  }else{
    printf("Everething is fine, oxygen level is %f", o);


  }
}

void task12(){
  int a;
  scanf("%d", &a);
  if (a < -180 || a > 180){
    printf("Everething is not fine");
  }else{
    printf("Everething is fine");


  }
}

void task13(){
  int n;
  scanf("%d", &n);
  if (n % 2 != 0){
    printf("Nelza");

  }else{
    printf("Mozno");
  }

}

void task14(){
  int m;
  scanf("%d", &m);
  float res = m * 0.1666667;
  printf("Wight on the moon %f", res);
}

void task15(){
  int m, v;
  scanf("%d%d", &m, &v);
  int res = m * 1024 / v / 60;
  printf("%d minutes(s)", res);
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

    case 11:
    task11();
    break;
    
    case 12:
    task12();
    break;

    case 13:
    task13();
    break;

    case 14:
    task14();
    break;

    case 15:
    task15();
    break;
}
return 0;
}
