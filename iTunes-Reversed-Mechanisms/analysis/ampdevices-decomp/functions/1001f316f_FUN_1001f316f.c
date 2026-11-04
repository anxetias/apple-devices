// name: FUN_1001f316f
// address: 1001f316f

undefined8 FUN_1001f316f(long param_1,int param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  
  if (*(long *)(param_1 + 8) == 0) {
LAB_1001f3198:
    iVar4 = param_2 * 2 + 0x800;
    lVar2 = FUN_1001c63e1(iVar4);
    *(long *)(param_1 + 8) = lVar2;
    if (lVar2 == 0) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        FUN_1006c6ff5(uVar3);
      }
      goto LAB_1001f3286;
    }
    *(int *)(param_1 + 0x10) = iVar4;
  }
  else if (*(uint *)(param_1 + 0x10) < (uint)(param_2 * 2)) {
    FUN_1001c64c1();
    goto LAB_1001f3198;
  }
  if (*(long *)(param_1 + 0x18) == 0) {
LAB_1001f31cd:
    iVar4 = param_2 * 3 + 0x800;
    lVar2 = FUN_1001c63e1(iVar4);
    *(long *)(param_1 + 0x18) = lVar2;
    if (lVar2 == 0) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        FUN_1006c6f7f(uVar3);
      }
      goto LAB_1001f3286;
    }
    *(int *)(param_1 + 0x20) = iVar4;
  }
  else if (*(uint *)(param_1 + 0x20) < (uint)(param_2 * 3)) {
    FUN_1001c64c1();
    goto LAB_1001f31cd;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    if ((uint)(param_2 * 6) <= *(uint *)(param_1 + 0x30)) {
      return 0;
    }
    FUN_1001c64c1();
  }
  iVar4 = param_2 * 6 + 0x800;
  lVar2 = FUN_1001c63e1(iVar4);
  *(long *)(param_1 + 0x28) = lVar2;
  if (lVar2 != 0) {
    *(int *)(param_1 + 0x30) = iVar4;
    return 0;
  }
  uVar3 = FUN_1001cc310();
  cVar1 = _os_log_type_enabled(uVar3,0x10);
  if (cVar1 != '\0') {
    FUN_1006c6f09(uVar3);
  }
LAB_1001f3286:
  FUN_1001782e9(0,0);
  return 0xffffff94;
}

