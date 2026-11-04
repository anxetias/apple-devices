// name: FUN_1003bb68d
// address: 1003bb68d

long * FUN_1003bb68d(long *param_1,undefined4 param_2)

{
  long lVar1;
  long lVar2;
  undefined4 local_1c;
  
  local_1c = param_2;
  lVar1 = FUN_1002b7f7c(&DAT_1008c75d8,&local_1c);
  if (lVar1 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
    if (*(long *)(lVar1 + 0x20) != 0) {
      lVar2 = std::__shared_weak_count::lock();
      param_1[1] = lVar2;
      if ((lVar2 != 0) && (lVar2 = *(long *)(lVar1 + 0x18), *param_1 = lVar2, lVar2 != 0)) {
        return param_1;
      }
    }
    FUN_1003bb7f2(&DAT_1008c75d8,lVar1);
  }
  return param_1;
}

