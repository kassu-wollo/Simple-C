#include<iostream>
using namespace std;
int main(){
int x[6],sum=0,max,avg,min,count;
cout<<"enter 6 number"<<endl;
for(int i=0;i<=5;i++){
	cin>>x[i];
	
}
max=x[0];
min=x[0];
for(int j=0;j<=5;j++){
	sum=sum+x[j];
	if(x[j]%2==0)
	count+=1;
	if(max<x[j]){
	max=x[j];}
	if(min>x[j]){
	min=x[j];}
}
avg=sum/3;
cout<<"sum is"<<sum<<endl;
cout<<"avg is"<<avg<<endl;
cout<<"min is"<<min<<endl;
cout<<"max is"<<max<<endl;
cout<<"number of even  is"<<count<<endl;
return 0;
}

