// name: FUN_10013a398
// address: 10013a398

void FUN_10013a398(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 local_48;
  long *local_40;
  undefined8 local_38;
  long *local_30;
  undefined1 local_28 [8];
  
  uVar3 = *param_3;
  plVar4 = (long *)param_3[1];
  *param_3 = 0;
  param_3[1] = 0;
  uVar5 = *(undefined8 *)(param_1 + 8);
  local_38 = uVar3;
  local_30 = plVar4;
  FUN_1001a8c1c(local_28);
  if (plVar4 != (long *)0x0) {
    LOCK();
    plVar4[1] = plVar4[1] + 1;
    UNLOCK();
  }
  local_48 = uVar3;
  local_40 = plVar4;
  FUN_10013969e(uVar5,local_28,&local_48);
  if (plVar4 != (long *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      std::__shared_weak_count::__release_weak();
    }
  }
  FUN_1001aaad2(local_28);
  if (local_30 != (long *)0x0) {
    LOCK();
    plVar4 = local_30 + 1;
    lVar2 = *plVar4;
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*local_30 + 0x10))(local_30);
      std::__shared_weak_count::__release_weak();
    }
  }
  return;
}

