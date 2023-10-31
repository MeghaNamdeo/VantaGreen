
#include<bits/stdc++.h>
using namespace std;


class Solution
{
    public:

    bool ispar(string x)
    {
        stack<char>s;
        for(int i = 0 ; i <x.length(); i++)
        {
            char ch =x[i];
            //opening parenthesis 
            if(ch=='('||ch=='{'||ch=='[')
            {
            s.push(ch);
            }
            
            else
            {
                if(!s.empty())
                {
                    char topp= s.top();
                    if((ch==')'&&topp=='(')||(ch=='}'&&topp=='{')||(ch==']'&&topp=='['))
                    {
                    s.pop();
                     }
                       else
                     {
                    return false ;
                      }
                }
                      else
                      {
                        return false;  
                      }
            }
            
            
        }
        if(s.empty())
        return true;
        else
        return false;
        
        
    }

};




int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
