#include <iostream>
#include "math.cpp"
int d;
float a;
float b;
using namespace std; 
#define n '\n'
int main() {
  std::cout << "Math library Demo";
  cout<<n;
  cout<<"Hypot finder ";
  cout<<n;
  cout<<"A:";
  cin>>a;
  cout<<"B: ";
  cin>>b;
  
  //cout<<n;
  std::cout<<hypo(a,b);
  cout<<n;
  cout<<"Exponent- Base:";
  cin>>a;
  cout<<"Power: ";
  cin>>b;
  cout<<exp(a,b);
}
