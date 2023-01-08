#pragma once

#include "Creator.hpp"

/* Стратегия создания объектов
 * объекты могут создаваться с помощью
 * new
 * malloc
 * И, если этот объект является паттерном Prototype,
 * то новые его экземпляры будут создаваться с 
 * помощью p->clone()
 */

template<class T>
struct OpNewCreator
{
  static T *Create()
  {
    std::cout << "new: ";
    return new T;
  }
};

template<class T>
struct MallocCreator
{
  static T *Create()
  {
    std::cout << "malloc: ";
    void *buf = std::malloc(sizeof(T));
    if(!buf) return nullptr;
    return new(buf) T;
  }
};

template<class T>
struct PrototypeCreator
{
  PrototypeCreator(T *pObj = nullptr)
    : pPrototype(pObj) {}
  T *Create() 
  {
    std::cout << "clone: ";
    if(pPrototype)
      return pPrototype->Clone();
    return nullptr;
  }
  T *GetPrototype()
  {
    return pPrototype;
  }
  void SetPrototype(T *pObj)
  {
    pPrototype = pObj;
  }
private:
  T *pPrototype;
};
