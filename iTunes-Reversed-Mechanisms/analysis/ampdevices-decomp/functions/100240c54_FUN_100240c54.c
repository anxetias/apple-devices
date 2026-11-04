// name: FUN_100240c54
// address: 100240c54

void FUN_100240c54(undefined8 *param_1,int param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 local_28 [8];
  long *local_20;
  
  *param_1 = 0;
  param_1[1] = 0;
  if (param_2 == 0x12) {
    FUN_1004bffe8(local_28,param_3);
    FUN_100217418(param_1,local_28);
    if (local_20 != (long *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*local_20 + 0x10))(local_20);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  return;
}

