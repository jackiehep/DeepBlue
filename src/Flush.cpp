#include <iotream>
#include <string>
#include <list>
#include "stdlib.h"
using namespace std;
namespace test
{
 class MapTest
 {
   private:
    typedef map<string,string> TypeMap;
    TypeMap m_map;
    string m_strIn1;
    string m_strIn2;
    public:
    MapTest(){}
    MapTest(string str1,string str2):m_strIn1(str1),m_strIn2(str2){}
    void InsertRecord(int nIdx,string value)
    {
     m_map[(string)(itoa(nIdx))]=value;
    }
 };
}
void main()
{
  test::MapTest maptest("test1","test2");
  maptest.InsertRecode(1,"why me");
}
