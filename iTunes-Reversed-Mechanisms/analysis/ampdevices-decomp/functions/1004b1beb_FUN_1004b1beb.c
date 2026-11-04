// name: FUN_1004b1beb
// address: 1004b1beb

void FUN_1004b1beb(long param_1)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long *local_68;
  long *plStack_60;
  uint local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar3 = *(uint *)(param_1 + 0x144);
  if ((uVar3 >> 8 & 1) == 0) {
    if (DAT_1008bfa78 != -1) {
      _dispatch_once(&DAT_1008bfa78,&PTR___NSConcreteGlobalBlock_10085d068);
    }
    uVar8 = DAT_1008bfa70;
    cVar5 = _os_log_type_enabled(DAT_1008bfa70,1);
    if (cVar5 != '\0') {
      local_58 = local_58 & 0xffff0000;
      __os_log_impl(0x100000000,uVar8,1,"down> download disabling system sleep",&local_58,2);
    }
    FUN_1001cc3a4(2);
  }
  cVar5 = FUN_1004aa626(param_1);
  if ((cVar5 == '\0') || (*(char *)(param_1 + 0x778) == '\0')) {
    FUN_1004b2630(param_1);
    goto LAB_1004b2318;
  }
  cVar5 = FUN_1004aa626(param_1);
  if ((cVar5 == '\0') || (*(char *)(param_1 + 0x778) == '\0')) {
    uVar8 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar8,0x10);
    if (cVar5 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "( DownloadItem_IsValid(inItem) && (inItem)->isContainer )";
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    goto LAB_1004b2318;
  }
  *(undefined8 *)(param_1 + 0x650) = 0;
  FUN_1001c62d9(param_1 + 0x658,0xc0);
  *(undefined1 *)(param_1 + 0x748) = 0;
  *(undefined8 *)(param_1 + 0x740) = 0;
  *(undefined8 *)(param_1 + 0x750) = 0;
  *(undefined8 *)(param_1 + 0x758) = 0;
  *(undefined8 *)(param_1 + 0x760) = 0;
  uVar8 = FUN_1001ebd46();
  *(undefined8 *)(param_1 + 0x6a0) = uVar8;
  *(undefined2 *)(param_1 + 0x6b0) = 1;
  *(undefined1 *)(param_1 + 0x1cc) = 1;
  *(undefined4 *)(param_1 + 0x118) = 2;
  *(undefined1 *)(param_1 + 0x1b8) = 1;
  if ((*(long *)(param_1 + 0x78) != 0) &&
     (plVar7 = (long *)std::__shared_weak_count::lock(), plStack_60 = plVar7, plVar7 != (long *)0x0)
     ) {
    local_68 = *(long **)(param_1 + 0x70);
    bVar4 = true;
    if (local_68 == (long *)0x0) {
      iVar6 = 0;
    }
    else {
      iVar6 = (**(code **)(*local_68 + 0x28))(local_68,param_1);
      if (iVar6 != -0x80) {
        if (iVar6 == 0) goto LAB_1004b1dc5;
        uVar8 = FUN_1001cc310();
        cVar5 = _os_log_type_enabled(uVar8,0x10);
        if (cVar5 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x400;
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar6);
          __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
      }
      bVar4 = false;
    }
LAB_1004b1dc5:
    LOCK();
    plVar1 = plVar7 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      std::__shared_weak_count::__release_weak();
    }
    if (bVar4) goto LAB_1004b1df1;
    goto LAB_1004b22df;
  }
  iVar6 = 0;
LAB_1004b1df1:
  if (*(code **)(param_1 + 0x80) == (code *)0x0) {
LAB_1004b1e27:
    FUN_1001ceabd(param_1 + 0x1d0,0,FUN_1004b3394,param_1,0,0);
    cVar5 = FUN_1004b3506(param_1);
    if (cVar5 == '\0') {
      FUN_1004af7d3(param_1,0,0);
      cVar5 = FUN_1004b3506(param_1);
      if ((cVar5 != '\0') ||
         (*(undefined1 *)(param_1 + 0x1c9) = 1, *(char *)(param_1 + 0x178) != '\0'))
      goto LAB_1004b22df;
      lVar2 = param_1 + 0x188;
      do {
        *(undefined4 *)(param_1 + 0x118) = 2;
        *(undefined4 *)(param_1 + 0x174) = 0;
        iVar6 = FUN_1004b354e(param_1);
        if (iVar6 == -0x80) {
LAB_1004b2193:
          *(undefined8 *)(param_1 + 0x180) = 0;
          FUN_1001c62d9(lVar2,0x30);
          iVar6 = -0x80;
LAB_1004b21b1:
          if (*(int *)(param_1 + 0x170) == 0) {
            *(int *)(param_1 + 0x170) = iVar6;
          }
        }
        else if (iVar6 == 0) {
          cVar5 = FUN_1004b3506(param_1);
          if (cVar5 == '\0') {
            local_68 = (long *)0x0;
            plStack_60 = (long *)0x0;
            if (*(long *)(param_1 + 0x78) != 0) {
              plStack_60 = (long *)std::__shared_weak_count::lock();
              if (plStack_60 != (long *)0x0) {
                local_68 = *(long **)(param_1 + 0x70);
              }
              if (local_68 != (long *)0x0) {
                iVar6 = (**(code **)(*local_68 + 0x30))(local_68,param_1);
                if (iVar6 != -0x80) {
                  if (iVar6 == 0) goto LAB_1004b1f97;
                  uVar8 = FUN_1001cc310();
                  cVar5 = _os_log_type_enabled(uVar8,0x10);
                  if (cVar5 != '\0') {
                    local_58 = 0x8220202;
                    local_54 = "Assertion failure";
                    local_4c = 0x400;
                    local_4a = (char *)CONCAT44(local_4a._4_4_,iVar6);
                    __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_58,
                                        0x12);
                  }
                }
                FUN_10021e316(&local_68);
                goto LAB_1004b1f15;
              }
            }
LAB_1004b1f97:
            FUN_10021e316(&local_68);
            if (*(code **)(param_1 + 0x80) != (code *)0x0) {
              iVar6 = (**(code **)(param_1 + 0x80))(param_1,0x73747274,0,0,param_1 + 0x90);
              if (iVar6 == -0x80) goto LAB_1004b2193;
              if (iVar6 != 0) {
                uVar8 = FUN_1001cc310();
                cVar5 = _os_log_type_enabled(uVar8,0x10);
                if (cVar5 != '\0') {
                  local_4a = (char *)CONCAT44(local_4a._4_4_,iVar6);
                  goto LAB_1004b209f;
                }
                goto LAB_1004b1f15;
              }
            }
            cVar5 = FUN_1004b3506(param_1);
            if (cVar5 == '\0') {
              do {
                FUN_1004aa496(*(undefined8 *)(param_1 + 0x798));
                *(undefined8 *)(param_1 + 0x798) = 0;
                lVar9 = FUN_1004b464f(param_1);
                if (lVar9 == 0) {
                  *(undefined1 *)(param_1 + 0x178) = 1;
                  break;
                }
                iVar6 = FUN_1004b11c8(lVar9);
                if (iVar6 != 0) {
                  if (iVar6 == -0x80) goto LAB_1004b2193;
                  uVar8 = FUN_1001cc310();
                  cVar5 = _os_log_type_enabled(uVar8,0x10);
                  if (cVar5 == '\0') goto LAB_1004b1f15;
                  local_4a = (char *)CONCAT44(local_4a._4_4_,iVar6);
                  goto LAB_1004b209f;
                }
                FUN_1004a88cf(lVar9);
                *(long *)(param_1 + 0x798) = lVar9;
                FUN_1004b1beb(lVar9);
                iVar6 = FUN_1004ab38c(lVar9);
                if (iVar6 != 0) {
                  if (iVar6 == -0x80) goto LAB_1004b2193;
                  uVar8 = FUN_1001cc310();
                  cVar5 = _os_log_type_enabled(uVar8,0x10);
                  if (cVar5 == '\0') goto LAB_1004b1f15;
                  local_4a = (char *)CONCAT44(local_4a._4_4_,iVar6);
                  goto LAB_1004b209f;
                }
                cVar5 = FUN_1004b3506(param_1);
                if (cVar5 != '\0') goto LAB_1004b1edb;
              } while (*(char *)(param_1 + 0x178) == '\0');
              cVar5 = FUN_1004b3506(param_1);
              if (cVar5 == '\0') {
                uVar8 = FUN_1001ebd46();
                *(undefined8 *)(param_1 + 0x688) = uVar8;
                *(undefined1 *)(param_1 + 0x691) = 1;
              }
            }
          }
LAB_1004b1edb:
          *(undefined8 *)(param_1 + 0x180) = 0;
          FUN_1001c62d9(lVar2,0x30);
        }
        else {
          uVar8 = FUN_1001cc310();
          cVar5 = _os_log_type_enabled(uVar8,0x10);
          if (cVar5 != '\0') {
            local_4a = (char *)CONCAT44(local_4a._4_4_,iVar6);
LAB_1004b209f:
            local_4c = 0x400;
            local_54 = "Assertion failure";
            local_58 = 0x8220202;
            __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_58,0x12);
          }
LAB_1004b1f15:
          *(undefined8 *)(param_1 + 0x180) = 0;
          FUN_1001c62d9(lVar2,0x30);
          if ((iVar6 != 0) && (iVar6 != 0x1f41)) goto LAB_1004b21b1;
        }
        iVar6 = FUN_1004b46da(param_1,0);
        if (iVar6 != 0) {
          if ((iVar6 == -0x80) || (iVar6 == 0x2329)) goto LAB_1004b22e4;
          uVar8 = FUN_1001cc310();
          cVar5 = _os_log_type_enabled(uVar8,0x10);
          if (cVar5 == '\0') goto LAB_1004b22df;
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar6);
          goto LAB_1004b247f;
        }
        cVar5 = FUN_1004b3506(param_1);
      } while ((cVar5 == '\0') && (*(char *)(param_1 + 0x178) == '\0'));
    }
    else {
LAB_1004b22df:
      if (iVar6 != 0) goto LAB_1004b22e4;
    }
  }
  else {
    iVar6 = (**(code **)(param_1 + 0x80))(param_1,0x70737474,0,0,param_1 + 0x90);
    if (iVar6 != -0x80) {
      if (iVar6 != 0) {
        uVar8 = FUN_1001cc310();
        cVar5 = _os_log_type_enabled(uVar8,0x10);
        if (cVar5 != '\0') {
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar6);
LAB_1004b247f:
          local_4c = 0x400;
          local_54 = "Assertion failure";
          local_58 = 0x8220202;
          __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
        goto LAB_1004b22df;
      }
      goto LAB_1004b1e27;
    }
LAB_1004b22e4:
    if (*(int *)(param_1 + 0x170) == 0) {
      *(int *)(param_1 + 0x170) = iVar6;
    }
  }
  FUN_1004aa496(*(undefined8 *)(param_1 + 0x798));
  *(undefined8 *)(param_1 + 0x798) = 0;
  *(undefined4 *)(param_1 + 0x118) = 4;
LAB_1004b2318:
  if ((uVar3 >> 8 & 1) == 0) {
    if (DAT_1008bfa78 != -1) {
      _dispatch_once(&DAT_1008bfa78,&PTR___NSConcreteGlobalBlock_10085d068);
    }
    uVar8 = DAT_1008bfa70;
    cVar5 = _os_log_type_enabled(DAT_1008bfa70,1);
    if (cVar5 != '\0') {
      local_58 = local_58 & 0xffff0000;
      __os_log_impl(0x100000000,uVar8,1,"down> download enabling system sleep",&local_58,2);
    }
    FUN_1001cc4fc(2);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

