// name: FUN_1001ca7a7
// address: 1001ca7a7

int FUN_1001ca7a7(long param_1,int param_2,undefined1 *param_3,int *param_4)

{
  uint uVar1;
  uint *puVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  long *plVar7;
  
  if (param_1 == 0) {
    uVar6 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar6,0x10);
    if (cVar4 != '\0') {
      FUN_1006ad29c(uVar6);
    }
    goto LAB_1001ca8bd;
  }
  if (param_3 == (undefined1 *)0x0) {
    if (param_4 == (int *)0x0) {
      uVar6 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar6,0x10);
      if (cVar4 != '\0') {
        FUN_1006ad226(uVar6);
      }
      goto LAB_1001ca8bd;
    }
LAB_1001ca80e:
    *param_4 = 0;
    bVar3 = false;
  }
  else {
    *param_3 = 0;
    if (param_4 != (int *)0x0) goto LAB_1001ca80e;
    bVar3 = true;
  }
  iVar5 = FUN_1001ca907(param_1,param_2);
  if (iVar5 != 0) {
    uVar6 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar6,0x10);
    if (cVar4 == '\0') {
      return iVar5;
    }
    FUN_1006ad144(iVar5,uVar6);
    return iVar5;
  }
  plVar7 = *(long **)(param_1 + 0x10);
  if (plVar7 != (long *)0x0) {
    iVar5 = 1;
    do {
      puVar2 = (uint *)plVar7[4];
      if (puVar2[1] == 0x61746164) {
        if (iVar5 == param_2) {
          if (param_3 != (undefined1 *)0x0) {
            *param_3 = *(undefined1 *)((long)puVar2 + 0xb);
          }
          if (bVar3) {
            return 0;
          }
          uVar1 = *puVar2;
          *param_4 = (uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
                     uVar1 << 0x18) - 0x10;
          return 0;
        }
        iVar5 = iVar5 + 1;
      }
      plVar7 = (long *)*plVar7;
    } while (plVar7 != (long *)0x0);
  }
  uVar6 = FUN_1001cc310();
  cVar4 = _os_log_type_enabled(uVar6,0x10);
  if (cVar4 != '\0') {
    FUN_1006ad1b0(uVar6);
  }
LAB_1001ca8bd:
  FUN_1001782e9(0,0);
  return -0x32;
}

