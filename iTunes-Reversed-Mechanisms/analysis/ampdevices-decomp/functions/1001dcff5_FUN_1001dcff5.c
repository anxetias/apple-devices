// name: FUN_1001dcff5
// address: 1001dcff5

undefined8 FUN_1001dcff5(int *param_1,int param_2)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  
  uVar4 = 0;
  if (param_2 != 0) {
    if ((param_1 == (int *)0x0) || (*param_1 != 0x73747263)) {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        FUN_1006b87eb(uVar4);
      }
    }
    else if (param_1[0xf] == 0) {
      if ((0 < param_2) && (param_2 <= param_1[0xb])) {
        lVar5 = (long)param_2;
        if ((param_1[1] & 1U) != 0) {
          lVar1 = **(long **)(param_1 + 6);
          iVar3 = *(int *)(lVar1 + -4 + lVar5 * 4);
          if (iVar3 < 1) {
            uVar4 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar4,0x10);
            if (cVar2 != '\0') {
              FUN_1006b8689(uVar4);
            }
            FUN_1001782e9(0,0);
            iVar3 = *(int *)(lVar1 + -4 + lVar5 * 4);
          }
          *(int *)(lVar1 + -4 + lVar5 * 4) = iVar3 + -1;
          if (iVar3 + -1 != 0) {
            return 0;
          }
        }
        lVar1 = **(long **)(param_1 + 4) + lVar5 * 8;
        cVar2 = FUN_1001dd16c(**(long **)(param_1 + 4) + lVar5 * 8 + -8);
        if (cVar2 == '\0') {
          uVar4 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar4,0x10);
          if (cVar2 != '\0') {
            FUN_1006b86ff(uVar4);
          }
          FUN_1001782e9(0,0);
        }
        param_1[0x10] = param_1[0x10] + *(int *)(lVar1 + -4);
        *(undefined4 *)(lVar1 + -8) = 0x80000001;
        return 0;
      }
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        FUN_1006b8775(uVar4);
      }
    }
    else {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        FUN_1006b8613(uVar4);
      }
    }
    FUN_1001782e9(0,0);
    uVar4 = 0xffffffce;
  }
  return uVar4;
}

