# insert
<h2>Insertion Sort</h2>
<h2>Algorithm</h2>
Insertion Sort - Sort (A,n)<br>
Input: a sequence of n numbers stored in array A<br>
Output:an ordered sequence of n numbers <br>
Insertion- sort (A,n) -> A[0....n-1]<br>

for j=1 to n <br>
key =A[j]<br>
i=j-1<br>
while i>=0 and [i]>key<br>
A[i+1]=A[i]<br>
i=i-1<br>
end while <br>

A[i+1]=key //place the key in correct position <br><br>


Time efficiency analysis<br>
1. The algorithm is dependent on input size n that is the array size.<br>
2. The inner while loop with condition can be considered the basic operation<br>
3. As the inner while loop executes only when the condition the condition i>=0 and A[i]>key holds true i.e The basic operation depends on the type of input.<br> 

<br>
Note: The already sorted array is Best case input for insertion sort. Similarly reverse sorted array is worst case input for insertion sort. <br>


