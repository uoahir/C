#include <stdio.h>

// int main(void) {
//     int floor;
//     printf("몇 층 ? ? : ");
//     scanf("%d",&floor);
//     for (int i=0;i<floor;i++) {
//         for (int k = floor-1; k>i;k--){
//             printf(" ");
//         }
//         for (int j=0;j<= i*2;j++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>

// int main(void) {
//     int floor;
//     printf("몇 층 ? : ");
//     scanf("%d",&floor);
//     for (int i=0 ; i<floor;i++) {
//         for(int j=floor;j>i;j--){
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>

// int main(void) {
//     int floor;
//     printf(" 몇 층 ? : ");
//     scanf("%d",&floor);
//     for (int i=0;i<floor;i++){
//         for(int j=floor-1;j>i;j--){
//             printf(" ");
//         } 
//         for(int k=0;k<=2*i;k++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

#include <stdio.h>

int main(void) {
    int floor;
    printf(" 몇  층 ? : ");
    scanf("%d",&floor);
    for (int i=0;i<floor;i++){
        for(int j=floor-1;j>i;j--){
            printf(" ");
        } 
        for(int k=0;k<=2*i;k++){
            printf("*");
        }
        printf("\n");
    }
    for (int i = floor-2;i>=0;i--){
        for (int k = floor-1;k>i;k--){
            printf(" ");
        }
        for (int j = 0;j<2*i+1;j++){
            printf("*");
        }

        printf("\n");
    }
    return 0;
}










