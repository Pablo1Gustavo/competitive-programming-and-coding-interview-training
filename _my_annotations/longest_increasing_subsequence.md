
# Longest increasing subsequence

## The problem
Given a sequence **S**, find the longest increasing subsequence **S'**
Example: The LIS of **S = {3, 4, 3, 5, 2, 7}** is **S' = {3, 4, 5, 7}** (length 4).
$S' \subseteq S , \forall S'_i \in S', S'_i > S'_{i-1}$


## The logic
The idea for solving this problem consists in separate the numbers in stacks sorted from left to right.
For each number in **S**:

* If $S_i$ is less or equal to the number in the top of a stack, add $S_i$ to the top of this stack (most left).
* Otherwise, add $S_i$ to a new stack.

See the example to **S = {3, 4, 3, 5, 2, 7}** :
* Step 1:  **S = {3, 4, 3, 5, 2, 7}**
*any stack*
* Setp 2: **S = {4, 3, 5, 2, 7}**
$stack_1 = \{3\}$ 

* Setp 3: **S = {3, 5, 2, 7}**
$stack_1 = \{3\}$ 
$stack_2 = \{4\}$ 

* Setp 4: **S = {5, 2, 7}**
$stack_1 = \{3, 3\}$ 
$stack_2 = \{4\}$ 

* Setp 4: **S = {2, 7}**
$stack_1 = \{3, 3\}$ 
$stack_2 = \{4\}$ 
$stack_3 = \{5\}$ 

* Setp 5 **S = {7}**
$stack_1 = \{3, 3, 2\}$ 
$stack_2 = \{4\}$ 
$stack_3 = \{5\}$ 

* Setp 6 **S = $\emptyset$**
$stack_1 = \{3, 3, 2\}$ 
$stack_2 = \{4\}$ 
$stack_3 = \{5\}$ 
$stack_4= \{7\}$ 

Notice that,
 for any step, any element in the top of a stack is smaller than elements of the stacks ahead, then, the number of stacks is the length of the LIS $S'$.

## The code
Let's see the code to obtain the length of the LIS, using a single stack $P$ to simulate all the stacks, with each element representing the top of the stack.
For this problem, we need to use a *vector* representing the stack, because it has the needed iterators in the function *lower_bound,* and the *stack* type doesn't use iterators.

```cpp=
#include  <bits/stdc++.h>
using  namespace  std;

int  s[1010];

int  main () {
	ios_base::sync_with_stdio(false);cin.tie(NULL);

	int  n;
	// input the size of S
	cin  >>  n;

	// read the values of S
	for (int  i = 0; i < n; i++)
		cin  >>  s[i];

	vector<int> stacks;

	for (int  i = 0; i < n; i++) {
	// This vector iterator will find the leftmost element in the stack 	(the tops) that is equal or less the s[i]
	vector<int>::iterator  it = lower_bound(stacks.begin(), stacks.end(), s[i]);

	// If the iterator reach the end, there is no element that meets the conditions, than, we
	// need to add the new element (new stack) to the right, otherwise, we need
	// to replace the position of the iterator (top of a stack) to the new value.
	if (it  ==  stacks.end())
		stacks.push_back(s[i]);
	else
		*it = s[i];
}

	// show the number of stacks
	cout  <<  stacks.size() <<  endl;

	return  0;
}
```
This is the basics and necessary about LIS. Keep praticing!