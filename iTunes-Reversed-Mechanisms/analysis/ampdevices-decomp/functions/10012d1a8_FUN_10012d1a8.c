// name: FUN_10012d1a8
// address: 10012d1a8

void FUN_10012d1a8(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  *param_2 = &PTR_FUN_100838da8;
  FUN_10028593a(param_2 + 2,param_1 + 0x10);
  lVar2 = *(long *)(param_1 + 0x48);
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  param_2[8] = *(undefined8 *)(param_1 + 0x40);
  param_2[9] = uVar3;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + 8);
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  return;
}

