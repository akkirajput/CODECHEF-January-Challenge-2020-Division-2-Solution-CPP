#include <bits/stdc++.h> 
using namespace std;

int main() {
    int t,sum=0,count=0;
    cin>>t;
    while(t--)
    {
        int s,w1,w2,w3;
        cin>>s>>w1>>w2>>w3;
      
        if(w1<=s)
        {
            if(w2+w1<=s)
            {
                if(w1+w2+w3<=s)
                {
                    count=1;
                }
                else
                {
                    count=2;
                }
            }
            else
            {
               if(w2+w3<=s)
               {
                   count=2;
               }
               else
               {
                   count=3;
               }
            }
        }
              
        cout<<count<<endl;
     
    }
	return 0;
}
