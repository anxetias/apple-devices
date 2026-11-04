// name: FUN_10044e0b9
// address: 10044e0b9

void FUN_10044e0b9(long param_1)

{
  long *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  
  if (*(long *)(param_1 + 0x38) != 0) {
    plVar5 = (long *)std::__shared_weak_count::lock();
    if (plVar5 != (long *)0x0) {
      lVar4 = *(long *)(param_1 + 0x30);
      if (lVar4 != 0) {
        uVar2 = *(undefined4 *)(param_1 + 0x40);
        FUN_1001a8d64(local_50,*(undefined8 *)(param_1 + 0x20));
        uVar3 = *(undefined4 *)(param_1 + 0x44);
        FUN_1001a8d64(local_40,*(undefined8 *)(param_1 + 0x28));
        FUN_1005fe398(lVar4,uVar2,local_50,uVar3,local_40);
        FUN_1001a8fac(local_40);
        FUN_1001a8fac(local_50);
      }
      LOCK();
      plVar1 = plVar5 + 1;
      lVar4 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar4 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  return;
}

