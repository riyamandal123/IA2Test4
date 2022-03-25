#include <stdio.h>
#include<math.h>
float input_radius()
{
  float radius;
  printf("enter radius\n");
  scanf("%f",&radius);
  return radius;
}
float input_height()
{
  float height;
  printf("enter the height of the camel\n");
  scanf("%f",&height);
  return height;
}
float input_length()
{
  float length;
  printf("enter the length of the camel\n");
  scanf("%f",&length);
  return length;
}
float find_weight(float radius,float height,float length)
{
    double weight;
     weight = M_PI *   pow(radius,3) * sqrt(height * length);
    return weight;
}
void output(float radius, float height, float length, float weight)
{
  printf("the weight of the camel is %f\n",weight);
}
int main()
{
  float radius,height,length;
  double weight;
  radius=input_radius();
  height=input_height();
  length=input_length();
  weight=find_weight(radius,height,length);
  output(radius,height,length,weight);
  return 0;
}