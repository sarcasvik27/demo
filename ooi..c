#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
 {
  char *ptr;
  int static arr[10],count=0;
  int i=0;
  ptr=(char*)malloc(1024*sizeof(char));
  gets(ptr);
    while(ptr[i]!='\0')
  {
      count++;
      if(ptr[i]=='0')
      {
          arr[0]=arr[0]+1;
      }
     else if(ptr[i]=='1')
      {
          arr[1]=arr[1]+1;
      }
      else if(ptr[i]=='2')
      {
          arr[2]=arr[2]+1;
      }
      else if(ptr[i]=='3')
      {
          arr[3]=arr[3]+1;
      }
       else if(ptr[i]=='3')
      {
          arr[3]=arr[3]+1;
      }
       else if(ptr[i]=='4')
      {
          arr[4]=arr[4]+1;
      }
       else if(ptr[i]=='5')
      {
          arr[5]=arr[5]+1;
      }
       else if(ptr[i]=='6')
      {
          arr[6]=arr[6]+1;
      }
       else if(ptr[i]=='7')
      {
          arr[7]=arr[7]+1;
      }
       else if(ptr[i]=='8')
      {
          arr[8]=arr[8]+1;
      }
       else if(ptr[i]=='9')
      {
          arr[9]=arr[9]+1;
      }
      else
      {
          
      }
      
      i++;
  }
  for(i=0;i<10;i++)
  {
      printf("%d ",arr[i]);
        }
    return 0;
}
