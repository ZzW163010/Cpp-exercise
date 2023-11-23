//字符串移位包含问题

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    string a, b;
    
    cin >> a >> b;
    if(a.size() < b.size()) swap(a, b);
    
    for(int i = 0; i < a.size(); i++){
        a = a.substr(1) + a[0];
        
        for(int j = 0; j + b.size() <= a.size(); j++){
            int k = 0;
            
            for(k = 0; k < b.size(); k++){
                if(a[j + k] != b[k]) break;
                }
                if(k == b.size()){
                    cout << "true" << endl;
                    return 0;
            }
        }
    }
    cout << "false" << endl;
}


#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string a, b;
    
    cin >> a >> b;
    if (a.size() < b.size()) swap(a, b);
        
    for (int i = 0; i < a.size(); i++) {
        a = a.substr(1) + a[0];

        for (int k = 0; k + b.size() <= a.size(); k++) {
            for (int j = k; j < a.size(); j++) {
                if (a.substr(k, j + 1 - k) == b) {
                    cout << "true" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "false" << endl;
}

#include <iostream>

using namespace std;

int main() {
    string a, b;
    cin >> a >> b;

    if (a.size() > b.size()) {
        int i = 0, j = 0, cnt = 0;
        for (i = 0; i < a.size(); i++) {
            cnt = 0;
            char tmp = a[0];
            for (j = 1; j < a.size(); j++) a[j - 1] = a[j];
            a[j - 1] = tmp;

            int k = 0, m = 0;
            for (k = 0; k < a.size(); k++) {
                if (a[k] != b[m]) k++;
                else {
                    while (k < a.size() && m < b.size()) {
                        if (a[k] == b[m]) cnt++;
                        k++;
                        m++;
                    }
                    if (cnt == b.size()) {
                        cout << "true" << endl;
                        return 0;
                    }
                    else break;
                }
            }
        }
    }
    else {
        int i = 0, j = 0, cnt = 0;
        for (i = 0; i < b.size(); i++) {
            cnt = 0;
            char tmp = b[0];
            for (j = 1; j < b.size(); j++) b[j - 1] = b[j];
            b[j - 1] = tmp;
            int k = 0, m = 0;
            for (k = 0; k < b.size(); k++) {
                while (k < b.size() && m < a.size()) {
                    if (b[k] == a[m]) cnt++;
                    k++;
                    m++;
                }
                if (cnt == a.size()) {
                    cout << "true" << endl;
                    return 0;
                }
                else break;
            }
        }
    }
    cout << "false" << endl;
    return 0;
}

//字符乘方

#include <iostream>
#include <string>

using namespace std;

int main(){
    string str;
    
    while(cin >> str && str != "."){
        int m = 0, n = 0;
        
        for(int i = 1; i <= str.size(); i++){
            if(str.size() % i == 0) m = str.size() / i;
            int j = 0;
            
            for(j = i; j < str.size(); j += i){
                if(str.substr(j, i) != str.substr(0, i)) break;
            }
            if(j == str.size()){
                if(str.size() / i > n) n =  str.size() / i;
            }
        }
        cout << n << endl;
    }
}

#include <iostream>
#include <string>

using namespace std;

int main(){
    string str;
    
    while(cin >> str && str != "."){
        int len = str.size();
        for(int i = 1; i <= len; i++){
            if(len % i == 0){
                int n = len / i;
                string scp;
                
                for(int j = 0; j < n; j++) scp += str.substr(0, i);
                if(scp == str){
                    cout << n << endl;
                    break;
                }
            }
        }
    }
}
