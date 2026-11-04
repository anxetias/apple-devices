// name: FUN_100284b52
// address: 100284b52

void FUN_100284b52(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar2 = *(long *)(param_1 + 8);
  FUN_1001a8c1c(lVar2);
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(lVar2 + 0x10) = uVar4;
  lVar3 = *(long *)(param_2 + 0x20);
  uVar4 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(lVar2 + 0x20) = uVar4;
  if (lVar3 != 0) {
    LOCK();
    plVar1 = (long *)(lVar3 + 8);
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  *(undefined1 *)(lVar2 + 0x2c) = *(undefined1 *)(param_2 + 0x2c);
  *(undefined4 *)(lVar2 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(long *)(param_1 + 8) = lVar2 + 0x30;
  return;
}

