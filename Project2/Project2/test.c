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
//	//以下程序的输出结果是（）。
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
//		printf("请输入你的密码");
//		scanf("%s", &input);
//		if (strcmp(input, "123456a") == 0)
//		{
//			printf("密码验证成功\n"); return 0;
//		}
//		else
//			printf("密码错误，重新输入\n");
//
//		if (i == 3)
//		{
//			printf("次数上限\n");
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
////	printf("请输入一个数字");
////	scanf("%d", &a);
////	int i = 0;
////	int count = 0;
////	for (i = 2; i < a; i++)
////	{
////		int j = 0;
////		for (j = 2; j < i; j++)
////		{
////			if (i%j == 0)
////				break;                     //求输入一个数之内的素数
////		}
////		if (i == j)
////		{
////			count++;
////			printf("%d   ", i);
////		}	
////		
////	}	
////       printf("素数一共有%d个\n", count);
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
//			printf("arr[%d][%d]=%d   ",i,a, arr[i][a]);//打印每一个元素
//			printf("&arr[%d][%d]=%p \n", i, a, &arr[i][a]);//打印每个元素所对的地址
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
//	printf("输入一个数");
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
//		kc(n / 10);//1234除10等于123此时打印了4，继续123除10得12打印出3以此类推故打印出4 3 2 1
//	}
//	printf("%d ", n % 10);
//	
//	
//}
//
//int main()
//{
//  unsigned int num = 0;
//  printf("输入一串数字");
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
//		/*	printf("输入你猜的数");
//		scanf("%d", &a);
//		if (a > b)
//		{
//			c++;
//			printf("猜大了\n");
//		}
//		else if (a < b)
//		{
//			c++;
//			printf("猜小了\n");
//		}
//		else
//		{
//			c++;
//			printf("猜对了,猜了%d次\n", c); break;
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
//		printf("请选择");
//		scanf("%d", &d);
//		switch (d)
//		{case 1:
//			game(); break;
//		case 0:
//			printf("退出游戏\n"); break;
//		default:
//			printf("输入错误\n"); break;
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
//	printf("第一种=%d\n", a);
//	printf("第二种=%d\n", strlen("hello"));  //链式访问
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
//	printf("**************1.开始游戏*****************\n");
//	printf("**************0.退出游戏*****************\n");
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
//		printf("你猜的数字：");
//		scanf("%d", &g);
//		if (g > j)
//		{
//			c++;
//			printf("猜大了,第%d次猜\n",c);
//			
//		}
//		else if (g < j)
//		{
//			c++;
//			printf("猜小了,第%d次猜\n",c);
//			
//		}
//		else
//		{
//			c++;
//			printf("猜对了，共猜了%d次\n",c); break;
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
//		printf("请选择");
//		scanf("%d", &a);
//		switch (a)
//		{
//		case 1:
//			game(); break;
//		case 0:
//			printf("..........退出游戏.........\n"); break;
//		default:
//			printf("输错了\n"); break;
//		}
//	}
//		while (a);
//		return 0;
//	}








//int main()
//{
//	char q[] = "你一定要努力啊未来可期";
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
//		printf("一样大\n");
//	else
//		printf("不一样\n");
//	return 0;
//}






//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 70");
//again:
//	printf("请在70秒输入我是憨批，否则关机\n");
//	scanf("%s", &input);
//	if(strcmp(input, "我是憨批") == 0)
//	{
//		printf("\n我滴乖乖哟");
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
//	char arr1[50] = { "你要相信你付出的汗水都将成为你通往成功的阶梯" };
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
//	  printf("请输入你猜的数\n");
//	   scanf("%d", &guess);
//	   if (guess > ret)
//	   {
//		   printf("猜大了\n");
//	   }
//	   else if (guess < ret)
//	   {
//		   printf("猜小了\n");
//	   }
//		else
//		{
//			printf("猜对了\n");
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
//		printf("请选择:>");
//		scanf("%d",&input);
//		switch (input)
//		{
//case 1:
//	game();
//	break;
//case 0:
//	printf("退出游戏\n"); 
//	break;
//default:
//	printf("输错了\n"); 
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
//	ret = rand()%100 + 1;//系统给的数字在0到32736，所以我们%100+1，得到1到100的随机数。
//	while (1)
//	{
//		printf("输入你猜的数字:>");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大辽\n");
//		}
//		else if (guess < ret)
//		{
//			printf("小啦\n");
//		}
//		else
//		{
//
//			printf("铁铁，你好腻害呀\n");
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
//			printf("请选择>:\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			break;
//		default:
//			printf("输入错误\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}











//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	printf("请输入你的密码\n");
//	scanf("%s\n", &password);
//   	if (strcmp(password, "123456") ==0)
//	{
//		printf("登陆成功\n"); 
//	
//	}
//	else
//	{
//		printf("登录失败，请重试\n"); i++;
//		if (i == 3)
//			printf("今日验证次数上限\n");
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
//	int i = 0;                            //题目: 1/1-1/2.......-1/99+1/100
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
//	{                                     //九九乘法表
//		int j = 1;
//		for (j = 1; j <= i; j++)
//		printf("%d*%d=%-2d ", i, j, i*j);//-2表示两位数且向左对齐
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
//	printf("输入我是猪，不然关机了\n");
//	scanf("%s", imput);
//	if (strcmp(imput, "我是猪") == 0)
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
//		for (j = 2; j < i; j++)//求素数 
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
//		printf("%d ", year);//求闰年
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
//	printf("请输入两个数字：");
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
//	 char arr1[] = { "我喜欢你呀， 做我女朋友好吗" };
//	char arr2[] =  {"***************************" };
//	char arr3[] = { "希望你不要不识抬举，别敬酒不吃吃罚酒， 嘤嘤嘤嘤" };
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
//		Sleep(400);//停顿，单位毫秒1000=1秒
//		system("cls");//清屏
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
//	printf("输入一个数\n");
//	scanf("%d\n", &n);
//	for (i = 1; i <= n; i++)
//	{
//		sum = i*sum;
//	}
//	printf("n!结果为%d", sum);
//
//	return 0;
//}




//int main()
//{
//	int a = 0;
//	do
//	{
//		printf("请留下你的名字%d\n", a);
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
	printf("请输入一个整数:\n");
	scanf("%d\n", &a);
	if (a%2 == 0)
		printf("此数是偶数\n");
	else
		printf("此数是奇数\n");
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
	printf("请输入你的年龄\n");
    scanf("%d\n", &age);
	if (age >= 0 && age < 12)
		printf("儿童\n");
	else if (age >= 12 && age < 18)
		printf("青少年\n");
	else
		printf("成年人\n");
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
	struct man kc = { "孔超",21,124 };
		printf("名字叫%s\n", kc.name);
	printf("年龄是%d岁\n", kc.age);
	printf("体重是%d斤\n", kc.weight);
	return 0;
}*/



/*#define pi 3.14
int main()
{
	int r;
	double S, C;
	printf("请输入圆的半径\n");
	scanf("%d\n", &r);
	S = pi*r*r;
	C = 2 * pi*r;
	printf("圆的面积为%f\n", S);
	printf("圆的周长为%f\n", C);
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
 	struct book b1 = { "c语言程序设计", 100 };
	printf("名字叫%s\n", b1.name);
	printf("价格是%d元\n", b1.price);
	b1.price = 88;
	printf("折扣之后价格%d\n",b1.price);
	strcpy(b1.name, "c++");
	printf("现在的名字叫%s\n", b1.name);

	return 0;
}*/




/*struct Book
{
	char name[20];
	short price;
};
int main()
{
	struct Book b1 = { "c语言程序设计", 55 };
		printf("书名叫%s\n", b1.name);
	printf("价格为%d元\n", b1.price);
	b1.price = 25;
	strcpy(b1.name, "c++");
	printf("限时折扣的价格为%d元\n",b1.price);
	printf("新书名叫%s\n", b1.name);

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
//	printf("duck=%d\n", duck);//extern为调用外部的函数，但是如果外部函数被static修饰则无法调用
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
	printf("输出的值=%d\n", f[4]);


	return 0;
}*/



//#define PI 3.14
//int main()
//{ 
///int r,C;
//double S;
//printf("随便写入一个数r");
//scanf("%d",&r);
//S=PI*r*r;
//C=2*PI*r;
//l/printf("圆的半径为%d\n",C);
//printf("圆的面积为%f\n",S);
//return 0;




//int main()
//{
//int score;
//printf("憨憨不要走写下你的分数=\n");
//scanf("%d",&score);
//if(score>=0&&score<=60)
//printf("不行啊你真low\n");
//else if(score>60&&score<=80)
//printf("还行吧，继续努力吧铁铁\n");
//else if(score>80&&score<=100)
//printf("针不戳啊老铁没毛病啊\n");
//else 
//printf("输错了好好重新输\n");
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
{ printf("？>：");
return 0;}   */
/*int main()
{
int input;
printf("你想谈恋爱吗\n");
printf("赶紧去坚持和努力地找吧(1/0)>：");
scanf("%d\n",&input);
if(input==1)//判断是否为1
printf("有希望成功");
else 
printf("单身狗就是单");
return 0;
}*/
/*int main()
{
int line=0;
printf("加入");

while(line<=200)
{
printf("打cf吗%d\n",line);
line++;
}
if(line<20000)
printf("还行吧");
else 
printf("哥哥好强");
return 0;
}*/
/*int main()
{
int a=1;
int b=a<<2;//左移2
printf("%d\n",b);
return 0;
}*/
/*int main()
{
int a=7; //位数对齐111
int b=9;        //1001
int c=a&b; //结果为0001化为十进制得1
int d=a|b;
int e=a^b;
printf("%d\n",c);
printf("%d\n",d);//结果为1111等于15
printf("%d\n",e);//a^b为异或，规则为对应二进制位相同则为0否则为1
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
printf("写下你的段位分：\n");
scanf("%d\n",&score);
if(score>=0&&score<2200);
printf("不行啊你，菜多练\n");
if(score>=2200&&score<=2799)
printf("还行吧，继续加油");
if(score>=2800)
printf("学神附体皮");
return 0;
}*/



/*int main()
{
int a,b,c,d;
printf("你暑假的计划是什么\n");
printf("你暑假想学习吗(1/0)>:");
scanf("%d\n",&a);
if(a==1)
{
printf("怎么去学习呢1，网上学习还是在家看书0(1/0)>：");
scanf("%d\n",&b);
if(a==1&&a==0)
printf("嗯可以的，好好学习吧");
}
else
{
printf("去打暑假工1还是在家躺0。(1/0)>:");
scanf("%d\n",&c);
if(a==1)
printf("去那里打呢，本地1外地0(1/0)>：");
scanf("%d\n",&d);
if(d==1&&d==0)
printf("加油好好干，你会知道生活的苦和累，读书的香香");
if(c==0)
printf("你个憨批，就知道躺\n");
printf("看你能躺多久蛤");
}
return 0;
}*/




/*int main()
{
typedef unsigned int kc;//重新定义为kc
unsigned int b=-20;
kc a=23;//kc和上面的等价
printf("a=%d\n,b=%d\n",a,b);
return 0;
}*/


