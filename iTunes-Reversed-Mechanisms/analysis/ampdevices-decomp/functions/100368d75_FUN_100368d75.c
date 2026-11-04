// name: FUN_100368d75
// address: 100368d75

long FUN_100368d75(long param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long local_78;
  long local_70;
  long local_68;
  long *plStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined6 local_48;
  undefined2 uStack_42;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_70 = 0;
  local_68 = 0;
  plStack_60 = (long *)0x0;
  if (param_3 != (long *)0x0) {
    *param_3 = 0;
  }
  if (param_1 == 0) {
LAB_100368eb1:
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = 0x7a0a90;
      local_50 = 1;
      uStack_4c = 0x822;
      uStack_4a = 0xe894;
      local_48 = 0x1007a;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    lVar6 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    if (*(int *)(param_1 + 0x80) != 0x74646174) {
      uVar5 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar5,0x10);
      if (cVar3 != '\0') {
        local_58 = 0x8220202;
        uStack_54 = 0x7ab58c;
        local_50 = 1;
        uStack_4c = 0x822;
        uStack_4a = 0xec03;
        local_48 = 0x1007a;
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      cVar3 = FUN_1001782e9(0,1);
      if (cVar3 == '\0') goto LAB_100368eb1;
    }
    FUN_100203686(&local_68,param_1 + 0x2cb0);
    if (local_68 != 0) {
      cVar3 = FUN_10053916d(local_68 + 0x70,0xca);
      if (cVar3 != '\0') {
        FUN_100626f3e(local_68,0xca,&local_58);
        iVar4 = FUN_1001d4041(*(undefined8 *)(local_68 + 0x68),CONCAT44(uStack_54,local_58),
                              CONCAT26(uStack_4a,CONCAT24(uStack_4c,local_50)),param_2,
                              CONCAT26(uStack_42,local_48),0,&local_70,&local_78);
        lVar6 = 0;
        if ((local_70 != 0 && local_78 != 0) && iVar4 == 0) {
          lVar6 = local_78;
        }
        if ((param_3 != (long *)0x0) && ((local_70 != 0 && local_78 != 0) && iVar4 == 0)) {
          *param_3 = local_70;
          lVar6 = local_78;
        }
        goto LAB_100368edb;
      }
    }
    lVar6 = 0;
  }
LAB_100368edb:
  if (plStack_60 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_60 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_60 + 0x10))(plStack_60);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return lVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

