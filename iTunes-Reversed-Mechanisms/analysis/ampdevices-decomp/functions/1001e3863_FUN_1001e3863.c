// name: FUN_1001e3863
// address: 1001e3863

void FUN_1001e3863(long param_1,uint param_2,undefined2 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (param_1 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006bcd9c(uVar2);
    }
  }
  else {
    if (param_3 != (undefined2 *)0x0) {
      if (param_2 < 0x100) {
        *param_3 = (short)param_2;
        if (param_2 == 0) {
          return;
        }
      }
      else {
        uVar2 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar2,0x10);
        if (cVar1 != '\0') {
          FUN_1006bccb0(uVar2);
        }
        FUN_1001782e9(0,0);
        *param_3 = 0xff;
        param_2 = 0xff;
      }
      lVar3 = 0;
      do {
        param_3[lVar3 + 1] = *(undefined2 *)(param_1 + lVar3 * 2);
        lVar3 = lVar3 + 1;
      } while (param_2 != (uint)lVar3);
      return;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006bcd26(uVar2);
    }
  }
  FUN_1001782e9(0,0);
  return;
}

