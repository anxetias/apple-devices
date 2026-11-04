// name: FUN_100360842
// address: 100360842

int FUN_100360842(long param_1,undefined8 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (*(char *)(param_1 + 0x187b) == '\0') {
    iVar3 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x17fc);
    iVar2 = *(int *)(param_1 + 0x180c);
    iVar3 = FUN_100414cf3(param_1 + 0x1290,*(undefined8 *)(param_1 + 0x18),iVar2,param_3);
    if ((*(int *)(param_1 + 0x1894) != 0) || (*(int *)(param_1 + 0x1898) != 0)) {
      FUN_100360424(param_1,(long)*(double *)(param_1 + 0x17b8),iVar3);
    }
    uVar4 = iVar3 * iVar2;
    if ((uVar1 & 1) == 0) {
      if ((uVar1 & 2) == 0) {
        FUN_10015e0c9();
      }
      else {
        FUN_10015e02e(*(undefined8 *)(param_1 + 0x18),param_2,uVar4);
      }
    }
    else {
      FUN_1001c631b(*(undefined8 *)(param_1 + 0x18),param_2,(ulong)uVar4 << 2);
    }
  }
  return iVar3;
}

