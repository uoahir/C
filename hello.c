// #include <stdio.h>

// int main(void)
// {
//     //정수형 변수에 대한 예제
//     /*int age =12;
//     printf("%d\n",age);
//     age =13;
//     printf("%d\n",age);*/
    
//     //실수형 변수에 대한 예제
//     // float f = 46.5f;
//     // printf("%.2f\n",f);
//     // double d = 4.428;
//     // printf("%.2lf\n",d);
//     // return 0;
//     // const int YEAR = 2000;
//     // printf("태어난 년도 : %d\n",YEAR);
//     // // YEAR=2001;
//     // return 0;

//     // int add = 3+7;
//     // // printf("3 + 7 = %d\n",add);
//     // printf("%d X %d = %d\n",30,79,30*79);
//     // return 0;

//     //scanf
//     // 키보드 입력을 받아서 저장
//     // int input;
//     // printf("값을 입력하세요 : ");
//     // scanf("%d",&input);
//     // printf("입력값 : %d\n",input);
//     // return 0;
//     // int one,two,three;
//     // printf("3개의 정수를 입력하세요 : ");
//     // scanf("%d %d %d",&one,&two,&three);
//     // printf("첫번째 값 : %d\n",one);
//     // printf("첫번째 값 : %d\n",two);
//     // printf("첫번째 값 : %d\n",three);

//     //문자(한 글자), 문자열(한 글자 이상의 여러 글자)
//     // char c ='A';
//     // printf("%c\n",c);

//     // char str[256];
//     // scanf("%s",str,sizeof(str));
//     // printf("%s\n",str);

//     //프로젝트 경찰관이 범죄자의 정보를 입수(조서 작성)
//     // 이름 나이 몸무게 키 범죄명
//     char name[256];
//     printf("이름이 뭐예요? ");
//     scanf("%s",name);

//     int age;
//     printf("몇살이에요? ");
//     scanf("%d",&age);

//     float weight;
//     printf("몸무게는 몇 kg이에요? ");
//     scanf("%f",&weight);

//     double height;
//     printf("키는 몇cm에요? ");
//     scanf("%lf",&height);

//     char what[256];
//     printf("무슨 범죄를 저질렀어요? ");
//     scanf("%s",what);

//     printf("\n\n--범죄자 정보--\n\n");
//     printf("이름    :%s\n",name);
//     printf("나이    :%d\n",age);
//     printf("몸무게  :%.2f\n",weight);
//     printf("키  :%.2lf\n",height);
//     printf("범죄    :%s\n",what);
//     printf("Hello World\n");
//     return 0;
// }

# include <stdio.h>

int main(void) {
    // float f = 2121.1020f;
    // printf("%.3f\n",f);
    
    // const YEAR = 1972;
    // printf("C 언어가 발표된 연도: %d\n",YEAR);

    // int input;
    // printf("값을 입력하세요 ~ ");
    // scanf("%d",&input);
    // printf("입력값 : %d\n",input);

    // int one,two,three;
    // printf("정수 3개를 입력하세요.");
    // scanf("%d %d %d",&one,&two,&three);
    // printf("첫 번째 값 : %d\n",one);
    // printf("두 번째 값 : %d\n",two);
    // printf("세 번째 값 : %d\n",three);

    //문자열 변수 입력받아 출력하기
    // char c = 'A';
    // printf("%c\n",c);
   

    // char str[256];
    // scanf_s("%s",str,sizeof(str));
    // printf("%s\n",str);
    // return 0;

    // char str[256],str_1[256];
    // scanf("%s %s",str,str_1);
    // printf("%s,%s\n",str,str_1);
    // return 0;
    // 경찰조서
    /*char name[256];
    printf("이름 ? :");
    scanf("%s",name);

    int age;
    printf("나이 ? :");
    scanf("%d",&age);

    float weight;
    printf("몸무게는 ? :");
    scanf("%f",&weight);

    double height;
    printf("키는 ? :");
    scanf("%lf",&height);

    char what[256];
    printf("범죄? :");
    scanf("%s",what);

    printf("\n\n 경찰 조서 \n\n");
    printf("이름은 %s입니다.\n",name);
    printf("나이는 %d살 입니다.\n",age);
    printf("몸무게는 %.2fkg 입니다.\n",weight);
    printf("키는 %.2lfcm 입니다.\n",height);
    printf("%s 범죄를 저질렀습니다..\n",what);
    return 0;*/
    
    // 회원가입 프로그램
    char name[256];
    printf("이름은 무엇이새요? : ");
    scanf("%s", name);

    char id[256];
    printf("ID를 설정하새요. : ");
    scanf("%s", id);

    int age;
    printf("나이는 몇살입니까? : ");
    scanf("%d", &age);

    int birth;
    printf("생년월일을 6자리로 입력하새요 : ");
    scanf("%d", &birth);

    int foot;
    printf("신발 크기를 입력하새요 : ");
    scanf("%d", &foot);

    printf("\n\n--- 회원정보 ---\n\n");
    printf("이름    : %s\n", name);
    printf("아이디  : %s\n", id);
    printf("나이    : %d살\n", age);
    printf("생일    : %d\n", birth);
    printf("신발 크기   :%dmm\n", foot);
    return 0;


}

