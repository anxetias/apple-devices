// name: FUN_100239450
// address: 100239450

void FUN_100239450(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = operator_new(0x28);
  *puVar4 = &PTR_FUN_10083e918;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar4[1] = *(undefined8 *)(param_1 + 8);
  puVar4[2] = uVar3;
  lVar2 = *(long *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puVar4[3] = *(undefined8 *)(param_1 + 0x18);
  puVar4[4] = uVar3;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + 8);
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  return;
}

