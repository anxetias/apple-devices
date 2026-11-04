// name: FUN_10013b750
// address: 10013b750

undefined8 * FUN_10013b750(undefined8 *param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  undefined8 uVar4;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  long local_30;
  long *local_28;
  
  if (param_2 == 1) {
    FUN_10013b92a(&local_30);
    if (local_30 == 0) {
      local_48 = 0;
      uStack_44 = 0;
      uStack_40 = 0;
      uStack_3c = 0;
    }
    else {
      FUN_10013aaa4(&local_48);
    }
    *(undefined4 *)param_1 = local_48;
    *(undefined4 *)((long)param_1 + 4) = uStack_44;
    *(undefined4 *)(param_1 + 1) = uStack_40;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_3c;
    *(undefined4 *)(param_1 + 2) = 1;
  }
  else {
    if (param_2 != 0) {
      uVar4 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar4,0x10);
      if (cVar3 != '\0') {
        FUN_10013d894(uVar4);
      }
      FUN_1001782e9(0,1);
      *param_1 = 0;
      param_1[1] = 0;
      *(int *)(param_1 + 2) = param_2;
      return param_1;
    }
    FUN_10013b859(&local_30);
    if (local_30 == 0) {
      local_48 = 0;
      uStack_44 = 0;
      uStack_40 = 0;
      uStack_3c = 0;
    }
    else {
      FUN_10013aaa4(&local_48);
    }
    *(undefined4 *)param_1 = local_48;
    *(undefined4 *)((long)param_1 + 4) = uStack_44;
    *(undefined4 *)(param_1 + 1) = uStack_40;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_3c;
    *(undefined4 *)(param_1 + 2) = 0;
  }
  if (local_28 != (long *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*local_28 + 0x10))(local_28);
      std::__shared_weak_count::__release_weak();
    }
  }
  return param_1;
}

