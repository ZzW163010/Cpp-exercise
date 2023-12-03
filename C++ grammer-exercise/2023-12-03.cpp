#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <deque>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <bitset>

using namespace std;

int main()
{
    //vector
    
    
    vector<int> a;
    vector<int> b[200];
     struct Rec
    {
        int x, y;
    };
    
    vector<Rec> c;
    
    a.size();
    a.empty();
    a.clear();
    
    //迭代器相当于一个指针
    vector<int>::iterator it = a.begin();
    
    //返回开始位置地址
    a.begin()
    
    //返回最后元素地址的下一位
    a.end() 
    cout << a[0] << " " << *a.begin() << endl;
    
    //序列是左闭右开
    [a.begin(), a.end()) it
    
    //遍历vector
    for(it = a.begin(); it < a.end(); it++) cout << *it << endl;
    for(int i = 0; i < a.size(); i++) cout << a[i] << endl;
    for(int x : a) cout << x << ' ';
    
    //返回a最后一个元素
    a.back() 
    cout << a.back() << ' ' << a[a.size() - 1];
    
    //在末尾添加元素
    a.push_back(4);
    
    //删除末尾元素
    a.pop_back();
    
    for(auto x : a) cout << x << ' ';
    
    
    //queue
    
    struct Rec
    {
        int a, c;
        
        //重载小于号（大根堆）
        bool operator < (const Rec& t) const
        {
            return a < t.a;
        }
    };
    struct tmp
    {
      int x, y, z;  
    };
    queue<int> a;
    queue<tmp> b;
    
    //在队尾插入数据
    a.push(1)
    
    //在对头删除数据
    a.pop();
    
    //取出队头数据
    a.front();
    
    //取出队尾数据
    a.back();
    
    cout << a.front() << endl;
    
    priority_queue<int> c;  //大跟堆
    priority_queue<int, vector<int>, greater<int>> d; //小跟堆
    priority_queue<pair<int, int>> e;
    priority_queue<Rec, vector<Rec>, greater<Rec>> q;
    
    //插入数据
    q.push({1, 2});
    q.push({3, 4});
    
    //删出最大值或最小值
    q.pop();
    
    //取出最大值或最大值
    q.top();
    
    cout << q.top().a << endl;
    
    
    //stack
    
    stack<int> a;
    
    //从栈顶插入
    a.push(1);
    
    //从栈顶删除
    a.pop();
    
    //取出栈顶元素
    a.top();
    
    cout << a.top() << endl;
    
    
    //deque

    deque<int> q;
    
    //在队尾插入数据
    q.push_back(4);
    q.push_back(5);
    q.push_back(6);
    
    //在队头插入数据
    q.push_front(2);
    q.push_front(1);
    
    //删除队尾数据
    q.pop_back();
    
    //删除对头数据
    q.pop_front();
    
    //返回对头指针
    q.begin();
    cout << *q.begin() << endl;
    
    //放回队尾指针
    q.end();
    
    //返回队头元素
    q.front();
    cout << q.front() << endl;
    
    //返回队尾元素
    q.back();
    cout << q.back() << endl;
    
    //迭代器
    deque<int>::iterator it;
    for(it = q.begin(); it < q.end(); it++) cout << *it << ' ';
    for(auto x : q) cout << x << ' ';
    
    //随机访问
    cout << q[0] << endl;
    
    //释放队列
    q.clear();
    
    
    //set
    
    set<int> a;     //有序不重复集合
    multiset<int> b;    //有序可重复集合 
    
    //双向访问迭代器，不支持随机访问，仅支持++，--运算符和*运算符
    set<int>::iterator it;
    
    //返回集合中最小元素的迭代器
    a.begin();
    
    //返回集合中最大元素下一个位置的迭代器
    a.end();
    
    //插入元素
    a.insert(3);
    a.insert(4);
    a.insert(1);
    
    it = a.begin();
    cout << *it << endl;
    it++;
    cout << *it << endl;
    cout << *(--a.end()) << endl;
    
    //返回指向指定元素的迭代器,若不存在返回a.end()
    it = a.find(4);
    cout << *it << endl;
    it--;
    cout << *it << endl;
    
    //查找大于等于指定元素的迭代器，不存在返回a.end()
    it = a.lower_bound(4);
    cout << *it << endl;
    
    //查找大于指定元素的迭代器，不存在返回a.end()
    it = a.upper_bound(1);
    cout << *it << endl;
    
    //删除迭代器指向的元素
    a.erase(it);
    for(auto x : a) cout << x << ' ';
    
    //删除集合中所有与指定元素相同的元素
    a.erase(1);
    for(auto x : a) cout << x << ' ';
    
    //返回集合中指定元素的个数
    a.count(4);
    cout << a.count(4) << endl;
    
    
    //map;
    
    map<string, vector<int>> a;
    map<string, vector<int>>::iterator it;
    //插入一对映射关系
    a.insert({"zzw", {1, 2, 3}});
    cout << a["zzw"][0] << endl;
    
    //返回key所对应的二元组的迭代器
    a.find("zzw");
    cout << (a.find("zzw") == a.end()) << endl;
    
    
    unordered_set<int> q;   //哈希表
    unordered_multiset<int> a;
    unordered_map<int, int> p;
    
    return 0;
}


#include <iostream>
#include <algorithm>
#include <vector>
#include <ctime>

using namespace std;

struct Res
{
    int x, y;
    
    //重载小于号
    
    bool operator> (const Res& t) const
    {
        return x > t.x;
    }
    
}a[5];

bool cmp(Res a, Res b)
{
    return a.x > b.x;
}

int main()
{
    //vector<int> a({3, 4, 5, 6, 7});
    int a[] = {1, 3, 4, 5};
    
    //翻转数组
    //reverse(a.begin(), a.end());
    reverse(a, a + 4);
    
    for(auto x : a) cout << x << ' ';
    
    
    
    //int a[] = {1, 1, 1, 4, 4, 3, 5};
    vector<int> a({1, 1, 1, 4, 4, 3, 5});
    
    //去除连续重复数字
    //int m = unique(a, a + 7) - a;
    //cout << m << endl;
    //for(int i = 0; i < 4; i++) cout << a[i] << ' ';

    a.erase(unique(a.begin(), a.end()), a.end());
    for(auto x : a) cout << x << ' ';
    
    cout << endl;
    
    int m = unique(a.begin(), a.end()) - a.begin();
    cout << m << endl;
    
    
    
    vector<int> a({1, 1, 1, 4, 4, 3, 5});
    
    srand(time(0));
    
    //随机打乱数据
    random_shuffle(a.begin(), a.end());
    
    for(auto x : a) cout << x << ' ';
    cout << endl;
    
     //排序
    sort(a.begin(), a.end(), greater<int>());
    
    for(auto x : a) cout << x << ' ';
    cout << endl;
    
    //排结构体
    
    for(int i = 0; i < 5; i++)
    {
        a[i].x = i;
        a[i].y = -i;
    }
    for(int i = 0; i < 5; i++) printf("(%d, %d) ", a[i].x, a[i].y);
    cout << endl;
    
    sort(a, a + 5);
    
    for(int i = 0; i < 5; i++) printf("(%d, %d) ", a[i].x, a[i].y);
    cout << endl;
    
    vector<int> a({1, 2, 3, 5, 7});
    
    //二分返回大于等于指定值的迭代器
    int t = lower_bound(a.begin(), a.end(), 3) - a.begin();
    
    //二分返回大于指定值的迭代器
    int m = upper_bound(a.begin(), a.end(), 5) - a.begin();
    
    cout << a[m] << endl;
    cout << m << endl;
    cout << a[t] << endl;
    cout << t << endl;
}
