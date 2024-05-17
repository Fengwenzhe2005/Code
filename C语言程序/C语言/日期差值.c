#include<stdio.h>
int feb(int y){
	if((y%4==0&&y%100!=0)||(y%400==0)){
		return 29;
	}else{
		return 28;
	}

}
int main()
{
	int num1,year1,month1,day1,num2,year2,month2,day2,result,sum=0;
	int lp[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
	int cm[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	scanf("%d",&num1);
	scanf("%d",&num2);
	
	day1=num1%100;
	month1=(num1%10000)/100;
	year1=num1/10000;

	day2=num2%100;
	month2=(num2%10000)/100;
	year2=num2/10000;
	
	if((year1==year2)&&(month1==month2)){
		result=(day1-day2>0)?(day1-day2):(day2-day1);
		printf("%d",result);
	}
	
	else if((feb(year1)==28)&&(year1==year2)){
		int big,small,cnt,result1,result2=0;
		big=(month1>month2)?month1:month2;
		small=(month1<month2)?month1:month2;
		result1=(month1>month2)?(day1+cm[month2]-day2):(day2+cm[month1]-day1);
		cnt=small+1;
			for(;cnt<big;cnt++){
			result2+=cm[cnt];
		}
		result=result1+result2;
		printf("%d",result);
		
	}
	
	else if((feb(year1)==29)&&(year1==year2)){
		int bm,sm,cnt,result1,result2=0;
		bm=(month1>month2)?month1:month2;
		sm=(month1<month2)?month1:month2;
		result1=(month1>month2)?(day1+lp[month2]-day2):(day2+lp[month1]-day1);
		cnt=sm+1;
			for(;cnt<bm;cnt++){
			result2+=lp[cnt];
		}
		result=result1+result2;
		printf("%d",result);
		
	}
	
	else{
		int by,sy,ly,sum=0,result1,result2,result3,cnt1,cnt2,cnt;
		by=(year1>year2)?year1:year2;
		sy=(year1<year2)?year1:year2;
		
		if(feb(year1)==28&&year1==by){
			cnt1=month1-1;
			for(;cnt1>=1;cnt1--){
				sum+=cm[cnt1];
			}
			result1=sum+day1;
		}
		else if(feb(year1)==29&&year1==by){
			cnt1=month1-1;
			for(;cnt1>=1;cnt1--){
				sum+=lp[cnt1]+day1;
			}
			result1=sum+day1;
		}
		
	    else if(feb(year1)==28&&year1==sy){
			cnt1=month1+1;
			for(;cnt1<=12;cnt1++){
				sum+=cm[cnt1];
			}
			result1=sum+cm[month1]-day1;
		}
		
		else if(feb(year1)==29&&year1==sy){
			cnt1=month1+1;
			for(;cnt1<=12;cnt1++){
				sum+=lp[cnt1];
			}
			result1=sum+lp[month1]-day1;
		}
		sum=0;
		
			if(feb(year2)==28&&year2==by){
			cnt2=month2-1;
			for(;cnt2>=1;cnt2--){
				sum+=cm[cnt2];
			}
			result2=sum+day2;
		}
		else if(feb(year2)==29&&year2==by){
			cnt2=month2-1;
			for(;cnt2>=1;cnt2--){
				sum+=lp[cnt2]+day2;
			}
			result2=sum+day2;
		}
		
	    else if(feb(year2)==28&&year2==sy){
			cnt2=month2+1;
			for(;cnt2<=12;cnt2++){
				sum+=cm[cnt2];
			}
			result1=sum+cm[month2]-day2;
		}
		
		else if(feb(year2)==29&&year2==sy){
			cnt2=month2+1;
			for(;cnt2<=12;cnt2++){
				sum+=lp[cnt2];
			}
			result2=sum+lp[month2]-day2;
		}
		cnt=sy+1;
		for(;cnt<by;cnt++){
			if(feb(cnt)==29){
				ly++;
			}
		}
		result3=ly*366+(by-sy-ly-1)*365;
		result=result1+result2+result3;
		printf("%d",result);
	}
	return 0;
 } 
