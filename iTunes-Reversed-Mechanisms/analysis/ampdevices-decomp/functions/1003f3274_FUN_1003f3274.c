// name: FUN_1003f3274
// address: 1003f3274

undefined8 FUN_1003f3274(long param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if (*(int *)(*param_2 + 0x174) == 0) {
    lVar1 = *(long *)(**(long **)(param_1 + 8) + 0x20);
  }
  else {
    lVar1 = *(long *)*param_2;
    *(long *)(**(long **)(param_1 + 8) + 0x20) = lVar1;
  }
  uVar2 = 0x2349;
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  return uVar2;
}

