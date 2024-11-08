#include <stdio.h>

int main(){
    int a[3][3]={{3,4,5},{6,7,9},{7,2,8}};
    int arows=sizeof(a)/sizeof(a[0]);
    int acoloums=sizeof(a[0])/sizeof(a[0][0]);
    int sum=0;
    int sum2=0;
    for (int i = 0; i < arows; i++)
    {
        
        
            sum+=a[i][i];
    


    }
    printf("trace = %d",sum);
    for (int i = 0; i < arows; i++)
    {
        for (int j = 0; j < acoloums ; j++)
        {
            sum2+=a[i][i]*a[i][i];
    
        }

        
        
           
    


    }
    printf("norm = %d",sum2);




}