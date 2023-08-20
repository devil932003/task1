#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int k;
    cin>>k;
   int ans = 0;
int i=0, j=v.size()-1;
while(i < j){
if(v[i] + v[j] == k){ // found elements just increase counter
ans++;
i++;
j--;
}
else if(v[i] + v[j] > k) j--;
   else i++; // sum is small so increase the smaller element, i.e. ith element
}
cout<< ans;
return 0;
}