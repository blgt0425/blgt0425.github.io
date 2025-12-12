#include <iostream>
#include <cstdlib>
#include <ctime>
#include <conio.h>
using namespace std;
int health1 = 1;
int health2 = 1;
int choice;
int shoot;
int shoot1;
void player1(){
	cout<<"Type '1' to shoot. 50/50 CHANCE"<<endl;
	cout<<"==================="<<endl;
	do{
		cin>>choice;
	} while(choice != 1);
	shoot = rand() % 2;
	if( shoot == 1 ){
		cout<<"Game Over. You lost!\n";
		health1--;
		cout<<endl;
	} else {
		cout<<"You survived!\n";
		cout<<endl;
	}
}
void computer(){
	cout<<"COMPUTER'S CHOICE"<<endl;
	cout<<"=================="<<endl;
	shoot1 = rand() % 2;
	if( shoot1 == 1 ){
		cout<<"Game Over. You won!\n";
		health2--;
		cout<<endl;
	} else {
		cout<<"Opponent survied!\n";
		cout<<endl;
	}
}
int main(){
	srand(time(0));
	cout<<"RUSSIAN ROULETTE!\n";
	cout<<"===================="<<endl;
	do{
	player1();
	if(health1 == 0){
		break;
	}
	computer();
	if(health2 == 0){
		break;
	}
} while( health1 != 0 || health2 != 0 );
cout<<endl;
cout<<"Enter to exit.\n";
getch();
	return 0;
}
