## Kadane 's Algorithm
This algorithm, an example of dynamic programming is used when given a sequence of n real numbers A(1) … A(n), we have to determine a
contiguous subsequence A(i) … A(j) for which the sum of elements in the subsequence is maximized.

该算法是动态规划的一个例子，当给定n个实数A（1）... A（n）的序列时，我们必须确定一个连续的子序列A（i）... A（j），其中元素的总和在子序列中最大化。

Kadane's algorithm is to look for all positive contiguous segments of the array (max_ending_here is used for this). And keep track of
maximum sum contiguous segment among all positive segments (max_so_far is used for this). Each time we get a positive sum compare it 
with max_so_far and update max_so_far if it is greater than max_so_far.

Kadane的算法是查找数组的所有正连续段（max_ending_here用于此）。 并跟踪所有正片段中的最大和连续片段（max_so_far用于此）。 每次我们得到一个正数并与max_so_far进行比较，如果它大于max_so_far则更新max_so_far。
