// name: FUN_1002830fa
// address: 1002830fa

void FUN_1002830fa(long param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(long *)(param_2 + 0x50);
  if (lVar1 == 0) {
    puVar2 = (undefined8 *)(param_1 + 0x50);
  }
  else {
    puVar2 = (undefined8 *)(param_2 + 0x50);
    if (lVar1 == param_2 + 0x30) {
      *(long *)(param_1 + 0x50) = param_1 + 0x30;
      (**(code **)(*(long *)*puVar2 + 0x18))();
      return;
    }
    *(long *)(param_1 + 0x50) = lVar1;
  }
  *puVar2 = 0;
  return;
}

