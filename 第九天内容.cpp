#include <stdio.h>
int main(){
/*	int num,count=0,sum=0;//定义变量	初始值 
	printf("请输入一个数：");//提示
	scanf("%d",&num);//输入值
	//判断		不知道循环几次的时候就用while 
	while(num){//只要num大于0就一直循环 
		//循环体	拿最后一位 ，再舍去最后一位形成新的数字再去拿最后一位 
		sum=sum+num%10;	//求和公式sum=sum+要求和的对象 
		num=num/10;
		//步长 
		count++;
		
	} 
	printf("该数的个数为%d,每一位的和为%d",count,sum);
	*/
	
	
/*	char ch;//字符 
	int ying=0,kong=0,shu=0,qita=0;//变量初始值 
	printf("请输入字符");//提示 
	while((ch=getchar())!='\n'){//如果不换行就能一直循环执行语句 
		if(ch>='A'&&ch<='Z'||ch>='a'&&ch<='z'){//英文字母 
			ying++;
		}else if(ch==' '){//空格 
			kong++;
		}else if(ch>='0'&&ch<='9'){//数字 
			shu++;
		}else{//其他 
			qita++;
		}	
	}
	printf("英文有%d，空格有%d，数字有%d，其他有%d",ying,kong,shu,qita);//输出位数的值 
	*/ 
	
	//for循环框架
//	 for(初始值;判断表达式;步长){
//	 	循环体 
//	 }
	
//	int i;//定义变量 
	//初始值 判断 步长 
//	for(i=1;i<=10;i++){
//		printf("%d\n",i);
//	}
	
	
/*	int i,sum=0;
	for(i=1;i<=100;i++){
		if(i%2==0){
			sum=sum+i;
		}
	}
	printf("%d",sum);
**/	
	
/*	int i,sum;
	for(i=1,sum=0;i<=100;i++){
		if(i%2==0){
			sum=sum+i;
		}
	}
	printf("%d",sum);
	*/
	//continue 跳过本次循环
	//break 结束整个循环 
	//知道范围用for 不知道就用while
	//do while至少执行一次循环体	for和while只有在条件成立才执行循环体
	
	
	//累乘公式sum=sum*i		sum必须=1 
	
	
/*	int i,ge,shi,bai,qian,wan;
	for(i=10000;i<=99999;i++){
		ge=i%10;
		shi=i/10%10;
		bai=i/100%10;
		qian=i/1000%10;
		wan=i/10000%10;
		if(ge==wan&&shi==qian&&ge+shi+qian+wan==bai){
			printf("%d\n",i);
		}	
	}
	*/
	
	
	//跳转控制语句
	//1.break 中止循环或跳出Switch，应用于循环里面，结束的只是循环
	//2.continue结束本次循环，继续下一次循环	只对循环有用 
	//3.return中止函数并且返回函数返回值，结束的是整个函数 
	//通常break语句总是和if语句连在一起，满足条件是便跳出循环 
	
	
	
	//只能有1和它本身两个因子，不能有其他的因数这种数叫做素数
	
	//输入一个整数，判断n是否为素数
/*	int n,i;
	printf("请输入一个素数：");
	scanf("%d",&n);
	for(i=2;i<n;i++){
		if(n%i==0){
			break;
		}
	}
	if(i>=n){
		printf("%d是",n);
	}else{
		printf("%d不是",n);
	}
*/	
	
	//出现多少次9 
	int count=0;
	for(int i=1;i<=100;i++){
		//个位为9 
		if(i%10==0){
			count++;
		//十位为9	
		}if(i/10%10==0){
			count++;
		}
	}	
	printf("1-100出现了%d次9",count);
	

	 return 0;
}
