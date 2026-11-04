// name: FUN_10020598b
// address: 10020598b

void FUN_10020598b(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x694);
  if (iVar1 != 0) {
    iVar3 = FUN_1001b1a0f();
    if (iVar1 != iVar3) {
      FUN_1001b16d1(*(undefined4 *)(param_1 + 0x694));
      return;
    }
  }
  uVar2 = FUN_1001727a0();
  FUN_100172863(uVar2);
  return;
}

