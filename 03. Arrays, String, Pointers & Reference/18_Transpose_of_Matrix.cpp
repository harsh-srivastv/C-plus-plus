#include<bits/stdc++.h>
#include<vector>
using namespace std;


int main()
{
    int n;
    cin>>n;

    vector<vector <int>> vec(n, vector <int>(n,0));
    vector<vector <int>> ans(n, vector <int>(n,0));
    // take matrix input
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int t;
            cin>>t;
            vec[i][j] = t;
        }
    }
    cout<<"\n";
    // print input matrix
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<vec[i][j]<<" ";
        }
        cout<<"\n";
    }
    // do the transpose
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            ans[i][j] = vec[j][i];
        }
    }
    cout<<"\nTranspose: \n\n";
    // print transposed matrix
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}