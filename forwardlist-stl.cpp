include<forward_list>
using namespace std;

    int main()
    {
       forward_list<int>l1={1,2,3,4};
       cout<<"Enter the elements of first list :";
       cout<<endl;
       for(int &x:l1)
       {
            cout<<x<<" ";

       }
       cout<<endl;
       forward_list<int>l2;
       int n1,n2,n3;
       cout<<"enter elements of list 2";
       cin>>n1>>n2>>n3;
       l2.assign({n1,n2,n3});
       cout<<"The second list is: ";
       cout<<endl;
       for(int &x:l2)
       {
            cout<<x<<" ";
       }
       cout<<endl;


         l1.push_front(8);
       cout<<"List 1 after pushing 8 at start"<<endl;
       for(int &x:l1)
       {
            cout<<x<<" ";
       }
       cout<<endl;
       l1.pop_front();
       cout<<"List 1 after popping element from front"<<endl;
       for(int &x:l1)
       {
            cout<<x<<" ";
       }
       cout<<endl;
       auto iter=l1.insert_after(l1.begin(),8);
       cout<<"insert 8 after start in list 1: "<<endl;
       for(int &x:l1)
       {
            cout<<x<<" ";
       }
       cout<<endl;
       auto it=l2.erase_after(l2.begin());
       cout<<"after erasing 8  from  list 2: "<<endl;
       for(int &x:l2)
       {
            cout<<x<<" ";
       }
       cout<<endl;
       cout<<"Removing 4 from list 1: "<<endl;
       l1.remove(4);
       for(int &x:l1)
       {
            cout<<x<<" ";
       }


       cout<<endl;
       cout<<"Reverse list 1";
       cout<<endl;
       l1.reverse();
       for(int &x:l1)
       {
            cout<<x<<" ";
       }
       cout<<endl;

       cout<<"Sorting list 1";
       cout<<endl;
       l1.sort();
       for(int &x:l1)
       {
            cout<<x<<" ";
       }
       cout<<endl;

       cout<<"Sorting list 2";
       cout<<endl;
       l2.sort();
       for(int &x:l2)
       {
            cout<<x<<" ";
       }
       cout<<endl;
       cout<<"Merging list 1 and 2";
       cout<<endl;
       l1.merge(l2);
       for(int &x:l1)
       {
            cout<<x<<" ";
       }
       cout<<endl;

       return 0;












}