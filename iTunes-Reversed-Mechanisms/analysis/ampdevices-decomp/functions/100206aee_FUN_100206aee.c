// name: FUN_100206aee
// address: 100206aee

undefined8 FUN_100206aee(long param_1,ulong param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_1001c4cf4(*(undefined8 *)(param_1 + 0x28));
  uVar3 = 0;
  if ((param_2 & 0xffffffff) < uVar2) {
    iVar1 = FUN_1001c4eea(*(undefined8 *)(param_1 + 0x28));
    uVar3 = 0x60a;
    if (iVar1 == 0) {
      uVar3 = 0;
    }
  }
  return uVar3;
}

