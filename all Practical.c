//Semester-3 Data Structure all Practical

//lab-1

//1. Write a program to calculate area of a Circle (A = pr2).(A)
#include<stdio.h>
void area(int);
void main()
{
	float r;
	printf("enter r=");
	scanf("%f",&r);
	area(r);
}
void area(int r)
{
	float area,PI=3.14;
	area=PI*r*r;
	printf("area=%f",area);
}

//2. Write a program to find whether a number is odd or even.(A)
#include<stdio.h>
void ans(int);
void main()
{
	int n;
	printf("enter N=");
	scanf("%d",&n);
	ans(n);
}
void ans(int n)
{
	if(n%2==0)
	{
	printf("number is even");
	}
	else
	{
     printf("number is odd");
	}
}

//3. Write a program to nd factorial of a number. (Using Loop)(A)
#include<stdio.h>
void fact(int );
void main()
{
	int n;
	printf("enter n=");
	scanf("%d",&n);
	fact(n);
}
void fact(int n)
{
	int facto=1,n1;
	for(n1=1;n1<=n;n1++)
	{
	facto=facto*n1;
	}
	printf("factorial=%d",facto);
}

//4. Write a program to nd power of a number using loop.(A)
#include <stdio.h>
void power(int ,int );
void main()
{
	int x,y;
	printf("enter value of a");
	 scanf("%d",&x);
	 printf("enter value of b");
	 scanf("%d",&y);
	 power( x,y);
}
void power(int x,int y)

{
	 int ans=1,i;
	for(i=1;i<=x;i++)
	{
		ans=ans*y;
	}
	printf("Ans is %d",ans);
}

//5. Write a program to find factors of a given number.(B)
#include<stdio.h>
void fact(int n);
void main (){
	int f;
	printf("enter value of f=");
	scanf("%d" ,&f);
	fact(f);
}
void fact(int f)
{
	int i,fact=1;
	for(i=1;i<=f;i++)
	{
	fact=fact*i;
	}
	printf("factorial %d number is %d",f,fact);
}


-------------------------------------------------------------------------------------------------------------------------------------------------------------

//lab-2

//1. Write a program to read and display n numbers using an array. (A)
#include<stdio.h>
void arr(int);
void main()
{
	int n;
	printf("Enter n here : ");
	scanf("%d",&n);
	arr(n);
}
void arr(int n)
{
	int a[n],i;
	printf("Enter %d elements : ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Entered %d elements : ",n);
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	
}

//2. Write a program to calculate the sum of numbers from 1 to n. (A)

#include<stdio.h>
int arr(int);
void main()
{
	int n,sum;
	printf("Enter n here : ");
	scanf("%d",&n);
	sum=arr(n);
	printf("Sum is %d",sum);
}
int arr(int n)
{
	int a[n],i,sum=0;
	printf("Enter %d elements : ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	return sum;
}

//3. Write a program to insert an element into an array at a given position.(A)
#include<stdio.h>
void ins(int);
void main()
{
	int n;
	printf("Enter n here : ");
	scanf("%d",&n);
	ins(n);
}
void ins(int n)
{
	int a[n+1],i,b,pos;
	printf("Enter %d elements : ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter position and value : ");
	scanf("%d%d",&pos,&b);
	
	for(i=n-1;i>=(pos-1);i--)
	{
		a[i+1]=a[i];
	}
	a[pos-1]=b;
	printf("After Insertion : \n");
	for(i=0;i<n+1;i++)
	{
		printf("%d\n",a[i]);
	}
}

//4. Write a program to delete a given element from an array. (A)
#include<stdio.h>
void del(int);
void main()
{
	int n;
	printf("Enter n here : ");
	scanf("%d",&n);
	del(n);
}
void del(int n)
{
	int a[n],i,b,pos;
	printf("Enter %d elements : ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter position : ");
	scanf("%d",&pos);
	
	for(i=pos;i<=n;i++)
	{
		a[i-1]=a[i];
	}
	
	printf("After Deletion : \n");
	for(i=0;i<n-1;i++)
	{
		printf("%d\n",a[i]);
	}
}

---------------------------------------------------------------------------------------------------------------------------------------------------------------------

//lab-3

//1. Write a program to nd the length of the given string. (A)
#include<stdio.h>
#include<string.h>
void len(char *);
void main()
{
	char str[10];
	printf("Enter String : ");
	gets(str);
	len(str);
}
void len(char *s)
{
	int i=0;
	while(*s!='\0')
	{
		i++;
		s++;
	}
	printf("Length of String : %d",i);
}

//2. Write a program to Copy one string to another string. (A)
#include<stdio.h>
#include<string.h>
void cpy(char *, char *);
void main()
{
	char str[10],str1[20];
	printf("Enter String : ");
	gets(str);
	cpy(str,str1);
	printf("After Copy : %s",str1);

}
void cpy(char *str,char *str1)
{
	
	
	while(*str!='\0')
	{
		*str1=*str;
		str++;
		str1++;
	}

	
}

//3. Write a program to perform the concatenation of two given strings. (A)
#include<stdio.h>
#include<string.h>
void concat(char *, char *, char *);
void main()
{
	char str1[10],str2[20],str3[30];
	printf("Enter Two String : ");
	gets(str1);
	gets(str2);
	concat(str1,str2,str3);
	printf("After Concatenation : %s",str3);

}
void concat(char *str1,char *str2, char *str3)
{
	while(*str1!='\0')
	{
		*str3=*str1;
		str1++;
		str3++;
	}
	while(*str2!='\0')
	{
		*str3=*str2;
		str2++;
		str3++;
	}
	
}

//4. Write a program to append a second string at the end of the rst string. (A)
#include<stdio.h>
#include<string.h>
void apppend(char *, char *);
void main()
{
	char str1[30],str2[20];
	printf("Enter Two String : ");
	gets(str1);
	gets(str2);
	append(str1,str2);
	printf("After Append : %s",str1);
}
void append(char *str1,char *str2)
{	
	while(*str1!='\0')
	{	
		str1++;	
	}
	while(*str2!='\0')
	{
		*str1=*str2;
		str2++;
		str1++;
	}
	str2='\0';
}

------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//lab-4

 1//)Write a program to compare two strings. (A)

#include <stdio.h>
#include <string.h>
int compare(char *, char *);
void main()
{
	char s1[50], s2[50];
	int flag;
	printf("Enter 1st string here: ");
	gets(s1);
	printf("Enter 2nd string here: ");
	gets(s2);
	flag=compare(s1, s2);
	if (flag==1)
	{
		printf("\nBoth string are same\n");
	}
	else
	{
		printf("\nBoth string are different\n");
	}
}
int compare(char *s1, char *s2)
{
	int i=0;
	int l1=strlen(s1);
	int l2=strlen(s2);
	if(l1!=l2)
	{
		return 0;
	}
	else
	{
		while(*s1!='\0')
		{
			if(*s1!=s2)
			{
				return 0;
			}
			else
			{
				s1++;
				s2++;
			}
			return 1;
		}
	}
}

//2. Write a program to display the reverse string of the given string. (A)


#include <stdio.h>
#include <string.h>
void reverse(char *,char*);
void main()
{
	char str1[30],str2[30];
	int flag;
	printf("Enter First String Hear:\n");
	gets(str1);
	reverse(str1,str2);
	printf("Revers string is:%s\n",str2);
}
void reverse(char *str1,char *str2)
{
	int i=0;
	while(*str1!='\0')
		{
				str1++;
				i++;
		}
		str1--;
		while(i>0)
		{
			*str2=*str1;
			str2++;
			str1--;
			i--;
		}
     *str2!='\0';
}

------------------------------------------------------------------------------------------------------------------------------------------------------------

//lab-6

/* 1. Write a menu-driven program to implement the following operations on the Queue using an Array: (A) 
i. ENQUEUE
 ii. DEQUEUE
 iii. Display all elements of the queue*/

#include <stdio.h>
#include<stdlib.h>
int rear=-1,front=-1;

void enqueue(int [], int, int);
void dequeue(int [], int, int);
void display(int [], int);
void main()
{
	int choice,n,x;
	printf("Enter Queue size: ");
	scanf("%d", &n);
	int a[n];
	do
	{
		printf("\nPress 1 for Enqueue\n");
		printf("\nPress 2 for Dnqueue\n");
		printf("\nPress 3 for Display\n");
		printf("\nPress 0 for Exit Operation\n");
		scanf("%d", &choice);
		switch(choice)
		{
			case 1:
			printf("Enqueue Operation!!\n");
			printf("Enter value: ");
			scanf("%d", &x);
			enqueue(a,n,x);
			break;
			case 2:
			printf("Dequeue Operation!!\n");
			dequeue(a,n,x);
			break;
			case 3:
			printf("Display Operation!!\n");
			display(a,n);
			break;
			case 0:
			printf("Exit\n");
			exit(0);
			break;    
		}
	}while(1);
}
void enqueue(int a[], int n, int x)
{
	if (rear>=n-1)
	{
		printf("Queue is overflow!!\n");
	}
	else
	{
		if (front==-1)
		{
			rear=rear+1;
			front=front+1;
		}
		else
		{
			rear=rear+1;
		}
		a[rear]=x;
	}
}
void dequeue(int a[], int n, int x)
{
	int value;
	if (front==-1)
	{
		printf("Stack underflow!!\n");
	}
	else
	{
		value = a[front];
		printf("Deleted value = %d",value);
		if (front==rear)
		{
			front=rear=-1;
		}
		else
		{
			front=front+1;
		}
	}
}
void display(int a[], int n)
{
	if (rear==-1)
	{
		printf("Stack is empty");
	}
	else
	{
		for (int i=front; i<=rear; i++)
		{
			printf("%d\n", a[i]);
		}
	}
}

--------------------------------------------------------------------------------------------------------------------------------------------------------------

//lab-7

/* 1. Write a menu-driven program to implement the following operations on a circular queue using an Array: (A) 
i. ENQUEUE
 ii. DEQUEUE
 iii. Display all elements of the circular queue*/



#include<stdio.h>
#include<stdlib.h>
void enqueue(int [],int,int);
void dequeue(int [],int,int);
void display(int[],int);
int rear=-1,front=-1;
void main()
{
	int choice,a[100],n,x;
	printf("Enter Queue Size:");
	scanf("%d",&n);
      do{
       
       printf("Press 1 for Enqueue operation:\n");
       printf("Press 2 for Dequeue operation:\n");
       printf("Press 3 for display operation:\n");
       printf("Press 0 for exit:\n");
       printf("Enter Your choice:");
	   scanf("%d",&choice);
	   switch(choice){
	   case 1:
	   	printf("Enqueue operation:\n");
	   	printf("Enter value");
	   	scanf("%d",&x);
	   	enqueue(a,x,n); 
	   	break;
	   case 2:
	   	printf("Dequeue operation:\n");
	   dequeue(a,n,x);
	   	break;
	   case 3:
	   	printf("Display operation\n");
	   	display(a,n);
	   	break;
	   case 0:
	   	exit(0);
	   	break;
	   default:
	   	printf("Enter the valid choice here:\n");
	   }
    }while(1);
}
void enqueue(int a[],int x,int n)
{
	if((rear==n-1 && front==0) ||(front==rear+1))
	{
		printf("Overflow\n");
		return;
		
	}
	else if(front==-1)
	{
		front++;
		rear++;
	}
	
		else if(front!=0 && rear==n-1)
		{
			rear=0;
		}
		else
		{
		rear = rear+1;
		
		}
	a[rear]=x;
	printf("%d\n",rear);
}
void dequeue(int a[],int n,int x)
{
	if(front==-1)
	{
		printf("Underflow\n");
	}
	else
	{
		x=a[front];
		printf("dequeue is:%d",x);
    	if(front==rear)
    	{
    		front=-1;
    		rear=-1;
    	}
    	else if (front==n-1)
    		{

    			front=0;

    	    }
    	else
    	{
    		front=front+1;
    	}
	}
}
void display(int a[],int n)
{
	int i;
	if(front==-1)
	{
		printf("Queue is empty\n");
	}
	else{
		if(rear<front)
		{
			for (int i =front; i< n; i++)
			{
				printf("%d\n",a[i]);
			}
			for (int i = 0; i<=rear; i++)
			{
				printf("%d\n",a[i]);
			}
		}
		else
		{
			for(i=front;i<=rear;i++)
			{
				printf("%d\n",a[i]);
			}
		}
	}
}

    

-------------------------------------------------------------------------------------------------------------------------------------------------------------------

//lab-8

//1. Write a program to implement a node structure for a singly linked list. Read the data in a node, and print the node. (A

#include<stdio.h>
#include<process.h>
#include<malloc.h>
struct node
{
	int info;
	struct node* link;
};
struct node * create_node(int x)
{
	struct node * new_node = (struct node *) malloc(sizeof(struct node *));
	new_node -> info =x;
	return new_node;
}
void main()
{
	int choice,n,x,i;
	struct node * first = NULL;
      do{
       
       printf("Press 1 for insert node at first:\n");
       printf("Press 2 for insert node at last:\n");
       printf("Press 3 for display operation:\n");
       printf("Press 0 for exit:\n");
       printf("Enter Your choice:");
	   scanf("%d",&choice);
	   switch(choice){
	   case 1:
	   	printf("Enter value to be inserted\n");
	   	scanf("%d",&x);
	   	
	   	break;
	   case 2:
	   	printf("Dequeue operation:\n");
	   dequeue(a,n,x);
	   	break;
	   case 3:
	   	printf("Display operation\n");
	   	display(a,n);
	   	break;
	   case 0:
	   	exit(0);
	   	break;
	   default:
	   	printf("Enter the valid choice here:\n");
	   }
    }while(1);
}

