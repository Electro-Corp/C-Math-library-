#include <iostream>
#include <math.h>
#define newline '\n';
using namespace std;

int add(int a, int b) {
  int c;
  int d;
  d = 0;
  c = a;
  while (d < b) {
    c = c + 1;
    d = d + 1;
  }
  return c;
}
// int sqrt(float in){

//   float num;
//   float tot;
//   float a;
//   while(in>tot){
//     tot = num*num;
//     num = num+1;
//   }
//   while(tot>in){
//     num = num-0.01;
//     tot = num*num;
//   }
//   return num-1;
//   cout<<newline;

// }
int exp(float a, float b) {
  float o;
  float d;
  d = a; 
  o = o+1;
  while (o < b) {
    d = d * a;
    o = o+1;
  }
  return d;
}
int hypo(float a, float b) { // float c) {
  float d = exp(a, 2);
  d = d + exp(b, 2);
  // d = d*exp(c,2);
  d = sqrt(d);
  return d;
}
