#include <iostream>
using namespace std;

long long int add_f(long long int n1, long long int d1, long long int n2, long long int d2, long long int& n3, long long int& d3)//�[�k 
{	
	if(d1 == d2)//�p�G�����ۦP 
	{
		n3 = n1 + n2;
		d3 = d2;
	}
	else
	{
		n3 = (n1*d2) + (n2*d1);//�p��᪺���l 
		d3 = d1 * d2;//�p��᪺����
	}	
	
	return n3, d3; 
}
long long int sub_f(long long int n1, long long int d1, long long int n2, long long int d2, long long int& n3, long long int& d3)//��k 
{
	if(d1 == d2)//�p�G�����ۦP 
	{
		n3 = n1 - n2;
		d3 = d2;
	}
	else
	{
		n3 = (n1*d2) - (n2*d1);//�p��᪺���l 
		d3 = d1 * d2;//�p��᪺����
	}	
	return n3, d3; 
}
long long int mul_f(long long int n1, long long int d1, long long int n2, long long int d2, long long int& n3, long long int& d3)//���k 
{
	n3 = n1 * n2;//�p��᪺���l 
	d3 = d1 * d2;//�p��᪺����
	
	return n3, d3; 
}
long long int div_f(long long int n1, long long int d1, long long int n2, long long int d2, long long int& n3, long long int& d3)//���k 
{
	n3 = n1 * d2;//�p��᪺���l 
	d3 = d1 * n2;//�p��᪺����
	
	return n3, d3; 
}

int gcd(long long int a, long long int b, long long int& gcd_output)//�̤j���]��(�γs���k�o�X�̤j���]��) 
{
	long long int temp=0;
	while(a % b != 0){
        temp = a % b ;
        a = b;
        b = temp;
    }
    gcd_output = b;
    return gcd_output;
}
/* 
int main()
{
	long long int r1=0, r2=0, r3=0;//���Ƥ���ƪ����� 
	long long int n1=0, n2=0, d1=0, d2=0, n3=0, d3=0;//���ƪ����l�����
 	char operation;
 	
 	while(cin >> r1 >> n1 >> d1 >> operation >> r2 >> n2 >> d2)
 	{
 		if(n1==0)
 		{
 			n1 = r1 * d2;
 			d1 = d2;
		}
		if(n2==0)
		{
			n2 = n2 * d1;
			d2 = d1;
		}
		if(n1==0 && n2==0)
		{
			d1 = 1;
			d2 = 1;
			n1 = r1;
			n2 = r2;
			r1 = 0;
			r2 = 0;
		}
 		//////////claculate//////////
 		switch (operation) //�B��l��ܾ� 
    	{
    		case '+':
    			r3 = r1 + r2;
     	    	add_f(n1, d1, n2, d2, n3, d3);
       	    	break;
    		case '-':
    			r3 = r1 - r2;
       			sub_f(n1, d1, n2, d2, n3, d3);
        		break;
    		case '*':
    			if(r1 != 0)
    			{
    				n1 += r1 * d1;//�N��ƶ��[�i���l��
					r1 = 0;
				}
				if(r2 != 0)
				{
					n2 += r2 * d2;
					r2 = 0;
				}
        		mul_f(n1, d1, n2, d2, n3, d3);
        		break;
    		case '/':
    			if(r1 != 0)
    			{
    				n1 += r1 * d1;//�N��ƶ��[�i���l��
					r1 = 0;
				}
				if(r2 != 0)
				{
					n2 += r2 * d2;
					r2 = 0;
				}
        		div_f(n1, d1, n2, d2, n3, d3);
        		break;
   		}
   		
		//////////gcd//////////
		long long int gcd_output=0;
		gcd(n3, d3, gcd_output);
		if(gcd_output != 1)//�p�G�p��᪺���l�������̤j���]�� != 1 
		{
			//�N��n3��d3�i�H�A�ƴ�
			n3 = n3/gcd_output;
			d3 = d3/gcd_output;
			
		}
		//////////minimize//////////
		long long int temp=0;
		if(n3 > d3)//�p�G���l�j����� 
		{
			temp = n3/d3;//�ƴ�᪺��ƶ��Ȧs��temp�� 
			n3 =  n3 - (temp*d3);//���l�B�z����
			r3 += temp;//��ƶ��B�z���� 
		}
		else if(n3 == d3)//�p�G���l������� 
		{
			r3 += 1;//�����N��ƶ�+1
			n3 = 0;//���l�k�s 
			d3 = 0; //�����k�s 
		}
		
		//////////output//////////
		if(n3==0 || d3==0)
		{
			cout << r3 << endl;
		}
		else
		{
			cout << r3 << " " << n3 << " " << d3 << endl;
		}
		n1=0;
		n2=0;
		n3=0;
		d1=0;
		d2=0;
		d3=0;
		r1=0;
		r2=0;
		r3=0;
		temp=0;
	}
 	return 0;
}*/
int main()
{
	long long int a,b,c,d,e,f,g,h,num,n;
	char op;
	long long int n1,n2;
	long long int gcd_output=0;
	while(cin>>a>>b>>c>>op>>d>>e>>f)
	{
		b=c*a+b;
		e=f*d+e;
		
		if(op=='*')
		{
			n1=b*e;
			n2=c*f;	
			n=gcd(n1,n2, gcd_output);
			n1/=n;
			n2/=n;		
		}		
		else if(op=='/')
		{
			n1=b*f;
			n2=c*e;	
			n=gcd(n1,n2, gcd_output);
			n1/=n;
			n2/=n;		
		}
		else if(op=='+')
		{
			n2=c*f/gcd(c,f, gcd_output);
			b*=n2/c;
			e*=n2/f;
			n1=b+e;
			n=gcd(n1,n2, gcd_output);
			n1/=n;
			n2/=n;
			
		}
		else
		{
			n2=c*f/gcd(c,f, gcd_output);
			b*=n2/c;
			e*=n2/f;
			n1=b-e;
			n=gcd(n1,n2, gcd_output);
			n1/=n;
			n2/=n;
		}	
		num=n1/n2;
		n1%=n2;
		cout<<num<<" ";
		if(n1!=0)
			cout<<n1<<" "<<n2;
		cout<<endl;
			
	}
}
