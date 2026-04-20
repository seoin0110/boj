# [Gold IV] Short Sell - 17920 

[문제 링크](https://www.acmicpc.net/problem/17920) 

### 성능 요약

메모리: 3584 KB, 시간: 8 ms

### 분류

다이나믹 프로그래밍

### 제출 일자

2025년 1월 14일 22:40:57

### 문제 설명

<p>Simone is learning to trade crypto currencies. Right now, she is looking into a new currency called <em>CryptoKattis</em>. A CryptoKattis can be used to improve your Kattis ranklist score without having to solve problems.</p>

<p>Simone, unlike most competitive programmers, is very perceptive of competition trends. She has lately noticed many coders talking about a new online judge called <em>Doggo</em>, and suspect that using the Kattis judge will soon fall out of fashion. This, of course, will cause the CryptoKattis to rapidly fall in value once demand fades.</p>

<p>To take advantage of this, Simone has performed very careful market research. This has allowed her to estimate the price of a CryptoKattis in dollars during the next $N$ days. She intends to use this data to perform a <em>short sell</em>. This means she will at some day borrow $100$ CryptoKattis from a bank, immediately selling the currency. At some other day, she must purchase the same amount of CryptoKattis to repay her loan. For every day between (and including) these two days, she must pay $K$ dollars in interest. What is the maximum profit Simone can make by carefully choosing when to borrow and repay the $100$ CryptoKattis?</p>

### 입력 

 <p>The first line of the input contains two integers $1 \le N \le 100\,000$ and $1 \le K \le 100$. $N$ is the number of days you know the CryptoKattis price of, and $K$ is the cost in dollars of borrowing CryptoKattis per day.</p>

<p>The next line contains $N$ integers separated by spaces. These are the CryptoKattis prices during the $N$ days. Each CryptoKattis price is between $1$ and $100\,000$ dollars.</p>

### 출력 

 <p>Output a single decimal number; the maximum profit you can make performing a short sell. If you cannot make a profit no matter what short sell you make, output $0$.</p>

