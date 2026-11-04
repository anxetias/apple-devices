// name: FUN_10012d13c
// address: 10012d13c

undefined8 * FUN_10012d13c(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = operator_new(0x50);
  *puVar4 = &PTR_FUN_100838da8;
  FUN_10028593a(puVar4 + 2,param_1 + 0x10);
  lVar2 = *(long *)(param_1 + 0x48);
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  puVar4[8] = *(undefined8 *)(param_1 + 0x40);
  puVar4[9] = uVar3;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + 8);
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  return puVar4;
}

