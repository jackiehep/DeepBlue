#include <iosteam>
#include <string>
#include <map>
#include <list>
using namespace std;
class BufferList
{
private:
 char * m_pBuf;
 long m_nLen;
public:
 BufferList(int nSize)
 {
   m_nLen=nSize;
   if(!m_pBuf)
     m_pBuf=new char(m_nLen);
  }
 } 
};
int main(int argc,char * args[])
{
  BufferList buffer;
  return 1;
}
