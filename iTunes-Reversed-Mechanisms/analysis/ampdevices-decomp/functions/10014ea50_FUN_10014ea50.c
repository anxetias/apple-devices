// name: FUN_10014ea50
// address: 10014ea50

void FUN_10014ea50(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  (*(code *)PTR__objc_retain_10082c7b8)(*(undefined8 *)(param_2 + 0x20));
  lVar2 = *(long *)(param_2 + 0x38);
  uVar3 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = uVar3;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + 0x10);
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  return;
}

