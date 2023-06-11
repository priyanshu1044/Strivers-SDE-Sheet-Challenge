#include <bits/stdc++.h> 
string sol(int n)
{
	if(n == 1)return "1";

	string tmp = sol(n-1);
	string res = "";
	for(int i = 0; i< tmp.size(); i++)
	{
		int cnt = 1;
		while(i < tmp.size()-1 && tmp[i] == tmp[i+1])
		{
			
			cnt++;
			i++;
		}
		res += to_string(cnt);
		res += tmp[i];
	}
	return res;

}
string writeAsYouSpeak(int n) 
{
	// Write your code here.	
	return sol(n);
}Compare Version Numbers
