#include<bits/stdc++.h>
using namespace std;
int main()
{
    double area,r,n;
   while((scanf("%lf %lf",&r,&n))==2)
   {
         area=0.5*n*r*r*(sin((2*3.1415926535897932384626433832795028841971)/n));
    printf("%0.3lf\n",area);
   }

}
