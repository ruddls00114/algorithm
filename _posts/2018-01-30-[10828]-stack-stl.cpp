

#include "stack-stl.hpp"
#include <iostream>
#include <stack>

using namespace std;

int main(){
    stack<int> st;
    
    int iter,num;
    string order;
    
    cin >> iter;
    
    for(int i=0;i<iter;i++){
        cin >> order;
        if(order == "push"){
            cin >> num;
            st.push(num);
        }else if(order == "pop"){
            if(!st.empty()){
                cout << st.top() <<endl;
                st.pop();
            } else {
                cout << -1 << endl;
            }
            
        }else if(order == "size"){
            
                cout << st.size() << endl;

            
        }else if(order == "empty"){
            if(!st.empty()){
                cout << 0 <<endl;
            }else {
                cout << 1 <<endl;
            }
            
        }else if(order == "top"){
            if(!st.empty()){
                cout << st.top() <<endl;
            } else {
                cout << -1 <<endl;
            }
            
        }
        
        
    }
   
}
