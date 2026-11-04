// name: FUN_100541e66
// address: 100541e66

int FUN_100541e66(long *param_1,long param_2,byte *param_3,long param_4,undefined4 param_5)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined2 uStack_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 != 0) {
    uVar6 = 0;
    iVar4 = (**(code **)(*param_1 + 0x150))(param_1,param_2);
    if (iVar4 != -0x80) {
      if (iVar4 == 0) goto LAB_100541ec6;
      uVar5 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar5,0x10);
      if (cVar3 == '\0') goto LAB_100542051;
      uStack_4a = (undefined2)iVar4;
      uStack_48 = (undefined2)((uint)iVar4 >> 0x10);
LAB_10054215d:
      uStack_4c = 0x400;
      local_50 = 1;
      uStack_54 = 0x7a0a90;
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x12,param_4,
                          uVar6);
    }
    goto LAB_100542051;
  }
LAB_100541ec6:
  if (-1 < (char)param_5) {
    if ((param_2 != 0 || param_3 != (byte *)0x0) && param_1[0x1fc] != 0) {
      FUN_1004406ae(param_1[0x1fc],1,0);
      uVar6 = 0;
      iVar4 = FUN_1004429f8(param_1[0x1fc],param_2,param_3);
      if (iVar4 != -0x80) {
        if (iVar4 == 0) goto LAB_100541f28;
        uVar5 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar5,0x10);
        if (cVar3 != '\0') {
          uStack_4a = (undefined2)iVar4;
          uStack_48 = (undefined2)((uint)iVar4 >> 0x10);
          goto LAB_10054215d;
        }
      }
LAB_100542051:
      FUN_1002188e4(param_1 + 0x1f9);
      goto LAB_1005420ba;
    }
  }
LAB_100541f28:
  (**(code **)(*param_1 + 0x130))(&local_58,param_1,0);
  plVar2 = (long *)CONCAT44(uStack_54,local_58);
  plVar7 = (long *)CONCAT26(uStack_4a,CONCAT24(uStack_4c,local_50));
  if (plVar2 == (long *)0x0) {
LAB_100541fab:
    if (-1 < (char)param_5) {
      if (param_3 != (byte *)0x0) {
        (**(code **)(*param_1 + 0x158))(param_1,param_3,param_5);
      }
      if (param_4 != 0) {
        (**(code **)(*param_1 + 0x160))(param_1,param_4);
      }
    }
    iVar4 = 0;
    if ((param_3 != (byte *)0x0) && ((char)param_1[0xa7] != '\0')) {
      (**(code **)(*param_1 + 0x168))(param_1,param_2,param_3);
      iVar4 = 0;
      if (*(int *)(param_1[0x1fc] + 0x1c) == 0x46494c45) {
        iVar4 = 0;
        cVar3 = FUN_1002b8a30(param_1[0x1fc] + 0x4c,0,0);
        if (cVar3 != '\0') {
          *param_3 = *param_3 & 0xf7;
        }
      }
    }
  }
  else {
    iVar4 = (**(code **)(*plVar2 + 0x18))(plVar2,param_2,param_3,param_4,param_1 + 0x96);
    if (iVar4 != -0x80) {
      if (iVar4 == 0) {
        if (plVar7 != (long *)0x0) {
          LOCK();
          plVar2 = plVar7 + 1;
          lVar1 = *plVar2;
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (lVar1 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
            std::__shared_weak_count::__release_weak();
          }
        }
        plVar7 = (long *)0x0;
        goto LAB_100541fab;
      }
      uVar6 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar6,0x10);
      if (cVar3 != '\0') {
        local_58 = 0x8220202;
        uStack_54 = 0x7a0a90;
        local_50 = 1;
        uStack_4c = 0x400;
        uStack_4a = (undefined2)iVar4;
        uStack_48 = (undefined2)((uint)iVar4 >> 0x10);
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
    }
  }
  FUN_1002188e4(param_1 + 0x1f9);
  if (plVar7 != (long *)0x0) {
    LOCK();
    plVar2 = plVar7 + 1;
    lVar1 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar1 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      std::__shared_weak_count::__release_weak();
    }
  }
LAB_1005420ba:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

