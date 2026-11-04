// name: FUN_10013c482
// address: 10013c482

void FUN_10013c482(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  *param_2 = &PTR_FUN_10083a118;
  lVar2 = *(long *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = *(undefined8 *)(param_1 + 8);
  param_2[2] = uVar3;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + 8);
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  lVar2 = *(long *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[4] = uVar3;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + 0x10);
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  return;
}

