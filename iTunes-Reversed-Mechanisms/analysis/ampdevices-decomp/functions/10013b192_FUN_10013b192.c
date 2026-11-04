// name: FUN_10013b192
// address: 10013b192

void FUN_10013b192(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  long lVar6;
  undefined4 local_e0 [2];
  undefined1 local_d8 [16];
  long local_c8;
  long lStack_c0;
  long local_b8;
  long local_b0;
  undefined1 *local_a0;
  long *local_98;
  long *local_90;
  undefined8 local_88;
  undefined8 local_80;
  long *local_78;
  undefined1 local_69;
  long local_68 [4];
  long *local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1[1] == 0) || (*(long *)(param_1[1] + 8) == -1)) {
    cVar5 = _os_log_type_enabled(PTR___os_log_default_10082cb88,1);
    if (cVar5 != '\0') {
      local_68[0]._0_2_ = 0;
      __os_log_impl(0x100000000,PTR___os_log_default_10082cb88,1,
                    "StoreMescalSessionCache has gone away while setting up a Mescal context.",
                    local_68,2);
    }
    goto LAB_10013b3e2;
  }
  local_a0 = &local_69;
  local_69 = 0;
  local_98 = param_1;
  local_90 = param_3;
  if (*param_2 == 0) {
    cVar5 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0x10,param_2);
    if (cVar5 != '\0') {
      FUN_10013d85c();
    }
    *(undefined4 *)(*param_3 + 0x30) = 3;
  }
  else {
    FUN_100272cbe(local_e0,*param_3);
    switch(local_e0[0]) {
    case 0:
    case 3:
      *(undefined4 *)(*param_3 + 0x30) = 3;
      break;
    case 1:
      FUN_10013c03e(&local_80,local_d8);
      local_88 = local_80;
      lVar6 = *param_3;
      lVar2 = param_3[1];
      if (lVar2 != 0) {
        LOCK();
        *(long *)(lVar2 + 8) = *(long *)(lVar2 + 8) + 1;
        UNLOCK();
      }
      lVar3 = *param_1;
      lVar4 = param_1[1];
      if (lVar4 != 0) {
        LOCK();
        *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
        UNLOCK();
      }
      local_48 = (long *)0x0;
      local_c8 = lVar6;
      lStack_c0 = lVar2;
      local_b8 = lVar3;
      local_b0 = lVar4;
      local_48 = operator_new(0x28);
      *local_48 = (long)&PTR_FUN_10083a118;
      local_48[1] = lVar6;
      local_48[2] = lVar2;
      local_c8 = 0;
      lStack_c0 = 0;
      local_48[3] = lVar3;
      local_48[4] = lVar4;
      if (lVar4 != 0) {
        LOCK();
        *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
        UNLOCK();
      }
      FUN_10014415a(local_88,local_68);
      if (local_48 == local_68) {
        lVar6 = 0x20;
LAB_10013b37b:
        (**(code **)(*local_48 + lVar6))();
      }
      else {
        lVar6 = 0x28;
        if (local_48 != (long *)0x0) goto LAB_10013b37b;
      }
      if (lVar4 != 0) {
        std::__shared_weak_count::__release_weak();
      }
      FUN_10014105c(local_80);
      local_69 = 1;
      if (local_78 != (long *)0x0) {
        LOCK();
        plVar1 = local_78 + 1;
        lVar6 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar6 == 0) {
          (**(code **)(*local_78 + 0x10))(local_78);
          std::__shared_weak_count::__release_weak();
        }
      }
      break;
    case 2:
      *(undefined4 *)(*param_3 + 0x30) = 0;
    }
    FUN_1001a85d4(local_d8);
  }
  FUN_10013b4ae(&local_a0);
LAB_10013b3e2:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

