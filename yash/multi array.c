//write a program to multiply an 2d array of 2 numbers and print them back to the screen?

Q> Write a program to take an input of 2d array in 

#include<stdio.h>
void main()
{
 int  i,j,k,r,c,arr1[100][100],arr2[100][100],mul[100][100];
 printf("enter no. of rows:");
 scanf("%d",&r);
 printf("enter no. of columns:");
 scanf("%d",&c);

 for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
  {
   printf("enter element:");
   scanf("%d",&arr1[i][j]);
  }
 }
 for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
  {
   printf("enter element:");
   scanf("%d",&arr2[i][j]);
  }
 }

 for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
mul[i][j]=0;    
for(k=0;k<c;k++)    
{    
mul[i][j]+=arr1[i][k]*arr2[k][j];
}
}
}
 for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
  {
   printf("%d ",mul[i][j]);
  }
  printf("\n");
 }
return 0;
}
