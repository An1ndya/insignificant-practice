
#include <stdio.h>
#include<stdbool.h>  
//using namespace std;



int main()
{
    int max=0, max2=0, n,number;
    n=0;
    while(1){
    

	    scanf("%d", &number);
        if(number<0){
            break;
        }
        else{
            if(number>max){
                 max2=max;
                max=number;
            }
            if(number<max && number>max2){
                max2=number;
            }
            n++;
        }

    }
    if(n<2){printf("Less than two number entered. Second maximum is not defined");}
    else{
    printf("Second maximum = %d", max2);}
	return 0;
}
