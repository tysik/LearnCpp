#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <deque>
#include <list>
#include <set>
#include <map>

using namespace std;

int main() {
  //
  // Part 16.2
  //
  cout << "Part: 16.2" << endl;

  vector<int> vect;
  for (int idx = 0; idx < 6; ++idx)
    vect.push_back(10 - idx);

  for (int idx = 0; idx < vect.size(); ++idx)
    cout << vect[idx] << " ";
  cout << endl;

  deque<int> deq;
  for (int idx = 0; idx < 3; ++idx) {
    deq.push_back(idx);
    deq.push_front(10 - idx);
  }

  for (int idx = 0; idx < deq.size(); ++idx)
    cout << deq[idx] << " ";
  cout << endl;

  //
  // Part 16.3
  //
  cout << "Part: 16.3" << endl;

  vector<int>::const_iterator it;
  it = vect.begin();
  while (it != vect.end()) {
    cout << *it << " ";
    ++it;
  }
  cout << endl;

  list<int> li;
  for (int idx = 0; idx < 10; ++idx)
    li.push_back(10 * idx);

  list<int>::const_iterator lit;
  lit = li.cbegin();
  while (lit != li.end()) {
    cout << *lit << " ";
    ++lit;
  }
  cout << endl;

  set<int> my_set;
  my_set.insert(7);
  my_set.insert(2);
  my_set.insert(-6);
  my_set.insert(8);
  my_set.insert(1);
  my_set.insert(-4);
  my_set.insert(0);

  set<int>::const_iterator sit;
  sit = my_set.begin();
  while (sit != my_set.end()) {
    cout << *sit << " ";
    ++sit;
  }
  cout << endl;

  map<int, string> my_map;
  my_map.insert(make_pair(4, "apple"));
  my_map.insert(make_pair(2, "orange"));
  my_map.insert(make_pair(1, "banana"));
  my_map.insert(make_pair(3, "grapes"));
  my_map.insert(make_pair(6, "mango"));
  my_map.insert(make_pair(5, "peach"));

  map<int, string>::const_iterator mit;
  mit = my_map.begin();
  while (mit != my_map.end()) {
    cout << mit->first << " = " << mit->second << endl;
    ++mit;
  }

  //
  // Part 16.4
  //
  cout << "Part: 16.4" << endl;

  list<int>::const_iterator ait;
  cout << "Min: " << *(ait = min_element(li.begin(), li.end())) << endl;
  cout << "Max: " << *(ait = max_element(li.begin(), li.end())) << endl;

  ait = find(li.begin(), li.end(), 30);
  li.insert(ait, 25);

  for (lit = li.begin(); lit != li.end(); ++lit)
    cout << *lit << " ";
  cout << endl;

  vector<int> v;

  v.push_back(7);
  v.push_back(-3);
  v.push_back(6);
  v.push_back(2);
  v.push_back(-5);
  v.push_back(0);
  v.push_back(4);

  sort(v.begin(), v.end());
  vector<int>::const_iterator vit;
  for (vit = v.begin(); vit != v.end(); ++vit)
    cout << *vit << " ";
  cout << endl;

  reverse(v.begin(), v.end());
  for (vit = v.begin(); vit != v.end(); ++vit)
    cout << *vit << " ";
  cout << endl;

  return 0;
}
