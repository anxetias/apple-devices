// name: FUN_1004caa22
// address: 1004caa22

void FUN_1004caa22(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  char cVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long local_a8;
  long lStack_a0;
  undefined1 local_98 [8];
  undefined1 local_90 [16];
  long local_80;
  long local_78;
  long *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined2 uStack_5c;
  undefined2 uStack_5a;
  undefined6 uStack_58;
  long *local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar4 = FUN_1001ebd46();
  param_1[0xc] = lVar4;
  (**(code **)(*param_1 + 0x18))(&local_78,param_1,param_2,param_3);
  if (local_78 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_68._0_4_ = 0x8220202;
      local_68._4_4_ = 0x7a168c;
      local_60 = 1;
      uStack_5c = 0x822;
      uStack_5a = 0xea92;
      uStack_58 = 0x10079;
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
    }
    cVar1 = FUN_1001782e9(0,0);
    if (cVar1 == '\0') goto LAB_1004cac0b;
  }
  uVar2 = FUN_1001a7bfa(param_1 + 6);
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  local_60 = (undefined4)uVar2;
  uStack_5c = (undefined2)((ulong)uVar2 >> 0x20);
  uStack_5a = (undefined2)((ulong)uVar2 >> 0x30);
  cVar1 = FUN_10014a3be(param_1 + 6,param_2);
  if (cVar1 != '\0') {
    FUN_10014fdec(local_78,1);
  }
  uVar2 = FUN_1001a7bfa(param_1 + 8);
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  local_60 = (undefined4)uVar2;
  uStack_5c = (undefined2)((ulong)uVar2 >> 0x20);
  uStack_5a = (undefined2)((ulong)uVar2 >> 0x30);
  cVar1 = FUN_10014a3be(param_1 + 8,param_2);
  if (cVar1 != '\0') {
    FUN_10014fd7c(local_78,0);
  }
  lVar4 = local_78;
  FUN_1004ca604(&local_a8,param_1[1],param_1[2]);
  FUN_1001a8c1c(local_98,param_2);
  FUN_1001a7a9e(local_90,param_3);
  local_48 = (long *)0x0;
  local_80 = param_4;
  plVar3 = operator_new(0x38);
  *plVar3 = (long)&PTR_FUN_10085e680;
  plVar3[1] = local_a8;
  plVar3[2] = lStack_a0;
  local_a8 = 0;
  lStack_a0 = 0;
  FUN_1001a8c1c(plVar3 + 3,local_98);
  FUN_1001a7a9e(plVar3 + 4,local_90);
  plVar3[6] = local_80;
  local_48 = plVar3;
  FUN_10014f7e4(lVar4,&local_68);
  if (local_48 == &local_68) {
    lVar4 = 0x20;
LAB_1004cabdb:
    (**(code **)(*local_48 + lVar4))();
  }
  else {
    lVar4 = 0x28;
    if (local_48 != (long *)0x0) goto LAB_1004cabdb;
  }
  FUN_1001a7a94(local_90);
  FUN_1001ab006(local_98);
  if (lStack_a0 != 0) {
    std::__shared_weak_count::__release_weak();
  }
  FUN_10014105c(local_78);
LAB_1004cac0b:
  if (local_70 != (long *)0x0) {
    LOCK();
    plVar3 = local_70 + 1;
    lVar4 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (lVar4 == 0) {
      (**(code **)(*local_70 + 0x10))(local_70);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

