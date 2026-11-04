// name: FUN_1004db846
// address: 1004db846

void FUN_1004db846(long param_1,int param_2)

{
  long *plVar1;
  char cVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined2 uStack_7c;
  undefined2 uStack_7a;
  undefined6 local_78;
  undefined2 uStack_72;
  long *local_68;
  undefined8 local_58;
  undefined7 uStack_50;
  undefined4 uStack_49;
  undefined8 local_40;
  undefined8 uStack_38;
  long *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == 0) {
    FUN_100178470(&local_90,param_1);
    FUN_100178aa3(&local_90);
    FUN_1004dbbce(param_1);
    goto LAB_1004dba38;
  }
  cVar2 = FUN_1003144da(*(undefined8 *)(param_1 + 0x70));
  if (cVar2 != '\0') {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_88._0_2_ = 0x202;
      local_88._2_2_ = 0x822;
      local_88._4_4_ = 0x7a0a90;
      local_80 = 1;
      uStack_7c = 0x822;
      uStack_7a = 0x5fa5;
      local_78 = 0x1007d;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_88,0x16);
    }
    FUN_1001782e9(0,0);
    if (DAT_1008c7660 != -1) {
      _dispatch_once(&DAT_1008c7660,&PTR___NSConcreteGlobalBlock_1008575c0);
    }
    uVar3 = DAT_1008c7658;
    cVar2 = _os_log_type_enabled(DAT_1008c7658,0x10);
    if (cVar2 != '\0') {
      local_88._0_2_ = 0;
      __os_log_impl(0x100000000,uVar3,0x10,
                    "ch> **ERROR**: TriggerSendChanges(true) when HaveTrackDataBeginChanges is true!"
                    ,&local_88,2);
    }
  }
  FUN_100178470(&local_90,param_1);
  FUN_100178aa3(&local_90);
  if (*(long *)(param_1 + 0x50) == 0) {
LAB_1004dbab9:
                    /* WARNING: Subroutine does not return */
    FUN_10013bd04();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  plVar4 = (long *)std::__shared_weak_count::lock();
  if (plVar4 == (long *)0x0) goto LAB_1004dbab9;
  LOCK();
  plVar4[2] = plVar4[2] + 1;
  UNLOCK();
  LOCK();
  plVar1 = plVar4 + 1;
  lVar5 = *plVar1;
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (lVar5 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__shared_weak_count::__release_weak();
  }
  LOCK();
  plVar4[2] = plVar4[2] + 1;
  UNLOCK();
  LOCK();
  plVar4[2] = plVar4[2] + 1;
  UNLOCK();
  local_88._0_2_ = 0xef00;
  local_88._2_2_ = 0x85;
  local_88._4_4_ = 1;
  local_80 = (undefined4)uVar3;
  uStack_7c = (undefined2)((ulong)uVar3 >> 0x20);
  uStack_7a = (undefined2)((ulong)uVar3 >> 0x30);
  local_78 = SUB86(plVar4,0);
  uStack_72 = (undefined2)((ulong)plVar4 >> 0x30);
  local_58 = 0;
  uStack_50 = 0;
  uStack_49 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_30 = (long *)0x0;
  local_68 = &local_88;
  std::__shared_weak_count::__release_weak();
  uStack_50 = 0x847ae147ae147b;
  uStack_49 = CONCAT31(uStack_49._1_3_,0x3f);
  local_40 = local_90;
  FUN_10017869a(&local_88);
  if (local_30 != (long *)0x0) {
    LOCK();
    plVar4 = local_30 + 1;
    lVar5 = *plVar4;
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (lVar5 == 0) {
      (**(code **)(*local_30 + 0x10))(local_30);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_68 == &local_88) {
    lVar5 = 0x20;
LAB_1004dba2a:
    (**(code **)(*local_68 + lVar5))();
  }
  else {
    lVar5 = 0x28;
    if (local_68 != (long *)0x0) goto LAB_1004dba2a;
  }
  std::__shared_weak_count::__release_weak();
LAB_1004dba38:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

