#include <stdio.h>
int main(){
	//将大写字母字符转为小写字符 
//	char ch='A';
//	char xiao;
//	//大写转小写只需要大写+32 
//	xiao=ch+32;
//	printf("大写字母%c转换后的小写字母为%c",ch,xiao);


//	随机输入一个大写字母将它转换为小写字符
//	char da;
//	char xiao;
//	printf("请随机输入一个大写字母：");
//	//输入字符csanf("",&)	&取地址 
//	scanf ("%c",&da);
//	//小转大+32 
//	xiao=da+32;
//	printf("它的小写字母为：%c",xiao); 
//	
//	计算并输出一个三位数的每一位数字
	
//	int num=123,g,s,b;//g是个位 s是十位 b是百位
//	g=num%10;//123/10=12...3 	g=3
//	s=num/10%10;//12/10=1....2	g=2
//	b=num/100%10;//	123/100=1....23		1/10=0(除不尽)....1
//	printf("个位为%d\n十位为%d\n百位为%d",g,s,b);
	
	//随机输入一个三位数求三位数的每一位
	
		
				
	 int num;//定义一个数字变量 
	 int g,s,b;//g=个位 s=十位 b=百位
	 printf("请输入你的数字:");
	 scanf("%d",&num);//给定义的变量输入值 
	 g=num%10;//变量值%10得最后一位也就是个位 
	 s=num/10%10;//变量值/10%10	 
	 b=num/100%10;2;//变量值/100%10 
	 printf("百位为%d\n十位为%d\n\个位为%d\n",b,s,g); 
	 		
	  
	//随机输入一个小写字符将它转换为大写字符 
		
		
				
	char d;//x=小写字母 d=大写字母 
	char x;
	printf("请输入你的小写字母："); 
	scanf("%c",&x);//输入函数 取小写的地址 
	d=x-32;//大写字母等于小写字母的ascll码-32 
	printf("它的大写字母为%c",d);
	
		//++在后面后自增	++在前面先自增 
	
}

//字节数少的转向字节数多的		int -float

//关系表达式的值
//真：关系成立，用1表示
//假：关系不成立，用0表示 
