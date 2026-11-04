// name: FUN_1003ba66d
// address: 1003ba66d

undefined8 FUN_1003ba66d(long param_1,int param_2,int *param_3)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined4 local_a0;
  undefined2 uStack_9c;
  undefined2 uStack_9a;
  undefined6 uStack_98;
  long *local_88;
  undefined8 local_78;
  undefined7 uStack_70;
  undefined4 uStack_69;
  undefined8 local_60;
  undefined8 uStack_58;
  long *local_50;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  plVar3 = &DAT_1008c75a8;
  do {
    lVar2 = *plVar3;
    if (lVar2 == param_1) break;
    plVar3 = (long *)(lVar2 + 8);
  } while (lVar2 != 0);
  if (lVar2 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_a8._0_4_ = 0x8220202;
      local_a8._4_4_ = 0x7a0a90;
      local_a0 = 1;
      uStack_9c = 0x822;
      uStack_9a = 0x92cb;
      uStack_98 = 0x1007c;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_a8,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    if (*param_3 == 10) {
      if (param_2 != 0x756e7267) {
        FUN_1001e4bb2(param_1 + 0x38,&local_a8);
        FUN_1003b8245(local_b8,&local_a8);
        uVar4 = 0xfffffffc;
        if (param_2 == 0x6974737a) {
          param_3[3] = 0x1660;
          uVar4 = 0;
        }
        FUN_1001b7a50(local_b8);
        goto LAB_1003ba7a7;
      }
      *(undefined1 *)(param_1 + 0x11) = 1;
      local_a8._0_4_ = 0x856f40;
      local_a8._4_4_ = 1;
      local_a0 = (undefined4)param_1;
      uStack_9c = (undefined2)((ulong)param_1 >> 0x20);
      uStack_9a = (undefined2)((ulong)param_1 >> 0x30);
      local_78 = 0;
      uStack_70 = 0;
      uStack_69 = 0;
      local_60 = 0;
      uStack_58 = 0;
      local_50 = (long *)0x0;
      local_88 = &local_a8;
      FUN_10017869a(&local_a8);
      if (local_50 != (long *)0x0) {
        LOCK();
        plVar3 = local_50 + 1;
        lVar2 = *plVar3;
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (lVar2 == 0) {
          (**(code **)(*local_50 + 0x10))(local_50);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (local_88 == &local_a8) {
        lVar2 = 0x20;
LAB_1003ba81b:
        (**(code **)(*local_88 + lVar2))();
      }
      else {
        lVar2 = 0x28;
        if (local_88 != (long *)0x0) goto LAB_1003ba81b;
      }
      uVar4 = 0;
      goto LAB_1003ba7a7;
    }
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_a8._0_4_ = 0x8220202;
      local_a8._4_4_ = 0x7a0a90;
      local_a0 = 1;
      uStack_9c = 0x822;
      uStack_9a = 0x91c4;
      uStack_98 = 0x1007c;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_a8,0x16);
    }
    FUN_1001782e9(0,0);
  }
  uVar4 = 0xffffffce;
LAB_1003ba7a7:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar4;
}

