//2+4+6+8+.......+n

#include<iostream>
using namespace std;
int n,s=0;

int iteration()
{
    for(int i=1; i<=n; i++)
    {
        s+=(i*2);
    }
    return s;
}

int recursion(int i)
{
    if(i>2*n)
        return 0;
    else
        return i+recursion(i+2);

}

int main(void)
{
    cin>>n;

    cout<<"Iteration:"<<endl;
    int res=iteration();
    cout<<res<<endl;
    cout<<endl;

    cout<<"Recursion:"<<endl;
    int res1=recursion(2);
    cout<<res1<<endl;

    return 0;
}



