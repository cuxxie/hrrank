#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main() {
    //std::cout << "Hello, World!" << std::endl;
    int q;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        int n,k,x,d;
        cin>>n;
        cin>>k;
        cin>>x;
        cin>>d;
        vector<int> pi(n);
        float total = 0;
        for(int j=0;j<n;j++){
            cin>>pi[j];
            total += max((float)k,(float)(pi[j]*x/100));
        }
        float a = total;
        float b = (float)d;
        if(a<=b)
            cout<<"fee"<<endl;
        else
            cout<<"upfront"<<endl;
    }
    return 0;
}