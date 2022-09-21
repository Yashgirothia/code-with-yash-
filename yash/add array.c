// Q> Write a program to add an 2d array of 2 numbers and print back tpo the screen? 


#include<stdio.h>
using namespace std;
void main()
{
 int  i,j,r,c,arr1[100][100],arr2[100][100],sum[100][100];
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
   sum[i][j]=arr1[i][j]+arr2[i][j];
  }
 }
 for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
  {
   printf("%d ",sum[i][j]);
  }
  printf("\n");
 }
return 0;
}
