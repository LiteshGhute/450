#include<bits/stdc++.h>
using namespace std;
main(){
    vector<int>v;
    int n;
    cin>>n;
    while(n--){
        int c;
        cin>>c;
        v.push_back(c);
    }

    int i=0;
    int j=v.size()-1;
    while(i<j){
        if(v[i]<0){
            i++;
        }
        else if(v[i]>=0){
            swap(v[i],v[j]);
            j--;
        }
    }
    for(int el:v){
        cout<<el<<endl;
    }
}
