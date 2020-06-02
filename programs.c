welcome to c programming

#include<string.h>
int main() {
  char str[20]="abcdxyz";
  int n1=strlen(str);
  int n2=strlen("Hello World!");
  printf("n1=%d,n2=%d\n",n1,n2);
  return 0;
}
