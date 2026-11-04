// name: FUN_10029645b
// address: 10029645b

int FUN_10029645b(undefined2 *param_1,char *param_2,long param_3,int param_4)

{
  int iVar1;
  size_t sVar2;
  ulong uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  
  sVar2 = _strlen(param_2);
  uVar5 = param_4 + (int)sVar2 + 6;
  iVar1 = 0;
  if (uVar5 < 0x1000000) {
    *param_1 = 0x4f43;
    *(undefined1 *)(param_1 + 1) = 0x4d;
    *(char *)((long)param_1 + 3) = (char)(uVar5 >> 0x10);
    *(char *)(param_1 + 2) = (char)(uVar5 >> 8);
    *(char *)((long)param_1 + 5) = (char)uVar5;
    *(undefined4 *)(param_1 + 3) = 0x676e6500;
    cVar4 = *param_2;
    if (cVar4 == '\0') {
      uVar3 = 10;
    }
    else {
      uVar3 = 10;
      do {
        *(char *)((long)param_1 + uVar3) = cVar4;
        cVar4 = param_2[uVar3 - 9];
        uVar3 = uVar3 + 1;
      } while (cVar4 != '\0');
    }
    uVar5 = (uint)uVar3;
    *(undefined1 *)((long)param_1 + (uVar3 & 0xffffffff)) = 0;
    uVar6 = uVar5 + 1;
    if (param_4 != 0) {
      lVar7 = 0;
      do {
        *(undefined1 *)((long)param_1 + lVar7 + (ulong)uVar6) = *(undefined1 *)(param_3 + lVar7);
        iVar1 = (int)uVar3;
        uVar5 = iVar1 + 1;
        uVar3 = (ulong)uVar5;
        lVar7 = lVar7 + 1;
      } while (param_4 != (int)lVar7);
      uVar6 = iVar1 + 2;
    }
    iVar1 = uVar5 + 2;
    *(undefined1 *)((long)param_1 + (ulong)uVar6) = 0;
  }
  return iVar1;
}

