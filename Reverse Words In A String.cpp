#include <bits/stdc++.h>
string reverseString(string &str){
	// Write your code here.
	stack<string>st;
	for(int i=0;i<str.size();i++){
		string word="";
		while(str[i]!=' ' && i<str.size()){
			word+=str[i];
			i++;
		}
		if(!word.empty()){
			st.push(word);
		}
	}
	string tmp="";
	while(!st.empty()){
		tmp+=st.top();
		tmp.push_back(' ');
		st.pop();
	}
	return tmp;
}