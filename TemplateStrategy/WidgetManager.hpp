#include "Creator.hpp"

class Widget
{
public:
  Widget()
  {
    std::cout << "i'm an widget!" << std::endl;
  }
};

/* Класс, который использует в себе стратегии называется 
 * ГЛАВНЫМ (это часть вопроса)
 */

template<class CreationPolicy>
class WidgetManager : public CreationPolicy
{
  /* Внутри мы сможем использовать Create(),
   * который будет создавать объекты в соответствии с нужной 
   * нам стратегией.
   */
public:
  WidgetManager()
    : pWidget(Create());
private:
  Widget *pWidget;
};

/* Далее, клиент, использующий нашу библиотеку сможет написать
 * что-то наподобие:
 * typedef WidgetManager<OpNewCreator<Widget>> MyWidgetMgr;
 * и теперь использовать собранный им класс:
 * MyWidgetMgr manager;
 */

/* Что интересно, одна из наших стратегий (PrototypeCreator) 
 * имеет дополнительные методы (SetPrototype, GetPrototype)
 * - такие стратегии называются РАСШИРЕННЫМИ.
 * а WidgetManager наследуется от него, поэтому
 * пользователь сможет использовать эти самые дополнительные методы
 */

/* Однако, не хорошо заставлять клиента библиотеки писать
 * излишний шаблонный аргумент (Widget), поэтому можно написать:
 * template< template<class> CreationPolicy >
 * class WidgetManager : public CreationPolicy<Widget>
 * { ... }
 * чтобы:
 * 1. убрать излишние шаблонные аргументы
 *    typedef WidgetManager<OpNewCreator> MyWidgetMgr;
 * 2. Теперь можно использовать CreationPolicy<любой класс>
 *    внутри WidgetManager.
 */

/* Также можно помочь пользователям даже не думать 
 * об этой стратегии лишний раз:
 * template<template<class> CreationPolicy = OpNewCreator>
 * class WidgetManager : public CreationPolicy<Widget>
 * {}
 */
