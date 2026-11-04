// name: FUN_10014dfb2
// address: 10014dfb2

void FUN_10014dfb2(long param_1,long *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  
  uVar2 = *(undefined8 *)(param_1 + 0xb0);
  lVar3 = *param_2;
  plVar4 = (long *)param_2[1];
  if (plVar4 != (long *)0x0) {
    LOCK();
    plVar4[1] = plVar4[1] + 1;
    UNLOCK();
  }
  (*(code *)PTR__objc_msgSend_10082c770)
            (uVar2,PTR_s_addOperation__10088bbf8,*(undefined8 *)(lVar3 + 8));
  if (plVar4 != (long *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      std::__shared_weak_count::__release_weak();
      return;
    }
  }
  return;
}

