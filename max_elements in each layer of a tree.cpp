// Maximum no.of elements in each row in a binary tree is 2^(layer-1)

#include<iostream>
using namespace std;
int main()
{
    int t;
    cout<<"enter no.of test cases - ";
    cin>>t;
    while(t--)
    {
        int l;
        cout<<"enter the layer of the tree - ";
        cin>>l;
        cout<<pow(2,l-1)<<"\n";
    }
}