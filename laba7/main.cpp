#include <algorithm>
#include <deque>
#include <functional>
#include <iostream>
#include <iterator>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <utility>
#include <vector>

#include "models/Student.cpp"

using namespace std;

int main() {
  Student stud;
  vector<Student> Vector;
  list<Student> List;
  deque<Student> Deque;
  set<Student> Set;
  multiset<Student> MultiSet;
  map<int, Student> Map;
  multimap<int, Student> MultiMap;
  queue<Student> Queue;
  priority_queue<Student> PriorityQueue;

  Vector.push_back(stud);
  Vector.pop_back();
  Vector.clear();

  List.push_back(stud);
  List.push_front(stud);
  List.pop_back();

  Deque.push_back(stud);
  Deque.push_front(stud);
  Deque.pop_back();

  Set.insert(stud);
  cout << Set.empty() << endl;
  Set.clear();

  MultiSet.insert(stud);
  cout << MultiSet.empty() << endl;
  MultiSet.clear();

  Map.insert(pair<int, Student>(0, stud));
  cout << Map.empty() << endl;
  Map.clear();

  MultiMap.insert(pair<int, Student>(0, stud));
  cout << MultiMap.empty() << endl;
  MultiMap.clear();

  Queue.push(stud);
  Queue.pop();
  cout << Queue.empty() << endl;

  PriorityQueue.push(stud);
  PriorityQueue.pop();
  cout << PriorityQueue.empty() << endl;

  for (auto it = Vector.begin(); it != Vector.end(); ++it) {
    std::cout << it->id << " ";
  }

  for (auto it = Vector.begin(); it != Vector.end(); ++it) {
    it->id = it->id + 10;
    std::cout << it->id << " ";
  }

  for (auto it = Vector.begin(); it != Vector.end(); ++it) {
    std::cout << it->id << " ";
  }

  for (auto it = Vector.rbegin(); it != Vector.rend(); ++it) {
    std::cout << it->id << " ";
  }

  cout << Vector.at(0).id << endl;

  sort(Vector.begin(), Vector.end());

  int count = std::count_if(Vector.begin(), Vector.end(),
                            [](const Student &s) { return s.id % 2 == 0; });

  std::for_each(Vector.begin(), Vector.end(),
                [](const Student &s) { std::cout << s.id << " "; });

  std::vector<int> incrementedIds;
  std::transform(Vector.begin(), Vector.end(),
                 std::back_inserter(incrementedIds),
                 [](const Student &s) { return s.id + 10; });

  for (const auto &id : incrementedIds) {
    std::cout << id << " ";
  }
  auto it = std::find_if(Vector.begin(), Vector.end(),
                         [](const Student &s) { return s.id == 3; });
  if (it != Vector.end()) {
    std::cout << "stud with ID 3 found." << std::endl;
  } else {
    std::cout << "stud with ID 3 not found."
              << std::endl;
  }

  return 0;
}
