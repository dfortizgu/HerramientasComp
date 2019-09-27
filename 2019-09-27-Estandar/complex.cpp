#include<iostream>
#include<complex>

int main (void){
  std::complex<double> z;
  z.real(2.3);
  z.imag(-9.8);
  std::complex<double> z2{-2,6};

  std::cout << z << "\n";
  std::cout << z2 << "\n";
  std::cout << z*z2 << "\n";
  std::cout << z/z2 << "\n";

  return 0;
}
