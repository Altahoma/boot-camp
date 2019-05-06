#include<stdio.h>

int calculateCube(int num){
 
 /* Cube is calculated and return. */

   return num * num *num;
 
}

int main() {

 
   int num,cube;
    
   printf("Enter number \n");
   scanf("%d",&num);

   /* Cube function is called. */
 
   cube = calculateCube(num);
 
   printf("Cube of a number is %d\n",cube);
 
   return 0;
}