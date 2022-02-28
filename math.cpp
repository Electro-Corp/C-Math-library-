
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
  float num;
  float tot;
  float a;
  num = 0;
  tot = 0;
  while(in>tot){
    tot = num*num;
    num = num+1;
  }
  a = num-1;
  while(true){
    a = a-1;
    tot = num*num;
    if(tot<in){
      break;
    } 
  }
  return num-1;
  
}