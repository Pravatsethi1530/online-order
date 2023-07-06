 #include<bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a=0;
        int b=0;
        int x=0;
        int o=0;
        
         char arr[n];
         for(int i=0;i<n;i++)
         {
             cin>>arr[i];
         }
         for(int i=0;i<n;i++)
         {
             if(arr[i]=='O')
             {
                 o++;
             }
             if(arr[i]=='A')
             {
                
                 a++;
             }
             if(arr[i]=='B')
             {
                 b++;
             }
             if(arr[i]=='AB')
             {
                 x++;
             }
         }
         
         int maxi=max(a,b);
         
         if(o==0){
         cout<<maxi+x<<endl;
         }else
         {
              cout<<n-1<<endl;
         }
    }
	
	return 0;
}
