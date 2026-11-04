// name: FUN_1001dcd96
// address: 1001dcd96

undefined8 FUN_1001dcd96(int *param_1,uint param_2,int *param_3)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  
  if (param_3 == (int *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      FUN_1006b834f(uVar4);
    }
  }
  else {
    *param_3 = 0;
    if ((param_1 == (int *)0x0) || (*param_1 != 0x73747263)) {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        FUN_1006b82d9(uVar4);
      }
    }
    else if ((*(byte *)(param_1 + 1) & 1) == 0) {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        FUN_1006b8263(uVar4);
      }
    }
    else {
      if (param_2 == 0) {
        return 0;
      }
      if ((0 < (int)param_2) && ((int)param_2 <= param_1[0xb])) {
        lVar1 = **(long **)(param_1 + 6);
        iVar3 = *(int *)(lVar1 + -4 + (ulong)param_2 * 4);
        if (iVar3 < 1) {
          uVar4 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar4,0x10);
          if (cVar2 != '\0') {
            FUN_1006b8177(uVar4);
          }
          FUN_1001782e9(0,0);
          iVar3 = *(int *)(lVar1 + -4 + (ulong)param_2 * 4);
        }
        *param_3 = iVar3;
        return 0;
      }
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        FUN_1006b81ed(uVar4);
      }
    }
  }
  FUN_1001782e9(0,0);
  return 0xffffffce;
}

