// name: FUN_10012ea4e
// address: 10012ea4e

/* WARNING: Removing unreachable block (ram,0x00010012ebb1) */
/* WARNING: Removing unreachable block (ram,0x00010012ebc3) */
/* WARNING: Removing unreachable block (ram,0x00010012edce) */
/* WARNING: Removing unreachable block (ram,0x00010012ede0) */

void FUN_10012ea4e(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  code *pcVar4;
  char cVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 local_b8;
  long *local_b0;
  undefined8 local_a8;
  long *local_a0;
  undefined8 local_98;
  undefined1 local_90 [8];
  undefined1 local_88 [16];
  ulong local_78;
  long *plStack_70;
  long local_68;
  undefined8 local_60;
  undefined2 local_58 [4];
  long *local_50;
  long *local_40;
  char local_38;
  
  local_40 = param_1 + 9;
  local_38 = '\x01';
  local_98 = param_2;
  std::mutex::lock();
  plVar1 = param_1 + 4;
  lVar6 = FUN_100131b98(plVar1,&local_98);
  if (lVar6 == 0) {
    uVar7 = FUN_10012d63e();
    cVar5 = _os_log_type_enabled(uVar7,0x10);
    if (cVar5 != '\0') {
      local_78 = local_78 & 0xffffffffffff0000;
      __os_log_impl(0x100000000,uVar7,0x10,
                    "***ERROR*** ProcessRequest could not find a request, assuming the request has been cancelled."
                    ,&local_78,2);
    }
    goto LAB_10012eeff;
  }
  local_78 = 0;
  plStack_70 = (long *)0x0;
  FUN_100217418(lVar6 + 0x28,&local_78);
  if (plStack_70 != (long *)0x0) {
    LOCK();
    plVar3 = plStack_70 + 1;
    lVar2 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_70 + 0x10))(plStack_70);
      std::__shared_weak_count::__release_weak();
    }
  }
  local_60 = *(undefined8 *)(lVar6 + 0x18);
  plVar3 = *(long **)(lVar6 + 0x20);
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar3[1] = plVar3[1] + 1;
    UNLOCK();
  }
  if (*(char *)(lVar6 + 0x48) == '\x01') {
    FUN_10013218c(plVar1,lVar6);
    if (local_38 != '\x01') {
LAB_10012ef2d:
      std::__throw_system_error(1,"unique_lock::unlock: not locked");
LAB_10012ef64:
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    std::mutex::unlock();
    local_38 = '\0';
    FUN_10014f388(&local_78,0x1db3);
    local_b8 = local_60;
    if (plVar3 != (long *)0x0) {
      LOCK();
      plVar3[1] = plVar3[1] + 1;
      UNLOCK();
    }
    local_b0 = plVar3;
    FUN_1001b7b04(local_58,PTR_s_com_apple_iTunes_errors_store_re_10083b490);
    FUN_1001aa564(local_88,local_58,0x1d51,&local_78);
    FUN_100144dfe(local_60,&local_b8,local_88);
    FUN_1001aaad2(local_88);
    FUN_1001b7a50(local_58);
    if (local_b0 != (long *)0x0) {
      LOCK();
      plVar1 = local_b0 + 1;
      lVar6 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar6 == 0) {
        (**(code **)(*local_b0 + 0x10))(local_b0);
        std::__shared_weak_count::__release_weak();
      }
    }
    FUN_1001a8fac(&local_78);
  }
  else {
    if (local_38 == '\0') goto LAB_10012ef2d;
    std::mutex::unlock();
    local_38 = '\0';
    FUN_1001414c4(&local_78,local_60);
    if (local_68 == 0 && local_78 == 0) {
      uVar7 = FUN_1001cc310();
      cVar5 = _os_log_type_enabled(uVar7,0x10);
      if (cVar5 != '\0') {
        FUN_100132322(uVar7);
      }
      FUN_1001782e9(0,0);
    }
    FUN_100130308(&local_40);
    lVar6 = FUN_100131b98(plVar1,&local_98);
    if (lVar6 == 0) {
      uVar7 = FUN_10012d63e();
      cVar5 = _os_log_type_enabled(uVar7,0x10);
      if (cVar5 != '\0') {
        local_58[0] = 0;
        __os_log_impl(0x100000000,uVar7,0x10,
                      "***ERROR*** ProcessRequest could not find a request again after prepare, assuming the request has been cancelled."
                      ,local_58,2);
      }
    }
    else {
      if (*(char *)(lVar6 + 0x48) == '\x01') {
        FUN_10014f388(local_58,0x1db4);
        FUN_1001b7b04(local_88,PTR_s_com_apple_iTunes_errors_store_re_10083b490);
        FUN_1001aa564(local_90,local_88,0x1d51,local_58);
        FUN_1001aaadc(&local_68,local_90);
        FUN_1001aaad2(local_90);
        FUN_1001b7a50(local_88);
        FUN_1001a8fac(local_58);
      }
      if (local_68 == 0) {
        (**(code **)(*param_1 + 0x30))(local_58,param_1,&local_78);
        FUN_100203686(lVar6 + 0x38,local_58);
        if (local_38 == '\0') {
          std::__throw_system_error(1,"unique_lock::unlock: not locked");
          goto LAB_10012ef64;
        }
        std::mutex::unlock();
        local_38 = '\0';
        (**(code **)(*param_1 + 0x38))(param_1,local_58,local_98);
      }
      else {
        FUN_10013218c(plVar1,lVar6);
        if (local_38 == '\0') {
          std::__throw_system_error(1,"unique_lock::unlock: not locked");
          goto LAB_10012ef64;
        }
        std::mutex::unlock();
        local_38 = '\0';
        local_a8 = local_60;
        if (plVar3 != (long *)0x0) {
          LOCK();
          plVar3[1] = plVar3[1] + 1;
          UNLOCK();
        }
        local_a0 = plVar3;
        FUN_100144dfe(local_60,&local_a8,&local_68);
        local_50 = local_a0;
      }
      if (local_50 != (long *)0x0) {
        LOCK();
        plVar1 = local_50 + 1;
        lVar6 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar6 == 0) {
          (**(code **)(*local_50 + 0x10))(local_50);
          std::__shared_weak_count::__release_weak();
        }
      }
    }
    FUN_1001aaad2(&local_68);
    FUN_1001ac986(&local_78);
  }
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar6 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      std::__shared_weak_count::__release_weak();
    }
  }
LAB_10012eeff:
  if (local_38 == '\x01') {
    std::mutex::unlock();
  }
  return;
}

