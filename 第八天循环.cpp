#include <stdio.h>
int main() {
	//while循环 
/*	int i=1;//1.循环初始化 循环次数
	while(i<=10) { //2.循环判断语句
	}
	printf("老婆我错了",i);//3.循环体语句
	i++;//4.循环增量  步长
	*/

	//while循环 
/*	int i;//循环次数
	i=1;//初始值
	//当 满足条件的时候就执行大括号里面的循环体		不做增量永远都是初始值 
//	while(条件){
		//循环体语句
		//步长： 
//	} 
	while(i<=4){ //while先判断条件 后运行循环体 
		printf("测测你的码\n");
		i++;
	}
*/


	//输出1-到1之间的所有数
/*	int i=1;//初始值 
	while(i<=10){//判断条件 
		printf("%d\n",i);//循环体 
		i++;//步长 
	} 
*/


/*	int i=10;
	while(i>=1){
		printf("%d\n",i);
		i--;
	}
*/

//求和公式  sum=sum+每一项 
/*	int i=1,sum=0;
	while(i<=100){
		printf("%d\n",i);
		sum=sum+i;
		i++;		
	}
	printf("%d",sum);  
	*/
	//死循环
/*	while(1){
		循环体 
	} 
*/


	//do while循环
/*	do{
		循环体
		步长增量 
	} while(判断表达式);
//while格式 	先判断，满足了在执行 
	int i=1;
	while(i<=100){
		printf("%d",i);
		}
		//5次判断4次循环 
	}*/
//do while格式 		先执行一遍循环体，在做判断 
//无论判断成不成立，都会先执行一次循环体，至少执行一次循环体 
	int i=1;
	do{
		printf("%d",i);
		i++;
		}while(i<=100);
	//4次判断4执行 
//do while 执行次数等于判断次数
//while判断次数多于执行次数


//循环次数不知道有几次用while 














































return 0;

}
