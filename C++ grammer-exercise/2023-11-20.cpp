
//循环相克令

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int T = 0;
    cin >> T;
    string s1, s2;
    int i = 0;
    for(i = 0; i < T; i++){
        cin>>s1>>s2;
        if(s1 == "Hunter" && s2 == "Gun" 
            || s1 == "Bear" && s2 == "Hunter" 
            || s1 == "Gun" && s2 == "Bear"){
            cout << "Player1" << endl;
        }
        else if(s1 == s2){
            cout << "Tie" << endl;
        }
        else{
            cout <<"Player2" << endl;
        }

    }
    return 0;
}

int main()
{
    int T = 0;
    cin >> T;
    string s1, s2;
    int i = 0;
    for(i = 0; i < T; i++){
        cin>>s1>>s2;
        if(s1 == "Hunter" && s2 == "Gun" 
            || s1 == "Bear" && s2 == "Hunter" 
            || s1 == "Gun" && s2 == "Bear"){
            cout << "Player1" << endl;
        }
        else if(s1 == s2){
            cout << "Tie" << endl;
        }
        else{
            cout <<"Player2" << endl;
        }

    }
    return 0;
}

int main(){
    int col = 0, x = 0, y = 0;
    cin >> col;
    
    int i = 0;
    for(i = 0; i < col; i++){
        string a, b;
        cin >> a >> b;
        
        if(a == "Hunter") x = 0;
        else if(a == "Gun") x = 1;
        else x = 2;
        
        if(b == "Hunter") y = 0;
        else if(b == "Gun") y = 1;
        else y = 2;
        
        if(y == x) cout << "Tie" << endl;
        else if(y == (x + 1) % 3) cout << "Player1" << endl;
        else cout << "Player2" << endl;
    }
    

int main(){
    int col = 0, x = 0, y = 0;
    cin >> col;
    
    int i = 0;
    for(i = 0; i < col; i++){
        string a, b;
        cin >> a >> b;
        
        if(a == "Hunter") x = 0;
        else if(a == "Gun") x = 1;
        else x = 2;
        
        if(b == "Hunter") y = 0;
        else if(b == "Gun") y = 1;
        else y = 2;
        
        if(y == x) cout << "Tie" << endl;
        else if(y == (x + 1) % 3) cout << "Player1" << endl;
        else cout << "Player2" << endl;
    }
    
//在字符串中的每个字符前加空格

#include <iostream>
#include <cstdio>
#include <string.h>
using namespace std;

int main()
{
    char s1[102];
    char s2[204];
    fgets(s1, 102, stdin);
    
    int i = 0, j = 0;
    int len = strlen(s1);
    
    for(i = 0; i < len - 1; i++){
        s2[j] = s1[i];
        s2[j + 1] = ' ';
        j += 2;
    }
    s2[j - 1] = '\0';
    
    cout << s2 << endl;
}

#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    string s1;
    getline(cin, s1);
    
    string s2;
    for(auto c : s1) s2 = s2 + c + ' ';
    s1.pop_back();
    
    cout << s2 << endl;
}
