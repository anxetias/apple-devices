// name: FUN_1001602ae
// address: 1001602ae

int FUN_1001602ae(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long local_30;
  
  if (*(char *)(param_1 + 5) != '\0') {
    iVar1 = FUN_100160255(param_1,&local_30);
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = FUN_1001d7378(*(undefined8 *)(param_1 + 8),local_30);
    if (iVar1 != 0) {
      return iVar1;
    }
    lVar3 = *(long *)(param_1 + 0x30);
    if (*(char *)(param_1 + 5) == '\0') {
      lVar4 = lVar3 + *(long *)(param_1 + 0x18) + -1;
    }
    else {
      lVar4 = lVar3;
      lVar3 = lVar3 + 1;
    }
    *(long *)(param_1 + 0x20) = lVar3;
    *(long *)(param_1 + 0x38) = lVar4;
    return 0;
  }
  lVar3 = *(long *)(param_1 + 0x30);
  lVar4 = *(long *)(param_1 + 0x20) - lVar3;
  if (lVar4 == 0) {
    iVar1 = 0;
  }
  else {
    local_30 = lVar4;
    iVar2 = FUN_1001d717d(*(undefined8 *)(param_1 + 8),&local_30,lVar3,0);
    iVar1 = -0x22;
    if (local_30 == lVar4) {
      iVar1 = 0;
    }
    if (iVar2 != 0) {
      iVar1 = iVar2;
    }
    lVar4 = *(long *)(param_1 + 0x30);
    lVar3 = lVar4;
    if (*(char *)(param_1 + 5) != '\0') {
      lVar3 = lVar4 + 1;
      goto LAB_100160340;
    }
  }
  lVar4 = lVar3 + *(long *)(param_1 + 0x18) + -1;
LAB_100160340:
  *(long *)(param_1 + 0x20) = lVar3;
  *(long *)(param_1 + 0x38) = lVar4;
  return iVar1;
}

