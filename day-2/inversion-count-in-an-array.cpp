// Inversion count in an array
// Given an array of integers A.
// If i < j and A[i] > A[j] then the pair (i, j) is called an inversion of A.
// Find the total number of inversions of A modulo (10^9 + 7).



// Input Format

// The only argument given is the integer array A.
// Output Format

// Return the number of inversions of A modulo (10^9 + 7).
// Constraints

// 1 <= length of the array <= 100000
// 1 <= A[i] <= 10^9 
// For Example

// Input 1:
//     A = [1, 2, 5, 4, 3]
// Output 1:
//     3

// Input 2:
//     A = [5, 17, 100, 11]
// Output 2:
//     1

// https://www.interviewbit.com/problems/inversion-count-in-an-array/

long long merge(vector<int> &a,vector<int> &t,int l,int m, int r) {
    int i=l;
    int j=m;
    int k=l;
    long long ans=0;
    while(i<=m-1&&j<=r) {
        if(a[i]<=a[j]) {
            t[k++]=a[i++];
        }
        else {
            ans+=m-i;
            t[k++]=a[j++];
        }
    }
    while(i<=m-1) {
        t[k++]=a[i++];
    }
    while(j<=r) {
        t[k++]=a[j++];
    }
    for(int p=l;p<=r;p++) {
        a[p]=t[p];
    }
    return ans;
}


long long _mergeSort(vector<int> &a,vector<int> &t,int l, int r) {
    long long ans=0;
    if(l<r){
        int m=l+(r-l)/2;

        ans+=_mergeSort(a,t,l,m);
        ans+=_mergeSort(a,t,m+1,r);
        ans+=merge(a,t,l,m+1,r);
        // cout<<ans<<"\n";
    }
    return ans;
}


int Solution::solve(vector<int> &a) {
    int n=a.size();
    vector<int> t(n,0);
    long long ans=_mergeSort(a,t,0,n-1);
    return ans%1000000007;
}
