#ifndef __CALCULADORA_H__ 
#define __CALCULADORA_H__ 

#include <iostream> 
#include <map>
#include <string>
#include <stdio.h>

using namespace std;

template <typename T>
class Calculadora
{
    struct Node
    {
      T data;
      Node *m_pChild[2];
      Node(const T &_data, Node *pLeft=nullptr, Node *pRight=nullptr) : data(_data)
      {   m_pChild[0] = pLeft;  m_pChild[1] = pRight;   }
      T getData()             { return data; }
      void setData (T &_data) { data=_data; } 
    };


  class Numero
  {
    private:
      T a;
      T b;
      friend class Operacion;

    public:

  };

  class Variable
  {
    private:
      T x;
      friend class Operacion;
    public:

  };

  class Operacion
  {
    private:
    T signo;


    public:
/*
      void ejec(const std::map<std::string, int>& m)
      const auto& [signo, ] : m;

      std::map<std::string,  > resultado { {"+", suma()}, {"-", resta()}, {"*", multiplicacion()},{"/", division()} };
      */
  };

};

#endif
