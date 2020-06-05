#include<stdio.h>
void sumpro(int,int,int*,int*);
int main() {
  int n=10;
  int arr[10];
  fill(arr,n);
  sumarr(arr,n);
printf("%d",sum);
 // display(arr,n);
  
  return 0;
}
void fill(int* parr,int n) {
  for(int i=0;i<n;i++)
    parr[i]=i*10+1;  //scanf("%d",&arr[i]);
    //*parr++=rand()%10;  
}
void sumarr(const int* parr, int n) {
int sum=0;
  for(int i=0;i<n;i++)
 sum+=*parr++;

}
