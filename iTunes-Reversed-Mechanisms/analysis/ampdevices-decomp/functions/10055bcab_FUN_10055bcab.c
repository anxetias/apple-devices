// name: FUN_10055bcab
// address: 10055bcab

void FUN_10055bcab(int param_1,long param_2,void *param_3)

{
  long *plVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined2 uStack_8c;
  undefined2 uStack_8a;
  undefined6 uStack_88;
  long *local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined7 uStack_60;
  undefined4 uStack_59;
  undefined8 local_50;
  undefined8 uStack_48;
  long *local_40;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == 0) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_98._0_4_ = 0x8220202;
      local_98._4_4_ = 0x7a0a90;
      uStack_90 = 1;
      uStack_8c = 0x822;
      uStack_8a = 0x79a7;
      uStack_88 = 0x1007e;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_98,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else if (DAT_1008c7874 == '\x01') {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_98._0_4_ = 0x8220202;
      local_98._4_4_ = 0x7a0a90;
      uStack_90 = 1;
      uStack_8c = 0x822;
      uStack_8a = 0x7b17;
      uStack_88 = 0x1007e;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_98,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    lVar4 = FUN_1001c629e(0x438,&DAT_100711c6e);
    if (lVar4 == 0) {
      uVar3 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar3,0x10);
      if (cVar2 != '\0') {
        local_98._0_4_ = 0x8220202;
        local_98._4_4_ = 0x7a0a90;
        uStack_90 = 1;
        uStack_8c = 0x822;
        uStack_8a = 0x7b33;
        uStack_88 = 0x1007e;
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_98,0x16);
      }
      FUN_1001782e9(0,0);
    }
    else {
      *(int *)(lVar4 + 8) = param_1;
      uVar3 = FUN_1001705fc(param_2);
      *(undefined8 *)(lVar4 + 0x10) = uVar3;
      if (param_3 != (void *)0x0 && param_1 == 0x61666361) {
        _memcpy((void *)(lVar4 + 0x18),param_3,0x420);
      }
      FUN_1001eac02(lVar4,&DAT_1008c25b8);
      local_98._0_4_ = 0x83c1d0;
      local_98._4_4_ = 1;
      uStack_90 = 0x55d311;
      uStack_8c = 1;
      uStack_8a = 0;
      uStack_60 = 0;
      uStack_59 = 0;
      local_50 = 0;
      uStack_48 = 0;
      local_40 = (long *)0x0;
      _local_68 = CONCAT44(DAT_1008c7870,1);
      local_78 = &local_98;
      FUN_10017869a(&local_98);
      if (local_40 != (long *)0x0) {
        LOCK();
        plVar1 = local_40 + 1;
        lVar4 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar4 == 0) {
          (**(code **)(*local_40 + 0x10))(local_40);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (local_78 == &local_98) {
        lVar4 = 0x20;
      }
      else {
        lVar4 = 0x28;
        if (local_78 == (long *)0x0) goto LAB_10055be63;
      }
      (**(code **)(*local_78 + lVar4))();
    }
  }
LAB_10055be63:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

