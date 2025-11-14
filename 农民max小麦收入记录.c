#include<stdio.h>
int main()
{
	int income,total=0;
	//循环输入收入，直到总额>=200
	while(total<=200) {
	 	 printf("输入收入：");
		 scanf("%d",&income) ;
		 total+=income;
		
}
    printf("恭喜!您已获得%d个金币，现在可以休息了。\n",total);
	return 0;
 } 
