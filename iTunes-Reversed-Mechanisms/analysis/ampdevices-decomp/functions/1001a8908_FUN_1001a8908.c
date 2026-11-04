// name: FUN_1001a8908
// address: 1001a8908

undefined8 FUN_1001a8908(undefined8 param_1,long *param_2,int param_3)

{
  void *pvVar1;
  char cVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  char *pcVar10;
  void *local_48;
  void *local_40;
  
  if ((*param_2 == 0) || (lVar4 = _CFDataGetLength(), lVar4 == 0)) {
LAB_1001a89eb:
    FUN_1001b7a44(param_1);
    return param_1;
  }
  if (param_3 - 1U < 2) {
    pcVar10 = "0123456789ABCDEF";
    if (param_3 == 2) {
      pcVar10 = "0123456789abcdef";
    }
    if (*param_2 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = _CFDataGetLength();
      lVar4 = lVar4 * 2;
    }
    FUN_1001a8b4c(&local_48,lVar4);
    pvVar1 = local_48;
    if (((*param_2 != 0) && (lVar4 = _CFDataGetBytePtr(), *param_2 != 0)) &&
       (lVar8 = _CFDataGetLength(), lVar8 != 0)) {
      lVar9 = 0;
      do {
        *(char *)((long)pvVar1 + lVar9 * 2) = pcVar10[*(byte *)(lVar4 + lVar9) >> 4];
        *(char *)((long)pvVar1 + lVar9 * 2 + 1) = pcVar10[*(byte *)(lVar4 + lVar9) & 0xf];
        lVar9 = lVar9 + 1;
      } while (lVar8 != lVar9);
    }
    FUN_1001b7b34(param_1,local_48,(long)local_40 - (long)local_48);
    goto LAB_1001a8af5;
  }
  if (param_3 == 3) {
    local_48 = (void *)_CFStringCreateFromExternalRepresentation(DAT_1008c4d98,*param_2,0x8000100);
    FUN_1001b7eb0(param_1,local_48);
    FUN_10016d588(&local_48);
    return param_1;
  }
  if (param_3 != 0) goto LAB_1001a89eb;
  uVar3 = 0;
  if (*param_2 != 0) {
    uVar5 = _CFDataGetLength();
    if (uVar5 >> 0x20 != 0) {
      uVar6 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar6,0x10);
      if (cVar2 != '\0') {
        FUN_10069ed3d(uVar6);
      }
      FUN_1001782e9(0,0);
    }
    if (*param_2 != 0) {
      uVar3 = _CFDataGetLength();
    }
  }
  uVar3 = FUN_10015f36c(uVar3);
  FUN_1001a8b4c(&local_48,uVar3);
  if (*param_2 == 0) {
    uVar6 = 0;
LAB_1001a8ad6:
    uVar7 = 0;
  }
  else {
    uVar6 = _CFDataGetBytePtr();
    if (*param_2 == 0) goto LAB_1001a8ad6;
    uVar7 = _CFDataGetLength();
  }
  uVar3 = FUN_10015f415(uVar6,uVar7,local_48,uVar3);
  FUN_1001b7b34(param_1,local_48,uVar3);
LAB_1001a8af5:
  if (local_48 == (void *)0x0) {
    return param_1;
  }
  local_40 = local_48;
  operator_delete(local_48);
  return param_1;
}

