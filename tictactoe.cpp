#include<iostream>
#include<iomanip>
using namespace std;
class TTT{
public:
	char c1,c2;
	int choice;
	char win;
	char a[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
	
	void show(){
	system("cls");
	cout<<"\t"<<a[0][0]<<" | "<<a[0][1]<<" | "<<a[0][2]<<"\n";
	cout<<"\t"<<"---------\n";
	cout<<"\t"<<a[1][0]<<" | "<<a[1][1]<<" | "<<a[1][2]<<"\n";
	cout<<"\t"<<"---------\n";
	cout<<"\t"<<a[2][0]<<" | "<<a[2][1]<<" | "<<a[2][2]<<"\n"<<endl<<endl;
}

void player1(){
	c1='x';
	cout<<"Player 1("<<c1<<") Turn"<<"\n";
	cout<<"Enter the place to enter:"<<"\n";
	cin>>choice;
	win=c1;
	switch(choice){
		case 1:
			a[0][0]=c1;
			break;
			
		case 2:
			a[0][1]=c1;
			break;
			
		case 3:
			a[0][2]=c1;
			break;
			
		case 4:
			a[1][0]=c1;
			break;
			
		case 5:
			a[1][1]=c1;
			break;
			
		case 6:
			a[1][2]=c1;
			break;
			
		case 7:
			a[2][0]=c1;
			break;
			
		case 8:
			a[2][1]=c1;
			break;
			
		case 9:
			a[2][2]=c1;
			break;
			
		default:
			cout<<"Invalid!.Input numbers from(0-9)."<<endl;
		player1();
	}
}

void player2(){
	c2='o';
	cout<<"Player 2("<<c2<<") Turn"<<"\n";
	cout<<"Enter the place to enter:"<<"\n";
	cin>>choice;
	win=c2;
	switch(choice){
		case 1:
			a[0][0]=c2;
			break;
			
		case 2:
			a[0][1]=c2;
			break;
			
		case 3:
			a[0][2]=c2;
			break;
			
		case 4:
			a[1][0]=c2;
			break;
			
		case 5:
			a[1][1]=c2;
			break;
			
		case 6:
			a[1][2]=c2;
			break;
			
		case 7:
			a[2][0]=c2;
			break;
			
		case 8:
			a[2][1]=c2;
			break;
			
		case 9:
			a[2][2]=c2;
			break;
			
		default:
			cout<<"Invalid!.Input numbers from(0-9)."<<endl;
		player2();
}
}

void rule(){
	cout<<"\t"<<"TIC-TAC-TOE"<<endl<<endl<<endl;
	cout<<"RULES"<<endl;
	cout<<"1.Only enter numbers between(0-9)."<<endl;
	cout<<"2.Negative numbers not allowed."<<endl;
	cout<<"3.Repetition not allowed."<<endl<<endl;
}

bool check(){
		for(int j=0;j<3;j++){
		if(a[j][0]!= ' '&&a[j][0]==a[j][1] && a[j][0]==a[j][2])
			return false;	
	}
	    for(int i=0;i<3;i++){
		if(a[i][0]!= ' '&&a[i][0]==a[1][i] && a[1][i]==a[2][i])
			return false;
}
if ((a[0][0] == a[1][1] && a[1][1] == a[2][2]) || (a[0][2] == a[1][1] && a[1][1] == a[2][0])) {
            return false;
        }
        return true;
}

	void process() {
        while (check()) {
            player1();
            show();
            if (!check()) {
                cout << "Player " << win << " is the winner" << endl;
                break;
            }
            player2();
            show();
            if (!check()) {
                cout << "Player " << win << " is the winner" << endl;
                break;
            }
        }
    }
};

int main() {
    TTT t1;
    t1.show();
    t1.rule();
    system("pause");
    t1.show();
    t1.process();
    return 0;
}
