// name: FUN_1001cf495
// address: 1001cf495

ulong FUN_1001cf495(long param_1,uint param_2,undefined8 *param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  char cVar4;
  uint uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  
  uVar5 = FUN_1001cf1e5();
  if (uVar5 == 0) {
    if (param_2 < *(uint *)(param_1 + 0x10)) {
      if (*(int *)(param_1 + 8) != 0) {
        lVar3 = *(long *)(param_1 + 0x68);
        lVar8 = (ulong)param_2 * 0x20;
        lVar1 = lVar3 + lVar8;
        *param_3 = *(undefined8 *)(lVar3 + lVar8);
        *(undefined1 *)((long)param_3 + 9) = *(undefined1 *)(lVar3 + 10 + lVar8);
        param_3[2] = *(undefined8 *)(lVar3 + 0x18 + lVar8);
        if (*(char *)(lVar3 + 8 + lVar8) == '\0') {
          *(undefined1 *)(param_3 + 1) = 0;
          iVar2 = *(int *)(lVar1 + 0xc);
          *(int *)(param_3 + 4) = iVar2;
          if (iVar2 != 0) {
            uVar7 = FUN_1001de13c(param_1 + 0x18,*(undefined4 *)(lVar1 + 0x10),param_3 + 3,0);
            return uVar7;
          }
          param_3[3] = lVar1 + 0x10;
        }
        else {
          *(undefined1 *)(param_3 + 1) = 1;
          param_3[3] = *(undefined8 *)(lVar1 + 0x10);
        }
        return 0;
      }
      uVar6 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar6,0x10);
      if (cVar4 != '\0') {
        FUN_1006b014e(uVar6);
      }
    }
    else {
      uVar6 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar6,0x10);
      if (cVar4 != '\0') {
        FUN_1006b00d8(uVar6);
      }
    }
    FUN_1001782e9(0,0);
    uVar7 = 0xffffffce;
  }
  else {
    uVar7 = (ulong)uVar5;
    uVar6 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar6,0x10);
    if (cVar4 != '\0') {
      FUN_1006b006c(uVar7,uVar6);
    }
  }
  return uVar7;
}

