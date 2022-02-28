#define newline '\n';
using namespace std;
int add(int a,int b){
  int c;
  int d;
  d = 0;
  c = a;
  while(d<b){
    c = c+1;
    d = d+1;
  }
  return c;
}
int sqrt(float in){
  float num = 0;
  float tot;
  float a;
  int i; 
  for (tot = 0; i > tot; ++num) {
    tot = num * num;
  }
  a = num - 1;
  while (tot >= in) {
    a = a - 1;
    tot = num * num;
  }
  return num - 1;
  cout<<newline;

}