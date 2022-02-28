
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
int sqrt(float num){
  
  float c;
  c = 0;
  float x;
  float y;
  x = num;
  
  while (x != (y*y) || (c>100)){
    c = c + 1;
    y = c * c;
    if ((c*c)==x || (c*c)<x && (c*c)>x-2 )
       {
           if ((c*c)<x && (c*c)>x-2)
           {
               while ((c*c)<x && (c*c)>x-2)
               {
                   c = c+0.1;
                   
               }
               
           }
           

           
           return c;
       } 
  
}
}