#include <stdio.h>

int main(){
    int a[3][3]={{3,4,5},{6,7,9},{7,2,8}};
    int b[3][3]={{67,5,53},{12,47,90},{3,0,6}};
    int c[3][3];
    int size =sizeof(a)/sizeof(a[0]);
    int arows=sizeof(a)/sizeof(a[0]);
    int acoloums=sizeof(a[0])/sizeof(a[0][0]);
    int brows=sizeof(b)/sizeof(b[0]);
    int bcoloums=sizeof(b[0])/sizeof(b[0][0]);
    int sum=0;
    int temp;
    


    for (int i = 0; i <arows ;i++)
    {
        for(int j=0;j<bcoloums;j++){
        sum+=a[i][j]*b[j][i];
        c[i][j]=sum;
        sum=0;
        
        }


    }
    for (int k=0;k<arows;k++){
        for (int i = 0; i < bcoloums; i++)
        {
            printf("%d\t",c[i][k]);
        }
        printf("\n");
        
    }
     for (int k=0;k<arows;k++){
        for (int i = 0; i < bcoloums; i++)
        {
            a[i][k]=temp;
            a[i][k]=a[k][i];
            a[k][i]=temp;

            printf("%d\t",a[i][k]);
        }
        printf("\n");
        
    }
    





    return 0;
}