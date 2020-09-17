#include<stdio.h>




void SWAP(char * ary, int len);

int main(void){
 
    int i =0;
    int size=0;
    char input=0;
    scanf("%d",&size);
    char ary[size];
    int len = sizeof(ary)/sizeof(char);
    printf("size : %d \n",len);
    for(i=0; i<len; i++)
    {
        printf("input: ");
        scanf("%s",&input);
        ary[i]=input;
    }
    SWAP(ary, len);

   
    return 0;
    }
    
 void SWAP(char * ary, int len)
 {
     int i=0,j=0,t=0;
     char temp=0;
     
     for(i=0; i<len; i++)
     {
         printf("%c ",ary[i]);
     }
     puts("\n");
      
     for(i=0; i < (len-1) ; i++)
     {
         temp=ary[0];
         for(j=0;j<(len-1);j++)
         {
             ary[j]=ary[j+1];
         }
            ary[len-1]=temp;

            for(t=0;t<len;t++)
            {
                printf("%c ",ary[t]);
            }
            puts("\n");
     }
 }
