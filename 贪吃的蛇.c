#include <stdio.h>
int main(){
	int snake_length=3;//蛇初始长度3米
	int food;
	while(1){//无限循环接收食物输入
	printf("输入食物大小:");
	scanf ("%d",&food);
	if (food>snake_length){//食物比蛇大，蛇死
	printf("蛇在吃比它大的食物时死了。总长度为%d米\n",snake_length);
	break; 
	}
	snake_length+=food;//否则增加对应长度 
	} 
	return 0;
}
