# [Gold II] Melons - 27208 

[문제 링크](https://www.acmicpc.net/problem/27208) 

### 성능 요약

메모리: 11280 KB, 시간: 72 ms

### 분류

다이나믹 프로그래밍, 이분 탐색, 누적 합, 두 포인터

### 제출 일자

2024년 9월 9일 00:08:29

### 문제 설명

<p>In EGOI Farm, the employees are receiving and shipping melons. This morning, $N$ melons are received. The melons are numbered from $1$ to $N$. The weight of melon $i$ ($1 ≤ i ≤ N$) is $A_i$.</p>

<p>Rie is working at EGOI Farm. Her job is packing melons into boxes. Now, an integer $x$ ($1 ≤ x ≤ N$) is determined in EGOI Farm. After that, she will receive the melons $x, x + 1, \dots , N$, in this order. She will pack them into boxes by repeating the following process.</p>

<ul>
	<li>Rie will take an empty box. She will repeat putting the melons into the box. However, if the total weight of the melons in the box will exceeds $L$ after putting the next melon into the box, she will not put it into the box. Then, she will ship the box. (In this case, she will put the next melon into a new box.)</li>
</ul>

<p>After putting the melon $N$ into a box, she will ship the box, and her job will be finished.</p>

<p>Rie wants to prepare for her job for all possible values of $x$. Write a program which, given information of the melons and the maximum possible weight $L$ of a box, calculates the number of boxes shipped by her and the total weight of the melons in the last box for all possible values of $x$.</p>

### 입력 

 <p>Read the following data from the standard input. Given values are all integers.</p>

<blockquote>
<p>$N$ $L$</p>

<p>$A_1$</p>

<p>$A_2$</p>

<p>$\vdots$</p>

<p>$A_N$</p>
</blockquote>

### 출력 

 <p>Write $N$ lines to the standard output. The $i$-th line ($1 ≤ i ≤ N$) of output corresponds to the case $x = i$. This line should contain the number of shipped boxes and the total weight of the melons in the last box if $x = i$. These two values should be separated by a space.</p>

