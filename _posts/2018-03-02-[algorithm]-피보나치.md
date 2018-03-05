
# Knapsack #


문제번호 : 1003 번

문제링크 : [https://www.acmicpc.net/problem/1003](https://www.acmicpc.net/problem/1003)

----------

## 문제 ##
다음 소스는 N번째 피보나치 함수를 구하는 함수이다.

	int fibonacci(int n) {
	    if (n==0) {
	        printf("0");
	        return 0;
	    } else if (n==1) {
	        printf("1");
	        return 1;
	    } else {
	        return fibonacci(n‐1) + fibonacci(n‐2);
	    }
	}
fibonacci(3)을 호출하면 다음과 같은 일이 일어난다.  
fibonacci(3)은 fibonacci(2)와 fibonacci(1) (첫 번째 호출)을 호출한다.  
fibonacci(2)는 fibonacci(1) (두 번째 호출)과 fibonacci(0)을 호출한다.  
두 번째 호출한 fibonacci(1)은 1을 출력하고 1을 리턴한다.  
fibonacci(0)은 0을 출력하고, 0을 리턴한다.  
fibonacci(2)는 fibonacci(1)과 fibonacci(0)의 결과를 얻고, 1을 리턴한다.  
첫 번째 호출한 fibonacci(1)은 1을 출력하고, 1을 리턴한다. 
fibonacci(3)은 fibonacci(2)와 fibonacci(1)의 결과를 얻고, 2를 리턴한다.  
이 때, 1은 2번 출력되고, 0은 1번 출력된다. N이 주어졌을 때, fibonacci(N)을 호출했을 때, 0과 1이 각각 몇 번 출력되는지 구하는 프로그램을 작성하시오.  

## 입력 ##
첫째 줄에 테스트 케이스의 개수 T가 주어진다. 각 테스트 케이스는 다음과 같이 구성되어있다.
첫째 줄에 N이 주어진다. N은 40보다 작거나 같은 자연수 또는 0이다.

## 출력 ##
각 테스트 케이스마다 0이 출력되는 횟수와 1이 출력되는 횟수를 공백으로 구분해서 출력한다.

## 예제 ##
### 입력 ###
	3
	0
	1
	3	
### 출력 ###
	1 0
	0 1
	1 2


## 풀이 ##

## 코드 ##
	#include<iostream>
	#include<cstring>
	using namespace std;

	int a[41],zeroCnt=0,oneCnt=0;
	int r(int i);
	
	int main(){
		int t, n; 
		memset(a, 0, sizeof(a));
	
		cin >> t;
		for (int i = 0; i < t; i++){
			cin >> n;
			r(n);
			cout << zeroCnt << " " << oneCnt << endl;
			zeroCnt = 0;
			oneCnt = 0;
	
		}
	}
	
	int r(int i){
		if (i == 0 ){
			zeroCnt++;
			return  i;
		}
		else if (i == 1){
			oneCnt++;
			return  i;
		}
		else if (a[i]){
			return a[i];
		}
		else{
			return r(i - 1) + r(i - 2);
		}
	}

------	
	
	int main() {
	    int t,n,f[42]={1,0,1};
	    for(int i=3;i<42;i++)
	        f[i]=f[i-2]+f[i-1];
	    scanf("%d",&t);
	    while(t--) {
	        scanf("%d",&n);
	        printf("%d %d\n",f[n],f[n+1]);
	    }
	}
	
	#include<iostream>
	#include<cstring>
	#define IOFAST() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	using namespace std;
	
	long int a[90];
	int main(){
		int n;
		memset(a, 0, sizeof(a));
		cin >> n;
		a[0] = 0, a[1] = 1;
		for (int i = 2; i <= n ; i++){
			a[i ] = a[i -1] + a[i-2];
		}
		cout << a[n];
	}