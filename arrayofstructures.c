#include<stdio.h>

struct student 
{
//  int rollno;
 // char name[20];
  double total;
  //int age;
};

int main() {
 struct student sarr[10];
 int sum=0;
 for(int i=0;i<10;i++)
   sarr[i].total=rand()%100;  //scanf("%d",&sarr[i].total);
 for(int i=0;i<10;i++)
   sum+=sarr[i].total;
  printf("%d",sum);
  return 0;
}
