#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T,i;
    cin>>T;
    for(i=0;i<T;i++){
        string S;
        string X;
        cin>>S;
        cin>>X;
        int x = X.size();

        while(S.find(X) != -1){
            S.replace(S.find(X),x,"#");
        }

        cout<<S<<endl;
    }
    return 0;
}

