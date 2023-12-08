template <typename T, typename T2, typename T3, typename T4, typename T5>
class Templated {

public:
  T n;
  T2 n2;
  T3 n3;
  T4 n4;
  T5 n5;
  Templated(T N) : n(N) {}
  T magic() { return n; }
};