// STL arrays and vector.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
using namespace std;
template<class T> void show(vector<T> v);
template<class T> void showv2(vector<T> v);
template<class T> void showReverse(vector<T> v);
int main()
{
    vector<int> a;
    
    a.push_back(11);
    a.push_back(22);
    a.push_back(33);
    show(a);
    showv2(a);
    showReverse(a);
    a.insert(a.begin() + 2, 99);
    show(a);
    a.insert(a.begin(), 100);
    showv2(a);
}
template<class T>
void show(vector<T> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
template<class T> void showv2(vector<T> v)
{
    auto it = v.begin();
    while (it != v.end())
    {
        cout <<*it << " ";
        it++;
    }
    cout << endl;
}
template<class T> void showReverse(vector<T> v)
{
    auto it = v.rbegin();
    while (it != v.rend())
    {
        cout << *it << " ";
        it++;
    }
    cout << endl;
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
