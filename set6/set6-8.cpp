#include <iostream>
using namespace std;
int main() {
    int n;
    int m;
    cout<<"ENTER 2 NUM:";
    cin>>n>>m;
    n = n ^ m;
    m = n ^ m;
    n = n ^ m;
    cout<<n<<" "<<m;
    return 0;
}
