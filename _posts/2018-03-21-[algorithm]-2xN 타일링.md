###  2xn 타일링  ###

문제번호 : 11726 번

문제링크 : [https://www.acmicpc.net/problem/11726](https://www.acmicpc.net/problem/11726)

----------

## 문제 ##

2×n 크기의 직사각형을 1×2, 2×1 타일로 채우는 방법의 수를 구하는 프로그램을 작성하시오.

아래 그림은 2×5 크기의 직사각형을 채운 한 가지 방법의 예이다.

![](https://onlinejudgeimages.s3-ap-northeast-1.amazonaws.com/problem/11726/1.png)

## 입력 ##

첫째 줄에 n이 주어진다. (1 ≤ n ≤ 1,000)



## 출력 ##

첫째 줄에 2×n 크기의 직사각형을 채우는 방법의 수를 10,007로 나눈 나머지를 출력한다.



## 예제 ##
### 입력1 ###

	2

### 출력1 ###

	2

------

### 입력2 ###

	9

### 출력2 ###

	55


## 풀이 ##




## 코드 ##
		
	#include<iostream>
	#include<cstring>
	#include<algorithm>
	
	using namespace std;
	int dp[1001];
	
	int f(int n){
		dp[0] = 1;
		dp[1] = 1;
		if (dp[n] > 0) return dp[n];
		else
			return dp[n] = (f(n - 1) + f(n - 2))%10007;
	}
	int main(){
	
		int n;
		cin >> n;
		f(n);
	
		cout << dp[n];
	}