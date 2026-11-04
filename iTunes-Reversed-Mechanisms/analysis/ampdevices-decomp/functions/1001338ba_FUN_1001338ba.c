// name: FUN_1001338ba
// address: 1001338ba

void FUN_1001338ba(long param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(long *)(param_2 + 0x20);
  if (lVar1 == 0) {
    puVar2 = (undefined8 *)(param_1 + 0x20);
  }
  else {
    puVar2 = (undefined8 *)(param_2 + 0x20);
    if (lVar1 == param_2) {
      *(long *)(param_1 + 0x20) = param_1;
      (**(code **)(*(long *)*puVar2 + 0x18))((long *)*puVar2,param_1);
      return;
    }
    *(long *)(param_1 + 0x20) = lVar1;
  }
  *puVar2 = 0;
  return;
}

