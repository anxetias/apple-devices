// name: FUN_1002811b4
// address: 1002811b4

void FUN_1002811b4(long param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_128;
  undefined8 *local_120;
  undefined8 local_118;
  code *local_110;
  code *local_108;
  char *local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 *local_e0;
  undefined8 local_d8;
  code *local_d0;
  code *local_c8;
  char *local_c0;
  undefined8 local_b8;
  long *local_b0;
  long *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 *local_90;
  undefined8 local_88;
  code *local_80;
  code *local_78;
  char *local_70;
  long local_68 [4];
  long *local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_120 = &local_128;
  local_128 = 0;
  local_118 = 0x4012000000;
  local_110 = FUN_10027ec7e;
  local_108 = FUN_10027ec8c;
  local_100 = "";
  local_f8 = 0;
  uStack_f0 = 0;
  local_a8 = param_3;
  local_a0 = param_2;
  local_f8 = _mach_approximate_time();
  local_e0 = &local_e8;
  local_e8 = 0;
  local_d8 = 0x4012000000;
  local_d0 = FUN_10027ed2e;
  local_c8 = FUN_10027ed43;
  local_c0 = "";
  if (*(long *)(param_1 + 0x10) == 0) {
LAB_100281443:
                    /* WARNING: Subroutine does not return */
    FUN_10013bd04();
  }
  uVar2 = *(undefined8 *)(param_1 + 8);
  local_b0 = (long *)std::__shared_weak_count::lock();
  if (local_b0 == (long *)0x0) goto LAB_100281443;
  LOCK();
  local_b0[2] = local_b0[2] + 1;
  UNLOCK();
  LOCK();
  plVar1 = local_b0 + 1;
  lVar3 = *plVar1;
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  local_b8 = uVar2;
  if (lVar3 == 0) {
    (**(code **)(*local_b0 + 0x10))(local_b0);
    std::__shared_weak_count::__release_weak();
  }
  local_90 = &local_98;
  local_98 = 0;
  local_88 = 0x6012000000;
  local_80 = FUN_1002814e2;
  local_78 = FUN_10028152d;
  local_70 = "";
  local_48 = local_68;
  plVar1 = (long *)local_a8[4];
  if (plVar1 == (long *)0x0) {
    local_48 = (long *)0x0;
  }
  else if (plVar1 == local_a8) {
    (**(code **)(*plVar1 + 0x18))();
  }
  else {
    local_48 = (long *)(**(code **)(*plVar1 + 0x10))();
  }
  uVar2 = FUN_100384e9c(local_a0);
  uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
  (*(code *)PTR__objc_msgSend_10082c770)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_fetchArtwork_withReply__10088c5f0,uVar2);
  (*(code *)PTR__objc_release_10082c7b0)(uVar2);
  __Block_object_dispose(&local_98,8);
  if (local_48 == local_68) {
    lVar3 = 0x20;
  }
  else {
    lVar3 = 0x28;
    if (local_48 == (long *)0x0) goto LAB_1002813ee;
  }
  (**(code **)(*local_48 + lVar3))();
LAB_1002813ee:
  __Block_object_dispose(&local_e8,8);
  if (local_b0 != (long *)0x0) {
    std::__shared_weak_count::__release_weak();
  }
  __Block_object_dispose(&local_128,8);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

