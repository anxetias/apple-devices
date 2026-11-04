// name: FUN_100149a90
// address: 100149a90

void FUN_100149a90(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = operator_new(0x20);
  *puVar4 = &PTR_FUN_10083ad50;
  lVar2 = *(long *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar4[1] = *(undefined8 *)(param_1 + 8);
  puVar4[2] = uVar3;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + 8);
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  *(undefined1 *)((long)puVar4 + 0x1c) = *(undefined1 *)(param_1 + 0x1c);
  *(undefined4 *)(puVar4 + 3) = *(undefined4 *)(param_1 + 0x18);
  return;
}

