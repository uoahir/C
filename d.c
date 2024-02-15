/*#include <stdio.h>

int main() {
    int a;
    a = 127;
    printf("a의 값은 %d 진수로 %o입니다.\n",8,a);
    printf("a의 값은 %d 진수로 %d입니다.\n",10,a);
    printf("a의 값은 %d 진수로 %x입니다.\n",16,a);
    return 0;
}*/

// #include <stdio.h>
// int main(void) {
//     float a = 3.141592f;
//     double b = 3.141592;
//     int c =123;
//     printf("%.2f\n",a);
//     printf("%6.3f\n",b);
//     printf("%5d\n",c);
//     return 0;
// }

// #include <stdio.h>

// int main(void){
//     char a;
//     a='a';
//     printf("a의 값과 들어있는 문자는 ? 값: %d, 문자: %c \n",a,a);
//     return 0;
// }

// #include <stdio.h>
// #include <math.h>

// int main(void) {
//     printf("%g\n",pow(2.0,7.0));
//     return 0;
// }

// #include <stdio.h>

// int main(void) {
//     float celsius;
//     printf("섭씨온도를 화씨온도로 바꿔주는 프로그램입니다 .. ! \n");
//     printf("섭 씨 온도는 몇 도 임니까 ? : ");
//     scanf("%f",&celsius);
//     printf("화 씨 온도는 %.1f도 입니다 . . .\n",celsius*9/5+32);
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int i;
//     printf(" 숫자를 입력하새요 ,, : ");
//     scanf("%d",&i);

//     if(i==7){
//         printf("당신은 행운으 숫자 7을 입력했읍니다.. lucky ~ ,, \n");
//     }
//     return 0;
// }
// #include <stdio.h>
// int main() {
//     double i,j;
//     printf(" 나누고 싶은 두 정수를 입력하셔요 ,, : ");
//     scanf("%lf %lf",&i,&j);
    
//     printf("%f를 %f로 나눈 값은 %f입니다.\n",i,j,i/j);
//     return 0;
// }

// #include <stdio.h>

// int main(void) {
//     double num1, num2;
//     printf(" 나누고 싶은 두 정수를 입력하새요 , , : ");
//     scanf("%lf %lf",&num1,&num2);

//     if (num2==0){
//         printf("0으로 나눌 수 업슴 . ,, ");
//         return 0;
//     }
//     printf("%lf를 %lf로 나눈 값은 %lf 입미당..",num1,num2,num1/num2);
//     return 0;
//     }

// #include <stdio.h>
// int main(void) {
//     int num;

//     printf("아무 숫자나 입력해 보새요 .. : ");
//     scanf("%d",&num);

//     if (num==7){
//         printf("행운으 숫자 %d이군 뇨,, \n",num);
//     } else {
//         printf("숫 자 %d 을(를) 입력햇군뇨 , , \n",num);
//     }
//     return 0;
// }

// #include <stdio.h>

// int main (void) {
//     int num;
//     printf("아무 숫자나 임력하새요 ,, : ");
//     scanf("%d",&num);
//     if (num==7){
//         printf("행운 의 숫자 %d 임니다. .\n",num);
//     } else {
//         if(num == 4) {
//             printf("저 주의 숫자 ,, %d입니다 .. . \n",num);
//         }else {
//             printf(" 숫자 , , %d입니다 .. . , ,\n",num);
//         }
//     }
//     return 0;
// }

// #include <stdio.h>

// int main(void) {
//     int sum;
//     sum = 0;
//     for (int i=1;i<=100;i++) {
//         sum+=i;
//     }
//     printf("%d\n",sum);
//     return 0;
// }

// #include <stdio.h>
// int main(void){
//     int i;
//     int subject,score;
//     double sum_score = 0;

//     printf(" 몇 과목 인가요 ? : ");
//     scanf("%d",&subject);
    
//     printf("\n각 과목의 점수를  입력하시오 !!! : \n");
//     for (i=1; i<=subject;i++){
//         printf("과목 %d: ",i);
//         scanf("%d",&score);
//         sum_score+=score;
//     }
//     printf("전체 과목 평균은 : %.2f \n",sum_score/subject);
//     return 0;
// }

// #include <stdio.h>
// int main(void) {
//     int usranswer;

//     printf("캄퓨터 가 생각 한 숫자를 맞춰 보새용 ~ ! \n");

//     for(;;) {
//         scanf("%d",&usranswer);
//         if(usranswer == 3) {
//             printf("맞추셧내요 , , \n");
//             break;
//         } else {
//             printf("틀렷 서요 , , \n");
//         }
//     }
//     return 0;
// }

// #include <stdio.h>

// int main(void) {
//     int i;
//     for (i = 0; i<100; i++) {
//         if (i%5 == 0) continue;

//         printf("%d ",i);
//     }
//     return 0;
// }

// #include <stdio.h>
// int main(void) {
//     int i, j;

//     for (i=1;i<10;i++){
//         for(j=1;j<i;j++){
//             printf("%d ",j);
//         }
//     }
//     return 0;
// }
// // 1 1 2 1 2 3 1 2 3 4 1 2 3 4 5 1 2 3 4 5 6 1 2 3 4 5 6 7 1 2 3 4 5 6 7 8

// #include <stdio.h>

// int main(void) {
//     int i=1,sum=0;
//     while (i<=100) {
//         sum += i;
//         i++;
//     }
//     printf("1부터 100까지의 합: %d \n",sum);
//     return 0;
// }

// # include <stdio.h>
// int main(void) {
//     int i =1, sum=0;

//     do{
//         sum += i;
//         i++;
//     } while (i<1);

//     printf("sum : %d \n",sum);
//     return 0;
// }

/*#include <stdio.h>

int main(void) {
    int floor,i,j,k;
    printf(" 숫자 입력 하새요 ! : ");
    scanf("%d",&floor);
    for (i=0;i<floor;i++){
        for (k=floor-1;k>i;k--){
            printf(" ");
        }
        for (j=0;j<=2*i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}*/

// #include <stdio.h>

// int main(void) {
//     int floor,i,j,k;
//     printf(" 숫자 입력하새요 ! : ");
//     scanf("%d",&floor);
//     for (i=floor-1;i>=0;i--){
//         for(k=floor-1;k>i;k--){
//             printf(" ");
//         }
//         for (j=0;j<=2*i;j++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>

// int main(void){
//     int i;
//     int sum=0;
//     for(i=1;i<1001;i++) {
//         if (i%3==0 || i%5==0) {
//             sum+=i;
//         }
//     }
//     printf("%d \n",sum);
//     return 0;
    
// }

// #include <stdio.h>

// int main(void) {
//     int i,num;
//     int mul=1;
//     printf("숫 자를 입력하새요 ~ : ");
//     scanf("%d",&num);
//     for(i=1;i<=num;i++){
//         mul *=i;
//     }
//     printf("1부터 %d까지의 곱은 %d입니당 . . ! \n",num,mul);
//     return 0;
// }

// # include <stdio.h>
// # include <stdlib.h>
// # include <time.h>

// int main(void) { 
//     srand(time(NULL));
//     int num= rand()%100+1;
//     // printf("정답은 %d입니다.. \n",num);
//     int answer = 0;
//     int count = 5;
//     while(1){
//         printf("%d회 남았ㅅ읍니다.. \n",count);
//         printf(" 숫자를 입력하새요 ,, : ");
//         scanf("%d",&answer);
//         if(answer == num) {
//             printf("정답임니당 ~ ! \n");
//             break;
//         } else if(answer>num) {
//             printf("down  ! \n");
//             count -= 1;
//         } else if (answer < num) {
//             printf(" up up ! \n");
//             count -= 1;
//         }
//         if (count==0) {
//             printf(" 다음 기회애 ,, ~ ,, \n");
//             printf(" 정답은 ! %d 입니다.. ! \n",num);
//             break;
//         }
//     }
//     return 0;
// }

# include <stdio.h>

int main(void){
    int cof,sand,price;
    printf("커피와 샌드위치의 수량을 입력하시오 , , : ");
    scanf("%d %d",&cof,&sand);
    if (cof>0 && sand>0) {
        price = 3500*cof + 6000*sand;
    } else if (cof > 0 || sand >0 ) {
        price = 4500*cof + 6000 * sand;
    } 
    printf("주문하신 메뉴의 총 금액은 %d원 입니당 . .! \n",price);
    return 0;
}