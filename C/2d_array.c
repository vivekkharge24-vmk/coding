#include<stdio.h>
int main()
{
    // Simple Matrix Print 2D Array Program
    int arr[4][5] = 
    { { 1,2,3,4,5},
      { 11,12,13,14,15},
      { 21,22,23,24,25},
      { 31,32,33,34,35} };

      for(int i=0;i<4;i++)
      {
        for(int j=0;j<5;j++)
        {
           printf("%d ",arr[i][j]);
        }
        printf("\n");

      }
      return 0;
}