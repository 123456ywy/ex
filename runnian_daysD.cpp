#include<stdio.h>
int main(){
	int m_days[13][2]{
	                    {0,  0},{31, 31},{28, 29},{31, 31},{30, 30},{31, 31},{30, 30},
	                    {31, 31},{31, 31},{30, 30},{31, 31},{30, 30},{31, 31}
					  }; 
	int year,day,flag,i,k;
	while (scanf("%d %d", &year, &day) != EOF){
    if(year%400==0||(year%4==0&&year%100!=0))//�ж��������������29�죬Ӧѡ��m_days[2][1] 
      k=1;
    else
      k=0;
    for(i=1;i<=12;i++){
    	day=day-m_days[i][k];//kֻ��Ϊһ�У�Ҫô1�У�Ҫô0��
	if(day<=0)
	    break;//������i����ʾ��Ӧ���·� 	
	}
   day=day+m_days[i][k];//��	 
   printf("%.4d-%.2d-%.2d\n",year, i, day);	
  }
	return 0;
}
