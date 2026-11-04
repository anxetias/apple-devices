// name: FUN_1001491ca
// address: 1001491ca

void FUN_1001491ca(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  FUN_1001a7a9e();
  FUN_1001a7a9e(param_1 + 0x10,param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  lVar2 = *(long *)(param_2 + 0x30);
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = uVar3;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + 8);
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  return;
}

