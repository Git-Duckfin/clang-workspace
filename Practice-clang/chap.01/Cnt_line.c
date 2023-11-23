#include <stdio.h>
#include <string.h>
int main()
{
    int c, nl;

    nl = 0;

    for (int i = 97; i > 90; i--)
    {
        putchar(i);
        putchar('\n');
    }

    putchar(EOF);
    putchar('\n');
    fflush(stdin);

    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
            ++nl;
        else if (c == -1)
            // EOF는 -1 신호가 가자마자 프로그램이 종료 되기 때문에 nl이 값이 증가되기 전에 바로 종료
            ++nl;
    }
    printf("%d\n", nl);

    //   (1) 여기까지만 실행됨
    printf("%s\n", "-----exit-----");

    //   putchar(-1); 스트림 입력에 있는 EOF가 버퍼가 비워지면서 -> 바로 종료
    // -----exit-----
    printf("이 코드는 출력되지 않습니다.");

    return 0;
}