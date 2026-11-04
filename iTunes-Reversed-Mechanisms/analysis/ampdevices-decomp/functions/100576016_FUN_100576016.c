// name: FUN_100576016
// address: 100576016

undefined8 * FUN_100576016(undefined8 *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *(long *)(param_2 + 0x10);
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  *param_1 = *(undefined8 *)(param_2 + 8);
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + 8);
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  return param_1;
}

