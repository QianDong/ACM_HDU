###Problem Description
>Ignatius drinks milk everyday, now he is in the supermarket and he wants to choose a bottle of milk. There are many kinds of milk in the supermarket, so Ignatius wants to know which kind of milk is the cheapest.

####Here are some rules:
>1. Ignatius will never drink the milk which is produced 6 days ago or earlier. That means if the milk is produced 2005-1-1, Ignatius will never drink this bottle after 2005-1-6(inclusive).<br \>
2. Ignatius drinks 200mL milk everyday.<br \>
3. If the milk left in the bottle is less than 200mL, Ignatius will throw it away.<br \>
4. All the milk in the supermarket is just produced today.<br \>

>Note that Ignatius only wants to buy one bottle of milk, so if the volumn of a bottle is smaller than 200mL, you should ignore it.
Given some information of milk, your task is to tell Ignatius which milk is the cheapest.
 

####Input
>The input contains several test cases. The first line of the input is a single integer T which is the number of test cases. T test cases follow.
Each test case starts with a single integer N(1<=N<=100) which is the number of kinds of milk. Then N lines follow, each line contains a string S(the length will at most 100 characters) which indicate the brand of milk, then two integers for the brand: P(Yuan) which is the price of a bottle, V(mL) which is the volume of a bottle.
 

####Output
For each test case, you should output the brand of the milk which is the cheapest. If there are more than one cheapest brand, you should output the one which has the largest volume.
 

####Sample Input
>2<br \>
2<br \>
Yili 10 500<br \>
Mengniu 20 1000<br \>
4<br \>
Yili 10 500<br \>
Mengniu 20 1000<br \>
Guangming 1 199<br \>
Yanpai 40 10000<br \>
 

####Sample Output
>Mengniu<br \>
Mengniu

######Hint
In the first case, milk Yili can be drunk for 2 days, it costs 10 Yuan. Milk Mengniu can be drunk for 5 days, it costs 20 Yuan. So Mengniu is the cheapest.In the second case,
milk Guangming should be ignored. Milk Yanpai can be drunk for 5 days, but it costs 40 Yuan. So Mengniu is the cheapest.
