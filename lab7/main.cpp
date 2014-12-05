#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>
#include <string>
using namespace std;

class P {
public:
    P() = default;
    P(const P& obj) = default;
    P(P&& obj) = default;
    P& operator=(const P& rv) = default;
    P& operator=(P&& rv) = default;
    ~P() = default;
    
    bool operator()(int a) {
        return a > 10;
    }
};

int main() {
    vector<int> v;
    int n;
    cout << "Count of cakes" << endl;
    cin >> n;
    for(int i=0;i<n;i++) {
        cout << "Mass of a cake "<<i<<endl;
        int m;
        cin >> m;
        v.push_back(m);
    }
    
    int c = count_if(v.begin(),v.end(),P());
    if (c == 1)
        cout << "The cake is a lie" << endl;
    else if (c == v.size())
        cout << "All cakes are a lie" << endl;
    else if (c > 1)
        cout << "Some cakes are a lie" << endl;
    else if (c == 0)
        cout << "Any cake is a truth" << endl;
    return 0;
}
 
