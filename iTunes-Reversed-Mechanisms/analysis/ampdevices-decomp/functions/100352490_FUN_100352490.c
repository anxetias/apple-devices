// name: FUN_100352490
// address: 100352490

void FUN_100352490(undefined8 param_1,long param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 local_40 [8];
  int local_38;
  
  FUN_100352070(param_1,param_2 + 0x20,*(undefined1 *)(param_2 + 0x14),param_3);
  iVar1 = FUN_10031fa8a(param_2 + (long)*(short *)(param_2 + 0x22) * 0x1c + 0x24);
  if (iVar1 == 0x7e) {
    if (((ulong)*(uint *)(param_2 + 0x18) < 0x36) &&
       ((0x30000000000040U >> ((ulong)*(uint *)(param_2 + 0x18) & 0x3f) & 1) != 0))
    goto LAB_100352547;
    uVar2 = 0x7e;
LAB_100352520:
    FUN_10031c728(uVar2,local_40);
    if (local_38 == 0) goto LAB_100352547;
  }
  else {
    if (iVar1 == 3) {
      if (((ulong)*(uint *)(param_2 + 0x18) < 0x36) &&
         ((0x30000000000040U >> ((ulong)*(uint *)(param_2 + 0x18) & 0x3f) & 1) != 0))
      goto LAB_100352547;
      uVar2 = 3;
      goto LAB_100352520;
    }
    FUN_10031c728(iVar1,local_40);
  }
  *(int *)(param_2 + 0x18) = local_38;
LAB_100352547:
  *(undefined1 *)(param_2 + 0x1c) =
       *(undefined1 *)(param_2 + 0x2b + (long)*(short *)(param_2 + 0x22) * 0x1c);
  if (*(int *)(param_2 + 0x18) == 0) {
    *(undefined4 *)(param_2 + 0x18) = 5;
    *(undefined1 *)(param_2 + 0x1c) = 0;
  }
  return;
}

