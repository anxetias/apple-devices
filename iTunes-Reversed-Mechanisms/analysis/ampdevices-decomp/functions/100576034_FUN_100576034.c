// name: FUN_100576034
// address: 100576034

undefined8 * FUN_100576034(undefined8 *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *(long *)(param_2 + 0x20);
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  *param_1 = *(undefined8 *)(param_2 + 0x18);
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + 8);
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  return param_1;
}

