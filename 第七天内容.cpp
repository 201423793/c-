#include <stdio.h>
int main(){
	//技能第十题 
	//输入字符 
/*	char ch;
	printf("请输入一个字符:");//提示
	scanf("%c",&ch);//输入值
	if(ch>='A'&&ch<='Z'){//判断 
		printf("%c",ch+32);//大写转小写 
	} else if(ch>='a'&&ch<='z'){//小写转大写 
		printf("%c",ch-32);
	} else if(ch>='0'&&ch<='9'){//'0~9' 
		printf("%d",ch-48+100);
	} else{
		printf("%c",ch);
	}*/
	
	//十一题
/*	char ch;//定义变量
	 printf("请输入一个字符:");//提示
	 scanf("%c",&ch);//输入值 
	 //做判断如果是c~x之间的字母就是真值否则什么都不做 
	 if(ch>='C'&&ch<='X'){//判断 
	 	printf("%c%c%c%c%c",ch-2,ch-1,ch,ch+1,ch+2);//输出 
	 }*/
	 
	//十三题
	//输入成绩
/*	float score;//成绩变量
	char ch;//等级 
	scanf("%f",&score); 
	//判断成绩   5种情况a,b,c,d,e 
	if(score>=90){
		printf("A");
	} else if(score>=80&&score<90){
		printf("B");
	} else if(score>=70&&score<80){
		printf("C");
	} else if(score>=60&&score<70){
		printf("D");
	} else{
		printf("E");
  }*/
	 
	 //switch语法格式 
	 //开关 
	 //if的花括号可以省略必须有一句执行语句，Switch无论任何时候都不能省去 
	 //多选一  多种情况 
/*	switch(判断表达式){知道值 多选一  表达式不能重复 
		//情况，案例，例子 
		case 表达式或者常量:执行语句;break;//第一种情况 
		case 表达式或者常量:执行语句;break;//第二种情况
		case 表达式或者常量:执行语句;break;//第三种情况
		default: 执行语句;break;//最后一种情况 		break(中断结束)switch 
	}*/
	
/*	int date;//日期
	scanf("%d",&date);
	switch(date){//判断日期 
		case 1: printf("周一");break;
		case 2: printf("周二");break;
		case 3: printf("周三");break;
		case 4: printf("周四");break;
		case 5: printf("周五");break;
		case 6: printf("周六");break;
		case 7: printf("周日");break;
		default: printf("滚，没有这个日期");break;
	} */
	
	
/*	float score;//成绩
	//输入成绩
	printf("请输入一个成绩捏：");
	scanf("%f",&score); 
	//判断成绩
	//强制转换	（转换的类型） （要转的对象） 
	switch((int)(score/10)){
		case 10: printf("A");break;
		case 9: printf("A");break;
		case 8: printf("B");break;
		case 7: printf("C");break;
		case 6: printf("D");break;
		default: printf("E");break;
	} */
	
	//有准确值用Switch没  准确值用if 
	
	
	
/*	int num;//定义变量 
	printf("请输入月份捏:");//提示 
	scanf("%d",&num);//输入月份
	//判断月份 
	//判断季节 
	if(num==1||num==2||num==12){
		printf("现在是冬天");
	}
	else if(num>=3&&num<=5){
		printf("现在是春天");
	} else if(num>=6&&num<=8){
		printf("现在是夏天");
	} else if(num>=9&&num<=11){
		printf("现在是秋天");
	} else{
		printf("byd不识字？输错了他妈的！"); 
	}//错误提示
	*/
	
	 
	int a,b,c,t;//定义变量 
	printf("请随机输入三个整数");//提示 
	scanf("%d%d%d",&a,&b,&c);//输入值	
	//从大到小，两两比较，把大的数找到往前面放（交换值） 
	if(a<b){//如果a小于b，把a和b的值做交换这样就可以把大的数往前放 
		t=a;
		a=b;
		b=t;
	} 
	if(a<c){//从小到大把小于号改成大于号 
		t=a;
		a=c;
		c=t;
	}
	if(b<c){
		t=b;
		b=c;
		c=t;
	}
	printf("%d,%d,%d\n",a,b,c);
	//a是最大值
	if(a%2==0){//判断奇偶数 
		printf("是偶数");
		
} 	else{
	printf("%d是奇数",a);
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
