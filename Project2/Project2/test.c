#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<Windows.h>
#include<time.h>



 int main()
{
	int a[3][3] = { { 1, 2 }, { 3, 4 }, { 5, 6 } }, i, j, s = 0;
	for (i = 1; i<3; i++)
	for (j = 0; j <= i; j++)s += a[i][j];
	printf("%d\n", s++);
	return 0;
}







//
//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5 };
//	int arr2[] = { 6, 7, 8, 9, 0 };
//	int j = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//		for (j = 0; j < sz, j++;)
//		{
//			int tmp = 0;
//			tmp = arr1[j];
//			arr1[j] = arr2[j];
//			arr2[j] = tmp;
//		}
//
//
//	return 0;
//}
//
//


//
//int main()
//{/*
//	char arr[] = { "ahcduhjccs" };
//	int s = strlen(arr);
//	printf("%d\n ", &arr[9] -&arr[0]);
//	printf("%d", s



//
//
//
//	//���³�����������ǣ�����
//
		/*void main()

	{

			int a = 3;

			printf("%d\n", (a += a -= a*a));

		}
*/



/*
	return 0;
}*/





//
//int main()
//{
//
//	printf("%d\n", sizeof(unsigned int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long float));
//	printf("%d\n", sizeof(long double));
//
//	return 0;
//}



   
//
//
//int main()
//{
//	char input[26] = { 0 };
//	int i = 0;
//	
//	
//	for (i = 0; i < 3; i++)
//	{
//		printf("�������������");
//		scanf("%s", &input);
//		if (strcmp(input, "123456a") == 0)
//		{
//			printf("������֤�ɹ�\n"); return 0;
//		}
//		else
//			printf("���������������\n");
//
//		if (i == 3)
//		{
//			printf("��������\n");
//		}
//	}
//	return 0;
//}








//
//int main()
//{
//    int a = 0;
//	for (a = 1; a <= 9; a++)
//	{
//		int b = 0;
//		for (b = 1; b <= 9; b++)
//		{
//			printf("%d*%d=%-2d ", a, b,a*b);
//		}
//		printf("\n");
//	}
//	return 0;
//}


////
////int main()
////{
////	int a = 0;
////	printf("������һ������");
////	scanf("%d", &a);
////	int i = 0;
////	int count = 0;
////	for (i = 2; i < a; i++)
////	{
////		int j = 0;
////		for (j = 2; j < i; j++)
////		{
////			if (i%j == 0)
////				break;                     //������һ����֮�ڵ�����
////		}
////		if (i == j)
////		{
////			count++;
////			printf("%d   ", i);
////		}	
////		
////	}	
////       printf("����һ����%d��\n", count);
////	return 0;
////}



//
//int main()
//{
//	int a = 10;
//	//intf("%d\n", a++);
//	printf("%d\n", ++a);
//	printf("%d\n", a);
//	return 0;
//}

  

//int main()
//{
//	int a =20;
//	a = a | (1<<3);
//	printf("%d\n", a);
//
//	return 0;
//}



//
//int main()
//{
//	int arr[3][4] = { { 1, 2 }, { 3, 4 } };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int a = 0;
//		for (a = 0; a < 4; a++)
//		{
//			printf("arr[%d][%d]=%d   ",i,a, arr[i][a]);//��ӡÿһ��Ԫ��
//			printf("&arr[%d][%d]=%p \n", i, a, &arr[i][a]);//��ӡÿ��Ԫ�����Եĵ�ַ
//		}
//		printf("\n");
//	}
//	return 0;
//}


//int main()
//{
//	int ch = 0;
//	while ((getchar()) !=EOF)
//	{
//		putchar(ch + 32);
//		getchar();
//	}
//	return 0;
//}
//
//
//
//





//int main()
//{
//	int a = 0;
//	printf("����һ����");
//	scanf("%d", &a);
//	while (a > 0)
//	{
//		printf("%d ", a % 10);
//		a=a / 10;
//	}
//	
//	return 0;
//}




//int main()
//{
//	char ACE[] = { "123456" };
//	int a = 0;
//	int len = 0;
//	len = strlen(ACE);
//	for (a = 0; a <= len; a++)
//	{
//		printf("%c ",ACE[a]);
//	}
//
//	return 0;
//}




//
//void  kc(int n)
//{
//	if (n > 9)
//	{
//		kc(n / 10);//1234��10����123��ʱ��ӡ��4������123��10��12��ӡ��3�Դ����ƹʴ�ӡ��4 3 2 1
//	}
//	printf("%d ", n % 10);
//	
//	
//}
//
//int main()
//{
//  unsigned int num = 0;
//  printf("����һ������");
//	scanf("%d", &num);
//	kc(num);
//
//	return 0;
//}
//
//

//void menu()
//{
//	printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
//	printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@1.play    2.exit@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
//	printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
//}
//
//void game()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	b = rand() % 100 + 1;
//	while (1)
//	{
//		/*	printf("������µ���");
//		scanf("%d", &a);
//		if (a > b)
//		{
//			c++;
//			printf("�´���\n");
//		}
//		else if (a < b)
//		{
//			c++;
//			printf("��С��\n");
//		}
//		else
//		{
//			c++;
//			printf("�¶���,����%d��\n", c); break;
//		}
//	}
//
//}
//
//int main()
//{
//	int d = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("��ѡ��");
//		scanf("%d", &d);
//		switch (d)
//		{case 1:
//			game(); break;
//		case 0:
//			printf("�˳���Ϸ\n"); break;
//		default:
//			printf("�������\n"); break;
//		}
//	} while (d);
//	return 0;
//}
//
//
//*/




//int main()
//{
//	int a = 0;
//	a = strlen("hello");         
//	printf("��һ��=%d\n", a);
//	printf("�ڶ���=%d\n", strlen("hello"));  //��ʽ����
//	return 0;
//}
//



//
//void Add(int* p)
//{
//	(*p)++;
//	
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("num=%d\n", num);
//	Add(&num);
//	printf("num=%d\n", num);
//	Add(&num);
//	printf("num=%d\n", num);
//	return 0;
//}



//
//#include<stdio.h>
//#include<string.h>
//void menu()
//{
//	printf("*****************************************\n");
//	printf("**************1.��ʼ��Ϸ*****************\n");
//	printf("**************0.�˳���Ϸ*****************\n");
//}
//
//void game()
//{ 
//	int g = 0;
//	int j = 0;
//	int c = 0;
//	j = rand() % 100 + 1;
//	while (1)
//	{
//		printf("��µ����֣�");
//		scanf("%d", &g);
//		if (g > j)
//		{
//			c++;
//			printf("�´���,��%d�β�\n",c);
//			
//		}
//		else if (g < j)
//		{
//			c++;
//			printf("��С��,��%d�β�\n",c);
//			
//		}
//		else
//		{
//			c++;
//			printf("�¶��ˣ�������%d��\n",c); break;
//		}
//	}
//	}
//
//int main()
//{
//	int a = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("��ѡ��");
//		scanf("%d", &a);
//		switch (a)
//		{
//		case 1:
//			game(); break;
//		case 0:
//			printf("..........�˳���Ϸ.........\n"); break;
//		default:
//			printf("�����\n"); break;
//		}
//	}
//		while (a);
//		return 0;
//	}








//int main()
//{
//	char q[] = "��һ��ҪŬ����δ������";
//	memset(q, '&', 4);
//	printf("%s\n", q);
//	return 0;
//}




//int main()
//{
//	char arr1[2993] = "bit";
//	char arr2[2990] = "######";
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	int a=strlen(arr2);
//	int b=sizeof(arr2);
//	if (a == b)
//		printf("һ����\n");
//	else
//		printf("��һ��\n");
//	return 0;
//}






//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 70");
//again:
//	printf("����70���������Ǻ���������ػ�\n");
//	scanf("%s", &input);
//	if(strcmp(input, "���Ǻ���") == 0)
//	{
//		printf("\n�ҵιԹ�Ӵ");
//			system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}




//int main()
//{
//	char arr1[50] = { "��Ҫ�����㸶���ĺ�ˮ������Ϊ��ͨ���ɹ��Ľ���" };
//		char arr2[50] = { "*****************************************" };
//		int left = 0;
//		int right = strlen(arr1) - 1;          //sizeof(arr1) / sizeof(arr1[0]);
//		while (left <= right)
//		{
//			arr2[left] = arr1[left];
//			printf("%s\n", arr2);
//			Sleep(200);
//			system("cls");
//				left++;
//		}
//		printf("%s\n", arr2);
//		return 0;
//}
//




//int main()
//{
//	char arr[] = { -1, -2, -3,-4, -5, -6, -7, -8, -9, -10 };
//	int a = 0;
//	int i = arr[0];
//	for (a = -1; a <= -10;a--)
//	{
//		if (a > i)
//		{
//			i = a;
//		}
//		
//	}
//	printf("%d\n", i);
//	system("pause");
//	return 0;
//}


//void menu()
//{
//	printf("########################\n");
//	printf("#####1.play  2.exit#####\n");
//	printf("#########################\n");
//}
//
//
//void game()
//{
//	int ret = 0;
//	int guess = 0;
//	ret = rand() % 100 + 1;
//	//printf("%d\n", ret);
//	while (1)
//	{
//	  printf("��������µ���\n");
//	   scanf("%d", &guess);
//	   if (guess > ret)
//	   {
//		   printf("�´���\n");
//	   }
//	   else if (guess < ret)
//	   {
//		   printf("��С��\n");
//	   }
//		else
//		{
//			printf("�¶���\n");
//			break;
//		}
//	}
//
//}
//
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d",&input);
//		switch (input)
//		{
//case 1:
//	game();
//	break;
//case 0:
//	printf("�˳���Ϸ\n"); 
//	break;
//default:
//	printf("�����\n"); 
//	break;
//		}
//	} 
//	while (input);
//	
//	return 0;
//	
//}
//
//



//void menu()
//{
//	printf("*********************************\n");
//	printf("*******1.play    0.exit**********\n");
//	printf("*********************************\n");
//}
//
//void game()
//{  
//	int guess = 0;
//	int ret = 0;
//	ret = rand()%100 + 1;//ϵͳ����������0��32736����������%100+1���õ�1��100���������
//	while (1)
//	{
//		printf("������µ�����:>");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < ret)
//		{
//			printf("С��\n");
//		}
//		else
//		{
//
//			printf("����������度ѽ\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int input = 0;
// 	srand((unsigned int) time (NULL));
//	do
//	{
//		menu();
//			printf("��ѡ��>:\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			break;
//		default:
//			printf("�������\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}











//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	printf("�������������\n");
//	scanf("%s\n", &password);
//   	if (strcmp(password, "123456") ==0)
//	{
//		printf("��½�ɹ�\n"); 
//	
//	}
//	else
//	{
//		printf("��¼ʧ�ܣ�������\n"); i++;
//		if (i == 3)
//			printf("������֤��������\n");
//	}
//
//	return 0;
//}
//





//int main()
//{
//	int b = 1;
//	double a = 0.0;
//	double sum = 0.0;
//	int i = 0;                            //��Ŀ: 1/1-1/2.......-1/99+1/100
//	for (i = 1; i <= 100; i++)
//	{
//		a= b*1.0 / i;
//		b = -b;
//		sum += a;
//
//	}
//	printf("%lf\n", sum);
//	return 0;
//}





//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{                                     //�žų˷���
//		int j = 1;
//		for (j = 1; j <= i; j++)
//		printf("%d*%d=%-2d ", i, j, i*j);//-2��ʾ��λ�����������
//		printf("\n");
//	}
//	return 0;
//}




//
//int main()
//{
//	char imput[20] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("������������Ȼ�ػ���\n");
//	scanf("%s", imput);
//	if (strcmp(imput, "������") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//
//	return 0;
//}





//int main()
//{
//	int j= 0;
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//
//		for (j = 2; j < i; j++)//������ 
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//
//		if (j == i)
//		{
//			printf("%d ", i);
//			count++;
//
//		}
//	}
//	printf("\ncount=%d", count);
//	return 0;
//}
//



//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000;year++)
//	if (year % 4 == 0 && year % 100 != 0)
//	{
//		printf("%d ", year);//������
//		count++;
//	}
//	else if (year % 400 == 0)
//	{
//		printf("%d ", year);
//		count++;
//	}
//	printf("\ncount=%d\n", count);

//	return 0;
//}





//int main()
//{
//	int a = 12;
//	int	b=6;
//	int c=0;
//	printf("�������������֣�");
//	scanf("%d%d",&a,&b);
//	while (a%b)
//	{
//		
//		a = b;
//		b = c;
//	}
//	printf("%d\n", c);
//	return 0;
//}




//int main()
//{
//	int a;
//	for (a = 1; a <= 100; a++)
//	{
//		if (a % 3 == 0)
//			printf("%d\n", a);
//	}
//	return 0;
//}
//


//int main()
//{
//	 char arr1[] = { "��ϲ����ѽ�� ����Ů���Ѻ���" };
//	char arr2[] =  {"***************************" };
//	char arr3[] = { "ϣ���㲻Ҫ��ʶ̧�٣��𾴾Ʋ��ԳԷ��ƣ� ��������" };
//	char arr4[] = { "###############################################" };
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	int left1 = 0;
//	int right1 = sizeof(arr3) / sizeof(arr3[0]) - 2;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(400);//ͣ�٣���λ����1000=1��
//		system("cls");//����
//		left++;
//		right--;
//	}
//    
//	  while (left1 <= right1)
//	  {
//		  arr4[left1] = arr3[left1];
//		  left1++;
//		  printf("%s\n", arr4);
//		  Sleep(200);
//		  system("cls");
//	  }
//	  printf("%s\n", arr2);
//
//	  printf("%s\n", arr4);
//
//	return 0;
//}


//int main()
//{
//	int a = 1;
//	int sum = 0;
//	int i = 0;
//	for (i = 1; i <= 3; i++)
//	{
//		a = a*i;
//		sum = sum + a;
//	}
//	printf("sum=%d\n", sum);
//	return 0;
//}



//int main()
//{
//	int sum = 1;
//	int i = 1;
//	int n = 0;
//	printf("����һ����\n");
//	scanf("%d\n", &n);
//	for (i = 1; i <= n; i++)
//	{
//		sum = i*sum;
//	}
//	printf("n!���Ϊ%d", sum);
//
//	return 0;
//}




//int main()
//{
//	int a = 0;
//	do
//	{
//		printf("�������������%d\n", a);
//		a++;
//	}
//		while (a <= 100);
//	return 0;
//}



//int main()
//{
//	int a ,b;
//	int line=0;
//	for (a = 0; a <10; a += 1)
//	{
//		for (b = 0; b < 10; b += 1)
//			printf("haha");
//			printf("%d\n", line);
//		line++;
//	}
//	return 0;
//}




/*int main()
{
	int a=1;
	while (a <= 10)
	{
		a += 1;
		if (a == 5)
			continue;
		printf("%d\n", a);
	}
	return 0;
}*/






/*int main()
{
	int a=0;
	while( a>=0&&a<= 100)
	{
		if (a%2!=0)
			printf("%d\n", a);
		a++;
	}
	
	return 0;
}*/




/*int main()
{
	int a=0;
	printf("������һ������:\n");
	scanf("%d\n", &a);
	if (a%2 == 0)
		printf("������ż��\n");
	else
		printf("����������\n");
	return 0;
}*/



/*int main()
{
	int a = 1;
	int b = 2;
	if (a==1)
	if (b == 2)
		printf("ji\n");
	else
		printf("dsa\n");

	return 0;
}*/




/*int main()
{
	int age = 0;
	printf("�������������\n");
    scanf("%d\n", &age);
	if (age >= 0 && age < 12)
		printf("��ͯ\n");
	else if (age >= 12 && age < 18)
		printf("������\n");
	else
		printf("������\n");
	return 0;
}*/
;



/*struct man
{
	char name[10];
	int age;
	int weight;

};
int main()
{
	struct man kc = { "�׳�",21,124 };
		printf("���ֽ�%s\n", kc.name);
	printf("������%d��\n", kc.age);
	printf("������%d��\n", kc.weight);
	return 0;
}*/



/*#define pi 3.14
int main()
{
	int r;
	double S, C;
	printf("������Բ�İ뾶\n");
	scanf("%d\n", &r);
	S = pi*r*r;
	C = 2 * pi*r;
	printf("Բ�����Ϊ%f\n", S);
	printf("Բ���ܳ�Ϊ%f\n", C);
	return 0;
}*/





/*int add(int j, int b)

{
	int z = j + b;
	return z;
}
int main()
{
	int momo = 78;
	int qiqi = 22;
	int r;
	r = (momo > qiqi ? momo : qiqi);
	printf("r=%d\n", r);
	int xxoo = add(momo, qiqi);
	printf("xxoo=%d\n", xxoo);
	return 0;
}*/




/*struct book
{
	char name[134];
	int price;
};
int main()
{
 	struct book b1 = { "c���Գ������", 100 };
	printf("���ֽ�%s\n", b1.name);
	printf("�۸���%dԪ\n", b1.price);
	b1.price = 88;
	printf("�ۿ�֮��۸�%d\n",b1.price);
	strcpy(b1.name, "c++");
	printf("���ڵ����ֽ�%s\n", b1.name);

	return 0;
}*/




/*struct Book
{
	char name[20];
	short price;
};
int main()
{
	struct Book b1 = { "c���Գ������", 55 };
		printf("������%s\n", b1.name);
	printf("�۸�Ϊ%dԪ\n", b1.price);
	b1.price = 25;
	strcpy(b1.name, "c++");
	printf("��ʱ�ۿ۵ļ۸�Ϊ%dԪ\n",b1.price);
	printf("��������%s\n", b1.name);

	return 0;*/




/*int main()
{
double a = 6.66;
double* e =&a;
//	printf("%p\n", &a);
//	printf("%p\n", e);
//	printf("%d\n", a);
 //   *e = 33;
printf("%d\n", sizeof(e));
return 0;
}*/



/*int Max(int X, int Y)
{
	if (X > Y)
		return X;
	else
		return Y;
}
#define  MAX(X,Y) (X>Y?X:Y)
int main()
{
	int a = 23;
	int b = 28;
	int f = 0;
	f = (a > b ? a : b);
	printf("max=%d\n", f);
   	int max = Max(a, b);
	max = MAX(a, b);
	printf("max=%d\n", max);
	return 0;
}*/


/*int kong(int k, int c)
{
	int kc = k*c;
	return kc; }
int main()
{
	int a = 23;
	int b = 4;
	int kong = 0;
	kona(a, b);
	printf("kong=%d\n", kong);
	return 0;
}*/


//{
///	extern int duck;
//	printf("duck=%d\n", duck);//externΪ�����ⲿ�ĺ�������������ⲿ������static�������޷�����
//
//	return 0;}

/*int main()
{
	int a = 12;
	int b = 2;
	int max = 0;
	max = a < b ? b : a;
	printf("max=%d\n", max);
	return 0;
}*/

/*int add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z; 
}
	
int main()
{
	int a = 12;   int b = 32;
	int sum = add(a, b);
	printf("%d\n", sum);
	return 0;
}*/


/*void test()
{
	int a = 1;
    a++;
	printf("a=%d\n", a);
}

int main()
{
	int i = 0;
	while(i < 5)
	{
		test();
		i++;
	}
	return 0;
}*/
/*int main()
{
	int f[10] = {  0};
	f[4];
	printf("�����ֵ=%d\n", f[4]);


	return 0;
}*/



//#define PI 3.14
//int main()
//{ 
///int r,C;
//double S;
//printf("���д��һ����r");
//scanf("%d",&r);
//S=PI*r*r;
//C=2*PI*r;
//l/printf("Բ�İ뾶Ϊ%d\n",C);
//printf("Բ�����Ϊ%f\n",S);
//return 0;




//int main()
//{
//int score;
//printf("������Ҫ��д����ķ���=\n");
//scanf("%d",&score);
//if(score>=0&&score<=60)
//printf("���а�����low\n");
//else if(score>60&&score<=80)
//printf("���аɣ�����Ŭ��������\n");
//else if(score>80&&score<=100)
//printf("�벻��������ûë����\n");
//else 
//printf("����˺ú�������\n");
//return 0;}





//#define a 55
//int main()
//{
//int z[a]={0};
//printf("%d\n",a);
//return 0;
//}
  //enum c
//{a,b,c};


//int main()
//{
//printf("%d\n",a);
//printf("%d\n",b);
//printf("%d\n",c);
//return 0;}



//int main()
//{
//int a=0;
//int sum=0;
//for(a=1;a<=100000;a++)
//printf("%d\n",a);
//sum=sum+a;
//printf("%d\n",sum);
//return 0;}




//int main()
//{
//char arr1[]="abc";
//char arr2[]={'a','b','c','\0'};
//printf("%s\n%s\n",arr1,arr2);
//return 0;}


//int main()
//{char arr1[]="abc";
// char arr2[]={'a','b','c'};
//printf("%d\n",strlen(arr1));
//printf("%d\n",strlen(arr2));
//return 0;}



/*int main()
{ printf("��>��");
return 0;}   */
/*int main()
{
int input;
printf("����̸������\n");
printf("�Ͻ�ȥ��ֺ�Ŭ�����Ұ�(1/0)>��");
scanf("%d\n",&input);
if(input==1)//�ж��Ƿ�Ϊ1
printf("��ϣ���ɹ�");
else 
printf("�������ǵ�");
return 0;
}*/
/*int main()
{
int line=0;
printf("����");

while(line<=200)
{
printf("��cf��%d\n",line);
line++;
}
if(line<20000)
printf("���а�");
else 
printf("����ǿ");
return 0;
}*/
/*int main()
{
int a=1;
int b=a<<2;//����2
printf("%d\n",b);
return 0;
}*/
/*int main()
{
int a=7; //λ������111
int b=9;        //1001
int c=a&b; //���Ϊ0001��Ϊʮ���Ƶ�1
int d=a|b;
int e=a^b;
printf("%d\n",c);
printf("%d\n",d);//���Ϊ1111����15
printf("%d\n",e);//a^bΪ��򣬹���Ϊ��Ӧ������λ��ͬ��Ϊ0����Ϊ1
return 0;
}*/



/*int main()
{
int a=10;
int b=0;
printf("%d\n",!a);
printf("%d\n",!b);
return 0;
}*/


/*int main()
{
int arr[17]={};
int a;
printf("%d\n",sizeof(arr));
printf("%d\n",sizeof (a));
return 0;
}*/



/*int main()
{
int score=0;
printf("д����Ķ�λ�֣�\n");
scanf("%d\n",&score);
if(score>=0&&score<2200);
printf("���а��㣬�˶���\n");
if(score>=2200&&score<=2799)
printf("���аɣ���������");
if(score>=2800)
printf("ѧ����Ƥ");
return 0;
}*/



/*int main()
{
int a,b,c,d;
printf("����ٵļƻ���ʲô\n");
printf("�������ѧϰ��(1/0)>:");
scanf("%d\n",&a);
if(a==1)
{
printf("��ôȥѧϰ��1������ѧϰ�����ڼҿ���0(1/0)>��");
scanf("%d\n",&b);
if(a==1&&a==0)
printf("�ſ��Եģ��ú�ѧϰ��");
}
else
{
printf("ȥ����ٹ�1�����ڼ���0��(1/0)>:");
scanf("%d\n",&c);
if(a==1)
printf("ȥ������أ�����1���0(1/0)>��");
scanf("%d\n",&d);
if(d==1&&d==0)
printf("���ͺúøɣ����֪������Ŀ���ۣ����������");
if(c==0)
printf("�����������֪����\n");
printf("�������ɶ�ø�");
}
return 0;
}*/




/*int main()
{
typedef unsigned int kc;//���¶���Ϊkc
unsigned int b=-20;
kc a=23;//kc������ĵȼ�
printf("a=%d\n,b=%d\n",a,b);
return 0;
}*/


