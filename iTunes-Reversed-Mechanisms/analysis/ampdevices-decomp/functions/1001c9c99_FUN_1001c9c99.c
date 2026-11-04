// name: FUN_1001c9c99
// address: 1001c9c99

int FUN_1001c9c99(long param_1,uint param_2)

{
  char cVar1;
  int *piVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  long local_30;
  
  local_30 = 0;
  if ((param_1 == 0) || (*(long *)(param_1 + 8) == 0)) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_1006ac4de(uVar4);
    }
    FUN_1001782e9(0,0);
    return -0x32;
  }
  iVar5 = (uint)(param_2 == 0x6c616e67) * 4 + 8;
  piVar2 = (int *)FUN_1001c6429(iVar5);
  if (piVar2 == (int *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_1006ac468(uVar4);
    }
    FUN_1001782e9(0,0);
    return -0x6c;
  }
  *piVar2 = iVar5 * 0x1000000;
  piVar2[1] = param_2 >> 0x18 | (param_2 & 0xff0000) >> 8 | (param_2 & 0xff00) << 8 |
              param_2 << 0x18;
  iVar5 = FUN_10015cb08(piVar2,&local_30,2);
  if (iVar5 == -0x80) {
LAB_1001c9dd7:
    FUN_1001c64c1(piVar2);
  }
  else {
    if (iVar5 != 0) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        FUN_1006ac3fc(iVar5,uVar4);
      }
      goto LAB_1001c9dd7;
    }
    if (param_2 == 0x696c7374) {
      lVar3 = 0x18;
    }
    else {
      iVar5 = -0x32;
      if (param_2 != 0x6c616e67) goto LAB_1001c9de4;
      lVar3 = 0x30;
    }
    *(long *)(param_1 + lVar3) = local_30;
    iVar5 = FUN_10015d357(*(undefined8 *)(param_1 + 8),local_30,0);
    if ((iVar5 != -0x80) && (iVar5 != 0)) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        FUN_1006ac390(iVar5,uVar4);
      }
      goto LAB_1001c9de4;
    }
  }
  if (iVar5 == 0) {
    return 0;
  }
LAB_1001c9de4:
  if (local_30 == 0) {
    FUN_1001c64c1(piVar2);
  }
  else {
    FUN_10015ccc4(local_30,0);
  }
  return iVar5;
}

