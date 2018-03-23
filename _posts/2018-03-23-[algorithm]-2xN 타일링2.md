###  2xn 타일링2  ###

문제번호 : 11727 번

문제링크 : [https://www.acmicpc.net/problem/11727](https://www.acmicpc.net/problem/11727)

----------

## 문제 ##

2×n 직사각형을 2×1과 2×2 타일로 채우는 방법의 수를 구하는 프로그램을 작성하시오.

아래 그림은 2×17 직사각형을 채운 한가지 예이다.

![](https://www.acmicpc.net/upload/images/t2n2122.gif)



## 입력 ##

첫째 줄에 n이 주어진다. (1 ≤ n ≤ 1,000)



## 출력 ##

첫째 줄에 2×n 크기의 직사각형을 채우는 방법의 수를 10,007로 나눈 나머지를 출력한다.



## 예제 ##
### 입력1 ###

	2

### 출력1 ###

	3

------

### 입력2 ###

	8

### 출력2 ###

	171


------

### 입력3 ###

	12

### 출력3 ###

	2731


## 풀이 ##




## 코드 ##


	
	#include<iostream>
	#include<cstring>
	#define IOFAST() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	#include<algorithm>
	
	using namespace std;
	int dp[1001];
	
	void f(int n){	//2x1 로 채우기 + 2x2로 채우기
	
		for (int i = 2; i <= n; i++){
			dp[i] = (dp[i - 1] + dp[i - 2] + dp[i - 2])%10007;
		}
		
	}
	int main(){
	
		int n;
		cin >> n;
		dp[0] = 1;
		dp[1] = 1;
		f(n);
	
		cout << dp[n];
	}