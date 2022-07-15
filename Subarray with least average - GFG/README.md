# Subarray with least average
## Easy 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given an array of size n, Find the subarray with least average of size k.</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input: </strong>nums = [30, 20, 10], k = 1
<strong>Output: </strong>3
<strong>Explanation: </strong>Subarrays of length 1 are
{30}, {20}, {10}. {10} has the least 
average.
</span>
</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input: </strong>nums = [30, 20, 10], k = 2
<strong>Output: </strong>2
<strong>Explanation: </strong>Subarrays of length 2 are
{30, 20}, {20, 10}. {20, 10} has the least 
average.</span>
</pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read or print anything. Yous task is to complete the function&nbsp;<strong>least_average()</strong>&nbsp;which takes the array and k as input parameter and returns the index of the first element of the subarray(<strong>1-based indexing</strong>)&nbsp;of size k&nbsp;that has least average.</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:&nbsp;</strong>O(n)<br>
<strong>Expected Space Compelxity:&nbsp;</strong>O(1)</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= k &lt;= n &lt;= 100000<br>
1 &lt;= elements of array &lt;= 1000000</span></p>
 <p></p>
            </div>