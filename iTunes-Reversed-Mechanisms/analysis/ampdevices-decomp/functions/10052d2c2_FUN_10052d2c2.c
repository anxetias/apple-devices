// name: FUN_10052d2c2
// address: 10052d2c2

undefined8
FUN_10052d2c2(long param_1,ulong param_2,undefined8 param_3,ulong param_4,undefined8 param_5,
             ulong *param_6)

{
  ulong uVar1;
  ulong *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  puVar2 = (ulong *)(param_1 + 0x5b0);
  if (*(char *)(param_1 + 0x500) != '\0') {
    puVar2 = (ulong *)(param_1 + 0x508);
  }
  uVar1 = *puVar2;
  uVar3 = 0xffffffd9;
  if (param_2 < uVar1) {
    uVar4 = (ulong)(uint)((int)uVar1 - (int)param_2);
    if (param_4 + param_2 <= uVar1) {
      uVar4 = param_4;
    }
    FUN_1001c631b(param_2 + *(long *)(param_1 + 0x598),param_3,uVar4);
    uVar3 = 0;
    if (param_6 != (ulong *)0x0) {
      *param_6 = uVar4;
    }
  }
  return uVar3;
}

