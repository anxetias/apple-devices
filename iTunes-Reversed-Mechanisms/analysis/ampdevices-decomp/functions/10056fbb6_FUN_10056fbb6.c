// name: FUN_10056fbb6
// address: 10056fbb6

int FUN_10056fbb6(long *param_1,undefined4 *param_2)

{
  long *plVar1;
  long *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((*(long *)(param_2 + 2) == 0) && (*(long *)(param_2 + 4) == 0)) {
    uVar10 = FUN_1001cc310();
    cVar7 = _os_log_type_enabled(uVar10,0x10);
    if (cVar7 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "inParams->dpInfo != __null || inParams->sinf != __null";
      __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    iVar8 = 0x20b9;
  }
  else {
    FUN_100203686(param_1 + 2,param_2 + 6);
    FUN_100203686(param_1 + 4,param_2 + 10);
    FUN_100238d72(param_1 + 6,*(undefined8 *)(param_2 + 0xe),*(undefined8 *)(param_2 + 0x10));
    uVar3 = param_2[0x12];
    uVar4 = param_2[0x13];
    uVar5 = param_2[0x14];
    uVar6 = param_2[0x15];
    if (*(long *)(param_2 + 0x14) != 0) {
      LOCK();
      plVar1 = (long *)(*(long *)(param_2 + 0x14) + 8);
      *plVar1 = *plVar1 + 1;
      UNLOCK();
    }
    plVar1 = (long *)param_1[9];
    *(undefined4 *)(param_1 + 8) = uVar3;
    *(undefined4 *)((long)param_1 + 0x44) = uVar4;
    *(undefined4 *)(param_1 + 9) = uVar5;
    *(undefined4 *)((long)param_1 + 0x4c) = uVar6;
    if (plVar1 != (long *)0x0) {
      LOCK();
      plVar2 = plVar1 + 1;
      lVar9 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
        std::__shared_weak_count::__release_weak();
      }
    }
    *(undefined4 *)(param_1 + 1) = *param_2;
    lVar9 = FUN_1001705fc(*(undefined8 *)(param_2 + 2));
    param_1[10] = lVar9;
    lVar9 = FUN_1001705fc(*(undefined8 *)(param_2 + 4));
    param_1[0xb] = lVar9;
    iVar8 = (**(code **)(*param_1 + 0x50))(param_1);
    if (iVar8 != -0x80) {
      if (iVar8 == 0) {
        lVar9 = (**(code **)(*(long *)param_1[8] + 0x20))();
        param_1[0x11] = lVar9;
        iVar8 = 0;
      }
      else {
        uVar10 = FUN_1001cc310();
        cVar7 = _os_log_type_enabled(uVar10,0x10);
        if (cVar7 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x400;
          local_3a = (char *)CONCAT44(local_3a._4_4_,iVar8);
          __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: err == (%d)",&local_48,0x12);
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return iVar8;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

