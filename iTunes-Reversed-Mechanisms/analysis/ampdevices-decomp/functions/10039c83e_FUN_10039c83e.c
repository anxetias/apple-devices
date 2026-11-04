// name: FUN_10039c83e
// address: 10039c83e

void FUN_10039c83e(long param_1,int param_2,undefined4 param_3,undefined4 param_4,char param_5)

{
  long *plVar1;
  long lVar2;
  long local_88 [4];
  long *local_68;
  undefined8 local_58;
  undefined7 uStack_50;
  undefined4 uStack_49;
  undefined8 local_40;
  undefined8 uStack_38;
  long *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == 0x6461637a) {
LAB_10039c87e:
    DAT_1008c7590 = DAT_1008c7590 + 1;
    if (param_2 == 0x65727573) {
      local_68 = operator_new(0x28);
      *local_68 = (long)&PTR_FUN_100856668;
      local_68[1] = (long)FUN_10039c662;
      local_68[2] = 0;
      local_68[3] = param_1;
      *(undefined4 *)(local_68 + 4) = param_3;
      *(undefined4 *)((long)local_68 + 0x24) = param_4;
      local_58 = 0;
      uStack_50 = 0;
      uStack_49 = 0;
      local_30 = (long *)0x0;
      local_40 = 0;
      uStack_38 = 0;
      FUN_10017869a(local_88);
    }
    else {
      local_68 = operator_new(0x28);
      *local_68 = (long)&PTR_FUN_100856700;
      local_68[1] = (long)FUN_10039c662;
      local_68[2] = 0;
      local_68[3] = param_1;
      local_68[4] = 0;
      local_58 = 0;
      uStack_50 = 0;
      uStack_49 = 0;
      local_30 = (long *)0x0;
      local_40 = 0;
      uStack_38 = 0;
      FUN_10017869a(local_88);
    }
  }
  else {
    if (param_2 != 0x73776465) {
      if (param_2 != 0x65727573) goto LAB_10039c9ea;
      goto LAB_10039c87e;
    }
    if (param_5 == '\0') goto LAB_10039c9ea;
    DAT_1008c7590 = DAT_1008c7590 + 1;
    local_68 = operator_new(0x28);
    *local_68 = (long)&PTR_FUN_100856700;
    local_68[1] = (long)FUN_10039c662;
    local_68[2] = 0;
    local_68[3] = param_1;
    local_68[4] = 0;
    local_58 = 0;
    uStack_50 = 0;
    uStack_49 = 0;
    local_30 = (long *)0x0;
    local_40 = 0;
    uStack_38 = 0;
    FUN_10017869a(local_88);
  }
  if (local_30 != (long *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*local_30 + 0x10))(local_30);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_68 == local_88) {
    lVar2 = 0x20;
  }
  else {
    lVar2 = 0x28;
    if (local_68 == (long *)0x0) goto LAB_10039c9ea;
  }
  (**(code **)(*local_68 + lVar2))();
LAB_10039c9ea:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

