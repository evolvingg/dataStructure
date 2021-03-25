
#include <stack>
#include <iostream>
using namespace std;

int main(){

      string str = "Hello How are you ?";
      string result =" ";

      //create a stack that holds string value
      stack<string> s;

      for(int i=0; i<= str.length(); i++)
      {
            if(str[i] == ' ' || str[i] == '\0'){
                  s.push(result);
                  result =" ";   
            }else{
                  result = result + str[i];
            }
      }
cout<<'\n'<<str.length();
//s.pop();s.pop();cout<<s.top();
      while(!s.empty()){
            string o = s.top();
            cout<<o;
            //cout<<o.c_str(); 
            s.pop();
      }
cout<<'\n';
      return 0;

}