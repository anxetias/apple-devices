// name: FUN_1005e36b2
// address: 1005e36b2

void FUN_1005e36b2(long param_1,long param_2)

{
  undefined4 uVar1;
  char cVar2;
  long lVar3;
  undefined4 *puVar4;
  int iVar5;
  
  *(byte *)(param_1 + 0x5c) = *(byte *)(param_1 + 0x5c) & 0xbf;
  if (*(short *)(param_1 + 0x62) != 2) {
    return;
  }
  lVar3 = FUN_1005e3fda();
  if (lVar3 != 0) {
    iVar5 = *(int *)(lVar3 + 0xe0);
    if (iVar5 == 0) {
      iVar5 = *(int *)(lVar3 + 0xdc);
      puVar4 = (undefined4 *)(lVar3 + 0x1b0);
    }
    else {
      puVar4 = (undefined4 *)(lVar3 + 0x1b4);
    }
    uVar1 = *puVar4;
    if (param_2 == 0) {
      FUN_1001de8c6(param_1 + 0xe8,*(undefined8 *)(param_1 + 0xe8),iVar5);
    }
    else {
      cVar2 = FUN_10053916d(param_2,4);
      if ((cVar2 != '\0') || (cVar2 = FUN_10053916d(param_2,0x47), cVar2 != '\0')) {
        FUN_1001de8c6(param_1 + 0xe8,*(undefined8 *)(param_1 + 0xe8),iVar5);
      }
      cVar2 = FUN_10053916d(param_2,0x50);
      if ((cVar2 == '\0') && (cVar2 = FUN_10053916d(param_2,0x51), cVar2 == '\0')) {
        return;
      }
    }
    FUN_1001de8c6(param_1 + 0xf8,*(undefined8 *)(param_1 + 0xf8),uVar1);
    return;
  }
  return;
}

