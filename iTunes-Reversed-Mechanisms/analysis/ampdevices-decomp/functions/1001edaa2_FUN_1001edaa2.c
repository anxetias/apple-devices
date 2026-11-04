// name: FUN_1001edaa2
// address: 1001edaa2

ulong FUN_1001edaa2(long param_1)

{
  long *plVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  uint uVar7;
  uint local_10c;
  undefined **local_108;
  long *local_100;
  undefined ***local_e8;
  undefined8 local_d8;
  undefined7 uStack_d0;
  undefined4 uStack_c9;
  undefined8 local_c0;
  undefined8 uStack_b8;
  long *local_b0;
  long local_a8 [4];
  long *local_88;
  uint *local_78;
  char local_70;
  undefined8 local_6c;
  undefined8 uStack_64;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_10c = 0;
  cVar2 = FUN_1001edfc7();
  if (cVar2 != '\0') {
    if (*(long **)(param_1 + 0x20) == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_10016bf14();
    }
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
                    /* WARNING: Could not recover jumptable at 0x0001001edb0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(**(long **)(param_1 + 0x20) + 0x30))();
      return uVar3;
    }
    goto LAB_1001edd06;
  }
  FUN_10028593a(local_a8,param_1);
  local_6c = 0;
  uStack_64 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_78 = &local_10c;
  local_70 = FUN_1001ee056();
  if (local_70 == '\0') {
    local_10c = FUN_1001e8dd6(&local_58,0,0);
    uVar5 = 0x10;
    puVar6 = &local_6c;
  }
  else {
    local_10c = FUN_1001e96d3(&local_6c,0,0);
    uVar5 = 0x20;
    puVar6 = &local_58;
  }
  FUN_1001c62d9(puVar6,uVar5);
  uVar7 = local_10c;
  if (local_10c == 0xffffff80) {
LAB_1001edc5e:
    uVar7 = local_10c;
    if (local_88 == local_a8) {
      lVar4 = 0x20;
    }
    else {
      lVar4 = 0x28;
      if (local_88 == (long *)0x0) goto LAB_1001edce1;
    }
    (**(code **)(*local_88 + lVar4))();
  }
  else {
    if (local_10c != 0) {
      uVar5 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar5,0x10);
      if (cVar2 != '\0') {
        FUN_1006c5155(uVar7,uVar5);
      }
      goto LAB_1001edc5e;
    }
    local_108 = &PTR_FUN_10083d380;
    local_d8 = 0;
    uStack_d0 = 0;
    uStack_c9 = 0;
    local_c0 = 0;
    uStack_b8 = 0;
    local_b0 = (long *)0x0;
    local_100 = local_a8;
    local_e8 = &local_108;
    FUN_10017869a(&local_108);
    if (local_b0 != (long *)0x0) {
      LOCK();
      plVar1 = local_b0 + 1;
      lVar4 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar4 == 0) {
        (**(code **)(*local_b0 + 0x10))(local_b0);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (local_e8 == &local_108) {
      lVar4 = 0x20;
LAB_1001edc8c:
      (**(code **)((long)*local_e8 + lVar4))();
    }
    else {
      lVar4 = 0x28;
      if (local_e8 != (undefined ***)0x0) goto LAB_1001edc8c;
    }
    if (local_70 == '\x01') {
      FUN_1001e9afc(&local_6c);
      FUN_1001e9bb5(&local_6c);
    }
    else {
      FUN_1001e944c(&local_58);
      FUN_1001e9587(&local_58);
    }
    if (local_88 == local_a8) {
      lVar4 = 0x20;
LAB_1001edcd4:
      (**(code **)(*local_88 + lVar4))();
      uVar7 = local_10c;
    }
    else {
      lVar4 = 0x28;
      uVar7 = local_10c;
      if (local_88 != (long *)0x0) goto LAB_1001edcd4;
    }
  }
LAB_1001edce1:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return (ulong)uVar7;
  }
LAB_1001edd06:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

