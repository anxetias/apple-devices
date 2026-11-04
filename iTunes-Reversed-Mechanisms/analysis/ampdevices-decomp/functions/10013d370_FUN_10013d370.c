// name: FUN_10013d370
// address: 10013d370

undefined8 * FUN_10013d370(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = operator_new(0x60);
  *puVar4 = &PTR_FUN_10083a470;
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
  *(undefined4 *)(puVar4 + 10) = *(undefined4 *)(param_1 + 0x50);
  return puVar4;
}

