// name: FUN_1001bdf16
// address: 1001bdf16

void FUN_1001bdf16(long param_1)

{
  long *plVar1;
  long lVar2;
  
  FUN_1001eed65(param_1 + 0x10);
  plVar1 = *(long **)(param_1 + 0x40);
  if (plVar1 == (long *)(param_1 + 0x20)) {
    lVar2 = 0x20;
  }
  else {
    lVar2 = 0x28;
    if (plVar1 == (long *)0x0) goto LAB_1001bdf4c;
  }
  (**(code **)(*plVar1 + lVar2))();
LAB_1001bdf4c:
  if (*(long *)(param_1 + 8) == 0) {
    return;
  }
  std::__shared_weak_count::__release_weak();
  return;
}

