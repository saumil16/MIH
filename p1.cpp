#include <bits/stdc++.h>

using namespace std;
 
int maxSubArraySum(vector<int> a)
{
    int max= INT_MIN, sum = 0;
 
    for (int i = 0; i < a.size(); i++) {
        sum+= a[i];
        if (max < sum)
              max = sum;
 
        if(sum < 0)
            sum = 0;
    }
    return max;
}
 

int main()
{
    vector<int> a;
    a ={2,3,-1,4,-5};
   
    int max_sum = maxSubArraySum(a);
    cout << "Maximum contiguous sum is " << max_sum;
    return 0;
}