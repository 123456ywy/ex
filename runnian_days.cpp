#include<stdio.h>
int function(int y,int m,int d){
	int month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};//1-12月 
	int days=0;//计算天数
	for(int i=0;i<m;i++)
		days+=month[i];//计算月份的天数
	days=days+d;
	if(y%400==0||(y%4==0&&y%100!=0))//闰年天数+1
	   days=days+1; 
	return days;	
}

int main(){
	int y,m,d;
	char yyyy,mm;
	scanf("%d%c%d%c%d",&y,&yyyy,&m,&mm,&d);
	int days=function(y,m,d);
	printf("%d",days);
    return 0;
}
