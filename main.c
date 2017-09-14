#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <mem.h>

int main() {
    int32_t len = 10;
    int32_t arr[len];//这种初始化将会有值 所以需要先清空 测试
    int32_t i;
    int32_t j;
    for (j = 0; j < len; ++j) {
        arr[j] = 0;
    }
    for (i = 0; i < len; ++i) {
        printf("index %d,and value is %d\n", i, arr[i]);
    }

    int arrb[] = {4, 4, 45, 9, 41, 8, 9, 5};
    int k;
    for (k = 0; k < 8; ++k) {
        printf("index %d,and value is %d\n", k, arrb[k]);
    }
    //二维数组
    int arrc[3][4];
    int l;
    int m;
    for (l = 0; l < 3; ++l) {
        for (m = 0; m < 4; ++m) {
            arrc[l][m] = m;
        }
    }

    for (l = 0; l < 3; ++l) {
        for (m = 0; m < 4; ++m) {
            printf("%d\n", arrc[l][m]);
        }
    }

    char strt[10] = {'g', 'g', 'f', 'a', 'h', '\0'};//碰到\0就认为是结束了
//    memset(strt,0,10);//字符串，替换值，长度
    printf("%s\n", strt);
    char str[13] = "hello w\0orld";
    printf("String length :%d\n", strlen(str));

    int n;
    for (n = 0; n < strlen(str); ++n) {
        printf("String :%c\n", str[n]);
    }
    return EXIT_SUCCESS;
}
