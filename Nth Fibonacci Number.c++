#include<bits/stdc++.h>
using namespace std;
int fibonacci(int n)
{

        if(n==1 || n==2)
        {
                return 1;
        }
        else
        {
                return fibonacci(n-1) + fibonacci(n-2);
        }
}
int main()
{
        /*
        *  Write your code here. 
         *  Read input as specified in the question.
         *  Print output as specified in the question.
        */
        int n;
        cout << "Enter the index (n): ";
        cin >> n;
         if (n < 1)
        {
                cout << "Index must be greater than or equal to 1" << endl;
                return 1;  // Handle invalid input
        }
        // Get the n-th Fibonacci number
        int fib_num = fibonacci(n);
        //printing the element
        cout<<fib_num<<endl;
        return 0;
}