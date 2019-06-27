#include<iostream>
#include <list>
#include<assert.h>
#include <unordered_map>
using namespace std;
template<typename K, typename T>
struct Node 
{
	K key;
	T value;
	Node(K k, T v) :key(k), value(v) {}
};
template<typename K, typename T>
class LRUCache 
{
public:
	LRUCache(int c) :capacity(c) {}
	T get(K key) 
	{
		assert(cacheMap.find(key) != cacheMap.end());
		cacheList.splice(cacheList.begin(), cacheList, cacheMap[key]);
		cacheMap[key] = cacheList.begin();
		return cacheMap[key]->value;
	}
	void set(K key, T value) 
	{
		if (cacheMap.find(key) == cacheMap.end()) 
		{	
			if (cacheList.size() == capacity) 
			{
				cacheMap.erase(cacheList.back().key);
				cacheList.pop_back();
			}
			cacheList.push_front(Node<K, T>(key, value));
			cacheMap[key] = cacheList.begin();
		}
		else 
		{
			cacheMap[key]->value = value;
			cacheList.splice(cacheList.begin(), cacheList, cacheMap[key]);
			cacheMap[key] = cacheList.begin();
		}
	}
private:
	int capacity;
	list<Node<K, T> > cacheList;
	unordered_map<K, typename list<Node<K, T> >::iterator> cacheMap;
};
int main()
{
	int N = 10;
	LRUCache<int, int> lc(N);
	for (int i = 0; i < N; ++i) 
	{
		lc.set(i, i);
	}
	cout << "at the beginning: " << endl;
	for (int i = 0; i < N; ++i)
		cout << lc.get(i) << " ";
	cout << endl;
	cout << "after inserting: " << endl;
	lc.set(N + 1, N + 1);
	for (int i = 1; i < N; ++i)
		cout << lc.get(i) << " ";
	cout << lc.get(N + 1);
	cout << endl;
	system("pause");
	return 0;
}
