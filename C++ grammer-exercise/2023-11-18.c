

//单词替换

#include <iostream>

using namespace std;

int main()
{
    char str[30];
    char ch = 0;
    cin >> str;
    cin >> ch;
    
    for(int i = 0; str[i]; i++){
        if(str[i] == ch){
            str[i] = '#';
        }
    }
    puts(str);
    
    return 0;
}


//找出的一个只出现一次的字符

#include <iostream>
#include <string.h>
using namespace std;


int count[26] = { 0 };
char s[100000];

int main()
{
    cin >> s;
    int len = strlen(s);

    int i = 0;
    for(i = 0; i < len; i++){
        count[s[i] - 'a']++;
    }
    for(i = 0; i < len; i++){
        if(count[s[i] - 'a'] == 1){
            cout << s[i] <<endl;
            return 0;
        }
    }
    cout << "no" << endl;
}


#include <iostream>
#include <string.h>
using namespace std;


int count[26] = { 0 };
char s[100000];

int main()
{
    cin >> s;
    int i = 0;

    for(i = 0; s[i]; i++){
        count[s[i] - 'a']++;
    }
    for(i = 0; s[i]; i++){
        if(count[s[i] - 'a'] == 1){
            cout << s[i] <<endl;
            return 0;
        }
    }
    cout << "no" << endl;
}



//信息加密

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    getline(cin, str);
    
    int i = 0;
    for(i = 0; str[i]; i++){
        if(str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z'){
            if(str[i] == 'z'){
                str[i] = 'a';
            }
            else if(str[i] == 'Z'){
                str[i] = 'A';
            }
            else{
                str[i]++;
            }
        }
    }
    cout << str << endl;
    
    return 0;
}




#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    getline(cin, str);
    
    int i = 0;
    for(i = 0; str[i]; i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            str[i] = ((str[i] - 'a' + 1) % 26) + 'a';
        }
        else if(str[i] >= 'A' && str[i] <= 'Z'){
            str[i] = ((str[i] - 'A' + 1) % 26) + 'A';
        }
    }
    cout << str << endl;
    
    return 0;
}
