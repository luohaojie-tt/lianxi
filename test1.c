#include <stdio.h>
#include <string.h>
int main(void)
{
    struct
    {
        int a;
        char s[5];
        float f;

    } tt;
    char s[20];
    bzero(&tt, sizeof(tt)); //等价于memset(&tt,0,sizeof(tt));
    bzero(s, 20);           //等价于memset(s,0,20);
    printf("hello world\n");
    printf("Initial success.\n");
    printf("hello luohaojie this is a test\n");
    getchar();
    printf("shuruwanbi");
    printf("wojinxinleyicixuigai");
    return 0;
}
