#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
    cin>>t;
    while(t--){
        
        int n,m;
        cin>>n>>m;
        int arr[n][m];
        for(int i =0;i<n;i++){
            for(int j =0;j<m;j++){
                cin>>arr[i][j];
            }
        }
        int ans = 0;
        for(int i =0;i<n;i++){
            for(int j =0;j<m;j++){
                int tempi = i-1, tempj = j-1;
                int tempans= arr[i][j] ;
                while(tempi>=0 && tempj >=0) {
                    tempans += arr[tempi][tempj];
                    tempi--;tempj--;
                }   
                tempi = i-1, tempj = j+1;
                while(tempi>=0 && tempj <m) {
                    tempans += arr[tempi][tempj];
                    tempi--;tempj++;
                }
                tempi = i+1, tempj = j-1;
                while(tempi<n && tempj >=0) {
                    tempans += arr[tempi][tempj];
                    tempi++;tempj--;
                }
                tempi = i+1, tempj = j+1;
                while(tempi<n && tempj <m) {
                    tempans += arr[tempi][tempj];
                    tempi++;tempj++;
                }
                
                ans = max(ans,tempans);
            }
        }
        cout<<ans<<endl;
    }
    
}