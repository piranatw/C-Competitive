#include <bits/stdc++.h>
#define MxN 10001
#define pii(a,b) pair<a,b>

using namespace std;
const int di[4]={1,-1,0,0},dj[4]={0,0,1,-1};

int main(){
    // cin.tie(0)->ios::sync_with_stdio(0);
    double a,b;
    scanf("%lf %lf",&a,&b);
    printf("Plus: %.2lf\n",a+b);
    printf("Minus: %.2lf\n",a-b);
    printf("Multiply: %.2lf\n",a*b);
    printf("Divide: %.2lf\n",a/b);
    printf("Modulo: %.2lf\n",fmod(a,b));
    printf("Power: %.2lf\n",pow(a,b));
    printf("Root: %.2lf\n",pow(a,1/b));
    return 0;
}