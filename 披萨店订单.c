#include <stdio.h>

int main() {
    char choice;
    int pizza_num, topping_num;
    char delivery;
    int total;

    while (1) {
        // 显示菜单并获取用户选择
        printf("输入 N 计算新订单。\n");
        printf("输入 Q 结束程序。\n");
        printf("输入：");
        scanf(" %c", &choice); // 空格吸收缓冲区残留字符

        if (choice == 'Q') {
            break; // 输入Q则退出程序
        } else if (choice == 'N') {
            // 输入订单信息
            printf("输入披萨数量：");
            scanf("%d", &pizza_num);
            printf("输入披萨配料数量：");
            scanf("%d", &topping_num);
            printf("是否需要外送？（Y/N）：");
            scanf(" %c", &delivery);

            // 计算总价：披萨总价 + 配料总价 + 外送费（如有）
            total = pizza_num * 20 + topping_num * 2;
            if (delivery == 'Y') {
                total += 5;
            }

            printf("订单价格为 %d 个金币。\n", total);
        } else {
            printf("输入错误，请重新选择！\n");
        }
    }

    return 0;
}
