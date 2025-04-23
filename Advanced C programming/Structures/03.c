// Challenge 1 - Initialize & Print Data Variable
#include <stdio.h>
#include <stdlib.h>

struct point {
  int x;
  int y;
};

struct date {
  int day;
  int month;
  int year;
};

int main() {

  struct point p1;
  printf("Enter x coordinate: ");
  scanf("%d", &p1.x);
  printf("Enter y coordinate: ");
  scanf("%d", &p1.y);

  struct date graduateDate;
  printf("Enter day: \n");
  scanf("%d", &graduateDate.day);
  printf("Enter month: \n");
  scanf("%d", &graduateDate.month);
  printf("Enter year: \n");
  scanf("%d", &graduateDate.year);

  printf("The graduation date is %d/%d/%d \n", graduateDate.month, graduateDate.day, graduateDate.year);
  return 0;
}