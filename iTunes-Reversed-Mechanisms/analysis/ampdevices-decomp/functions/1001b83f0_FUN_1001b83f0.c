// name: FUN_1001b83f0
// address: 1001b83f0

undefined8 FUN_1001b83f0(long *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 == (undefined8 *)0x0) {
    if (*param_1 != 0) {
      FUN_1001b87d0(param_1);
      puVar1 = (undefined8 *)param_1[1];
      if (puVar1 != (undefined8 *)0x0) goto LAB_1001b83ff;
    }
    uVar2 = 0;
  }
  else {
LAB_1001b83ff:
    uVar2 = *puVar1;
  }
  return uVar2;
}

