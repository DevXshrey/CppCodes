#include <bits/stdc++.h>
#include <vector>
using namespace std;


int main()
{
   int x,y,count_a=0,count_b=0;
vector<int>a;
vector<int>b;

//Alice's Score


for(int i=0;i<3;i++)
{
   cin>>x;
   a.push_back(x);
}

//Bob's Score

for(int j=0;j<3;j++)
{
   cin>>y;
   b.push_back(y);
}

//Comparing Triplets

for(int k=0;k<3;k++)
{   
    if((a.at(k))>b.at(k)) {
       count_a+=1;
    }    
    else if((a.at(k))<b.at(k)){
       count_b+=1;
    }
    else if((a.at(k))==b.at(k))
    {
       count_a+=0;
       count_b+=0;
    }
    else
    {
       ;
    }
    

}
  //Displaying final points
   cout<<count_a<<" "<<count_b;
}
   




