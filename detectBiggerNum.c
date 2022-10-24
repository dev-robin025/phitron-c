#include<stdio.h>

int main() {
  int a,b,c;    // variable declaration

  printf("Enter a three intiger: ");

  scanf("%d%d%d",&a,&b,&c);  // user input

  if(a>b) {
    if(a>c) {
      printf("from 12no line: A is bigger");
    } else if(c>a) {
      printf("from 14no line: C is bigger");
    } else {
      printf("from 16no line: A and C both are bigger");
    }

  } else if(b>a) {
    if(b>c) {
      printf("from 20no line: B is bigger");
    } else if(c>b) {
      printf("from 22no line: C is bigger");
    } else {
      printf("from 24no line: B and C both are bigger");
    }

  } else if(a==b) {
    if(a==c) {
      printf("from 35no line: They are equal");
    } else if(a>c) {
      printf("from 29no line: A and B both are bigger");
    } else {
      printf("from 31no line: C is bigger");
    }
  }
  return 0;
}
