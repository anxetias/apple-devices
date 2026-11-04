// name: FUN_100286d70
// address: 100286d70

void FUN_100286d70(undefined8 *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  *param_1 = &PTR_FUN_100844f40;
  uVar2 = (ulong)*(uint *)(param_1 + 4);
  if (*(uint *)(param_1 + 4) != 0) {
    uVar3 = 0;
    do {
      puVar1 = (undefined8 *)param_1[uVar3 + 5];
      if (puVar1 != (undefined8 *)0x0) {
        _free((void *)*puVar1);
        operator_delete(puVar1);
        uVar2 = (ulong)*(uint *)(param_1 + 4);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  return;
}

