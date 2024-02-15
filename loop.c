# include <stdio.h>

int main(void){
    int a=10 ;
    // printf("a는 %d\n",a);
    // //a= a+1;
    // a++;
    // printf("a는 %d\n",a);
    // return 0;
    // printf("%d\n",a++);
    // printf("%d\n",++a);
    // return 0;
    // for 반복문
    // for (int i=1; i<=10; i++) {
    //     printf("Hello World %d\n",i);
    // }
    // int i=1;
    // while (i<=10) {
    //     printf("Hello World %d\n",i++);
    // }
    // return 0;
    // int i =1;
    // do {
    //     printf("Hello World %d\n",i++);
    // } while(i<=10);
    // return 0;
    // for (int i=1;i<=3;i++)
    // printf("파이팅 %d\n",i);
    // return 0;
    // for (int i=2;i<=9;i++) {
    //     printf("%d단 출력\n",i);
    //     for (int j=1;j<=9;j++) {
    //         printf("%d X %d = %d\n",i,j,i*j);
    //         }
    //     }
    // return 0;
    // for (int i=0; i<=4; i++) {
    //     for (int j=0; j<= i;j++) {
    //         printf("*");
    //         }
    //     printf("\n");
    //     }
        
    // for (int i= 0; i<=4 ; i++) {
    //     for (int j = 0; j <= i; j++) {
    //         printf("*");
    //     }
    //     printf("\n");
    // }
    // return 0;
    for (int i=0; i<5 ; i++) {
        for(int j=i ; j<=3 ; j++) {
            printf(" ");
        }
        for (int k=0; k<=i; k++) {
            printf("*");
        }
        printf("\n");
        }
        return 0;
    }