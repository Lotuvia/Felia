#include<iostream>
#include<stdlib>
#include<ctime>
int l = 1000, id=0;
int MAS[1000]; 

void keygen(){
	int n;
	std::cout<<"Value cods: ";
	std::cin>>n;
	for(int i=id;i<(n+id);i++){
		//key gen
		int a= 1+ random(10000);
		MAS[i] = a;
		std::cout<<"Random value: "<<a<<std::endl;
	}
	id +=n; 
	std::cout<<std::endl;
}
void viewcods(){
	std::cout<<"List cods:\n";	
	for(int i=0;i<id;i++){
		std::cout<<MAS[i]<<std::endl;
	}
	std::cout<<std::endl;
}
int main(){
randomize();
while(true){
int b;
std::cout<<"(1)Generation code\n(2)View cods\n(0)Exit\nEnter action: ";
std::cin>>b;
switch(b){
case 0 : return 0;
case 1 :
	keygen();
	break;
case 2:
	viewcods();
	break;
}

}


time_t now = time(0);
char* dt = ctime(&now);
std::cout<<dt;
system("pause");
return 0;
}