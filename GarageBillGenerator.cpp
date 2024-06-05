#include<iostream>
#include<iomanip>
using namespace std;
class bill{
	public:
	int n,q[10];
	string nish;
	string item[10];
		float d,p[10],total[10],dis,amount,aa,tot=0,amount1=0;
	void input(){
		cout<<setw(20)<<"_()_ WELCOME TO BILLING SYSTEM _()_"<<endl<<endl;
		cout<<setw(20)<<"Enter the name of customer:";
		cin>>nish;
		cout<<endl;
		cout<<setw(20)<<"Enter the total number of items:";
		cin>>n;
		system("cls");
		for(int j=1;j<=n;j++){
			cout<<"Item-"<<j<<":";
			cin>>item[j];
			cout<<endl;
			cout<<"Quantity: ";
			cin>>q[j];
			cout<<endl;
			cout<<"Price:";
			cin>>p[j];
			system("cls");
		}
		cout<<"Discount percentage:";
		cin>>d;
		system("cls");
		cout<<"                 _()_ Shivam Auto Parts & Solution _()_                   "<<endl;
	}
	
	void calc(){
		for(int a=1;a<=n;a++){
			total[a]=p[a]*q[a];
			tot=tot+total[a];
		}
		aa=tot;
		dis=(d/100)*tot;
		amount=aa-dis;
		amount1=amount+0.13*amount;
	}
	
	void output(){
		cout<<endl<<endl<<"Customer Name: "<<nish<<endl;
		cout<<setw(40)<<"VAT BILL"<<setw(30)<<endl;
		cout<<"-----------------------------------------------------------------------------"<<endl;
		cout<<"S.N"<<setw(18)<<"Items"<<setw(20)<<"Quantity"<<setw(20)<<"Total"<<endl;
			cout<<"-----------------------------------------------------------------------------"<<endl;
		for(int i=1;i<=n;i++){
			cout<<i<<setw(20)<<item[i]<<setw(20)<<q[i]<<setw(20)<<total[i]<<endl;
	}
		cout<<"-----------------------------------------------------------------------------"<<endl;
		cout<<setw(60)<<"Total bill amount: "<<aa<<endl;
		cout<<setw(60)<<"Discount rate: "<<d<<"%"<<endl;
		cout<<setw(60)<<"Discount amount: "<<dis<<endl;
		cout<<setw(60)<<"Total amount after discount: "<<amount<<endl<<endl;
		cout<<setw(60)<<"Total amount including VAT(13%)="<<amount1<<endl<<endl<<endl;
		
		cout<<setw(30)<<"THANKYOU FOR VISITING.PLEASE VISIT US AGAIN"<<setw(30)<<endl;
	}
};
int main(){
	bill b1;
	b1.input();
	b1.calc();
	b1.output();
	return 0;
}
