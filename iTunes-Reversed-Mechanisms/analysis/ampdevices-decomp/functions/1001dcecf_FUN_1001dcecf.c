// name: FUN_1001dcecf
// address: 1001dcecf

undefined8 FUN_1001dcecf(int *param_1,uint param_2)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0x73747263)) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      FUN_1006b859d(uVar4);
    }
  }
  else if (param_1[0xf] == 0) {
    if ((*(byte *)(param_1 + 1) & 1) == 0) {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        FUN_1006b8527(uVar4);
      }
    }
    else {
      if (param_2 == 0) {
        return 0;
      }
      if ((0 < (int)param_2) && ((int)param_2 <= param_1[0xb])) {
        lVar1 = **(long **)(param_1 + 6);
        uVar5 = (ulong)param_2;
        iVar3 = *(int *)(lVar1 + -4 + uVar5 * 4);
        if (iVar3 < 1) {
          uVar4 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar4,0x10);
          if (cVar2 != '\0') {
            FUN_1006b843b(uVar4);
          }
          FUN_1001782e9(0,0);
          iVar3 = *(int *)(lVar1 + -4 + uVar5 * 4);
        }
        *(int *)(lVar1 + -4 + uVar5 * 4) = iVar3 + 1;
        return 0;
      }
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        FUN_1006b84b1(uVar4);
      }
    }
  }
  else {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      FUN_1006b83c5(uVar4);
    }
  }
  FUN_1001782e9(0,0);
  return 0xffffffce;
}

