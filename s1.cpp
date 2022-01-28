//1+2+3+4+5+6+.......+n

#include<iostream>
using namespace std;
int n,s=0;

int iteration()
{
    for(int i=1; i<=n; i++)
    {
        s+=i;
    }
    return s;
}

int recursion(int i)
{
    if(i>n)
        return 0;
    else
        return i+recursion(i+1);

}

int main(void)
{
    cin>>n;

    cout<<"Iteration:"<<endl;
    int res=iteration();
    cout<<res<<endl;
    cout<<endl;

    cout<<"Recursion:"<<endl;
    int res1=recursion(1);
    cout<<res1<<endl;

    return 0;
}


