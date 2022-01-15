#include<bits/stdc++.h>
#include<vector>
using namespace std;
vector<string> fun(int n)
{
    vector<string>v;
    for(int i=0;i<n;i++)
    { if(i%15==0){
            v.push_back("fizzbuzz");
        }
        else if(i%3==0){
            v.push_back("fizz");
        }
        else if(i%5==0){
            v.push_back("buzz");
        }
       
        else{
            v.push_back(to_string(i));
        }
    }
    return v;
}
int main()
{int n;
cin>>n;
fun(n);
    
    return 0;
}

