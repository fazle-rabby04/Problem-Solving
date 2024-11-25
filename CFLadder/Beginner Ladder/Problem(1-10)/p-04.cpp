#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

void solve()
{
    string s;
    cin>>s;
    int len = s.size();
    int count =0;
    for(int i = 0; i < len; i++)
    {
        if(s[i] == 'N' )
        {
            count++;    
        }
    }
    if(count == 1)
    {
        cout<<"NO"<<endl;
    }
    else{
       cout<<"YES"<<endl; 
    }

}

int main(int argc, char* argv[]) 
{
   int t;
   cin>>t;
   while(t--)
   {
       solve();
   }
   return 0;
}
