// name: FUN_1002817ac
// address: 1002817ac

void FUN_1002817ac(long param_1,undefined8 *param_2,undefined8 *param_3,long *param_4)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_138;
  undefined8 *local_130;
  undefined8 local_128;
  code *local_120;
  code *local_118;
  char *local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 *local_f0;
  undefined8 local_e8;
  code *local_e0;
  code *local_d8;
  char *local_d0;
  undefined8 local_c8;
  long *local_c0;
  long *local_b8;
  undefined8 *local_b0;
  undefined8 *local_a8;
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
  local_130 = &local_138;
  local_138 = 0;
  local_128 = 0x4012000000;
  local_120 = FUN_10027ec7e;
  local_118 = FUN_10027ec8c;
  local_110 = "";
  local_108 = 0;
  uStack_100 = 0;
  local_b8 = param_4;
  local_108 = _mach_approximate_time();
  local_b0 = param_3;
  local_a8 = param_2;
  uVar2 = FUN_100384b7c(param_3);
  local_a0 = _objc_retainAutoreleasedReturnValue(uVar2);
  local_f0 = &local_f8;
  local_f8 = 0;
  local_e8 = 0x4012000000;
  local_e0 = FUN_10027ed2e;
  local_d8 = FUN_10027ed43;
  local_d0 = "";
  if (*(long *)(param_1 + 0x10) == 0) {
LAB_100281a5d:
                    /* WARNING: Subroutine does not return */
    FUN_10013bd04();
  }
  uVar2 = *(undefined8 *)(param_1 + 8);
  local_c0 = (long *)std::__shared_weak_count::lock();
  if (local_c0 == (long *)0x0) goto LAB_100281a5d;
  LOCK();
  local_c0[2] = local_c0[2] + 1;
  UNLOCK();
  LOCK();
  plVar1 = local_c0 + 1;
  lVar3 = *plVar1;
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  local_c8 = uVar2;
  if (lVar3 == 0) {
    (**(code **)(*local_c0 + 0x10))(local_c0);
    std::__shared_weak_count::__release_weak();
  }
  local_98 = 0;
  local_88 = 0x6012000000;
  local_80 = FUN_100281b00;
  local_78 = FUN_100281b4b;
  local_70 = "";
  local_48 = local_68;
  plVar1 = (long *)local_b8[4];
  local_90 = &local_98;
  if (plVar1 == (long *)0x0) {
    local_48 = (long *)0x0;
  }
  else if (plVar1 == local_b8) {
    (**(code **)(*plVar1 + 0x18))();
  }
  else {
    local_48 = (long *)(**(code **)(*plVar1 + 0x10))();
  }
  uVar2 = local_a0;
  (*(code *)PTR__objc_msgSend_10082c770)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_setArtwork_forInfo_forDatabase_w_10088c5f8,
             *local_a8,local_a0,*local_b0);
  __Block_object_dispose(&local_98,8);
  if (local_48 == local_68) {
    lVar3 = 0x20;
  }
  else {
    lVar3 = 0x28;
    if (local_48 == (long *)0x0) goto LAB_1002819ff;
  }
  (**(code **)(*local_48 + lVar3))();
LAB_1002819ff:
  __Block_object_dispose(&local_f8,8);
  if (local_c0 != (long *)0x0) {
    std::__shared_weak_count::__release_weak();
  }
  (*(code *)PTR__objc_release_10082c7b0)(uVar2);
  __Block_object_dispose(&local_138,8);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

