#include<stdio.h>
#include<stdlib.h>
int main()
{
  int array[8]={1,2,3,5,7,8,9,9};
  int size=sizeof(array)/sizeof(int);
  int n=10;
  int i=0,j=size-1;
  while(i<j)
  {
    if(array[i] + array[j] == n)
    {
          printf("[%d,%d]",array[i],array[j]);
          j--;
    }      
    else if(array[i] + array[j] < n)
      i++;
    else 
      j--;
  }
  return 0;
}
