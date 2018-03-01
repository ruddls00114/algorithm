

문제번호 : 2920 번

문제링크 : [https://www.acmicpc.net/problem/2920](https://www.acmicpc.net/problem/2920)

----------

## 문제 ##
다장조는 c d e f g a b C, 총 8개 음으로 이루어져있다. 이 문제에서 8개 음은 다음과 같이 숫자로 바꾸어 표현한다. c는 1로, d는 2로, ..., C를 8로 바꾼다.

1부터 8까지 차례대로 연주한다면 ascending, 8부터 1까지 차례대로 연주한다면 descending, 둘 다 아니라면 mixed 이다.

연주한 순서가 주어졌을 때, 이것이 ascending인지, descending인지, 아니면 mixed인지 판별하는 프로그램을 작성하시오.


## 입력 ##
첫째 줄에 8개 숫자가 주어진다. 이 숫자는 문제 설명에서 설명한 음이며, 1부터 8까지 숫자가 한 번씩 등장한다.
## 출력 ##
첫째 줄에 ascending, descending, mixed 중 하나를 출력한다.
## 예제 ##
### 입력1 ###
	1 2 3 4 5 6 7 8

### 출력1 ###
	ascending

----------
### 입력2 ###
	8 7 6 5 4 3 2 1

### 출력2 ###
	descending

----------
### 입력3 ###
	8 1 7 2 6 3 5 4

### 출력3 ###
	mixed



## 풀이 ##
1. 배열 a 원소 8개를 입력받음
2. 배열 b={1,2,3,4,5,6,7,8} / c={8,7,6,5,4,3,2,1} 
3. arr함수
	- 배열의 길이 8만큼 반복문을 돌려 두 배열의 원소를 비교 
	- 같으면 true 다르면 false 

## 코드 ##
    #include<iostream>
    #include<string>

    using namespace std;
    bool arr(int a[], int b[]);
    int main(){
    
    	//2029- 음계
    	int i=0,a[8], b[] = { 1, 2, 3, 4, 5, 6, 7, 8 }, c[] = {8,7,6,5,4,3,2,1};
    	string temp="";
    	for (i = 0; i < 8; i++){
    		cin >> a[i];
    	}
    	if (arr(a, b)) cout << "ascending";
    	else if (arr(a, c)) cout << "descending";
    	else cout << "mixed";
    }
    
    bool arr(int a[], int b[]){
    
    	int i = 0;
    	while (i< 8){
    		if (a[i] != b[i]){
    			break;
    		}
    		i++;
    	}
    	if (i == 8) return true;
    	else return false;
    }