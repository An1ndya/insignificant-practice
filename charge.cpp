
#include <stdio.h>
#include<stdbool.h>  
//using namespace std;


int  unit;
double cost;




int main()
{
    cost = 0;
	scanf("%d", &unit);

    switch (true)
    ​{
        case (unit<=50):
            cost =  3*unit;
        break;

        case (unit<=150):
            cost = 50*3 + 4*(unit-50);
        break;
        case (unit<=200):
            cost = 50*3 + 4*100 + 5*(unit-150);
        break;
        case (unit<=400):
            cost = 50*3 + 4*100 + 5*50  + 6*(unit-200);
        break;
        default:
            cost = 50*3 + 4*100 + 5*50  + 6*200+ 10*(unit-400);
        break;
    }
    printf("%lf", cost);
	return 0;
}
