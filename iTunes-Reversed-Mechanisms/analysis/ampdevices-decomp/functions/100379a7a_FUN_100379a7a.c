// name: FUN_100379a7a
// address: 100379a7a

void FUN_100379a7a(void *param_1,char param_2)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 local_88;
  undefined4 local_80;
  undefined2 uStack_7c;
  undefined2 uStack_7a;
  uint6 local_78;
  undefined2 uStack_72;
  long *local_68;
  undefined8 local_58;
  undefined7 uStack_50;
  undefined1 uStack_49;
  undefined1 uStack_48;
  undefined1 uStack_47;
  undefined1 uStack_46;
  undefined8 local_40;
  undefined8 uStack_38;
  long *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar3 = *(int *)((long)param_1 + 8);
  if (iVar3 < 1) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_88._0_4_ = 0x8220202;
      local_88._4_4_ = 0x7a0a90;
      local_80 = 1;
      uStack_7c = 0x822;
      uStack_7a = 0x67d4;
      local_78 = 0x1007c;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_88,0x16);
    }
    FUN_1001782e9(0,0);
    iVar3 = *(int *)((long)param_1 + 8);
  }
  *(int *)((long)param_1 + 8) = iVar3 + -1;
  if (iVar3 + -1 != 0) goto LAB_100379c08;
  lVar5 = *(long *)((long)param_1 + 0x6b0);
  if (param_2 != '\0') {
    FUN_1001c2502(&DAT_1008bde80,param_1);
  }
  FUN_1003795cb((long)param_1 + 0x638,1);
  FUN_1003795cb((long)param_1 + 0x670,1);
  FUN_10017060f(*(undefined8 *)((long)param_1 + 0x6a8));
  *(undefined8 *)((long)param_1 + 0x6a8) = 0;
  FUN_10017060f(*(undefined8 *)((long)param_1 + 0x6b0));
  *(undefined8 *)((long)param_1 + 0x6b0) = 0;
  if (DAT_1008be020 == '\0') {
    local_88._0_4_ = 0x855a70;
    local_88._4_4_ = 1;
    local_80 = 0x18210f;
    uStack_7c = 1;
    uStack_7a = 0;
    local_78 = (uint6)CONCAT14(lVar5 == 0,*(undefined4 *)((long)param_1 + 0x430));
    uStack_72 = 0;
    local_58 = 0;
    uStack_50 = 0;
    uStack_49 = 0;
    uStack_48 = 0;
    uStack_46 = 0;
    local_40 = 0;
    uStack_38 = 0;
    local_30 = (long *)0x0;
    uStack_47 = 1;
    local_68 = &local_88;
    FUN_10017869a(&local_88);
    if (local_30 != (long *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      lVar5 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar5 == 0) {
        (**(code **)(*local_30 + 0x10))(local_30);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (local_68 == &local_88) {
      lVar5 = 0x20;
    }
    else {
      lVar5 = 0x28;
      if (local_68 == (long *)0x0) goto LAB_100379c00;
    }
    (**(code **)(*local_68 + lVar5))();
  }
LAB_100379c00:
  operator_delete(param_1);
LAB_100379c08:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

