#include <stdio.h>
int main(){
	//���ܵ�ʮ�� 
	//�����ַ� 
/*	char ch;
	printf("������һ���ַ�:");//��ʾ
	scanf("%c",&ch);//����ֵ
	if(ch>='A'&&ch<='Z'){//�ж� 
		printf("%c",ch+32);//��дתСд 
	} else if(ch>='a'&&ch<='z'){//Сдת��д 
		printf("%c",ch-32);
	} else if(ch>='0'&&ch<='9'){//'0~9' 
		printf("%d",ch-48+100);
	} else{
		printf("%c",ch);
	}*/
	
	//ʮһ��
/*	char ch;//�������
	 printf("������һ���ַ�:");//��ʾ
	 scanf("%c",&ch);//����ֵ 
	 //���ж������c~x֮�����ĸ������ֵ����ʲô������ 
	 if(ch>='C'&&ch<='X'){//�ж� 
	 	printf("%c%c%c%c%c",ch-2,ch-1,ch,ch+1,ch+2);//��� 
	 }*/
	 
	//ʮ����
	//����ɼ�
/*	float score;//�ɼ�����
	char ch;//�ȼ� 
	scanf("%f",&score); 
	//�жϳɼ�   5�����a,b,c,d,e 
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
	 
	 //switch�﷨��ʽ 
	 //���� 
	 //if�Ļ����ſ���ʡ�Ա�����һ��ִ����䣬Switch�����κ�ʱ�򶼲���ʡȥ 
	 //��ѡһ  ������� 
/*	switch(�жϱ��ʽ){֪��ֵ ��ѡһ  ���ʽ�����ظ� 
		//��������������� 
		case ���ʽ���߳���:ִ�����;break;//��һ����� 
		case ���ʽ���߳���:ִ�����;break;//�ڶ������
		case ���ʽ���߳���:ִ�����;break;//���������
		default: ִ�����;break;//���һ����� 		break(�жϽ���)switch 
	}*/
	
/*	int date;//����
	scanf("%d",&date);
	switch(date){//�ж����� 
		case 1: printf("��һ");break;
		case 2: printf("�ܶ�");break;
		case 3: printf("����");break;
		case 4: printf("����");break;
		case 5: printf("����");break;
		case 6: printf("����");break;
		case 7: printf("����");break;
		default: printf("����û���������");break;
	} */
	
	
/*	float score;//�ɼ�
	//����ɼ�
	printf("������һ���ɼ���");
	scanf("%f",&score); 
	//�жϳɼ�
	//ǿ��ת��	��ת�������ͣ� ��Ҫת�Ķ��� 
	switch((int)(score/10)){
		case 10: printf("A");break;
		case 9: printf("A");break;
		case 8: printf("B");break;
		case 7: printf("C");break;
		case 6: printf("D");break;
		default: printf("E");break;
	} */
	
	//��׼ȷֵ��Switchû  ׼ȷֵ��if 
	
	
	
/*	int num;//������� 
	printf("�������·���:");//��ʾ 
	scanf("%d",&num);//�����·�
	//�ж��·� 
	//�жϼ��� 
	if(num==1||num==2||num==12){
		printf("�����Ƕ���");
	}
	else if(num>=3&&num<=5){
		printf("�����Ǵ���");
	} else if(num>=6&&num<=8){
		printf("����������");
	} else if(num>=9&&num<=11){
		printf("����������");
	} else{
		printf("byd��ʶ�֣����������ģ�"); 
	}//������ʾ
	*/
	
	 
	int a,b,c,t;//������� 
	printf("�����������������");//��ʾ 
	scanf("%d%d%d",&a,&b,&c);//����ֵ	
	//�Ӵ�С�������Ƚϣ��Ѵ�����ҵ���ǰ��ţ�����ֵ�� 
	if(a<b){//���aС��b����a��b��ֵ�����������Ϳ��԰Ѵ������ǰ�� 
		t=a;
		a=b;
		b=t;
	} 
	if(a<c){//��С�����С�ںŸĳɴ��ں� 
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
	//a�����ֵ
	if(a%2==0){//�ж���ż�� 
		printf("��ż��");
		
} 	else{
	printf("%d������",a);
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
