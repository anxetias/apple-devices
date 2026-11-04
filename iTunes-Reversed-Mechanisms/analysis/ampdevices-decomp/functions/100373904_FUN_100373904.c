// name: FUN_100373904
// address: 100373904

undefined8 FUN_100373904(long param_1,long param_2)

{
  char *pcVar1;
  int iVar2;
  size_t sVar3;
  size_t sVar4;
  undefined8 uVar5;
  ulong uVar6;
  int iVar7;
  
  if (*(int *)(param_1 + 0x18) == *(int *)(param_2 + 0x18)) {
    sVar3 = _strlen((char *)(param_1 + 0x1c));
    sVar4 = _strlen((char *)(param_2 + 0x1c));
    iVar7 = (int)sVar3 + 1;
    uVar6 = sVar3 & 0xffffffff;
    do {
      if (uVar6 == 0) {
        iVar7 = 0;
        break;
      }
      iVar7 = iVar7 + -1;
      pcVar1 = (char *)(param_1 + 0x1b + uVar6);
      uVar6 = uVar6 - 1;
    } while (*pcVar1 == '/');
    iVar2 = (int)sVar4 + 1;
    uVar6 = sVar4 & 0xffffffff;
    do {
      if (uVar6 == 0) {
        iVar2 = 0;
        break;
      }
      iVar2 = iVar2 + -1;
      pcVar1 = (char *)(param_2 + 0x1b + uVar6);
      uVar6 = uVar6 - 1;
    } while (*pcVar1 == '/');
    if (iVar7 == iVar2) {
      uVar5 = FUN_1001df8db((char *)(param_1 + 0x1c),iVar7,(char *)(param_2 + 0x1c),iVar7,1);
      return uVar5;
    }
  }
  return 0;
}

