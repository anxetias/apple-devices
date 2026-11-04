// name: FUN_1001330c6
// address: 1001330c6

void FUN_1001330c6(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  FUN_1001363a8();
  *(undefined2 *)(param_1 + 0x78) = *(undefined2 *)(param_2 + 0x78);
  FUN_1001b7a5c(param_1 + 0x80,param_2 + 0x80);
  FUN_1001b7a5c(param_1 + 0x90,param_2 + 0x90);
  *(undefined2 *)(param_1 + 0xa0) = *(undefined2 *)(param_2 + 0xa0);
  FUN_1001b7a5c(param_1 + 0xa8,param_2 + 0xa8);
  lVar2 = *(long *)(param_2 + 0xc0);
  uVar6 = *(undefined8 *)(param_2 + 0xc0);
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
  *(undefined8 *)(param_1 + 0xc0) = uVar6;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + 8);
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  lVar2 = *(long *)(param_2 + 0xd0);
  uVar6 = *(undefined8 *)(param_2 + 0xd0);
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_2 + 200);
  *(undefined8 *)(param_1 + 0xd0) = uVar6;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + 8);
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  lVar2 = *(long *)(param_2 + 0xe0);
  uVar6 = *(undefined8 *)(param_2 + 0xe0);
  *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_2 + 0xd8);
  *(undefined8 *)(param_1 + 0xe0) = uVar6;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + 8);
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  lVar2 = *(long *)(param_2 + 0xf0);
  uVar3 = *(undefined4 *)(param_2 + 0xec);
  uVar4 = *(undefined4 *)(param_2 + 0xf0);
  uVar5 = *(undefined4 *)(param_2 + 0xf4);
  *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_2 + 0xe8);
  *(undefined4 *)(param_1 + 0xec) = uVar3;
  *(undefined4 *)(param_1 + 0xf0) = uVar4;
  *(undefined4 *)(param_1 + 0xf4) = uVar5;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + 8);
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  FUN_10013328a(param_1 + 0xf8,param_2 + 0xf8);
  FUN_1001b7a5c(param_1 + 0x118,param_2 + 0x118);
  return;
}

