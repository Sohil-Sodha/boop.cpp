#include<iostream>
using namespace std;

int main()
{
    int x[100],n,i,j,temp;
    cout<<"Enter The Limit : ";
    cin>>n;
 
    cout<<"Enter "<<n<<" Value :"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>x[i];
    }
 
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(x[i]>x[j])
            {
                temp=x[i];
                x[i]=x[j];
                x[j]=temp;
            }
        }
    }
 
    cout<<"Sorted Array is : "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<x[i]<<endl;
    }
    return 0;
}
