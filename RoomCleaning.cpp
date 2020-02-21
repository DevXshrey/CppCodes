#include <bits/stdc++.h>>
using namespace std;
int main() {
cout<<"Frank/'s Carpet Cleaning Service \n Price per small rooms :$25 \n Price per large rooms :$35 \n";
int a,x,y,z,t;
cout<<"How many large rooms would you like clean? \n";
cin>>y;
cout<<"How many small rooms would you like clean? \n";
cin>>x;
cout<<"Estimate for carpet cleaning service \n";
cout<<"Number of small rooms :"<< x << "\n";
cout<<"Number of large rooms :" <<y<<"\n";
cout<<"Price per small rooms :$25 \n";
cout<<"Price per small rooms :$35 \n";
z=((x*25)+(y*35));
t=(0.06*z);
a=z+t;
cout<<"Cost :"<<a<<"\n";
cout<<"Tax :"<<t<<"\n";
cout<<"===========================================";
}
