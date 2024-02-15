// # include <stdio.h>
// # include <stdlib.h>
// # include <time.h>

// int main(void) {
//     int num;
//     srand(time(NULL));
//     num = rand()%100 +1;
//     // printf("정답 : %d\n",num);
//     int answer =0, count = 5;
//     for(;;){
//         printf("기회는 %d회 남았읍니다 , , ",count--);
//         printf(" 정답을 맞춰보시와요 ~ : ");
//         scanf("%d",&answer);
//         if (answer==num) {
//             printf("정 답 입니당 !!추 카추카 추 ! \n");
//             break;
//         } else if(answer > num ){
//             printf(" down ,, ! down ,, ! \n");
//         } else if(answer < num) {
//             printf(" up up ! \n");
//         } 
//         if (count == 0) {
//             printf(" 다음 기회 애 ,, ㅠ ,, ~ \n");
//             printf("정답은 ! ! %d입니다.. \n",num);
//             break;
//         }
//     }
//     return 0;
// }


#include <stdio.h>

int main (void) {
    printf("\u250C\u252C\u2510\n");
    printf("\u251C\u253C\u2524\n");
    printf("\u2514\u2534\u2518\n");
    return 0;
}


