#define _CRT_SECURE_NO_WARNINGS
//using namespace std;
//#include<iostream>
//
//
//using namespace std;
//
//typedef long long LL;
//
//const int N = 110, mod = 1e9 + 7;
//
//int main()
//{
//    int n;
//    cin >> n;
//
//    //��һ���洢�����ӵĵ���
//    //�ڶ����洢�����ӵ�ָ��
//    unordered_map<int, int> primes;
//
//    while (n--)
//    {
//        int x;
//        cin >> x;
//
//        for (int i = 2; i <= x / i; i++)
//        {
//            while (x % i == 0)
//            {
//                x /= i;
//                primes[i]++;
//            }
//        }
//
//        if (x > 1)
//        {
//            primes[x]++;
//        }
//    }
//
//    LL res = 1;
//    for (auto p : primes)
//    {
//        res = res * (p.second + 1) % mod;
//    }
//
//    cout << res << endl;
//
//    return 0;
//}