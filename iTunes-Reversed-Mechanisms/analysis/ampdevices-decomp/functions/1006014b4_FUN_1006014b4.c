// name: FUN_1006014b4
// address: 1006014b4

undefined4 FUN_1006014b4(long param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 local_38;
  
  uVar2 = FUN_100324a38();
  if ((char)uVar2 == '\0') {
    return uVar2;
  }
  FUN_10017060f(*(undefined8 *)(param_1 + 0x58));
  *(undefined8 *)(param_1 + 0x58) = 0;
  FUN_10017060f(*(undefined8 *)(param_1 + 0x50));
  *(undefined8 *)(param_1 + 0x50) = 0;
  iVar3 = _AMSGetNewRecordGroupName(**(undefined8 **)(param_1 + 8),param_1 + 0x50);
  *(bool *)(param_1 + 0x68) = iVar3 == 0;
  if (*(long *)(param_1 + 0x50) == 0) {
    *(undefined8 *)(param_1 + 0x58) = 0;
    if (iVar3 != 0) {
      return uVar2;
    }
  }
  else {
    lVar4 = FUN_1001736a5(DAT_1008c4d90);
    *(long *)(param_1 + 0x58) = lVar4;
    if (*(char *)(param_1 + 0x68) == '\0') {
      return uVar2;
    }
    if (lVar4 != 0) {
      lVar4 = FUN_10017076e(*(undefined8 *)(param_1 + 0x38));
      if (lVar4 < 1) {
        return uVar2;
      }
      lVar5 = 0;
      do {
        local_38 = 0;
        FUN_100325516(param_1,lVar5,&local_38,0,0,0);
        cVar1 = FUN_100170633(local_38,*(undefined8 *)(param_1 + 0x58));
        FUN_10017060f(local_38);
        if (cVar1 != '\0') {
          *(long *)(param_1 + 0x60) = lVar5;
          return uVar2;
        }
        lVar5 = lVar5 + 1;
      } while (lVar4 != lVar5);
      return uVar2;
    }
  }
  *(undefined8 *)(param_1 + 0x60) = 0xffffffffffffffff;
  return uVar2;
}

