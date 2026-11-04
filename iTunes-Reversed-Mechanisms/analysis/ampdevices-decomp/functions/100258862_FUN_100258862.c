// name: FUN_100258862
// address: 100258862

int FUN_100258862(undefined8 param_1,undefined4 *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  int local_a4;
  undefined1 local_9e;
  undefined4 local_9d;
  undefined1 local_99;
  undefined8 local_98;
  undefined4 local_90;
  undefined2 uStack_8c;
  undefined2 uStack_8a;
  uint local_88;
  undefined2 uStack_84;
  long *local_78;
  long local_68;
  undefined7 uStack_60;
  undefined4 uStack_59;
  undefined8 local_50;
  undefined8 uStack_48;
  long *local_40;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_a4 = 0;
  if (param_2 == (undefined4 *)0x0) {
    uVar8 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar8,0x10);
    if (cVar4 != '\0') {
      local_98._0_4_ = 0x8220202;
      local_98._4_4_ = 0x7a0a90;
      local_90 = 1;
      uStack_8c = 0x822;
      uStack_8a = 0x1d5e;
      local_88 = 0x1007a;
      uStack_84 = 0;
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_98,0x16);
    }
    FUN_1001782e9(0,0);
    iVar6 = -0x32;
    goto LAB_100258a6b;
  }
  lVar7 = FUN_1004de449(*param_2);
  if (lVar7 == 0) {
    uVar8 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar8,0x10);
    if (cVar4 != '\0') {
      local_98._0_4_ = 0x8220202;
      local_98._4_4_ = 0x7a0a90;
      local_90 = 1;
      uStack_8c = 0x822;
      uStack_8a = 0xde6a;
      local_88 = 0x1007a;
      uStack_84 = 0;
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_98,0x16);
    }
    FUN_1001782e9(0,0);
    iVar6 = 0x45f;
    goto LAB_100258a6b;
  }
  local_99 = 0;
  local_9e = *(undefined1 *)(param_2 + 1);
  local_9d = (uint)CONCAT12(*(undefined1 *)((long)param_2 + 5),0x100);
  plVar3 = *(long **)(param_2 + 4);
  local_b8 = param_2[2];
  uStack_b4 = param_2[3];
  uStack_b0 = param_2[4];
  uStack_ac = param_2[5];
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar3[1] = plVar3[1] + 1;
    UNLOCK();
  }
  iVar5 = FUN_1002520df(lVar7,param_1,&local_9e,(long)param_2 + 0x1a,&local_a4,&local_b8);
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      std::__shared_weak_count::__release_weak();
    }
  }
  *(undefined1 *)(param_2 + 6) = local_9d._3_1_;
  *(undefined1 *)((long)param_2 + 0x19) = local_99;
  iVar6 = 0;
  if (iVar5 != -0x1b) {
    iVar6 = iVar5;
  }
  if (local_a4 != 3) goto LAB_100258a6b;
  local_88 = *(uint *)(lVar7 + 0x28);
  local_98._0_4_ = 0x83ef58;
  local_98._4_4_ = 1;
  local_90 = 0x25b36b;
  uStack_8c = 1;
  uStack_8a = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = (long *)0x0;
  local_68 = (ulong)local_88 << 0x20;
  uStack_60 = 0;
  uStack_59 = 0x40;
  local_78 = &local_98;
  FUN_10017869a(&local_98);
  if (local_40 != (long *)0x0) {
    LOCK();
    plVar3 = local_40 + 1;
    lVar7 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*local_40 + 0x10))(local_40);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_78 == &local_98) {
    lVar7 = 0x20;
LAB_100258a63:
    (**(code **)(*local_78 + lVar7))();
  }
  else {
    lVar7 = 0x28;
    if (local_78 != (long *)0x0) goto LAB_100258a63;
  }
  iVar6 = 0;
LAB_100258a6b:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar6;
}

