// name: FUN_100111904
// address: 100111904

void FUN_100111904(long param_1,long param_2)

{
  uint uVar1;
  undefined2 uVar2;
  
  uVar1 = *(uint *)(param_2 + 0x30);
  if ((ulong)uVar1 == 0) {
    uVar2 = FUN_100123f88(param_1,param_2 + 100);
  }
  else if (uVar1 < 8) {
    uVar2 = *(undefined2 *)(&DAT_100700a20 + (ulong)uVar1 * 4);
  }
  else {
    uVar2 = 0;
  }
  *(undefined2 *)(param_1 + 0x1f50) = uVar2;
  return;
}

