
#DP (dynamic programming)#


## 동적 계획법 ##
>: 중복해서 계산되는 부분을 배열에 저장했다가 필요할 때 꺼내 쓰는 방식
>: 어떤 계산값을 메모해뒀다가 필요할때 쓴다.
>:Overlapping Subproblem + Optimal Substructure 두가지 다 만족해야한다.  
> Overlapping Subproblem:문제를 작은 문제로 쪼개서 푸는 것.풀이는 같은 방식.  
> Optimal Substructure:문제의 정답을 작은문제의 정답에서 구할 수 있다.  
> 문제풀이 방법에는 top-down과 bottom-up이 있다.---> 아래에서 설명  

## 피보나치 수열  ##
>: f(n) = f(n-1) + f(n-2) (n>=2, f(0)=0|f(1)=1)을 만족하는 수열
>문제 N번째 피보나치 수를 구하기 위해서는 작은문제인 n-1번째 피보나치수와 n-2번째 피보나치수를 구하는 문제를 풀어야하고, .....1번째 피보나치수구하는문제와 0번째 피보나치수를 구하는 문제를 풀어야한다.( 작게 쪼개짐 )


> BOJ 2747번 [https://www.acmicpc.net/problem/2747](https://www.acmicpc.net/problem/2747)


>1)반복문을 사용한코드

	#include<iostream>
	using namespace std;
	
	int main(){
		int n, v[46];
		for (int i = 0; i <= 45; i++){
		if(i==0||i==1)v[i]=i;
		else{
		v[i]=v[i-1]+v[i-2];
		}
			}
		cin >> n;
		cout<< v[n];
	}

v[20]은 v[19]와 v[18]의 값이 필요하다.  
v[19]는 v[18]과 v[17]의 값이 필요하다.  
v[20]을 구하기 위해서는 v[18]이 두번 필요하다.

>2)재귀를 사용한 코드

	#include<iostream>

	using namespace std;

	int r(int i);
	int main(){
	int n;

	cin >> n;
	cout << r(n);
	}
	int r(int i){
		if (i == 0 || i == 1)
			return i;
		else
			return r(i - 1) + r(i - 2);
	}

이 코드는 바보같은 코드이다.  
반복문과 마찬가지로 r(20)을 구하기 위해선 r(18)이 2번 필요한데 한번 계산했음에도 불구하고 또 다시 계산한다!!  
이러한 문제점을 해결하고 더 효율적인 코드를 만들기 위해서  
DP Table을 사용한다. 반복될 계산의 값을 구해놓고 이 값을 배열에 저장해 놓는다.그리고 그 계산이 다시 필요할때  저장된 값을 꺼내기만 하면 된다. 이것을 **memoization**이라고 한다.메모이제이션을 이용하면 각 문제는 한번만 풀면 된다.

>3)메모이제이션을 사용한 재귀 코드 

	#include<iostream>
	using namespace std;
	int m[46];
	int r(int i);

	int main(){
		int n;
		memset(m, 0, sizeof(m)); //배열 m을 0으로 초기화 
	cin >> n;
	cout << r(n);
	}

	int r(int i){
		if (i == 0 || i == 1)
			return m[i]=i;
		else if(m[i]) 
			return m[i];
		else
			return m[i]=r(i - 1) + r(i - 2);
	}



## 방법 ##
- Top-down
 1. 문제를 작은 문제로 나눈다.
 2. 작은 문제를 푼다
 3. 작은 문제를 풀었으니, 이제 문제를 푼다.

	> Top-down은 재귀호출을 이용해서 문제를 쉽게 풀수 있다.
		
		int dp[100];
    	int fibonacci(int n){
    		if (n == 0 || n == 1)
    			return dp[n]=n;
    		else if(dp[n]) 
    			return dp[n];
    		else
    			return dp[n]=r(i - 1) + r(i - 2);
    	}

- Bottom-up
 1. 문제를 크기가 작은 문제부터 차례대로 푼다.
 2. 문제의 크기를 조금씩 크게 만들면서 문제를 점점 푼다.
 3. 작은 문제를 풀면서 왔기때문에, 큰 문제는 항상 풀 수 있다.
 
	> 반복문을 이용한 풀이 
	
		int dp[100];
		int fibonacci(int n) {
			d[0]=0;
			d[1]=1;
		   for(int i=2;i<=n;i++){
			d[i]=d[i-1]+d[i-2];
			}
		return d[n];
		}