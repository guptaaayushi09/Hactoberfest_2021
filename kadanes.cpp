#include<iostream>
using namespace std;

int main()
{
    int n; cin >> n;
    int max_sum = 0, curr_sum=0;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    for(int i=0;i<n;i++){
        curr_sum += a[i];
        if(curr_sum<0){
            curr_sum = 0;
        }
        if(curr_sum > max_sum){
            max_sum = curr_sum;
        }
    }

    cout << max_sum << endl;

    return 0;
}