#include <stdio.h>
int main() {
    char op;
    float num1, num2, res;
    printf("您要进行加法 (A)、减法 (S)、乘法 (M) 还是除法 (D)？");
    scanf("%c", &op);
    printf("输入第一个数字：");
    scanf("%f", &num1);
    printf("输入第二个数字：");
    scanf("%f", &num2);

    switch(op) {
        case 'A': case 'a': res = num1 + num2; break;
        case 'S': case 's': res = num1 - num2; break;
        case 'M': case 'm': res = num1 * num2; break;
        case 'D': case 'd': 
            if (num2 == 0) {printf("错误：除数不能为0！\n"); return 1;}
            res = num1 / num2; break;
        default: printf("错误：无效运算类型！\n"); return 1;
    }
    printf("%.6f\n", res);
    return 0;

