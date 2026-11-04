// name: FUN_10014e255
// address: 10014e255

void FUN_10014e255(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  char cVar4;
  undefined8 uVar5;
  void *pvVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  long *local_f8;
  long *local_f0;
  long *local_e8;
  long *local_e0;
  long local_d8;
  long *plStack_d0;
  long local_c8;
  long *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  long *local_a8;
  long *local_a0;
  undefined1 local_98 [16];
  long local_88;
  undefined8 local_80;
  long local_78;
  char local_69;
  long local_68 [4];
  long *local_48;
  long local_38;
  
  puVar2 = PTR__objc_retain_10082c7b8;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_80 = (*(code *)PTR__objc_retain_10082c7b8)(param_2);
  uVar5 = (*(code *)puVar2)(param_3);
  local_b8 = (*(code *)puVar2)(param_4);
  lVar13 = *(long *)(param_1 + 0x28);
  local_b0 = uVar5;
  uVar5 = (*(code *)PTR__objc_msgSend_10082c770)(uVar5,PTR_s__CFURLResponse_10088bbf0);
  FUN_1001a8bb0(&local_88,uVar5);
  if (local_88 == 0) {
    local_d8 = 0;
    plStack_d0 = (long *)0x0;
  }
  else {
    pvVar6 = operator_new(8,(nothrow_t *)PTR_nothrow_10082c970);
    if (pvVar6 != (void *)0x0) {
      FUN_1001a790a(local_108,local_80);
      FUN_100153e60(pvVar6,&local_88,local_108);
    }
    FUN_10014eea2(&local_d8,pvVar6);
    if (pvVar6 != (void *)0x0) {
      FUN_1001a85d4(local_108);
    }
  }
  FUN_1001a8bb0(&local_78,local_b8);
  if (local_78 != 0) {
    FUN_1001b7b04(local_68,PTR_s_com_apple_iTunes_errors_store_re_10083b490);
    FUN_1001aa4ea(&local_c8,local_68,0x1d5e,&local_78);
    FUN_1001aaadc(&local_78,&local_c8);
    FUN_1001aaad2(&local_c8);
    FUN_1001b7a50(local_68);
  }
  if ((*(long *)(param_1 + 0x38) == 0) ||
     (plVar7 = (long *)std::__shared_weak_count::lock(), local_c0 = plVar7, plVar7 == (long *)0x0))
  goto LAB_10014e7be;
  lVar1 = *(long *)(param_1 + 0x30);
  local_c8 = lVar1;
  if (lVar1 != 0) {
    std::mutex::lock();
    lVar13 = lVar13 + 0x20;
    lVar8 = FUN_100131b98(lVar13,param_1 + 0x40);
    if (lVar8 == 0) {
      std::mutex::unlock();
    }
    else {
      uVar5 = _objc_autoreleasePoolPush();
      local_e8 = *(long **)(lVar8 + 0x18);
      local_e0 = *(long **)(lVar8 + 0x20);
      if (local_e0 != (long *)0x0) {
        LOCK();
        local_e0[1] = local_e0[1] + 1;
        UNLOCK();
      }
      local_69 = *(char *)(lVar8 + 0x48);
      local_a8 = local_e0;
      local_a0 = local_e8;
      FUN_10013218c(lVar13,lVar8);
      std::mutex::unlock();
      plVar12 = local_a0;
      cVar4 = (**(code **)(*local_a0 + 0xc0))(local_a0);
      plVar7 = local_a8;
      puVar2 = PTR__objc_retain_10082c7b8;
      if (cVar4 != '\0') {
        FUN_1001cd96e(local_98,"log-request-to-har-path");
        cVar4 = FUN_1001b8428(local_98);
        if (cVar4 == '\0') {
          lVar13 = FUN_100156d72();
          plVar7 = *(long **)(lVar13 + 200);
          uVar9 = (*(code *)puVar2)(*(undefined8 *)(param_1 + 0x20));
          uVar10 = (*(code *)puVar2)(local_b0);
          uVar11 = (*(code *)puVar2)(local_80);
          FUN_1001b7a5c(local_118,local_98);
          local_48 = (long *)0x0;
          plVar12 = operator_new(0x30);
          *plVar12 = (long)&PTR_FUN_10083b420;
          lVar13 = (*(code *)PTR__objc_retain_10082c7b8)(uVar9);
          plVar12[1] = lVar13;
          local_128 = (undefined4)uVar10;
          uStack_124 = (undefined4)((ulong)uVar10 >> 0x20);
          uStack_120 = (undefined4)uVar11;
          uStack_11c = (undefined4)((ulong)uVar11 >> 0x20);
          *(undefined4 *)(plVar12 + 2) = local_128;
          *(undefined4 *)((long)plVar12 + 0x14) = uStack_124;
          *(undefined4 *)(plVar12 + 3) = uStack_120;
          *(undefined4 *)((long)plVar12 + 0x1c) = uStack_11c;
          FUN_1001b7a88(plVar12 + 4,local_118);
          local_48 = plVar12;
          (**(code **)(*plVar7 + 0x10))(plVar7,local_68);
          plVar12 = local_a0;
          plVar7 = local_a8;
          if (local_48 == local_68) {
            lVar13 = 0x20;
LAB_10014e5fd:
            (**(code **)(*local_48 + lVar13))();
          }
          else {
            lVar13 = 0x28;
            if (local_48 != (long *)0x0) goto LAB_10014e5fd;
          }
          FUN_1001b7a50(local_118);
          (*(code *)PTR__objc_release_10082c7b0)(0);
          (*(code *)PTR__objc_release_10082c7b0)(0);
          (*(code *)PTR__objc_release_10082c7b0)(uVar9);
        }
        else {
          uVar9 = FUN_10012d63e();
          uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
          cVar4 = _os_log_type_enabled(uVar9,0x10);
          if (cVar4 != '\0') {
            local_68[0]._0_2_ = 0;
            __os_log_impl(0x100000000,uVar9,0x10,
                          "Pref \'log-request-to-har-path\' is not present or empty.",local_68,2);
          }
          (*(code *)PTR__objc_release_10082c7b0)(uVar9);
        }
        FUN_1001b7a50(local_98);
      }
      if (local_69 != '\0') {
        FUN_1001b7b04(local_68,PTR_s_com_apple_iTunes_errors_store_re_10083b490);
        FUN_1001aa38a(local_98,local_68,0x1d51);
        FUN_1001aaadc(&local_78,local_98);
        FUN_1001aaad2(local_98);
        FUN_1001b7a50(local_68);
      }
      lVar13 = local_d8;
      if (local_d8 != 0) {
        uVar9 = FUN_10014737e(plVar12);
        FUN_100154510(lVar13,uVar9);
      }
      plVar3 = plStack_d0;
      if (plVar7 != (long *)0x0) {
        LOCK();
        plVar7[1] = plVar7[1] + 1;
        UNLOCK();
      }
      local_d8 = 0;
      plStack_d0 = (long *)0x0;
      local_f8 = plVar12;
      local_f0 = plVar7;
      FUN_100130484(lVar1,&local_f8,&local_78);
      if (plVar3 != (long *)0x0) {
        LOCK();
        plVar7 = plVar3 + 1;
        lVar13 = *plVar7;
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (lVar13 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (local_f0 != (long *)0x0) {
        LOCK();
        plVar7 = local_f0 + 1;
        lVar13 = *plVar7;
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (lVar13 == 0) {
          (**(code **)(*local_f0 + 0x10))(local_f0);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (local_e0 != (long *)0x0) {
        LOCK();
        plVar7 = local_e0 + 1;
        lVar13 = *plVar7;
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (lVar13 == 0) {
          (**(code **)(*local_e0 + 0x10))(local_e0);
          std::__shared_weak_count::__release_weak();
        }
      }
      _objc_autoreleasePoolPop(uVar5);
      plVar7 = local_c0;
      if (local_c0 == (long *)0x0) goto LAB_10014e7be;
    }
  }
  LOCK();
  plVar12 = plVar7 + 1;
  lVar13 = *plVar12;
  *plVar12 = *plVar12 + -1;
  UNLOCK();
  if (lVar13 == 0) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
    std::__shared_weak_count::__release_weak();
  }
LAB_10014e7be:
  FUN_1001aaad2(&local_78);
  if (plStack_d0 != (long *)0x0) {
    LOCK();
    plVar7 = plStack_d0 + 1;
    lVar13 = *plVar7;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plStack_d0 + 0x10))(plStack_d0);
      std::__shared_weak_count::__release_weak();
    }
  }
  FUN_1001accd4(&local_88);
  (*(code *)PTR__objc_release_10082c7b0)(local_b8);
  (*(code *)PTR__objc_release_10082c7b0)(local_b0);
  (*(code *)PTR__objc_release_10082c7b0)(local_80);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

