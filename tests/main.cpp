#include <iostream>
#include <string>
#include "square.hpp"

using namespace std;
using std::cout;
using std::endl;

template <class T>
bool assert_equal(std::string test_name, T left, T right)
{
  if (left == right)
    {
      cout << test_name << " ... ok" << endl;
      return true;
    }
  else
    {
      cout << endl;
      cout << "======================================================================" << endl;
      cout << "FAIL: " << test_name << endl;
      cout << "----------------------------------------------------------------------" << endl;
      cout << "AssertionError: " << left << " != " << right << endl << endl;
      return false;
    }
}

int main(int argc, char **argv)
{
  assert_equal("test_zero", square(0), 0);
  assert_equal("test_one", square(1), 1);
  assert_equal("test_two", square(2), 4);
  assert_equal("test_three", square(3), 9);
  assert_equal("test_four", square(4), 16);
  assert_equal("test_negative", square(-1), 1);

  cout << endl << "FINISHED" << endl;
  return 0;
}
