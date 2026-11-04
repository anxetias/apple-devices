// name: FUN_1001e5f3e
// address: 1001e5f3e

long FUN_1001e5f3e(long param_1,uint param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (param_1 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006bf590(uVar3);
    }
  }
  else {
    lVar2 = FUN_1001c63e1(param_2 + 1);
    if (lVar2 != 0) {
      FUN_1001c631b(param_1,lVar2,(ulong)param_2);
      *(undefined1 *)(lVar2 + (ulong)param_2) = 0;
      return lVar2;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006bf51a(uVar3);
    }
  }
  FUN_1001782e9(0,0);
  return 0;
}

