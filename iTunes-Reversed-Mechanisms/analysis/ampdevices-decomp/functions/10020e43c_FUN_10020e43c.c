// name: FUN_10020e43c
// address: 10020e43c

undefined8 * FUN_10020e43c(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  
  puVar3 = *(undefined8 **)(param_1 + 8);
  puVar5 = (undefined8 *)(param_1 + 8);
  puVar2 = (undefined8 *)(param_1 + 8);
  while (puVar1 = puVar3, puVar1 != (undefined8 *)0x0) {
    iVar4 = FUN_1001b9c66(param_3,puVar1 + 4);
    puVar5 = puVar1;
    if (iVar4 < 0) {
      puVar3 = (undefined8 *)*puVar1;
      puVar2 = puVar1;
    }
    else {
      iVar4 = FUN_1001b9c66(puVar1 + 4,param_3);
      if (-1 < iVar4) break;
      puVar3 = (undefined8 *)puVar1[1];
      puVar2 = puVar1 + 1;
    }
  }
  *param_2 = puVar5;
  return puVar2;
}

