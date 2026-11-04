// name: FUN_10053ee76
// address: 10053ee76

undefined4 FUN_10053ee76(long *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  bool bVar5;
  long *local_48;
  long *local_40;
  long *local_38;
  
  if ((*(int *)((long)param_1 + 0x14) == 0x4d46494c) ||
     (uVar3 = 0xffffffce, *(int *)((long)param_1 + 0x14) == 0x46494c45)) {
    local_38 = (long *)0x0;
    (**(code **)(*param_1 + 400))(param_1,param_2,param_3,param_4);
    (**(code **)(*param_1 + 0x130))(&local_48,param_1,0);
    local_38 = local_40;
    lVar4 = *param_1;
    if (local_48 == (long *)0x0) {
      bVar5 = false;
    }
    else {
      (**(code **)(lVar4 + 0x170))(param_1);
      iVar2 = (**(code **)(*local_48 + 0x20))
                        (local_48,param_2,param_3,param_4,(long)param_1 + 0x53c);
      bVar5 = iVar2 == 0;
      lVar4 = *param_1;
    }
    uVar3 = (**(code **)(lVar4 + 0x1b8))(param_1,param_2,param_3,param_4,bVar5);
    if (local_38 != (long *)0x0) {
      LOCK();
      plVar1 = local_38 + 1;
      lVar4 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar4 == 0) {
        (**(code **)(*local_38 + 0x10))(local_38);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  return uVar3;
}

