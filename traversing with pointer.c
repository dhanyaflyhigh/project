#include<stdio.h>
struct employee 
{
  int empid;
  char name[20];
  double salary;
  int age;
};

int main() {
  int n=10;
  int i;
  struct employee earr[5] = { 
    {1001, "John", 5600,20},
    {1002, "Scott", 6800,22},
    {1003, "Meyers", 7800, 25 }
  };
  //Assume suitable initialization of array elements

  struct employee *ptr=earr;
  for(i=0;i<n;i++) {
    printf("%d, %s, %ld, %d\n", ptr->empid, ptr->name, ptr->salary, ptr->age);
    ptr++;
  }

  double sum=0;
  for(int i=0;i<n;i++) {
    sum +=  ptr->salary;  //(ptr++)->salary;
    ptr++;
  }
  return 0;
}
