#include <iostream>

#include "Creator.hpp"
#include "WidgetManager.hpp"

int main()
{
  typedef WidgetManager<OpNewCreator<Widget>> MyWgtMgr;
  MyWgtMgr mgr1;
  
  typedef WidgetManager<MallocCreator<Widget>> MallocMgr;
  MallocMgr mgr2;

}
