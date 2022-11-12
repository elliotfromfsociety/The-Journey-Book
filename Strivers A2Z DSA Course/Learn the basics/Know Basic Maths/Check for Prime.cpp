// question link : https://practice.geeksforgeeks.org/problems/prime-number2314/1

// solution 1 : most basic one except one thing that here we are running the loop until sqrt to reduce the number otherwise most basic one will where we will run the loop till the number

class Solution
{
public:
    int isPrime(int n)
    {
        // corner cases
        if (n <= 1)
            return 0;

        // check from 2 to sqrt(n)
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
                return 0;
        }
        return 1;
    }
};


// solution 2 : another varition can be from 5 to i+2 something but i didn't got it so



// solution 3 : recursion 

class Solution{
public:
    int isPrime(int n){
        static int i = 2;
        
        // corner cases 
        if(n==0||n==1) return 0;
        
        // checking prime
        if(n==i) return 1;
        
        // base case
        if(n%i==0) return 0;
        
        i++;
        return isPrime(n);
    }
};