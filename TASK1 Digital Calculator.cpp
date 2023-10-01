#include<iostream>
#include<math.h>
using namespace std;
class CALC{
public:
int ADD(int a,int b){
cout<<"Enter first number : ";
	cin>>a;
	cout<<"Enter second number : ";
	cin>>b;
	cout<<"--> Addition = "<<a+b<<endl;
}

int SUBSTRACT(int a,int b){
	cout<<"Enter first number : ";
	cin>>a;
	cout<<"Enter second number : ";
	cin>>b;
	cout<<"--> Substraction = "<<a-b<<endl;
}

int MULTIPLY(int a,int b){
	cout<<"Enter first number : ";
	cin>>a;
	cout<<"Enter second number : ";
	cin>>b;
	cout<<"--> Multiplication = "<<a*b<<endl;
}

int DIVIDE(int a,int b){
cout<<"Enter first number : ";
	cin>>a;
	cout<<"Enter second number : ";
	cin>>b;
	cout<<"--> Division = "<<(float)a/b<<endl;
}

int REMAINDER(int a,int b){
	cout<<"Enter first number : ";
	cin>>a;
	cout<<"Enter second number : ";
	cin>>b;
	cout<<"--> Remainder = "<<a%b<<endl;
}

int EXPONENT(int a,int b){
	cout<<"Enter first number : ";
	cin>>a;
	cout<<"Enter second number : ";
	cin>>b;
	cout<<"--> Exponent = "<<pow(a,b)<<endl;
}

int SQUARE(int a){
	cout<<"Enter number : ";
	cin>>a;
	cout<<"--> Square = "<<pow(a,2)<<endl;
}

int SQRT(int a){
	cout<<"Enter number : ";
	cin>>a;
	cout<<"--> Square Root = "<<sqrt(a)<<endl;
}

int LOG(int a){
	cout<<"Enter number : ";
	cin>>a;
	cout<<"--> Log = "<<log(a)<<endl;
}

int SIN(int a){
	cout<<"Enter number : ";
	cin>>a;
	cout<<"--> Sin = "<<sin(a)<<endl;
}

int COS(int a){
	cout<<"Enter number : ";
	cin>>a;
	cout<<"--> Cos = "<<cos(a)<<endl;
}

int TAN(int a){
	cout<<"Enter number : ";
	cin>>a;
	cout<<"--> Tan = "<<tan(a)<<endl;
}

int SININV(int a){
	cout<<"Enter number : ";
	cin>>a;
	cout<<"--> Inverse Of Sin = "<<asin(a)<<endl;
}

int COSINV(int a){
		cout<<"Enter number : ";
	cin>>a;
	cout<<"--> Inverse Of Cos = "<<acos(a)<<endl;
}

int TANINV(int a){
	cout<<"Enter number : ";
	cin>>a;
	cout<<"--> Inverse Of Tan = "<<atan(a)<<endl;
}

};
int main(){
	cout<<"			  --------------------------"<<endl;
	cout<<"			  | ~ DIGITAL CALCULATOR ~ |"<<endl;
	cout<<"			  --------------------------"<<endl;
	  
		cout<<"	.............................................................."<<endl;
		cout<<"	|    Enter 1    |    Enter 2	|   Enter 3	 | Enter 10  | "<<endl;
		cout<<"	|   Addition    | Substraction  | Multiplication |    Sin    | "<<endl;
		cout<<"	.............................................................."<<endl;
		cout<<"	.............................................................."<<endl;
		cout<<"	|    Enter 4    |    Enter 5	|   Enter 6	 | Enter 11  |"<<endl;
		cout<<"	|   Division    |   Remainder   |  Exponent      |    Cos    |"<<endl;
		cout<<"	.............................................................."<<endl;
		cout<<"	.............................................................."<<endl;
		cout<<"	|    Enter 7    |    Enter 8	|   Enter 9	 | Enter 12  |"<<endl;
		cout<<"	|   Square      |   SquareRoot  |     Log    	 |    Tan    |"<<endl;
		cout<<"	.............................................................."<<endl;
		cout<<"	.............................................................."<<endl;
		cout<<"	|    Enter 13    |   Enter 14	|   Enter 15	 | Enter 00  |"<<endl;
		cout<<"	|   Sin Inverse  |  Cos Inverse |  Tan Inverse   |    Exit   |"<<endl;
		cout<<"	.............................................................."<<endl;

while(true){
	cout<<"\n~ Please Enter the operation no. : ";
long long a=0,b=0;
float PI=3.14159265;
int n;
cin>>n;
class CALC c1;
	switch(n){
	 
	case 1: 
	c1.ADD(a,b);
	break;
	
	case 2: 
	c1.SUBSTRACT(a,b);
	break;
	
	case 3: 
	c1.MULTIPLY(a,b);
	break;
	
	case 4: 
	c1.DIVIDE(a,b);
	break;
	
	case 5: 
	c1.REMAINDER(a,b);
	break;
	
	case 6: 
	c1.EXPONENT(a,b);
	break;
	
	case 7: 
	c1.SQUARE(a);
	break;
	
	case 8: 
	c1.SQRT(a);
	break;
	
	case 9: 
	c1.LOG(a);
	break;
	
	case 10: 
	c1.SIN(a);
	break;
	
	case 11: 
	c1.COS(a);
	break;
	
	case 12: 
	c1.TAN(a);
	break;
	
	case 13: 
	c1.SININV(a);
	break;
	
	case 14: 
	c1.COSINV(a);
	break;
	
	case 15: 
	c1.TANINV(a);
	break;
	
	case 00: 
	cout<<"\n -- Thanks for using Digital Calculator --";
	return 0;
	
	
	default : cout<<"Invalid Input (-_-)";
	break;
	}
}
	return 0;
}
