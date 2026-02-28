#include <iostream>
#include <random>
#include <ctime>
using namespace std;


int main(){
	while(true){
	
	srand(time(0));
	int choice,choice_lvl,chances,Answer,answ,choices;
	
	cout<<"Welcome to the Number Guessing Game!"<<endl;
	cout<<"I'm thinking of a number between 1 and 100."<<endl;
	cout<<"1 - Start  2 - Exit"<<endl;
	cin>>choice;
	
	if (choice == 1){
		cout<<"Select lvl"<<endl;		
		cout<<"1 - Easy(7) 2 - Medium(5) 3 - Hard(3)"<<endl;
		cin>>choice_lvl;
		
		if (choice_lvl == 1){
			chances = 7;}
		if (choice_lvl == 2){
			chances = 5;}
		if (choice_lvl == 3){
			chances = 3;}
			
	Answer = rand() % 100+1;
	for (int i=0;i<chances;i++){
		cout<<"Enter your choice:";
		cin>>answ;
		if (answ > Answer){
			cout<<"The number is smaller"<<endl;
			continue;}
		if (answ < Answer){
			cout<<"The number is greater"<<endl;
			continue;}
		if (answ == Answer){
			cout<<"You win!!!"<<endl;} 
			break;
	}
	cout<<"Next round?"<<endl;		
	cout<<"1 - Yes  2 - Exit"<<endl;
	cin>>choices;
	if (choices == 1){
			continue;}
	if (choices == 2){
			exit(0);}
	}
	if (choice == 2){
			exit(0);
	}			
	}
	}
	

