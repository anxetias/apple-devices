// name: FUN_100488d27
// address: 100488d27

void FUN_100488d27(int *param_1,undefined1 param_2,char param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined2 uStack_8c;
  undefined2 uStack_8a;
  undefined4 local_88;
  undefined2 local_84;
  undefined2 uStack_82;
  undefined1 local_80;
  long *local_78;
  undefined8 local_68;
  undefined7 uStack_60;
  undefined4 uStack_59;
  undefined8 local_50;
  undefined8 uStack_48;
  long *local_40;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (int *)0x0) {
LAB_100488e62:
    uVar4 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar4,0x10);
    if (cVar3 != '\0') {
      local_98._0_4_ = 0x8220202;
      local_98._4_4_ = 0x7a0a90;
      local_90 = 1;
      uStack_8c = 0x822;
      uStack_8a = 0xa159;
      local_88 = 0x1007b;
      local_84 = 0;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_98,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    if (*param_1 != 0x706c7374) {
      uVar4 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar4,0x10);
      if (cVar3 != '\0') {
        local_98._0_4_ = 0x8220202;
        local_98._4_4_ = 0x7ab58c;
        local_90 = 1;
        uStack_8c = 0x822;
        uStack_8a = 0x2d50;
        local_88 = 0x1007b;
        local_84 = 0;
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_98,0x16);
      }
      cVar3 = FUN_1001782e9(0,1);
      if (cVar3 == '\0') goto LAB_100488e62;
    }
    if (param_3 == '\0') {
      if (*(long *)(param_1 + 0x12) != 0) {
        lVar5 = *(long *)(param_1 + 0x12);
        do {
          lVar2 = *(long *)(lVar5 + 0x30);
          FUN_100489136(lVar5,&local_98);
          if (((ulong)local_78 & 2) == 0) {
            FUN_100489366(lVar5,0);
          }
          else {
            FUN_100488d27(lVar5,0,0);
          }
          lVar5 = lVar2;
        } while (lVar2 != 0);
      }
      cVar3 = FUN_10048971d(*(undefined8 *)(param_1 + 10));
      if (cVar3 != '\0') {
        FUN_100585431(param_1,*(undefined8 *)(param_1 + 10));
      }
      FUN_100483f95(param_1,0x706c6465,0);
    }
    else {
      local_88 = *(undefined4 *)(*(long *)(param_1 + 2) + 0x88);
      local_78 = &local_98;
      local_98._0_4_ = 0x85c680;
      local_98._4_4_ = 1;
      local_90 = 0x488fed;
      uStack_8c = 1;
      uStack_8a = 0;
      local_84 = (undefined2)param_1[0x16];
      uStack_82 = (undefined2)((uint)param_1[0x16] >> 0x10);
      local_68 = 0;
      uStack_60 = 0;
      uStack_59 = 0;
      local_50 = 0;
      uStack_48 = 0;
      local_40 = (long *)0x0;
      local_80 = param_2;
      FUN_10017850c(&local_a0);
      local_50 = local_a0;
      FUN_10017869a(&local_98);
      if (local_40 != (long *)0x0) {
        LOCK();
        plVar1 = local_40 + 1;
        lVar5 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar5 == 0) {
          (**(code **)(*local_40 + 0x10))(local_40);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (local_78 == &local_98) {
        lVar5 = 0x20;
      }
      else {
        lVar5 = 0x28;
        if (local_78 == (long *)0x0) goto LAB_100488f04;
      }
      (**(code **)(*local_78 + lVar5))();
    }
  }
LAB_100488f04:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

