// name: FUN_10056e4e8
// address: 10056e4e8

void FUN_10056e4e8(long *param_1,undefined8 *param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  
  lVar2 = param_1[1];
  if (lVar2 != 0) {
    lVar6 = 0;
    do {
      *(undefined8 *)(*param_1 + lVar6 * 8) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar2 != lVar6);
    puVar5 = (undefined8 *)param_1[2];
    param_1[2] = 0;
    param_1[3] = 0;
    while (puVar5 != (undefined8 *)0x0) {
      if (param_2 == (undefined8 *)0x0) {
        do {
          puVar3 = (undefined8 *)*puVar5;
          operator_delete(puVar5);
          puVar5 = puVar3;
        } while (puVar3 != (undefined8 *)0x0);
        return;
      }
      uVar1 = *(uint *)(param_2 + 2);
      *(uint *)(puVar5 + 2) = uVar1;
      puVar3 = (undefined8 *)*puVar5;
      puVar5[1] = (ulong)uVar1;
      uVar4 = FUN_10056e614(param_1,(ulong)uVar1,puVar5 + 2);
      FUN_10021bfdc(param_1,puVar5,uVar4);
      param_2 = (undefined8 *)*param_2;
      puVar5 = puVar3;
    }
  }
  for (; param_2 != (undefined8 *)0x0; param_2 = (undefined8 *)*param_2) {
    uVar1 = *(uint *)(param_2 + 2);
    puVar5 = operator_new(0x18);
    *puVar5 = 0;
    *(uint *)(puVar5 + 2) = uVar1;
    puVar5[1] = (ulong)uVar1;
    uVar4 = FUN_10056e614(param_1,(ulong)uVar1,puVar5 + 2);
    FUN_10021bfdc(param_1,puVar5,uVar4);
  }
  return;
}

