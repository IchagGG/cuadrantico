#include <bits/stdc++.h>

using namespace std;
int main() {
  int x,y,z;
    cin>>x>>y>>z;
      int L1=(-y+sqrt(y*y-4*x*z))/(2*x);
        int L2=(-y-sqrt(y*y-4*x*z))/(2*x);
          cout<<L1<<" "<<L2<<endl;

  return 0;


}
