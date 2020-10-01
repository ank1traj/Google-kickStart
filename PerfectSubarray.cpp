#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

bool isPerfect(int n){
    if(n<0) return false;
    if (n==1 || n==0) return true;
    int l=0, r=n/2, mid=l+(r-l)/2;
    while(l<=r){
        mid=l+(r-l)/2;
        if(mid*mid==n) return true;
        if(mid*mid<n)
            l=mid+1;
        else
            r=mid-1;
    }
    return mid*mid == n;
}
int main() {
    int t;
    cin>>t;
    unordered_set<int> perfects;
    for(int h=1; h<=t; h++){
        int n;
        cin>>n;
        int arr[n];
        int Csum[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Csum[0]=arr[0];
        for(int i=1; i<n; i++)
            Csum[i]=Csum[i-1]+arr[i];
        int sum, count=0;
        float sq;

        for(int i=0; i<n; i++){
            for(int j=i; j<n; j++){
                if(i>0)
                    sum=Csum[j]-Csum[i-1];
                else
                    sum=Csum[j];

                if(perfects.find(sum)!=perfects.end() || isPerfect(sum)){
                    count++;
                    perfects.insert(sum);
                }
            }
        }
        cout<<"Case #"<<h<<": "<<count<<endl;
    }
}
