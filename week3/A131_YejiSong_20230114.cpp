// Backjoon 2108 - 통계학
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    int n, tmp, mean, mode = 0, min, max = 0;
    bool isSecond = false;
    cin>>n;
    vector<int> v(n);
    vector<int> v_2(8001, 0);
    for(int i = 0; i < n; i ++){
        cin>>v[i];
        mean += v[i];
        tmp = (v[i] <= 0) ? abs(v[i]) : v[i] + 4000;
        v_2[tmp]++;
        if(v_2[tmp] > max)
            max = v_2[tmp];
    }
    sort(v.begin(), v.end());

    for(int i = -4000; i < 4001; i++){
        tmp = i <= 0 ? abs(i) : i+4000;
        if(v_2[tmp] == max){
            mode = i;
            if(isSecond)
                break;
            isSecond = true;
        }
    }

    cout<<round(mean/(double)n)<<'\n';
    cout<<v[round(n/2)]<<'\n';
    cout<<mode<<'\n';
    min = v[0];
    max = v[v.size()-1];
    cout<<max - min<<'\n';
}