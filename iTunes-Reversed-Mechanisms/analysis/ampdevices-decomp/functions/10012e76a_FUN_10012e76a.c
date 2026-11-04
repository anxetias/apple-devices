// name: FUN_10012e76a
// address: 10012e76a

undefined8 FUN_10012e76a(long param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *local_70;
  undefined8 local_68;
  long *plStack_60;
  undefined8 local_58;
  long *plStack_50;
  undefined8 local_48;
  long *plStack_40;
  undefined1 local_38;
  undefined8 local_30;
  undefined1 local_21;
  
  local_48 = 0;
  plStack_40 = (long *)0x0;
  local_58 = 0;
  plStack_50 = (long *)0x0;
  local_68 = 0;
  plStack_60 = (long *)0x0;
  local_38 = 0;
  FUN_100203686();
  std::mutex::lock();
  local_30 = *param_2;
  local_70 = &local_30;
  lVar3 = FUN_100131cc4(param_1 + 0x20,local_70,&DAT_100712240,&local_70,&local_21);
  FUN_100203686(lVar3 + 0x18,&local_68);
  FUN_100203686(lVar3 + 0x28,&local_58);
  FUN_100203686(lVar3 + 0x38,&local_48);
  uVar2 = local_30;
  *(undefined1 *)(lVar3 + 0x48) = local_38;
  std::mutex::unlock();
  if (plStack_40 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plStack_40 + 0x10))(plStack_40);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (plStack_50 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_50 + 1;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plStack_50 + 0x10))(plStack_50);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (plStack_60 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_60 + 1;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plStack_60 + 0x10))(plStack_60);
      std::__shared_weak_count::__release_weak();
    }
  }
  return uVar2;
}

