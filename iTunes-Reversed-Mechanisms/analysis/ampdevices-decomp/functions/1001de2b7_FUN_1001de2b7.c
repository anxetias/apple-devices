// name: FUN_1001de2b7
// address: 1001de2b7

undefined8 FUN_1001de2b7(int *param_1,uint param_2,long param_3,int *param_4,int param_5)

{
  int iVar1;
  long lVar2;
  char cVar3;
  undefined8 uVar4;
  
  if (param_4 != (int *)0x0) {
    *param_4 = 0;
  }
  if ((param_1 == (int *)0x0) || (*param_1 != 0x73747263)) {
    uVar4 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar4,0x10);
    if (cVar3 != '\0') {
      FUN_1006b958f(uVar4);
    }
  }
  else {
    if (param_2 == 0) {
      return 0;
    }
    if ((0 < (int)param_2) && ((int)param_2 <= param_1[0xb])) {
      FUN_1001dccc7(param_1);
      lVar2 = **(long **)(param_1 + 4);
      cVar3 = FUN_1001dd16c();
      if (cVar3 == '\0') {
        uVar4 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar4,0x10);
        if (cVar3 != '\0') {
          FUN_1006b94a3(uVar4);
        }
        param_5 = 0;
        FUN_1001782e9(0,0);
        uVar4 = 0xffffffce;
      }
      else {
        iVar1 = *(int *)(lVar2 + (ulong)param_2 * 8 + -4);
        if (iVar1 < param_5) {
          param_5 = iVar1;
        }
        uVar4 = 0;
        if (param_3 != 0) {
          FUN_1001c631b((long)*(int *)(lVar2 + (ulong)param_2 * 8 + -8) + **(long **)(param_1 + 8),
                        param_3,(long)param_5);
        }
      }
      FUN_1001dcd18(param_1);
      if (param_4 == (int *)0x0) {
        return uVar4;
      }
      *param_4 = param_5;
      return uVar4;
    }
    uVar4 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar4,0x10);
    if (cVar3 != '\0') {
      FUN_1006b9519(uVar4);
    }
  }
  FUN_1001782e9(0,0);
  return 0xffffffce;
}

