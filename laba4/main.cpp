#include <ctime>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

#include "Applicant.h"
#include "Faculty.h"

using namespace std;

class IDONTCAREBASE {

protected:
  ~IDONTCAREBASE() { cout << "destr IDONTCAREBASE \n"; }

public:
  IDONTCAREBASE(string idk) {
    cout << "constr IDONTCAREBASE \n";
    this->idk1 = idk;
  }

  string idk2;
  string idk1;
  static string idk3;

  static void Idk1() {}

  void Idk2() {}

  void Idk3() {}

  void Idk4() {}

  void Idk5() {}

  void Idk6() {}

private:
  string idk4;
  string idk5;
  string idk6;
  string idk7;
  string idk8;

protected:
  string idk9;
  string idk10;
};

class IDONTCARE : private IDONTCAREBASE {
public:
  IDONTCARE(string idk, string idk2) : IDONTCAREBASE(idk) {
    cout << "constr IDONTCARE \n";
  }
  ~IDONTCARE() { cout << "destr IDONTCARE \n"; }
  using IDONTCAREBASE::Idk1;
  // Idk1();
};

class IDONTCARE2 : public IDONTCAREBASE, private IDONTCARE {

public:
  IDONTCARE2 getMe() { return *this; }
  int idc1 = 0;
  friend void display(const IDONTCARE2 &obj);
  IDONTCARE2(string idk1, string idk2, string idk3)
      : IDONTCARE(idk1, idk2), IDONTCAREBASE(idk3) {
    idc1 = 11;
    cout << "constr IDONTCARE2 \n";
  }
  ~IDONTCARE2() { cout << "destr IDONTCARE2 \n"; }
};
void display(IDONTCARE2 *obj) {
  cout << "Friend function accessing private data: " << obj->idc1 << endl;
}

void sum(IDONTCARE2 f, IDONTCARE2 fe) { cout << f.idc1 + fe.idc1 << endl; }
void sum(IDONTCARE2 *f, IDONTCARE2 *fe) { cout << f->idc1 + fe->idc1 << endl; }
int main() {

  IDONTCARE2 *idk = new IDONTCARE2("kk", "io", "jioij");
  IDONTCARE2 *idk2 = new IDONTCARE2("kk", "io", "jioij");
  IDONTCARE2 *idk234 = new IDONTCARE2("kk", "io", "jioij");
  IDONTCARE2 *idk2234 = new IDONTCARE2("kk", "io", "jioij");
  IDONTCARE2 *idk2123 = new IDONTCARE2("kk", "io", "jioij");

  IDONTCARE2 idk3 = IDONTCARE2("kk", "io", "jioij");
  IDONTCARE2 idk41 = IDONTCARE2("kk", "io", "jioij");
  IDONTCARE2 idk32 = IDONTCARE2("kk", "io", "jioij");
  IDONTCARE2 idk43 = IDONTCARE2("kk", "io", "jioij");
  IDONTCARE2 idk33 = IDONTCARE2("kk", "io", "jioij");

  display(idk);
  
  sum(idk, idk2);
  sum(idk, idk2);

  return 0;
}
