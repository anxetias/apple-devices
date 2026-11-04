// name: FUN_100160380
// address: 100160380

int FUN_100160380(long param_1,ulong *param_2,long param_3)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong local_40;
  long local_38;
  
  iVar3 = FUN_1001605d9(param_1,1);
  if (iVar3 == -0x80) {
    return -0x80;
  }
  if (iVar3 != 0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 == '\0') {
      return iVar3;
    }
    FUN_10066ebe5(iVar3,uVar4);
    return iVar3;
  }
  uVar8 = *param_2;
  if (uVar8 == 0) {
    local_40 = 0;
LAB_1001604f2:
    iVar3 = 0;
    uVar6 = local_40;
    goto LAB_10016059a;
  }
  uVar6 = *(ulong *)(param_1 + 0x20);
  if (*(char *)(param_1 + 5) == '\0') {
    iVar3 = (int)uVar6 - *(int *)(param_1 + 0x30);
LAB_100160418:
    if (iVar3 == 0) goto LAB_1001604fa;
    uVar7 = (long)iVar3;
    if (uVar8 < (ulong)(long)iVar3) {
      uVar7 = uVar8;
    }
    local_40 = uVar7;
    if (uVar6 < *(ulong *)(param_1 + 0x30)) {
      local_38 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(local_38,0x10);
      if (cVar2 != '\0') {
        FUN_10066ea83(local_38);
      }
      FUN_1001782e9(0,0);
      uVar6 = *(ulong *)(param_1 + 0x20);
    }
    uVar5 = *(ulong *)(param_1 + 0x38);
    if (uVar5 < uVar6) {
      local_38 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(local_38,0x10);
      if (cVar2 != '\0') {
        FUN_10066eaf9(local_38);
      }
      FUN_1001782e9(0,0);
      uVar6 = *(ulong *)(param_1 + 0x20);
      uVar5 = *(ulong *)(param_1 + 0x38);
    }
    if (uVar5 < (uVar6 + uVar7) - 1) {
      local_38 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(local_38,0x10);
      if (cVar2 != '\0') {
        FUN_10066eb6f(local_38);
      }
      FUN_1001782e9(0,0);
      uVar6 = *(ulong *)(param_1 + 0x20);
    }
    FUN_1001c631b(uVar6,param_3,uVar7);
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + local_40;
    uVar8 = uVar8 - local_40;
    if (uVar8 == 0) goto LAB_1001604f2;
    local_38 = param_3 + local_40;
    uVar6 = local_40;
  }
  else {
    if (uVar6 <= *(ulong *)(param_1 + 0x38)) {
      iVar3 = ((int)*(ulong *)(param_1 + 0x38) - (int)uVar6) + 1;
      goto LAB_100160418;
    }
LAB_1001604fa:
    uVar6 = 0;
    local_38 = param_3;
  }
  local_40 = *(ulong *)(param_1 + 0x18);
  if (local_40 < uVar8) {
    local_40 = uVar8;
    iVar3 = FUN_1001d6a08(*(undefined8 *)(param_1 + 8),&local_40,local_38,0);
    *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + local_40;
    uVar6 = uVar6 + local_40;
  }
  else {
    iVar3 = FUN_1001d6a08(*(undefined8 *)(param_1 + 8),&local_40,*(undefined8 *)(param_1 + 0x30),0);
    *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + local_40;
    if ((iVar3 == 0) || (iVar3 == -0x27)) {
      lVar1 = *(long *)(param_1 + 0x30);
      *(long *)(param_1 + 0x20) = lVar1;
      *(ulong *)(param_1 + 0x38) = lVar1 + local_40 + -1;
      iVar3 = -0x27;
      if (uVar8 <= local_40) {
        iVar3 = 0;
        local_40 = uVar8;
      }
      FUN_1001c631b(lVar1,local_38,local_40);
      *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + local_40;
      uVar6 = uVar6 + local_40;
    }
  }
LAB_10016059a:
  *param_2 = uVar6;
  return iVar3;
}

