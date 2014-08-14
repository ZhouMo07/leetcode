#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;

void reverseWords(string &s)
	{
		string rs;
		for (int i = s.length()-1; i >= 0; )
		{
			while (i >= 0 && s[i] == ' ') i--;
			if (i < 0) break;
			if (!rs.empty()) rs.push_back(' ');
			string t;
			while (i >= 0 && s[i] != ' ') t.push_back(s[i--]);
			reverse(t.begin(), t.end());
			rs += t;
		}
		s = rs;
	}
	/*
	class Solution {
public:
    void reverseWords(string &s) {
        string res;
        for(int i = s.size() -1; i >= 0;)
        {
            while(i >= 0 && s[i] == ' ')
                i--;
            if(i < 0)
                break;
            
            if(!res.empty())
                res.push_back(' ');
            string ss;
            while(i >= 0 && s[i] != ' ')
                ss.push_back(s[i--]);
            reverse(ss.begin(),ss.end());
            res += ss;
        }
        s = res;
    }
};
    */
	
int main()
{
    string s=" i am ";
    reverseWords(s);
    for(string::size_type ix = 0; ix != s.size(); ix ++)
    cout<< s[ix];
    system("pause");
     
      
     
}
