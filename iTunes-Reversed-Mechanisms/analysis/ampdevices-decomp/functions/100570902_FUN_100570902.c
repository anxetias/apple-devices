// name: FUN_100570902
// address: 100570902

int FUN_100570902(long *param_1,undefined4 *param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  int local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_100203686(param_1 + 1);
  if (param_1[1] == 0) {
    if (param_3 == 0) {
      iVar5 = 0;
      goto LAB_100570a71;
    }
    iVar5 = (**(code **)(*param_1 + 0x68))(param_1,param_3);
    if ((iVar5 == -0x80) || (iVar5 == 0)) goto LAB_100570a71;
    uVar6 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar6,0x10);
  }
  else {
    local_58 = *param_2;
    uStack_54 = param_2[1];
    uStack_50 = param_2[2];
    uStack_4c = param_2[3];
    if (*(long *)(param_2 + 2) != 0) {
      LOCK();
      plVar1 = (long *)(*(long *)(param_2 + 2) + 8);
      *plVar1 = *plVar1 + 1;
      UNLOCK();
    }
    iVar5 = (**(code **)(*param_1 + 0x60))(param_1,&local_58);
    plVar1 = (long *)CONCAT44(uStack_4c,uStack_50);
    if (plVar1 != (long *)0x0) {
      LOCK();
      plVar2 = plVar1 + 1;
      lVar3 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (((iVar5 == -0x80) || (iVar5 == 0)) || (iVar5 == 0x2351)) goto LAB_100570a71;
    uVar6 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar6,0x10);
  }
  if (cVar4 != '\0') {
    local_3c = 0x400;
    local_44 = "Assertion failure";
    local_48 = 0x8220202;
    local_3a = iVar5;
    __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_48,0x12);
  }
LAB_100570a71:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

