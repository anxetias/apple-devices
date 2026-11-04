// name: FUN_10018b9e0
// address: 10018b9e0

void FUN_10018b9e0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 local_40 [16];
  
  lVar1 = *(long *)(param_1 + 0x90);
  uVar2 = *(undefined8 *)(param_1 + 0x98);
  uVar3 = *(undefined8 *)(param_1 + 0xa0);
  FUN_1001b8dfc(local_40,*(undefined8 *)(param_1 + 0xa8));
  iVar4 = FUN_10017fb25(uVar2,uVar3,local_40,*(undefined8 *)(param_1 + 0xb0));
  FUN_1001b7a50(local_40);
  if ((((iVar4 == -0x30) && (iVar4 = -0x30, *(int *)(lVar1 + 0x2d0) == 0)) &&
      (*(char *)(lVar1 + 0xf) == '\x02')) &&
     (iVar4 = FUN_100186db9(lVar1,*(undefined8 *)(param_1 + 0xa0),*(undefined8 *)(param_1 + 0xa8)),
     iVar4 == 0)) {
    uVar2 = *(undefined8 *)(param_1 + 0x98);
    uVar3 = *(undefined8 *)(param_1 + 0xa0);
    FUN_1001b8dfc(local_40,*(undefined8 *)(param_1 + 0xa8));
    iVar4 = FUN_10017fb25(uVar2,uVar3,local_40,*(undefined8 *)(param_1 + 0xb0));
    FUN_1001b7a50(local_40);
  }
  *(int *)(param_1 + 0xb8) = iVar4;
  if (*(char *)(lVar1 + 3) == '\0') {
    FUN_1001e8f15(param_1 + 0x70);
  }
  else {
    FUN_1001e9809(param_1 + 0x60);
  }
  return;
}

