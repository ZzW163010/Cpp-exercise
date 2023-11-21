
//字符串插入

#include <iostream>
#include <string>
#include <string.h>

using namespace std;


int main(){
    string a, b;
    
    while(cin >> a >> b){
        int p = 0;
        for(int i = 1; i < a.size(); i++){
            if(a[i] > a[p]){
                p = i;
            }
        }
        cout << a.substr(0, p + 1) + b + a.substr(p + 1) << endl;
    }
}


int main()
{
    char str[20] = { 0 };
    char substr[20] = { 0 };
    char next[20] = { 0 };

    while (cin >> str && cin >> substr) {
        char max = 0;
        int i = 0;
        for (i = 0; str[i]; i++) {
            if (str[i] > max) {
                max = str[i];
            }
        }
        for (i = 0; str[i]; i++) {
            if (str[i] == max) {
                break;
            }
        }
        int len = strlen(str);
        int j = 0, k = 0;
        for (j = i + 1; j < len; j++) {
            next[k] = str[j];
            k++;
        }
        k = 0;
        for (k = 0; k < 3; k++) {
            i++;
            str[i] = substr[k];
        }
        int len2 = strlen(next);
        for (j = 0; j < len2; j++) {
            i++;
            str[i] = next[j];
        }
        cout << str << endl;

        for (i = 0; i < 20; i++) {
            str[i] = 0;
            substr[i] = 0;
            next[i] = 0;
        }
    }
}

