// name: FUN_10013acce
// address: 10013acce

void FUN_10013acce(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  std::mutex::lock();
  if ((*(int *)(*(long *)(param_1 + 0x10) + 0x30) == 3) && (*(int *)(*param_2 + 0x30) == 3)) {
    *(char *)(*param_2 + 0x34) = *(char *)(*(long *)(param_1 + 0x10) + 0x34) + '\x01';
  }
  FUN_100203686(param_1 + 0x10,param_2);
  *(undefined1 *)(param_1 + 0x78) = 0;
  std::mutex::unlock();
  plVar3 = (long *)param_2[1];
  local_38 = (undefined4)*param_2;
  uStack_34 = *(undefined4 *)((long)param_2 + 4);
  uStack_30 = (undefined4)param_2[1];
  uStack_2c = *(undefined4 *)((long)param_2 + 0xc);
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar3[1] = plVar3[1] + 1;
    UNLOCK();
  }
  FUN_10013ad98(param_1,&local_38,0);
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      std::__shared_weak_count::__release_weak();
      return;
    }
  }
  return;
}

