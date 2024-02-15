#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main(void) {
    srand(time(NULL));
    int num = rand()%100+1;
    printf("%d\n",num);
    int answer;
    int chance = 5;
    printf(" 숫자를 입력하새요 ㅎㅎ ; \n");
    scanf("%d",&answer);
    if (answer>num) {
        printf("down down  ! \n");
    } else if (answer==num) {
        printf(" ding dong dang ~ ! ! \n");
    } else if (answer < num) {
        printf("up  up !  ! ! \n");
    }
    return 0 ;
}
