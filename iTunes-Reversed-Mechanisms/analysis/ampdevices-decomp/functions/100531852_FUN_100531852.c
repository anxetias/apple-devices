// name: FUN_100531852
// address: 100531852

undefined8 * FUN_100531852(undefined8 *param_1,int *param_2)

{
  long lVar1;
  char cVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  *param_1 = 0;
  param_1[1] = 0;
  iVar3 = *param_2;
  if (iVar3 == 0) {
    if ((char)param_2[0x11e] == '\x01') {
      plVar4 = operator_new(0x568,(nothrow_t *)PTR_nothrow_10082c970);
      if (plVar4 != (long *)0x0) {
        FUN_10052b868(plVar4);
        *plVar4 = (long)&PTR_FUN_100868d58;
        plVar4[0xaa] = 0;
        plVar4[0xab] = 0;
        plVar4[0xac] = 0;
      }
      plVar5 = operator_new(0x20);
      plVar5[1] = 0;
      plVar5[2] = 0;
      *plVar5 = (long)&PTR_FUN_1008694f0;
      plVar5[3] = (long)plVar4;
      if (plVar4 == (long *)0x0) {
        uVar6 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar6,0x10);
        if (cVar2 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "obj != nullptr";
          __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        plVar4 = (long *)0x0;
        FUN_1001782e9(0,0);
        goto LAB_100531e1c;
      }
      plVar7 = plVar5 + 1;
      if (plVar4[0xe] == 0) {
        LOCK();
        plVar5[1] = plVar5[1] + 1;
        UNLOCK();
        LOCK();
        plVar5[2] = plVar5[2] + 1;
        UNLOCK();
        plVar4[0xd] = (long)plVar4;
        plVar4[0xe] = (long)plVar5;
LAB_100531d4c:
        LOCK();
        lVar1 = *plVar7;
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (lVar1 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
          std::__shared_weak_count::__release_weak();
        }
      }
      else if (*(long *)(plVar4[0xe] + 8) == -1) {
        LOCK();
        plVar5[1] = plVar5[1] + 1;
        UNLOCK();
        LOCK();
        plVar5[2] = plVar5[2] + 1;
        UNLOCK();
        plVar4[0xd] = (long)plVar4;
        plVar4[0xe] = (long)plVar5;
        std::__shared_weak_count::__release_weak();
        goto LAB_100531d4c;
      }
      iVar3 = (**(code **)(*plVar4 + 0x1c0))(plVar4,param_2);
      if (iVar3 == -0x80) goto LAB_100531df2;
      if (iVar3 == 0) goto LAB_100531e1c;
      local_60 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(local_60,0x10);
      if (cVar2 != '\0') {
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
        goto LAB_100531dd9;
      }
LAB_100531ded:
      if (iVar3 != 0) goto LAB_100531df2;
      goto LAB_100531e1c;
    }
  }
  else {
    if (iVar3 == 0x4d425546) {
      plVar4 = operator_new(0x5b8,(nothrow_t *)PTR_nothrow_10082c970);
      if (plVar4 != (long *)0x0) {
        FUN_10052b868(plVar4);
        *plVar4 = (long)&PTR_FUN_100868b40;
        *(undefined4 *)(plVar4 + 0xaa) = 0;
        plVar4[0xab] = 0;
        plVar4[0xac] = 0;
        plVar4[0xad] = 0;
        plVar4[0xae] = 0;
        plVar4[0xaf] = 0;
        plVar4[0xb0] = 0;
        plVar4[0xb1] = 0;
        plVar4[0xb2] = 0;
        plVar4[0xb3] = 0;
        plVar4[0xb4] = 0;
        plVar4[0xb5] = 0;
        plVar4[0xb6] = 0;
        FUN_1001c62d9(plVar4 + 0xaa,0x48);
      }
      plVar5 = operator_new(0x20);
      plVar5[1] = 0;
      plVar5[2] = 0;
      *plVar5 = (long)&PTR_FUN_1008694a0;
      plVar5[3] = (long)plVar4;
      if (plVar4 == (long *)0x0) {
        uVar6 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar6,0x10);
        if (cVar2 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "obj != nullptr";
          __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        plVar4 = (long *)0x0;
        FUN_1001782e9(0,0);
      }
      else {
        plVar7 = plVar5 + 1;
        if (plVar4[0xe] == 0) {
          LOCK();
          plVar5[1] = plVar5[1] + 1;
          UNLOCK();
          LOCK();
          plVar5[2] = plVar5[2] + 1;
          UNLOCK();
          plVar4[0xd] = (long)plVar4;
          plVar4[0xe] = (long)plVar5;
LAB_100531bc2:
          LOCK();
          lVar1 = *plVar7;
          *plVar7 = *plVar7 + -1;
          UNLOCK();
          if (lVar1 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
            std::__shared_weak_count::__release_weak();
          }
        }
        else if (*(long *)(plVar4[0xe] + 8) == -1) {
          LOCK();
          plVar5[1] = plVar5[1] + 1;
          UNLOCK();
          LOCK();
          plVar5[2] = plVar5[2] + 1;
          UNLOCK();
          plVar4[0xd] = (long)plVar4;
          plVar4[0xe] = (long)plVar5;
          std::__shared_weak_count::__release_weak();
          goto LAB_100531bc2;
        }
        iVar3 = (**(code **)(*plVar4 + 0x1c0))(plVar4,param_2);
        if (iVar3 == -0x80) goto LAB_100531df2;
        if (iVar3 != 0) {
          local_60 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(local_60,0x10);
          if (cVar2 == '\0') goto LAB_100531ded;
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
          goto LAB_100531dd9;
        }
      }
    }
    else {
      if (iVar3 != 0x46494c45) goto LAB_100531e79;
      plVar4 = operator_new(0x5d0,(nothrow_t *)PTR_nothrow_10082c970);
      if (plVar4 != (long *)0x0) {
        FUN_10052b868(plVar4);
        *plVar4 = (long)&PTR_FUN_100868940;
        *(undefined4 *)(plVar4 + 0xaa) = 0;
        plVar4[0xab] = 0;
        plVar4[0xac] = 0;
        plVar4[0xad] = 0;
        plVar4[0xae] = 0;
        plVar4[0xaf] = 0;
        plVar4[0xb0] = 0;
        plVar4[0xb1] = 0;
        plVar4[0xb2] = 0;
        *(undefined4 *)(plVar4 + 0xb3) = 1;
        plVar4[0xb4] = 0;
        *(undefined4 *)(plVar4 + 0xb5) = 0;
        plVar4[0xb6] = 0;
        *(undefined1 *)(plVar4 + 0xb9) = 0;
        FUN_1001c62d9(plVar4 + 0xaa,0x48);
        FUN_1001c62d9(plVar4 + 0xb7,0x10);
      }
      plVar5 = operator_new(0x20);
      plVar5[1] = 0;
      plVar5[2] = 0;
      *plVar5 = (long)&PTR_FUN_100869450;
      plVar5[3] = (long)plVar4;
      if (plVar4 == (long *)0x0) {
        uVar6 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar6,0x10);
        if (cVar2 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "obj != nullptr";
          __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        plVar4 = (long *)0x0;
        FUN_1001782e9(0,0);
        goto LAB_100531e1c;
      }
      plVar7 = plVar5 + 1;
      if (plVar4[0xe] == 0) {
        LOCK();
        plVar5[1] = plVar5[1] + 1;
        UNLOCK();
        LOCK();
        plVar5[2] = plVar5[2] + 1;
        UNLOCK();
        plVar4[0xd] = (long)plVar4;
        plVar4[0xe] = (long)plVar5;
LAB_100531c70:
        LOCK();
        lVar1 = *plVar7;
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (lVar1 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
          std::__shared_weak_count::__release_weak();
        }
      }
      else if (*(long *)(plVar4[0xe] + 8) == -1) {
        LOCK();
        plVar5[1] = plVar5[1] + 1;
        UNLOCK();
        LOCK();
        plVar5[2] = plVar5[2] + 1;
        UNLOCK();
        plVar4[0xd] = (long)plVar4;
        plVar4[0xe] = (long)plVar5;
        std::__shared_weak_count::__release_weak();
        goto LAB_100531c70;
      }
      iVar3 = (**(code **)(*plVar4 + 0x1c0))(plVar4,param_2);
      if (iVar3 != -0x80) {
        if (iVar3 == 0) goto LAB_100531e1c;
        local_60 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(local_60,0x10);
        if (cVar2 == '\0') goto LAB_100531ded;
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
LAB_100531dd9:
        local_4c = 0x400;
        local_54 = "Assertion failure";
        local_58 = 0x8220202;
        __os_log_error_impl(0x100000000,local_60,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        goto LAB_100531ded;
      }
LAB_100531df2:
      LOCK();
      lVar1 = *plVar7;
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (lVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        std::__shared_weak_count::__release_weak();
      }
      plVar4 = (long *)0x0;
      plVar5 = (long *)0x0;
    }
LAB_100531e1c:
    *param_1 = plVar4;
    plVar7 = (long *)param_1[1];
    param_1[1] = plVar5;
    if (plVar7 != (long *)0x0) {
      LOCK();
      plVar4 = plVar7 + 1;
      lVar1 = *plVar4;
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (lVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        std::__shared_weak_count::__release_weak();
      }
      plVar4 = (long *)*param_1;
    }
    if (plVar4 != (long *)0x0) goto LAB_100531e81;
    uVar6 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar6,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "obj != nullptr";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
LAB_100531e79:
  FUN_100295c56(param_1);
LAB_100531e81:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

