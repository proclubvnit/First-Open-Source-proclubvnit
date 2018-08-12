#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <limits.h>
#include <time.h>
#include <assert.h>
/*
    What is a header file?
    What is its purpose?
    What if the same header file is included twice?
    Do reply your answers by commenting on our post @ proclub.codeingzone.in or drop us a mail at proclubvnit@gmail.com
*/
#define ADDITION 1
#define SUBTRACTION 2
#define MULTIPLICATION 3
#define TRANSPOSE 4
#define TRACE 5
#define DETERMINANT 6
#define POWER 7
#define ROWS 100
#define COLS 100
void PrintMatrix(int r,int c,int Matrix[][c])
{ int i,j;
  for(i=0;i<r;i++)
   {for(j=0;j<c;j++)
     {printf("%d ",Matrix[i][j]);
      } 
      printf("\n");
    }
    
}
void ReadMatrix(int r,int c,int Matrix[][c])
{  int i,j;
   for(i=0;i<r;i++)
   {for(j=0;j<c;j++)
     {scanf("%d",&Matrix[i][j]);
      } 
    }
 }
void MultMatrices()
{  int r1,c1,r2,c2;
//first matrix
   scanf("%d %d",&r1,&c1);
   int a[r1][c1];
   ReadMatrix(r1,c1,a);
  //second matrix
  scanf("%d %d",&r2,&c2);
   int b[r2][c2];
   ReadMatrix(r2,c2,b);
   if(c1!=r2)
   printf("matrix multiplication not possible");
   else
   {int i,j,k;
    int d[r1][c2];
     for(i=0;i<r1;i++)
     {for(j=0;j<c2;j++)
        { d[i][j]=0;
         for(k=0;k<c1;k++)
         {d[i][j]+=a[i][k]*b[k][j];
         }
        } 
     }
     PrintMatrix(r1,c2,d);
   }
    
}
void Addmatrices()
{
    int r,c,i,j;
    scanf("d%d",&r,&c);
    int a[r][c],b[r][c],d[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            d[i][j]=a[i][j]+b[i][j];
        }
    }
}
int main(){
    //Driver Code-Do not make changes here unless too necessary
    int option,num;
    printf("Enter the number of choices\n");
    scanf("%d",&num);
    while(num--)
    {

        printf("Enter your choice\n");
        scanf("%d",&option);//Assume a valid choice
        switch(option)
        {
             /*Read the required number of matrices in each function using ReadMatrix() only for each operation*/
             /*Print the output using PrintMatrix() function only*/
            case ADDITION:
                            AddMatrices();
                            break;
            case SUBTRACTION:
                            SubMatrices();
                            break;
            case MULTIPLICATION:
                            MultMatrices();
                            break;
            case TRANSPOSE:
                            Transpose();
                            break;
            case DETERMINANT:
                            Determinant();
                            break;
            case POWER:
                            Power();//ask not only for matrix but also the power to which it should be raised
                            break;
        }


    }

    return 0;//Why do we do this?Any ideas? Do reply.
}
