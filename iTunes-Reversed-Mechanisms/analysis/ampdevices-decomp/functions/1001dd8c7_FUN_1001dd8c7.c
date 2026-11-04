// name: FUN_1001dd8c7
// address: 1001dd8c7

int FUN_1001dd8c7(int *param_1)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0x73747263)) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      FUN_1006b8cd5(uVar4);
    }
    FUN_1001782e9(0,0);
    return -0x32;
  }
  iVar3 = FUN_1001c60a1(param_1 + 4,400);
  if (iVar3 == -0x80) {
    return -0x80;
  }
  if (iVar3 != 0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 == '\0') {
      return iVar3;
    }
    FUN_1006b8c69(iVar3,uVar4);
    return iVar3;
  }
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    iVar3 = FUN_1001c5f7b(param_1 + 6,200);
    if (iVar3 == -0x80) {
LAB_1001dd95b:
      FUN_1001c60a1(param_1 + 4,0xfffffe70);
      return iVar3;
    }
    if (iVar3 != 0) {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        FUN_1006b8b87(iVar3,uVar4);
      }
      if (iVar3 != 0) goto LAB_1001dd95b;
    }
  }
  iVar3 = param_1[0xb];
  iVar5 = 1;
  puVar1 = (undefined4 *)((long)iVar3 * 8 + **(long **)(param_1 + 4));
  puVar7 = (undefined4 *)0x0;
  do {
    puVar6 = puVar1;
    *puVar6 = 0x80000000;
    if (puVar7 != (undefined4 *)0x0) {
      puVar7[1] = iVar3 + iVar5;
    }
    iVar5 = iVar5 + 1;
    puVar1 = puVar6 + 2;
    puVar7 = puVar6;
  } while (iVar5 != 0x33);
  puVar6[1] = 0;
  if (param_1[0xc] != 0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      FUN_1006b8bf3(uVar4);
    }
    FUN_1001782e9(0,0);
    iVar3 = param_1[0xb];
  }
  param_1[0xc] = iVar3 + 1;
  param_1[0xb] = iVar3 + 0x32;
  return 0;
}

