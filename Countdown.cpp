#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    for(int i = 1;i <= t; i++){
        long long int n, k;
        cin >> n >> k;

        vector <int> a(n)

        for(long long int j = 0; j < n; j++){
            cin >> a[j];
        }
        int c = ;
        for(int j = 0; j < n; j++){
            if(a[j] == k){
                int x;
                for(x = j; x < j + k - 1; x++){
                    if(a[x] == a[x + 1] + 1){
                        continue;
                    } else{
                        j = x;
                        break;
                    }
                }
                if(x == j  +k - 1)
                	c++;
            }

        }

        cout << "Case" << " " << "#" << i << ":" << " " << c << endl;
    }
}