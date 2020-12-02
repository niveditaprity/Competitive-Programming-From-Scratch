#include<bits/stdc++.h>

using namespace std;

int main()

{

    int n,m;

    cin>>n;

    int A[n];

    for(int i=0;i<n;i++)cin>>A[i];

    cin>>m;

    int C[m],max_num=0;

    for(int i=0;i<m;i++)

    {

        cin>>C[i];

        max_num = max(max_num,C[i]);

    }

    int hash[max_num+1] = {0};

    for(int i=0;i<n;i++){

        for(int j=0;j<m;j++){

            int k = C[j] - A[i];

            hash[k] += 1;

        }

    }

    for(int i=1;i<=max_num;i++){

        if(hash[i] == n)cout<<i<<" ";

    }

    cout<<"\n";   

    return 0;

}
