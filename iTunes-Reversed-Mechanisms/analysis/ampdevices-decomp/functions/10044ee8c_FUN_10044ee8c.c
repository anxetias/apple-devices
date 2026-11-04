// name: FUN_10044ee8c
// address: 10044ee8c

void FUN_10044ee8c(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  __Block_object_assign((void *)(param_1 + 0x20),*(void **)(param_2 + 0x20),8);
  lVar2 = *(long *)(param_2 + 0x30);
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = uVar3;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + 0x10);
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  return;
}

