// name: FUN_1002dff4a
// address: 1002dff4a

ulong FUN_1002dff4a(long param_1,long param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar1 = (**(code **)(param_3 + 0x10))();
  uVar2 = (**(code **)(param_3 + 0x10))(param_2);
  uVar3 = 0xffffffff;
  if ((uVar2 <= uVar1) && (uVar3 = 1, uVar1 <= uVar2)) {
    uVar3 = 0xffffffff;
    if (*(uint *)(param_2 + 8) <= *(uint *)(param_1 + 8)) {
      uVar3 = (ulong)(*(uint *)(param_1 + 8) != *(uint *)(param_2 + 8));
    }
  }
  return uVar3;
}

