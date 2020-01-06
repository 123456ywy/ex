#include<stdio.h>
int main(){
	int m_days[13][2]{
	                    {0,  0},{31, 31},{28, 29},{31, 31},{30, 30},{31, 31},{30, 30},
	                    {31, 31},{31, 31},{30, 30},{31, 31},{30, 30},{31, 31}
					  }; 
	int year,day,flag,i,k;
	while (scanf("%d %d", &year, &day) != EOF){
    if(year%400==0||(year%4==0&&year%100!=0))//判断若闰年则二月有29天，应选择m_days[2][1] 
      k=1;
    else
      k=0;
    for(i=1;i<=12;i++){
    	day=day-m_days[i][k];//k只能为一列，要么1列，要么0列
	if(day<=0)
	    break;//结束的i即表示对应的月份 	
	}
   day=day+m_days[i][k];//日	 
   printf("%.4d-%.2d-%.2d\n",year, i, day);	
  }
	return 0;
}
