#include <iostream>
using namespace std;

void func(int ar[],int x,int y,int z)
{ 
    if(x>y)
    {
        
        if(z==0)
        { 
            for(int i=0;i<=y;i++)
                cout<<ar[i]<<" ";
            cout<<endl;
        }
    }
    else
    {
        for(ar[x]=z;ar[x]>=0;ar[x]--)
            func(ar,x+1,y,z-ar[x]);      
    }  
}

  int main()
  {
      int n,c;
      cout<<" Enter the value of n : "<<endl ;
      cin>>n;
      cout<<" Enter the value of c : "<<endl;
	  cin>>c;
      int* ar=new int[n];
      func(ar,0,n-1,c);

      return 0;
  }
