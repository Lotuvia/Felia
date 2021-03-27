#include<iostream>
#include<stdlib>
#include<ctime>
int main(){
randomize();
int a= 1+ random(10000), b;
std::cout<<"Random value: "<<a<<std::endl;
time_t now = time(0);
char* dt = ctime(&now);
std::cout<<dt;
system("pause");
return 0;
}