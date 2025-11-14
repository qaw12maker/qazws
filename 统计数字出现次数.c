#include<stdio.h>
int main (){
		int num,temp,count=0;
	char digit_char;
	int digit;
	printf("输入一个整数：");
	scanf("%d",&num);
	getchar();  //吸收scanf遗留的换行符 
	printf("输入一个数字(0-9):");
	scanf("%c",&digit_char);
	digit=digit_char-'0';
	temp=num;
	//处理负数，转为正数计算 
	if(temp<0){
		temp=-temp;
	}
	//处理输入数字为0的情况 
	if(temp==0){
		if(digit==0){
		count=1;//输入的数字是0，且要统计的也是0，所以出现一次 
	} else{
		count=0;//输入的数字是0，但要统计的是其他数字，所以出现0次 
	}
}else{
	while(temp>0){
			if(temp%10==digit){
				count++;
			}
			temp/=10;
		}
	}
	printf("数字 %d 在整数 %d 中出现了 %d 次\n",digit,num,count);
	return 0;
}
