//Task

//Your task is to take two numbers of int data type, two numbers of float data type as input and output their sum:

//Declare  variables: two of type int and two of type float.
//Read  lines of input from stdin (according to the sequence given in the 'Input Format' section below) and initialize your  variables.
//Use the  and  operator to perform the following operations:
//Print the sum and difference of two int variable on a new line.
//Print the sum and difference of two float variable rounded to one decimal place on a new line.
##############################################################

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
  
	int x1,x2,sum_i,sub_i;
  float y1,y2,sum_f,sub_f;
    
  scanf("%d %d",&x1,&x2);
  scanf("%f %f",&y1,&y2);
    
  sum_i = x1+x2;
  sub_i = x1-x2;
  printf("%d ",sum_i);
  printf("%d\n",sub_i);
  
  sum_f = y1+y2;
  sub_f = y1-y2;
  printf("%0.1f ",sum_f);
  printf("%0.1f",sub_f);
  
  return 0;
  
}
