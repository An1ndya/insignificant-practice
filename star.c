
#include <stdio.h>
#include<stdbool.h>  
//using namespace std;





int main()
{
    int n,i,j,m,k;
	scanf("%d", &n);
 

    m=n+1;  
   for(i=1;i<=n;i++)  
   {  
       for(j=1;j<=m-1;j++)  
       {  
           printf(" ");  
       }  
       for(k=1;k<i;k++)  
       {  
         printf("* ");  
       }  
       m--;  
     
      if(i!=n){ printf("\n");  }
      else{
          printf("\n");
          for(j=1;j<=2*i-1;j++){printf("* ");}
      }
    }  
    printf("\n");

    m=1;
    n=n-1;
    for( i=n;i>=1;i--)  
   {  
       for( j=1;j<=m+2*n;j++)  
       {  
           printf(" ");  
       }  
       for( k=1;k<=i;k++)  
       {  
           printf("* ");  
       }  
       m++;  
     
      printf("\n");  
    } 
 
	return 0;
}
