// name: FUN_10029af0c
// address: 10029af0c

void FUN_10029af0c(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  if (*(char *)(param_1 + 0xc) != '\0') {
    return;
  }
  uVar3 = (ulong)*(uint *)(param_1 + 0x10);
  if (uVar3 != 0) {
    lVar2 = param_1 + 0x28;
    do {
      if (*(char *)(lVar2 + 0x23) == '\0') {
        if (*(char *)(lVar2 + -4) == '\0') {
          iVar1 = FUN_100239983(lVar2,1,0);
          *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + iVar1;
        }
        else {
          *(undefined1 *)(param_1 + 0xd) = 1;
        }
      }
      lVar2 = lVar2 + 0x78;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  *(undefined1 *)(param_1 + 0xc) = 1;
  return;
}

