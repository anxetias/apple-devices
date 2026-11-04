// name: FUN_10014df80
// address: 10014df80

void FUN_10014df80(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *(long *)(param_2 + 0x28);
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + 0x10);
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  return;
}

