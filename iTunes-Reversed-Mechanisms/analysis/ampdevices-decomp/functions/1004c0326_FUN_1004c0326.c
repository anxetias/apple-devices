// name: FUN_1004c0326
// address: 1004c0326

void FUN_1004c0326(long *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined4 local_38;
  undefined8 uStack_34;
  undefined2 uStack_2c;
  undefined2 uStack_2a;
  undefined6 uStack_28;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  ppuVar7 = &PTR_FUN_10085d2d0;
  *param_1 = (long)&PTR_FUN_10085d2d0;
  param_1[0x9c] = (long)&PTR_FUN_10085d6b8;
  if ((int)param_1[0x9d] != 0) {
    uVar8 = FUN_1001cc310();
    cVar6 = _os_log_type_enabled(uVar8,0x10);
    if (cVar6 != '\0') {
      local_38 = 0x8220202;
      uStack_34 = "Assertion failure";
      uStack_2c = 0x822;
      uStack_2a = 0x5390;
      uStack_28 = 0x1007d;
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
    ppuVar7 = (undefined **)*param_1;
  }
  (*(code *)ppuVar7[0x6c])(param_1);
  if (0 < (int)param_1[0x9d]) {
    FUN_1002c3cd0(&local_38,param_1 + 1);
    uVar5 = uStack_34._4_4_;
    uVar4 = CONCAT22(uStack_2a,uStack_2c);
    FUN_100241b38();
    plVar3 = (long *)CONCAT44(uVar4,uVar5);
    if (plVar3 != (long *)0x0) {
      LOCK();
      plVar1 = plVar3 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  (**(code **)(*param_1 + 0x2d8))(param_1);
  (**(code **)(*param_1 + 0x3b8))(param_1);
  FUN_10017060f(param_1[0xbc]);
  param_1[0xbc] = 0;
  FUN_10017060f(param_1[0xbd]);
  param_1[0xbd] = 0;
  FUN_100205d70(param_1 + 0xb4);
  FUN_100205d70(param_1 + 0xae);
  FUN_100205d70(param_1 + 0xac);
  FUN_10021e316(param_1 + 0xaa);
  FUN_100205d70(param_1 + 0x9e);
  FUN_1003c2ba2(param_1);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

