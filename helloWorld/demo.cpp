#include<iostream>

int main() {
  int a,b;
  while(std::cin>>a>>b) {
    std::cout<<a<<"x"<<b<<"="<<a*b<<std::endl;
  }
  return 0;
}