// name: FUN_1005f47a7
// address: 1005f47a7

int FUN_1005f47a7(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined6 uStack_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar1 = param_1 + 0x40;
  if (*(int *)(param_1 + 0x48) != 0) {
    FUN_10046debe(lVar1);
  }
  plVar2 = (long *)(param_1 + 0x30);
  iVar7 = 0;
  if (*(long **)(param_1 + 0x30) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x30) + 0x118))();
    plVar5 = (long *)*plVar2;
    if (plVar5 != (long *)0x0) {
      local_58 = 0;
      uStack_54 = 0;
      uStack_50 = 0;
      uStack_4c = 0;
      uStack_4a = 0;
      iVar7 = (**(code **)(*plVar5 + 0x20))(plVar5,0);
      if (iVar7 == 0) {
        (**(code **)(*(long *)CONCAT44(uStack_54,local_58) + 0x110))();
        (**(code **)(*(long *)CONCAT44(uStack_54,local_58) + 0x1d0))();
      }
      plVar5 = (long *)CONCAT26(uStack_4a,CONCAT24(uStack_4c,uStack_50));
      if (plVar5 != (long *)0x0) {
        LOCK();
        plVar3 = plVar5 + 1;
        lVar4 = *plVar3;
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (lVar4 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
          std::__shared_weak_count::__release_weak();
        }
      }
    }
  }
  if (*(int *)(param_1 + 0x48) != 0) {
    cVar6 = FUN_10046e483(lVar1);
    if (cVar6 != '\x01') {
      uVar8 = FUN_1001cc310();
      cVar6 = _os_log_type_enabled(uVar8,0x10);
      if (cVar6 != '\0') {
        local_58 = 0x8220202;
        uStack_54 = 0x7a0a90;
        uStack_50 = 1;
        uStack_4c = 0x822;
        uStack_4a = 0x3299;
        uStack_48 = 0x1007f;
        __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
      iVar7 = -0x32;
    }
  }
  if ((long *)*plVar2 != (long *)0x0) {
    iVar7 = (**(code **)(*(long *)*plVar2 + 0xf8))();
    FUN_1002188e4(plVar2);
  }
  if (*(int *)(param_1 + 0x48) != 0) {
    FUN_10046eb70(lVar1);
  }
  if (*(long *)(param_1 + 0x1908) != 0) {
    FUN_10015d8f2(param_1 + 0x1900);
  }
  FUN_1001c62d9(param_1,0x1980);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar7;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

