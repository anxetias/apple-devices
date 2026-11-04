// name: FUN_1004acdd7
// address: 1004acdd7

void FUN_1004acdd7(long param_1)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_88;
  undefined4 local_80;
  undefined2 uStack_7c;
  undefined2 uStack_7a;
  undefined6 local_78;
  undefined2 uStack_72;
  long *local_68;
  undefined8 local_58;
  undefined7 uStack_50;
  undefined4 uStack_49;
  undefined8 local_40;
  undefined8 uStack_38;
  long *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar2 = FUN_1004aa626();
  if (cVar2 == '\0') {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_88._0_4_ = 0x8220202;
      local_88._4_4_ = 0x7a0a90;
      local_80 = 1;
      uStack_7c = 0x822;
      uStack_7a = 0x393b;
      local_78 = 0x1007d;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_88,0x16);
    }
    FUN_1001782e9(0,0);
    goto LAB_1004ad081;
  }
  cVar2 = FUN_1004aa626(param_1);
  if (((cVar2 != '\0') && (*(long *)(param_1 + 0x20) != 0)) && (*(char *)(param_1 + 0x778) == '\0'))
  {
    if (*(char *)(param_1 + 0x1b98) == '\0') {
      FUN_1004bb8f0(param_1 + 0x7b8);
    }
    if (*(char *)(param_1 + 0x1b99) != '\0') {
      FUN_1004a88cf(param_1);
      local_88._0_4_ = 0x85d1f8;
      local_88._4_4_ = 1;
      local_80 = 0x4bba9f;
      uStack_7c = 1;
      uStack_7a = 0;
      local_78 = (undefined6)param_1;
      uStack_72 = (undefined2)((ulong)param_1 >> 0x30);
      local_58 = 0;
      uStack_50 = 0;
      uStack_49 = 0;
      local_40 = 0;
      uStack_38 = 0;
      local_30 = (long *)0x0;
      local_68 = &local_88;
      FUN_10017869a(&local_88);
      if (local_30 != (long *)0x0) {
        LOCK();
        plVar1 = local_30 + 1;
        lVar3 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar3 == 0) {
          (**(code **)(*local_30 + 0x10))(local_30);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (local_68 == &local_88) {
        lVar3 = 0x20;
      }
      else {
        lVar3 = 0x28;
        if (local_68 == (long *)0x0) goto LAB_1004acf58;
      }
      (**(code **)(*local_68 + lVar3))();
    }
  }
LAB_1004acf58:
  FUN_1004ac981(param_1);
  cVar2 = FUN_1004aa626(param_1);
  if (cVar2 == '\0') {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_88._0_4_ = 0x8220202;
      local_88._4_4_ = 0x7a0a90;
      local_80 = 1;
      uStack_7c = 0x822;
      uStack_7a = 0x393b;
      local_78 = 0x1007d;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_88,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else if (*(char *)(param_1 + 0x778) == '\0') {
    if (*(int *)(param_1 + 0x140) == 0x6d656d72) {
      FUN_10017060f(*(undefined8 *)(param_1 + 0x12f8));
      *(undefined8 *)(param_1 + 0x12f8) = 0;
    }
    *(undefined8 *)(param_1 + 0x1b78) = *(undefined8 *)(param_1 + 7000);
    *(undefined8 *)(param_1 + 0x12f0) = *(undefined8 *)(param_1 + 7000);
    FUN_1004afcf8(param_1 + 0x1c10);
    FUN_1004afcf8(param_1 + 0x1cd8);
  }
  *(undefined2 *)(param_1 + 0x640) = 0;
  FUN_10017060f(*(undefined8 *)(param_1 + 0x218));
  *(undefined8 *)(param_1 + 0x218) = 0;
  *(undefined1 *)(param_1 + 0x210) = 0;
  *(undefined1 *)(param_1 + 0x642) = 0;
  if (*(char *)(param_1 + 0x778) == '\0') {
    FUN_1004a9316(param_1,0);
    *(undefined8 *)(param_1 + 7000) = 0;
    *(undefined8 *)(param_1 + 0x1b78) = 0;
    *(undefined8 *)(param_1 + 0x12f0) = 0;
    *(undefined8 *)(param_1 + 0x200) = 0;
    *(undefined1 *)(param_1 + 0x1ce) = 0;
    *(undefined2 *)(param_1 + 0x1b98) = 0;
    *(undefined1 *)(param_1 + 0x1b9a) = 0;
    *(undefined8 *)(param_1 + 0x1ba0) = 0;
    *(undefined8 *)(param_1 + 0x1bb0) = 0xbff0000000000000;
  }
LAB_1004ad081:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

