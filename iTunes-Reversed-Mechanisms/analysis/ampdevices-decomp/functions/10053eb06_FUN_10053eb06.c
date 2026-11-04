// name: FUN_10053eb06
// address: 10053eb06

long * FUN_10053eb06(long *param_1,long param_2,int param_3)

{
  char cVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  lVar6 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_3 == 0) {
    cVar1 = *(char *)(param_2 + 0xfd8);
  }
  else {
    cVar1 = *(char *)(param_2 + 0xfd9);
  }
  local_38 = lVar6;
  if (cVar1 == '\0') {
    *param_1 = 0;
    param_1[1] = 0;
    goto LAB_10053ed75;
  }
  if (*(long *)(param_2 + 0xfc8) == 0) {
    iVar2 = *(int *)(param_2 + 0x14);
    if (iVar2 == 0x44574e4c) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      plVar3 = operator_new(0x4e8,(nothrow_t *)PTR_nothrow_10082c970);
      if (plVar3 != (long *)0x0) {
        *(undefined8 *)((long)plVar3 + 0xd) = 0;
        plVar3[1] = 0;
        *plVar3 = (long)&PTR_FUN_1008698f8;
        *(undefined4 *)(plVar3 + 3) = 0;
        plVar3[0x93] = 0;
        plVar3[0x95] = 0;
        *(undefined1 *)(plVar3 + 0x9b) = 0;
        *(undefined4 *)((long)plVar3 + 0x4dc) = 0;
        *(undefined1 *)(plVar3 + 0x9c) = 0;
        plVar3[0x90] = 0;
        plVar3[0x91] = 0;
        *(undefined2 *)(plVar3 + 0x92) = 0;
        FUN_1001c62d9((long)plVar3 + 0x1c,0x460);
        FUN_1001c62d9(plVar3 + 0x94,8);
        FUN_1001c62d9(plVar3 + 0x96,0x28);
      }
      plVar4 = operator_new(0x20);
      plVar4[1] = 0;
      plVar4[2] = 0;
      *plVar4 = (long)&PTR_FUN_100869ef8;
      plVar4[3] = (long)plVar3;
      if (plVar3 == (long *)0x0) {
        uVar5 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar5,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "ref != __null";
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        plVar3 = (long *)0x0;
        FUN_1001782e9(0,0);
      }
      else {
        iVar2 = (**(code **)(*plVar3 + 0x90))(plVar3,0,iVar2,param_2 + 0x18);
        if (iVar2 == -0x80) {
LAB_10053ecb3:
          plVar3 = plVar4 + 1;
          LOCK();
          lVar6 = *plVar3;
          *plVar3 = *plVar3 + -1;
          UNLOCK();
          if (lVar6 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
            std::__shared_weak_count::__release_weak();
          }
          plVar3 = (long *)0x0;
          plVar4 = (long *)0x0;
        }
        else if (iVar2 != 0) {
          uVar5 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar5,0x10);
          if (cVar1 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x400;
            local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
            __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x12);
          }
          if (iVar2 != 0) goto LAB_10053ecb3;
        }
      }
      *(long **)(param_2 + 0xfc8) = plVar3;
      plVar3 = *(long **)(param_2 + 0xfd0);
      *(long **)(param_2 + 0xfd0) = plVar4;
      if (plVar3 != (long *)0x0) {
        LOCK();
        plVar4 = plVar3 + 1;
        lVar6 = *plVar4;
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (lVar6 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
          std::__shared_weak_count::__release_weak();
        }
        plVar4 = *(long **)(param_2 + 0xfd0);
      }
      *param_1 = *(long *)(param_2 + 0xfc8);
      param_1[1] = (long)plVar4;
      if (plVar4 != (long *)0x0) {
        LOCK();
        plVar4[1] = plVar4[1] + 1;
        UNLOCK();
      }
    }
  }
  else {
    *param_1 = *(long *)(param_2 + 0xfc8);
    lVar6 = *(long *)(param_2 + 0xfd0);
    param_1[1] = lVar6;
    if (lVar6 != 0) {
      LOCK();
      *(long *)(lVar6 + 8) = *(long *)(lVar6 + 8) + 1;
      UNLOCK();
    }
  }
  lVar6 = *(long *)PTR____stack_chk_guard_10082cb58;
LAB_10053ed75:
  if (lVar6 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return param_1;
}

