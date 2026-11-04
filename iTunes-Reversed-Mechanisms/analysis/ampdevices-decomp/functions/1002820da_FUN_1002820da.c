// name: FUN_1002820da
// address: 1002820da

void FUN_1002820da(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_150;
  undefined8 *local_148;
  undefined8 local_140;
  code *local_138;
  code *local_130;
  char *local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 *local_108;
  undefined8 local_100;
  code *local_f8;
  code *local_f0;
  char *local_e8;
  undefined8 local_e0;
  long *local_d8;
  undefined8 local_d0;
  undefined8 *local_c8;
  undefined8 local_c0;
  code *local_b8;
  code *local_b0;
  undefined8 local_a8;
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
  local_148 = &local_150;
  local_150 = 0;
  local_140 = 0x4012000000;
  local_138 = FUN_10027ec7e;
  local_130 = FUN_10027ec8c;
  local_128 = "";
  local_120 = 0;
  uStack_118 = 0;
  local_120 = _mach_approximate_time();
  local_c8 = &local_d0;
  local_d0 = 0;
  local_c0 = 0x3032000000;
  local_b8 = FUN_10027ec92;
  local_b0 = FUN_10027eca8;
  uVar2 = FUN_100384dd4(param_3);
  local_a8 = _objc_retainAutoreleasedReturnValue(uVar2);
  local_90 = &local_98;
  local_98 = 0;
  local_88 = 0x6012000000;
  local_80 = FUN_10027ecb7;
  local_78 = FUN_10027ed02;
  local_70 = "";
  local_a0 = param_2;
  FUN_10028593a(local_68,param_4);
  local_110 = 0;
  local_100 = 0x4012000000;
  local_f8 = FUN_10027ed2e;
  local_f0 = FUN_10027ed43;
  local_e8 = "";
  local_108 = &local_110;
  if (*(long *)(param_1 + 0x10) == 0) {
LAB_1002823a6:
                    /* WARNING: Subroutine does not return */
    FUN_10013bd04();
  }
  uVar2 = *(undefined8 *)(param_1 + 8);
  local_d8 = (long *)std::__shared_weak_count::lock();
  if (local_d8 == (long *)0x0) goto LAB_1002823a6;
  LOCK();
  local_d8[2] = local_d8[2] + 1;
  UNLOCK();
  LOCK();
  plVar1 = local_d8 + 1;
  lVar3 = *plVar1;
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  local_e0 = uVar2;
  if (lVar3 == 0) {
    (**(code **)(*local_d8 + 0x10))(local_d8);
    std::__shared_weak_count::__release_weak();
  }
  (*(code *)PTR__objc_msgSend_10082c770)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_setRemoteArtworkForInfo_forDatab_10088c600,
             local_c8[5],local_a0);
  __Block_object_dispose(&local_110,8);
  if (local_d8 != (long *)0x0) {
    std::__shared_weak_count::__release_weak();
  }
  __Block_object_dispose(&local_98,8);
  if (local_48 == local_68) {
    lVar3 = 0x20;
  }
  else {
    lVar3 = 0x28;
    if (local_48 == (long *)0x0) goto LAB_100282355;
  }
  (**(code **)(*local_48 + lVar3))();
LAB_100282355:
  __Block_object_dispose(&local_d0,8);
  (*(code *)PTR__objc_release_10082c7b0)(local_a8);
  __Block_object_dispose(&local_150,8);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

