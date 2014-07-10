###Problem Description
>A number sequence is defined as follows:

>f(1) = 1, f(2) = 1, f(n) = (A * f(n - 1) + B * f(n - 2)) mod 7.

>Given A, B, and n, you are to calculate the value of f(n).
 
####Input
>The input consists of multiple test cases. Each test case contains 3 integers A, B and n on a single line (1 <= A, B <= 1000, 1 <= n <= 100,000,000). Three zeros signal the end of input and this test case is not to be processed.
 

####Output
>For each test case, print the value of f(n) on a single line.
 

####Sample Input
>1 1 3<br />
1 2 10<br />
0 0 0<br />
 

####Sample Output
>2<br />
5<br />

