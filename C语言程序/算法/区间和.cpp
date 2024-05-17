#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef pair<int, int> PII;

const int N = 300010;

int n, m;
int a[N], s[N];

vector<int> alls;//�����±�����
vector<PII> add, query;//add���������������Ӧ�±�����ӵ�ֵ�Ĵ�С
//query������Ҫ�����±�����͵�����
int find(int x)
{
    int l = 0, r = alls.size() - 1;
    while (l < r)//���Ҵ��ڵ���x����С��ֵ���±�
    {
        int mid = l + r >> 1;
        if (alls[mid] >= x) r = mid;
        else l = mid + 1;
    }
    return r + 1;//��Ϊʹ��ǰ׺�ͣ����±�Ҫ+1���Բ����Ǳ߽�����
}

int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i ++ )
    {
        int x, c;
        cin >> x >> c;
        add.push_back({x, c});//�����±꼴��Ӧ����ֵc

        alls.push_back(x);//���������±�x=add.first
    }

    for (int i = 0; i < m; i ++ )
    {
        int l, r;
        cin >> l >> r;
        query.push_back({l, r});//����Ҫ�������

        alls.push_back(l);//�������������±�
        alls.push_back(r);
    }

    // ����ȥ��
    sort(alls.begin(), alls.end());
    alls.erase(unique(alls.begin(), alls.end()), alls.end());

    // �������
    for (auto item : add)
    {
        int x = find(item.first);//��add������add.secendֵ��������a[]���У�
        a[x] += item.second;//��ȥ��֮����±꼯��alls��Ѱ�Ҷ�Ӧ���±겢�����ֵ
    }

    // Ԥ����ǰ׺��
    for (int i = 1; i <= alls.size(); i ++ ) s[i] = s[i - 1] + a[i];

    // ����ѯ��
    for (auto item : query)
    {
        int l = find(item.first), r = find(item.second);//���±������в��Ҷ�Ӧ����������[l~r]�±꣬Ȼ��ͨ���±�õ�ǰ׺������ٵõ�����a[l~r]�ĺ�
        cout << s[r] - s[l - 1] << endl;
    }

    return 0;
}
