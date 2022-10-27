#include<iostream>
#include<string.h>
using namespace std;
class mystring 
{
	public:
	char *p;
	int len;
		mystring(){}
		mystring(char *a)
		{
			len=strlen(a);
			p=new char[len+1];
			strcpy(p,a);
		}
		void display()
		{
			cout<<p<<endl;
		}
		friend int operator >(mystring str1,mystring str2);
		friend int operator !=(mystring str1,mystring str2);
		friend mystring operator +(mystring str1,mystring str2);
};
int operator >(mystring str1,mystring str2)
{
	if(str1.len>str2.len)
	return 1;
	else
	return 0;
}

int operator !=(mystring str1,mystring str2)
{
	if(strcmp(str1.p,str2.p)!=0)
	return 1;
	else
	return 0;
}
mystring operator +(mystring str1,mystring str2)
{
	mystring str3;
	str3.p=new char[str1.len+ str2.len+1];
	strcpy(str3.p,str1.p);
	strcat(str3.p,str2.p);
	return str3;
}
int main()
{
	mystring str1("prasad"),str2("rahul"),str3;
	str1.display();
	str2.display();
	if(str1>str2)
	{
	str1.display();
   cout<<"length is greater than ";
	str2.display();
    }  
	else
	{
	str2.display();
	cout<<"length greater than";
	str1.display();
   }
	if(str1!=str2)
	cout<<"\nnot equal";
	else
	cout<<"equal";
    cout<<"\n";
	str3=str1+str2;
    str3.display();
	
}
