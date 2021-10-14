#include<iostream>
#include<bits/stdc++.h>
using namespace std;
template<typename T>
class sta{
private:
    T arr,arr2;
    int n;
    int top = -1;
    vector<T>v;
    vector<pair<T,T>>v1;
public:
    void getdata(T a)
    {
        arr = a;
    }
    void insert_stack()
    {
        v.push_back(arr);
        ++top;
    }
    T delete_stack()
    {
        T val = v[top];
        v.pop_back();
    }
    void display()
    {
        cout<<"Elements are : "<<endl;
        while(top!=-1){
            cout<<v[top]<<endl;
            top--;
        }  
    }
    void getdataco(T a,T b)
    {
        arr = a;
        arr2 = b;
    }
    void insert_stackco()
    {
        v1.push_back(make_pair(arr,arr2));
        ++top;
    }
    T delete_stackco()
    {
        T val = v[top];
        v1.pop_back();
    }
    void displayco()
    {
        cout<<"Elements are : "<<endl;
        while(top!=-1){
            cout<<v1[top].first<<" "<<v1[top].second<<endl;
            top--;
        }
    }
};
int main()
{
    int n,x,y;
    cout<<"Enter the number of elements : ";
    cin>>n;
    int a;
    float b;
    cout<<"Enter integers : "<<endl;
    sta <int>s;
    for(int i=0;i<n;i++){
        cin>>a;
        s.getdata(a);
        s.insert_stack();
    }
    s.display();
    sta <double>s1;
    cout<<"Enter doubles : "<<endl;
    for(int i=0;i<n;i++){
        cin>>b;
        s1.getdata(b);
        s1.insert_stack();
    }
    s1.display();
    pair<int,int>p;
    sta<int>s2;
    cout<<"Enter xco , yco : "<<endl;
    for(int i=0;i<n;i++){
        cin>>x>>y;
        s2.getdataco(x,y);
        s2.insert_stackco();
    }
    s2.displayco();
}
