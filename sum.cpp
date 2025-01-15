   #include <bits/stdc++.h>
    using namespace std;
    
    int main() {
        int n;
        cin>>n;
        vector<int> v(n);
        int q;
        cin>>q;
        for(int  i =0;i<n;i++){
            cin>>v[i];
        }
        vector<int> prefix_sum(n,0);
        prefix_sum[0] = v[0];
        for(int i =1;i<n;i++){
            prefix_sum[i] = prefix_sum[i-1]+v[i];
        }
        while(q--){
            int l, r;
            cin>>l>>r;
            cout<<prefix_sum[r] - prefix_sum[l] + v[l]<<endl;
        }

        
        return 0;
    }
