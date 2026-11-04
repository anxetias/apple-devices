// name: FUN_1001de14e
// address: 1001de14e

undefined8 FUN_1001de14e(int *param_1,uint param_2,char param_3,long *param_4,undefined4 *param_5)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  int *piVar4;
  
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = 0;
  }
  if (param_4 != (long *)0x0) {
    *param_4 = 0;
  }
  if ((param_1 == (int *)0x0) || (*param_1 != 0x73747263)) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      FUN_1006b942d(uVar3);
    }
  }
  else if ((param_3 == '\0') && (param_1[0xf] == 0)) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      FUN_1006b92cb(uVar3);
    }
  }
  else {
    if (param_2 == 0) {
      return 0;
    }
    if (((int)param_2 < 1) || (param_1[0xb] < (int)param_2)) {
      uVar3 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar3,0x10);
      if (cVar2 != '\0') {
        FUN_1006b93b7(uVar3);
      }
    }
    else {
      lVar1 = **(long **)(param_1 + 4);
      piVar4 = (int *)(lVar1 + (ulong)param_2 * 8 + -8);
      cVar2 = FUN_1001dd16c(piVar4);
      if (cVar2 != '\0') {
        if (param_4 != (long *)0x0) {
          *param_4 = (long)*piVar4 + **(long **)(param_1 + 8);
        }
        if (param_5 == (undefined4 *)0x0) {
          return 0;
        }
        *param_5 = *(undefined4 *)(lVar1 + (ulong)param_2 * 8 + -4);
        return 0;
      }
      uVar3 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar3,0x10);
      if (cVar2 != '\0') {
        FUN_1006b9341(uVar3);
      }
    }
  }
  FUN_1001782e9(0,0);
  return 0xffffffce;
}

