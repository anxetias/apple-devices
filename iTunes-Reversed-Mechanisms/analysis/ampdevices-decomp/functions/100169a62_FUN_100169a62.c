// name: FUN_100169a62
// address: 100169a62

long FUN_100169a62(undefined8 param_1,long param_2,ulong param_3,undefined1 param_4)

{
  char cVar1;
  void *pvVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  
  if (param_2 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006777a4(uVar3);
    }
  }
  else if ((long)param_3 < 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_100677642(uVar3);
    }
  }
  else {
    uVar5 = (ulong)(uint)((int)param_3 * 2);
    pvVar2 = operator_new__(uVar5,(nothrow_t *)PTR_nothrow_10082c970);
    if (pvVar2 != (void *)0x0) {
      uVar3 = FUN_1001704bb(param_1);
      FUN_1001e0d72(param_2,param_3 & 0xffffffff,pvVar2,uVar5,param_4);
      lVar4 = FUN_100173ab4(uVar3,pvVar2,uVar5,0x600,0);
      if (lVar4 == 0) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          FUN_1006776b8(uVar3);
        }
        FUN_1001782e9(0,0);
      }
      operator_delete__(pvVar2);
      return lVar4;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_10067772e(uVar3);
    }
  }
  FUN_1001782e9(0,0);
  return 0;
}

