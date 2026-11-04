// name: FUN_10042f7d1
// address: 10042f7d1

int FUN_10042f7d1(undefined8 *param_1,uint *param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 uVar8;
  long *plVar9;
  char local_59;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  int local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  *param_2 = 0;
  iVar7 = 0x15;
  do {
    uVar8 = *param_1;
    plVar3 = (long *)param_1[1];
    if (plVar3 != (long *)0x0) {
      LOCK();
      plVar3[1] = plVar3[1] + 1;
      UNLOCK();
    }
    plVar9 = plVar3;
    iVar5 = FUN_10042a48e(uVar8,1,&local_59,param_3);
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
    if (iVar5 != 0) {
      if (iVar5 != -0x80) {
        uVar6 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar6,0x10);
        if (cVar4 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x400;
          local_4a = iVar5;
          __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_58,0x12,uVar8,
                              plVar9);
        }
      }
      goto LAB_10042f8e6;
    }
    if (local_59 < '\0') {
      iVar5 = -0x32;
      goto LAB_10042f8e6;
    }
    *param_2 = *param_2 | (int)local_59 << ((byte)iVar7 & 0x1f);
    iVar7 = iVar7 + -7;
  } while (iVar7 != -7);
  iVar5 = 0;
LAB_10042f8e6:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

