// name: FUN_10035728d
// address: 10035728d

int FUN_10035728d(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  iVar1 = 0;
  if ((*(char *)(param_2 + 0x11) == '\x0f') && (iVar1 = *(int *)(param_1 + 0x4568), iVar1 == 0)) {
    uVar3 = (ulong)*(uint *)(param_1 + 0x4570);
    iVar1 = 0;
    if (uVar3 != 0) {
      lVar2 = param_1 + 0x4588;
      iVar1 = 0;
      do {
        if (*(char *)(lVar2 + 0x23) != '\0') {
          iVar1 = FUN_100239983(lVar2,1,0);
          iVar1 = iVar1 + *(int *)(param_1 + 0x4568);
          *(int *)(param_1 + 0x4568) = iVar1;
        }
        lVar2 = lVar2 + 0x78;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
  }
  return iVar1;
}

