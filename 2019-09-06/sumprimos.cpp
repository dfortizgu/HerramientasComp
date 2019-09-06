#include<iostream>

int primo (int a){
  for(int i=2;i<a/2;i++){
    if(a%i==0)return 0;
  }
  return 1;
}

int sumprime(int min,int max){
  int sum = 0;
  for(int i= min; i<=max;i++){
    sum = sum + primo(i)*i;
  }
  return sum;
}

int main (void){
  std::cout<<sumprime(50,100)<<"\n";
  return 0;
}
