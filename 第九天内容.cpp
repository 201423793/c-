#include <stdio.h>
int main(){
/*	int num,count=0,sum=0;//�������	��ʼֵ 
	printf("������һ������");//��ʾ
	scanf("%d",&num);//����ֵ
	//�ж�		��֪��ѭ�����ε�ʱ�����while 
	while(num){//ֻҪnum����0��һֱѭ�� 
		//ѭ����	�����һλ ������ȥ���һλ�γ��µ�������ȥ�����һλ 
		sum=sum+num%10;	//��͹�ʽsum=sum+Ҫ��͵Ķ��� 
		num=num/10;
		//���� 
		count++;
		
	} 
	printf("�����ĸ���Ϊ%d,ÿһλ�ĺ�Ϊ%d",count,sum);
	*/
	
	
/*	char ch;//�ַ� 
	int ying=0,kong=0,shu=0,qita=0;//������ʼֵ 
	printf("�������ַ�");//��ʾ 
	while((ch=getchar())!='\n'){//��������о���һֱѭ��ִ����� 
		if(ch>='A'&&ch<='Z'||ch>='a'&&ch<='z'){//Ӣ����ĸ 
			ying++;
		}else if(ch==' '){//�ո� 
			kong++;
		}else if(ch>='0'&&ch<='9'){//���� 
			shu++;
		}else{//���� 
			qita++;
		}	
	}
	printf("Ӣ����%d���ո���%d��������%d��������%d",ying,kong,shu,qita);//���λ����ֵ 
	*/ 
	
	//forѭ�����
//	 for(��ʼֵ;�жϱ��ʽ;����){
//	 	ѭ���� 
//	 }
	
//	int i;//������� 
	//��ʼֵ �ж� ���� 
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
	//continue ��������ѭ��
	//break ��������ѭ�� 
	//֪����Χ��for ��֪������while
	//do while����ִ��һ��ѭ����	for��whileֻ��������������ִ��ѭ����
	
	
	//�۳˹�ʽsum=sum*i		sum����=1 
	
	
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
	
	
	//��ת�������
	//1.break ��ֹѭ��������Switch��Ӧ����ѭ�����棬������ֻ��ѭ��
	//2.continue��������ѭ����������һ��ѭ��	ֻ��ѭ������ 
	//3.return��ֹ�������ҷ��غ�������ֵ������������������ 
	//ͨ��break������Ǻ�if�������һ�����������Ǳ�����ѭ�� 
	
	
	
	//ֻ����1���������������ӣ�������������������������������
	
	//����һ���������ж�n�Ƿ�Ϊ����
/*	int n,i;
	printf("������һ��������");
	scanf("%d",&n);
	for(i=2;i<n;i++){
		if(n%i==0){
			break;
		}
	}
	if(i>=n){
		printf("%d��",n);
	}else{
		printf("%d����",n);
	}
*/	
	
	//���ֶ��ٴ�9 
	int count=0;
	for(int i=1;i<=100;i++){
		//��λΪ9 
		if(i%10==0){
			count++;
		//ʮλΪ9	
		}if(i/10%10==0){
			count++;
		}
	}	
	printf("1-100������%d��9",count);
	

	 return 0;
}
