// name: FUN_100542958
// address: 100542958

int FUN_100542958(long *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined6 uStack_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar6 = -0x2d;
  if (*(int *)((long)param_1 + 0x14) != 0x46494c45) goto LAB_100542a9c;
  (**(code **)(*param_1 + 0xd8))();
  (**(code **)(*param_1 + 0xb8))(param_1);
  iVar6 = 0;
  if (*(char *)((long)param_1 + 0xfd9) == '\x01') {
    (**(code **)(*param_1 + 0x130))(&local_58,param_1,1);
    plVar3 = (long *)CONCAT44(uStack_54,local_58);
    plVar4 = (long *)CONCAT26(uStack_4a,CONCAT24(uStack_4c,local_50));
    if (plVar3 == (long *)0x0) {
      uVar8 = FUN_1001cc310();
      cVar5 = _os_log_type_enabled(uVar8,0x10);
      if (cVar5 != '\0') {
        local_58 = 0x8220202;
        uStack_54 = 0x7a0a90;
        local_50 = 1;
        uStack_4c = 0x822;
        uStack_4a = 0x5c54;
        uStack_48 = 0x1007a;
        __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      iVar6 = -0x32;
      FUN_1001782e9(0,0);
    }
    else {
      iVar6 = (**(code **)(*plVar3 + 0x60))(plVar3,param_2,param_3,param_4,param_5);
    }
    if (plVar4 != (long *)0x0) {
      LOCK();
      plVar1 = plVar4 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (plVar3 != (long *)0x0) goto LAB_100542a6f;
  }
  else {
LAB_100542a6f:
    iVar7 = (**(code **)(*param_1 + 0x248))(param_1,param_2,param_3,param_4,param_5);
    if (iVar6 == 0) {
      iVar6 = iVar7;
    }
  }
  (**(code **)(*param_1 + 0xe0))(param_1,param_2);
LAB_100542a9c:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

