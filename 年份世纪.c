#include <stdio.h>

int main() {
    int year;
    printf("请输入年份：");
    scanf("%d", &year);

    if (year <= 0) {
        printf("年份不能为0或负数！\n");
        return 0;
    }

    int century;
    if (year % 100 == 0) {
        century = year / 100; // 整百年份
    } else {
        century = year / 100 + 1; // 非整百年份
    }

    printf("CENTURY = %d\n", century);
    return 0;
}
