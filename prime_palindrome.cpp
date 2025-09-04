#include <iostream>
using namespace std;

bool isPrime(int n) {
    // TODO: complete the function as per instructions
    int f=1,s;
    if(n==2)
    return 1;
    else if(n==1)
    return 0;
    else if(n%2==0)
    return 0;
    else{
        s=sqrt(n);
        for(int i=3; i<=s; i++)
            if(n%i==0)
            f=0;
        return f;
    }
}

bool isPalindrome(int n) {
    // TODO: complete the function as per instructions
    int s=0,n1=n,k=1;
    while(n1!=0)
    {
        s=s*k+n1%10;
        n1=n1/10;
        k=10;
    }
    if(n==s)
    return 1;
    else 
    return 0;
}

bool primePalindrome(int n) {
    // TODO: complete the function as per instructions
    if(isPrime(n) && isPalindrome(n))
    return 1;
    else 
    return 0;
}

int main() {
    int n; cin >> n;
    cout << (primePalindrome(n) ? 1 : 0) << "\n";
    return 0;
}
