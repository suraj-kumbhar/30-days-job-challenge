// Repeat and Missing Number Array

// Please Note:
// There are certain problems which are asked in the interview to also check how you take care of overflows in your problem.
// This is one of those problems.
// Please take extra care to make sure that you are type-casting your ints to long properly and at all places. Try to verify if your solution works if number of elements is as large as 105

//  Food for thought :
// Even though it might not be required in this problem, in some cases, you might be required to order the operations cleverly so that the numbers do not overflow.
// For example, if you need to calculate n! / k! where n! is factorial(n), one approach is to calculate factorial(n), factorial(k) and then divide them.
// Another approach is to only multiple numbers from k + 1 ... n to calculate the result.
// Obviously approach 1 is more susceptible to overflows.
// You are given a read only array of n integers from 1 to n.

// Each integer appears exactly once except A which appears twice and B which is missing.

// Return A and B.

// Note: Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?

// Note that in your output A should precede B.

// Example:

// Input:[3 1 2 5 3] 

// Output:[3, 4] 

// A = 3, B = 4

//https://www.interviewbit.com/problems/repeat-and-missing-number-array/

vector<int> Solution::repeatedNumber(const vector<int> &A) {
    long long sum1=0,sum2=0,x,y;
    long long n=A.size();
    // cout<<sum1<<"   "<<sum2<<endl;
    for(int i=0;i<n;i++) {
        sum1+=(long long)A[i];
        // cout<<"Sum1 :"<<sum1<<endl;
        sum1-=(long long)(i+1);
        // cout<<"Sum1 :"<<sum1<<endl;
        sum2+=((long long)A[i]*(long long)A[i]);
        // cout<<"Sum2 :"<<sum2<<endl;
        sum2-=((long long)(i+1)*(long long)(i+1));
        // cout<<"Sum2 :"<<sum2<<endl;
        // cout<<sum1<<"   "<<sum2<<endl;
    }
    vector<int> res;
    sum2/=sum1;
    x=(long long)((long long)sum2+((long long)sum1))/2;
    y=(long long)((long long)sum2-(long long)x);
    res.push_back(x);
    res.push_back(y);
    return res;
}
