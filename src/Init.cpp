#include <iostream>
#include <string>
#include <list>
#include <map>
#include <vector>
#include "stdlib.h"
using namespace std;
class InitBase
{
 pirvate:
  long m_nSize;
 public:
  InitBase(long nSize):m_nSize(nSize){}
  void InitFunc()
  {
   cout<<m_nSize<<"********"<<endl;
  }
  virtual void PrnValue()=0;
};
class DriveClass:public InitBase
{
 private:
   int m_nCnt;
 public:
   DriveClass(long size,int cnt):InitBase(size),m_nCnt(cnt){}
   virtual void PrnValue()
   {
    InitFunc();
    cout<<"m_nCnt<<"##################"<<endl;
   }
};
int main(int argc,char * argv[])
{
 DriveClass Drive(222,333);
 Drive.PrnValue();
 return 1;
  
}
