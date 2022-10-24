#include<stdio.h>

int main() {
  int marks;
  printf("Please input your marks: ");

  scanf("%d",&marks);

  if(marks>=80) {
    printf("your grade is A+");
  } else if(marks>=70) {
    printf("your grade is A");
  } else if(marks>=60) {
    printf("your grade is A-");
  } else if(marks>=50) {
    printf("your grade is B");
  } else if(marks>=40) {
    printf("your grade is C");
  } else if(marks>=33) {
    printf("your marks is D");
  } else {
    printf("your grade is F");
  }

  return 0;
}
