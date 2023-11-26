//求最大公约数

#include <iostream>

using namespace std;

int gcd(int a, int b)
{
    if(a > b)
    {
        int tmp = a;
        a = b;
        b = tmp;
    }
    int max = a;
    
    while(max)
    {
        if(a % max == 0 && b % max == 0)
            return max;
        max--;
    }
}
int main()
{
    int n1, n2;
    
    cin >> n1 >> n2;
    
    int ret = gcd(n1, n2);
    
    cout << ret << endl;
}

//递归求阶乘

using namespace std;

int fact(int n)
{
    if(n == 1)
        return 1;

    return n * fact(n - 1);
}
int main()
{
    int n;
    cin >> n;

    int ret = fact(n);

    cout << ret << endl;
}

//递归求斐波那契数列

using namespace std;

int fib(int n)
{
    if(n == 1 || n == 2)
    {
        return 1;
    }
    int i = fib(n - 2);
    int m = fib(n - 1);

    return m + i;
}
int main()
{
    int n;
    cin >> n;

    int ret = fib(n);

    cout << ret << endl;

    return 0;
}

//最小公倍数

#include <iostream>

using namespace std;

int lcm(int a, int b)
{
    if(a < b)
    {
        a = a ^ b;
        b = a ^ b;
        a = a ^ b;
    }
    int min = a;
    
    while(min)
    {
        if(min % a  == 0 && min % b == 0) return min;
        min++;
    }
}
int main()
{
    int n1, n2;
    
    cin >> n1 >> n2;
    
    int ret = lcm(n1, n2);
    
    cout << ret << endl;
    
    return 0;
}


//跳台阶

#include <iostream>

using namespace std;

int n;
int ans;

int f(int a)
{
    if(a == n) ans++;
    else if(a < n)
    {
        f(a + 1);
        f(a + 2);
    }

} 
int main()
{
    cin >> n;
    f(0);

    cout << ans << endl;
}

#include <iostream>

using namespace std;

int step(int n)
{
    if(n == 0) return 0;
    if(n == 1) return 1;
    if(n == 2) return 2;

    return step(n - 1) + step(n - 2);
}
int main()
{
   int n;

   cin >> n;

   int ret = step(n);

   cout << ret << endl;

   return 0;
}


//走方格

#include <iostream>

using namespace std;

int n, m;
int ans;

void dfs(int a, int b)
{
    if(a == n && b == m) ans++;
    else
    {
        if(a < n) dfs(a + 1, b);
        if(b < m) dfs(a, b + 1);
    }
}
int main()
{
    cin >> n >> m;
    
    dfs(0, 0);
    
    cout << ans << endl;
    
    return 0;
}

//排列

#include <iostream>

using namespace std;

int N = 10;
int n;

void dsf(int u, int nums[], bool st[])
{
    if(u > n)
    {
        for(int i = 1; i <= n; i++) cout << nums[i] << " ";
        cout << endl;
    }
    else
    {
        for(int i = 1; i <= n; i++)
        {
            if(!st[i])
            {
                nums[u] = i;
                st[i] = true;
                dsf(u + 1, nums, st);
                st[i] = false;
            }
        }
    }
}
int main()
{
    cin >> n;
    
    int nums[N];
    bool st[N] = { 0 };
    for(int i = 0; i < n; i++) nums[i] = i;
    
    dsf(1, nums, st);
    
    return 0;
}
