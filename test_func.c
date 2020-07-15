#include<stdio.h>

int power(int x, int n){
  int i, result=x;
  for(i=0; i<n-1; i++){
    result *=x;
  }
  return result;
}

int main(void){

  int x, n;


  printf("整数：");    scanf("%d",&x);
  printf("乗数：");    scanf("%d",&n);

  printf("%dの%d乗= %d\n",x,n, power(x,n));
}