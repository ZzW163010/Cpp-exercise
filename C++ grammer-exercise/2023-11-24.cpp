//字符串的最大跨度

#include <iostream>

using namespace std;

int main(){
    string s, s1, s2;
    char ch;
    
    while(cin >> ch, ch != ',') s += ch;
    while(cin >> ch, ch != ',') s1 += ch;
    while(cin >> ch) s2 += ch;
    
    if(s.size() < s1.size() || s.size() < s2.size()) cout << -1 << endl;
    else{
        int l = 0;
        while(l + s1.size() <= s.size()){
            int k = 0;
            while(k < s1.size()){
                if(s[l + k] != s1[k]) break;
                k++;
            }
            if(k == s1.size()) break;
            l++;
        }
        if(l > s.size() - s1.size()){
            cout << - 1 << endl;
            return 0;
        }
        int r = s.size() - s2.size();
        while(r >= 0){
            int k = 0;
            while(k < s2.size()){
                if(s[r + k] != s2[k]) break;
                k++;
            }
            if(k == s2.size()) break;
            r--;
        }
        if(r < 0){
            cout << -1 << endl;
            return 0;
        }
        l = l + s1.size() - 1;
        if(l >= r) cout << -1 << endl;
        else cout << r - l - 1;
    }
    return 0;
}

//最长公共字符串后缀

#include <iostream>
#include <string>

using namespace std;

string str[200];

int main()
{
    int num = 0;
    
    while(cin >> num, num != 0)
    {
        int ml = 1000;
        
        for(int j = 0; j < num; j++)
        {
            cin >> str[j];
            if(str[j].size() < ml) ml = str[j].size();
        }
        
        while(ml)
        {
            bool is_same = true;
            bool sucess = true;
        
            for(int k = 1; k < num; k++)
            {
                for(int m = 1; m <= ml; m++)
                {
                    if(str[k][str[k].size() - m] != str[0][str[0].size() - m])
                    {
                        is_same = false;
                        break;
                    }
                }
                if(!is_same)
                {
                    sucess = false;
                    break;
                }
            }
            if(sucess) break;
            ml--;
        }
        cout << str[0].substr(str[0].size() - ml, ml) << endl;
    }
    return 0;
}
