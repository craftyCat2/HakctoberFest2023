#include <stdio.h>
void simpleInterest(float p, float t, float r){
  float result = (p*t*r)/100;
  printf("The interest is: %f", result);
}
int main(){
  float p, t, r;
  printf("Enter the principle: ");
  scanf("%f",&p);
  printf("Enter the time: ");
  scanf("%f",&t);
  printf("Enter the rate: ");
  scanf("%f",&r);
  simpleInterest(p,  t,  r);
  return 0;
}
