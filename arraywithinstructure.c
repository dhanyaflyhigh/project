#include<stdio.h>

struct student 
{
  int rollno;
  char name[20];
  double scores[5];
  int age;
};

int main() {
  struct student s1;
  int total=0;
  s1.rollno=1001;
  strcpy(s1.name, "Lippman");
  for(int j=0;j<5;j++)
    s1.scores[j]=rand()%100; //scanf("%d",&s1.scores[j]);
  s1.age=20;
  printf("rollno=%d,name=%s,age=%d\n",s1.rollno,s1.name,s1.age);
  for(int j=0;j<5;j++) {
    total+=s1.scores[j];  
  }
  printf("%d\n",total);
  return 0;
}
