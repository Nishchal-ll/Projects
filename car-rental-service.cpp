#include<iostream>
#include<iomanip>
using namespace std;
#include<string>
class project{
	public:
		int days;
		int d;
		char c;
		string name;
		int t,rent;
		string car;
		
void display() {
    cout << "\t" << "WELCOME TO CAR RENTAL SERVICE" << endl << endl;
    cout << "-------------------------------------------------" << endl;
    cout << left << setw(20) << "CARS" << "|" << setw(10) << "Model" << "|" << " RATE" << endl;
    cout << "-------------------------------------------------" << endl;
    cout << left << setw(20) << "1. Santro-GLS" << "|" << setw(10) << "2013" << "|" << " 5K" << endl;
    cout << left << setw(20) << "2. I10 Magna" << "|" << setw(10) << "2010" << "|" << " 8K" << endl;
    cout << left << setw(20) << "3. Alto-LXI" << "|" << setw(10) << "2005" << "|" << " 3K" << endl;
    cout << left << setw(20) << "4. Celerio-ZXI" << "|" << setw(10) << "2016" << "|" << " 10K" << endl;
    cout << left << setw(20) << "5. I20 Active 'S'" << "|" << setw(10) << "2018" << "|" << " 15K" << endl;
    cout << "-------------------------------------------------" << endl << endl;
    cout << "Choose a car for rent: ";
}

	
	void input(){
		int choice;
		cin>>choice;
		cin.ignore();
		switch(choice){
			case 1:
				system("cls");
				santro();
				break;
				
			case 2:
				system("cls");
				i10();
				break;
				
			case 3:
				system("cls");
				alto();
				break;
				
			case 4:
				system("cls");
				celerio();
				break;
				
			case 5:
				system("cls");
				i20();
				break;
				
			default:
				cout<<"Invalid input!!Try Again"<<endl<<endl;
				system("pause");
				system("cls");
				display();
				input();
		}
	}
	
	void santro(){
		cout<<"SANTRO-GLS"<<endl;
		cout<<"Mileage:15"<<endl;
		cout<<"Engine CC:1086"<<endl;
		cout<<"Total km run:113296 km"<<endl;
		cout<<"Seat capacity:5"<<endl;
		cout<<"Transmission:Manual"<<endl;
		cout<<"Fuel-Petrol"<<endl;
		cout<<"Rent per day:5k"<<endl<<endl;
		cout<<"Enter the number of days you want for rent:"<<endl;
		cin>>days;
			cin.ignore();
		d=days*5000;
		calc(d);
		car="SANTRO-GLS";
		rent=5000;
		cout<<"Would you like to pay(Y/N):"<<endl;
		cin>>c;
			cin.ignore();
		if(c=='Y'||c=='y'){
			bill();
		}
		else{
			cout<<"Thankyou for visiting!!!"<<endl;
		}
	}
	
	void i10(){
		cout<<"I10-MAGNA"<<endl;
		cout<<"Mileage:17"<<endl;
		cout<<"Engine CC:1086"<<endl;
		cout<<"Total km run:101278 km"<<endl;
		cout<<"Seat capacity:5"<<endl;
		cout<<"Transmission:Manual"<<endl;
		cout<<"Fuel-Petrol"<<endl;
		cout<<"Rent per day:8k"<<endl<<endl;
		cout<<"Enter the number of days you want for rent:"<<endl;
		cin>>days;
			cin.ignore();
		d=days*8000;
		calc(d);
		car="I10-MAGNA";
		rent=8000;
		cout<<"Would you like to pay(Y/N):"<<endl;
		cin>>c;
			cin.ignore();
		if(c=='Y'||c=='y'){
			bill();
		}
		else{
			cout<<"Thankyou for visiting!!!"<<endl;
		}
	}
	
	void alto(){
		cout<<"ALTO-LXI"<<endl;
		cout<<"Mileage:18"<<endl;
		cout<<"Engine CC:800"<<endl;
		cout<<"Total km run:153256 km"<<endl;
		cout<<"Seat capacity:5"<<endl;
		cout<<"Transmission:Manual"<<endl;
		cout<<"Fuel-Petrol"<<endl;
		cout<<"Rent per day:3k"<<endl<<endl;
		cout<<"Enter the number of days you want for rent:"<<endl;
		cin>>days;
			cin.ignore();
		d=days*3000;
		calc(d);
		car="ALTO-LXI";
		rent=3000;
		cout<<"Would you like to pay(Y/N):"<<endl;
		cin>>c;
			cin.ignore();
		if(c=='Y'||c=='y'){
			bill();
		}
		else{
			cout<<"Thankyou for visiting!!!"<<endl;
		}
	}
	
	void celerio(){
		cout<<"CELERIO-ZXI"<<endl;
		cout<<"Mileage:19"<<endl;
		cout<<"Engine CC:986"<<endl;
		cout<<"Total km run:65769 km"<<endl;
		cout<<"Seat capacity:5"<<endl;
		cout<<"Transmission:Manual"<<endl;
		cout<<"Fuel-Petrol"<<endl;
		cout<<"Rent per day:10k"<<endl<<endl;
		cout<<"Enter the number of days you want for rent:"<<endl;
		cin>>days;
			cin.ignore();
		d=days*10000;
		calc(d);
		car="CELERIO-ZXI";
		rent=10000;
		cout<<"Would you like to pay(Y/N):"<<endl;
		cin>>c;
			cin.ignore();
		if(c=='Y'||c=='y'){
			bill();
		}
		else{
			cout<<"Thankyou for visiting!!!"<<endl;
		}
	}
	
	void i20(){
		cout<<"I20-ACTIVE"<<endl;
		cout<<"Mileage:19"<<endl;
		cout<<"Engine CC:1198"<<endl;
		cout<<"Total km run:49790 km"<<endl;
		cout<<"Seat capacity:5"<<endl;
		cout<<"Transmission:Manual"<<endl;
		cout<<"Fuel-Petrol"<<endl;
		cout<<"Rent per day:15k"<<endl<<endl;
		cout<<"Enter the number of days you want for rent:"<<endl;
		cin>>days;
			cin.ignore();
		d=days*15000;
		calc(d);
		car="I20-ACTIVE";
		rent=15000;
		cout<<"Would you like to pay(Y/N):"<<endl;
		cin>>c;
			cin.ignore();
		if(c== 'y' ||c== 'Y'){
			bill();
		}
		else 
			cout<<"Thankyou for visiting!!!"<<endl;
	}
	
	void calc(int d){
		cout<<"Total rent for "<<days<<" days is NRs. "<<d<<"."<<endl<<endl;
	}
	
	void bill(){
		cout<<"Please enter you name:";
		getline(cin,name);
		cout<<"\n";
		cout<<"\t  HAMRO MOTORS PVT.LTD\n\n"<<endl;
		cout<<"-------------BILL INVOICE----------------\n"<<endl;
		cout<<"Customer Name:\t\t\t"<<name<<endl;
		cout<<"Rented Car:\t\t\t"<<car<<endl;
		cout<<"Total number of days:\t\t"<<days<<endl;
		cout<<"Rent per day:\t\t\t"<<rent<<endl;
		cout<<"Total rent:\t\t\t"<<d<<endl;
		cout<<"------------------------------------------\n"<<endl;
		cout<<"Total rental amount is: "<<d<<endl<<endl;
cout<<"This is computer generated invoice, no signature needed!!"<<endl;

	}
	
};
int main(){
	project p;
	p.display();
	p.input();
	return 0;
	
}
