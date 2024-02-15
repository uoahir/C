//1. if-else 문:
/* #include <stdio.h>

int main(void) {
    int age;
    printf("몇 살이니 ? : ");
    scanf("%d",&age);
    if (age >= 20) {
        printf(" 나는 성인 입니다. . . \n ");
    } else {
        printf("나 는 청소년 임니다 . . ㅇ v ㅇ ; ; \n ");
    }
    return 0;
}*/

//2. if-else if-else 문:
/*#include <stdio.h>

int main(void) {
    int age;
    printf(" 몇 살 ? ~ : ");
    scanf("%d",&age);
    if (age>=8 && age <=13) {
        printf(" 초딩 임니다 , , \n");
    } else if (age >= 14 && age <= 16) {
        printf("중딩 임니다 , , \n");
    } else if (age >= 17 && age <= 19) {
        printf("고딩 임니다 ,  , \n");
    } else {
        printf("청소년이 아님니다 ~ ~ ,, \n");
    }
    return 0;
}*/

//3. And, Or 연산자 &&, ||
/*# include <stdio.h>

int main(void) {
    int a = 10;
    int b = 11;
    int c = 12;
    int d = 14;
    if (a==b || c==d) {
        printf(" a 와 b 또는 c 와 d의 값이 같 슴니당 ~ ^ ㅠ ^ ,,\n");
    } else {
        printf(" 값이 다 달라용 ~ ㅋ \n");
    }
    return 0;
}*/

//4. break 문
/*#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 30; i++){
        if(i>=6) {
            printf(" 나 머지는 ~ 집애 가새요 . . .! \n");
            break;
        } 
        printf(" %d 번은 조별 발 표 준 비 하새요 ~~ \n",i);
    }
    return 0;
}*/

//5. countinue 문 
/* 1) #include <stdio.h>

int main(void) {
    for (int i =1; i<= 30; i++) {
        if (i==7) {
            printf(" %d번은 결석이니깐 재외할개요 ~ !\n",i);
            continue;
        } 
        if (i>= 6 && i <= 10) {
            printf("%d번은 조별 발표를 준비하생 요 ! \n",i);
        } 
        printf("나머지는 집애 가쇼 !! \n");
    }
    return 0;
}*/

/* 2) # include <stdio.h>

int main(void) {
    for (int i=1; i<= 30 ; i++) {
        if (i>= 6 && i <= 10) {
            if (i==7) {
                printf(" %d번은 결석 이니 제외 함니다 . . ! \n",i);
                continue;
            }
            printf(" %d 번은 발표 준비함니다 . . ~ \n",i);
        }
    }
    return 0;
}*/

// 5. 난수 생성하기 ! 꼭 초기화를 해야 한다 ! 
// 초기화 : srand(time(NULL));
/*# include <stdio.h>
# include <stdlib.h>
# include <time.h>

int main(void) {
    for(int i=0;i<=9;i++) {
        printf("%d\n",rand()%10);
    }
    srand(time(NULL));
    printf("\n\n난수 초기화 이후\n\n");
    for (int i=0;i<10;i++) {
        printf("%d\n",rand()%10);
    }
    return 0;
}*/

// 6. switch 문
//if문으로 구현
/*#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main(void) {
    srand(time(NULL));
    int i= rand()%3;
    if (i==0){
        printf("가위\n");
    } else if(i==1){
        printf("바위\n");
    } else if(i==2) { 
        printf("보\n");
    } else {
        printf("몰라요\n");
    }
    return 0;
}*/

// switch로 구현
// #include <time.h>
// #include <stdlib.h>
// #include <stdio.h>

// int main(void) {
//     srand(time(NULL));
//     int i = rand()%3;
//     switch (i) {
//         case 0:
//             printf("가위\n");
//             break;
            
//         case 1:
//             printf("바위\n");
//             break;
//         case 2:
//             printf("보\n");
//             break;
//         default:
//             printf("몰라요\n");
//     }
//     return 0;
// }

// 청소년 나이 구하기 switch 사용
// #include <stdio.h>

// int main(void) {
//     int age;
//     printf("나 이 몇 살  ~? : ");
//     scanf("%d",&age);
//     switch(age) {
//         case 8:
//         case 9:
//         case 10:
//         case 11:
//         case 12:
//         case 13:
//             printf("초딩 ㅋ \n");
//             break;
//         case 14:
//         case 15:
//         case 16:
//             printf("중딩 ㅋ \n");
//             break;
//         case 17:
//         case 18:
//         case 19:
//             printf("고 딩 ㅋ \n");
//             break;
//     }
//     return 0;
// }














