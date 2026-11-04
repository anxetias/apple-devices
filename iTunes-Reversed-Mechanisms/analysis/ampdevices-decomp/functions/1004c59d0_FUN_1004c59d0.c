// name: FUN_1004c59d0
// address: 1004c59d0

undefined8 FUN_1004c59d0(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  
  if (*(long *)(param_2 + 0x18) == 0) {
LAB_1004c59f9:
    if (*(long *)(param_2 + 0x20) != 0) {
      lVar1 = FUN_100166c1b(*(long *)(param_2 + 0x20),param_3);
      if (lVar1 != 0) goto LAB_1004c5a0f;
    }
    FUN_1001b7a44(param_1);
  }
  else {
    lVar1 = FUN_100166c1b(*(long *)(param_2 + 0x18),param_3);
    if (lVar1 == 0) goto LAB_1004c59f9;
LAB_1004c5a0f:
    FUN_1001b7eb0(param_1,lVar1);
  }
  return param_1;
}

