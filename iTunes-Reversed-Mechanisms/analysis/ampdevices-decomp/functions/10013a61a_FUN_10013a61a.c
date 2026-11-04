// name: FUN_10013a61a
// address: 10013a61a

void FUN_10013a61a(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 local_50;
  long *local_48;
  undefined8 local_40;
  long *local_38;
  undefined1 local_30 [8];
  
  uVar3 = *param_3;
  plVar4 = (long *)param_3[1];
  *param_3 = 0;
  param_3[1] = 0;
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  local_40 = uVar3;
  local_38 = plVar4;
  FUN_1001a8c1c(local_30);
  if (plVar4 != (long *)0x0) {
    LOCK();
    plVar4[1] = plVar4[1] + 1;
    UNLOCK();
  }
  local_50 = uVar3;
  local_48 = plVar4;
  FUN_10013969e(uVar5,local_30,&local_50);
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
  plVar4 = *(long **)(param_1 + 0x30);
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x30))(plVar4,local_30);
  }
  FUN_1001aaad2(local_30);
  if (local_38 != (long *)0x0) {
    LOCK();
    plVar4 = local_38 + 1;
    lVar2 = *plVar4;
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*local_38 + 0x10))(local_38);
      std::__shared_weak_count::__release_weak();
    }
  }
  return;
}

