

문제번호 : 10818 번

문제링크 : [https://www.acmicpc.net/problem/2448](https://www.acmicpc.net/problem/10818)

----------

## 문제 ##
N개의 정수가 주어진다. 이 때, 최솟값과 최댓값을 구하는 프로그램을 작성하시오.
## 입력 ##
첫째 줄에 정수의 개수 N (1 ≤ N ≤ 1,000,000)이 주어진다. 둘째 줄에는 N개의 정수를 공백으로 구분해서 주어진다. 모든 정수는 -1,000,000보다 크거나 같고, 1,000,000보다 작거나 같은 정수이다.
## 출력 ##
첫째 줄에 주어진 정수 N개의 최솟값과 최댓값을 공백으로 구분해 출력한다.
## 예제 ##
### 입력 ###
    5
    20 10 35 30 7

### 출력 ###
    7 35
     
## 풀이 ##
1. min을 입력될 수 있는 최댓값,max을 입력될 수 있는 최솟값으로 초기화.
2. 입력받을 수의 갯수 n을 입력 받고 n만큼 반복문을 돌림
3. 반복문 안에서는 
	- 비교할 값 input을 입력받음
	- min보다 크다 -> max보다 큰지 검사한 후 크다면 input값은  max값이 된다.
	- min보다 작다 -> input값은 min이 된다.

## C언어  코드 ##

    #include<iostream>
    using namespace std;
    
    int main(){
    	int n, input,min = 1000000, max = -1000000;
    	cin >> n;
    	while (n--)
    	{
    		cin >> input;
    		if (input > min){
    			if (input > max)
    				max = input;
    		}
    		else{
    			min = input;
    		}
    	}
    		cout << min <<' '<< max << endl;
    }
    