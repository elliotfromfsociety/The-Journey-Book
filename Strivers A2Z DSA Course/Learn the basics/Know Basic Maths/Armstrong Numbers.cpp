// question link : https://practice.geeksforgeeks.org/problems/armstrong-numbers2727/1

// solution 1 : brute force and very basic 

class Solution {
  public:
    string armstrongNumber(int n){
    int temp = n, val = 0;
    while(temp>0){
        int x = temp%10;
        val += x*x*x;
        temp = temp/10;
    }
    if(val==n) return "Yes";
    else return "No";
    }
};