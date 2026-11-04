// name: FUN_1004b2630
// address: 1004b2630

void FUN_1004b2630(long param_1)

{
  long *plVar1;
  long lVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  long *plVar8;
  int iVar9;
  long *local_468;
  long *plStack_460;
  undefined4 local_458;
  char *local_454;
  undefined2 local_44c;
  char *local_44a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar4 = FUN_1004aa626();
  if ((cVar4 == '\0') || (*(char *)(param_1 + 0x778) != '\0')) {
    uVar7 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar7,0x10);
    if (cVar4 != '\0') {
      local_458 = 0x8220202;
      local_454 = "Assertion failure";
      local_44c = 0x822;
      local_44a = "( DownloadItem_IsValid(inItem) && ((inItem)->isContainer == false) )";
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
    }
    FUN_1001782e9(0,0);
    goto LAB_1004b268d;
  }
  *(undefined8 *)(param_1 + 0x650) = 0;
  FUN_1001c62d9(param_1 + 0x658,0xc0);
  *(undefined1 *)(param_1 + 0x748) = 0;
  *(undefined8 *)(param_1 + 0x740) = 0;
  *(undefined8 *)(param_1 + 0x750) = 0;
  *(undefined8 *)(param_1 + 0x758) = 0;
  *(undefined8 *)(param_1 + 0x760) = 0;
  uVar7 = FUN_1001ebd46();
  *(undefined8 *)(param_1 + 0x6a0) = uVar7;
  *(undefined2 *)(param_1 + 0x6b0) = 1;
  *(undefined1 *)(param_1 + 0x1cc) = 1;
  *(undefined1 *)(param_1 + 0x1ca) = 1;
  *(undefined4 *)(param_1 + 0x118) = 2;
  *(undefined1 *)(param_1 + 0x1b8) = 1;
  if ((*(long *)(param_1 + 0x78) == 0) ||
     (plVar8 = (long *)std::__shared_weak_count::lock(), plStack_460 = plVar8, plVar8 == (long *)0x0
     )) {
LAB_1004b2815:
    if (*(code **)(param_1 + 0x80) == (code *)0x0) {
LAB_1004b284b:
      FUN_1001ceabd(param_1 + 0x1d0,0,FUN_1004b3394,param_1,0,0);
      cVar4 = FUN_1004aa626(param_1);
      if ((cVar4 != '\0') && (*(char *)(param_1 + 0x778) == '\0')) {
        if (*(int *)(param_1 + 0x1304) == 0x636f7079) {
          cVar4 = FUN_1004aa626(param_1);
          if ((cVar4 == '\0') || (*(char *)(param_1 + 0x778) != '\0')) {
            uVar7 = FUN_1001cc310();
            goto LAB_1004b2887;
          }
        }
        else {
          iVar5 = -0x32;
          if (*(int *)(param_1 + 0x1304) != 0x68747470) goto LAB_1004b28ae;
          *(undefined4 *)(param_1 + 0x135c) = 0;
        }
        cVar4 = FUN_1004b3506(param_1);
        if (cVar4 == '\0') {
          FUN_1004af7d3(param_1,0,1);
          cVar4 = FUN_1004b3506(param_1);
          if ((cVar4 == '\0') &&
             (*(undefined1 *)(param_1 + 0x1c9) = 1, *(char *)(param_1 + 0x1ca) != '\0')) {
            lVar2 = param_1 + 0x188;
            plVar8 = (long *)(param_1 + 0x1258);
            plVar1 = (long *)(param_1 + 0x1278);
            do {
              *(undefined1 *)(param_1 + 0x1ca) = 0;
              *(undefined4 *)(param_1 + 0x118) = 2;
              *(undefined4 *)(param_1 + 0x174) = 0;
              *(undefined4 *)(param_1 + 0x1b90) = 0;
              if (((*(char *)(param_1 + 0x778) != '\0') ||
                  (((*(int *)(param_1 + 0x140) == 0x66696c65 &&
                    (*(int *)(param_1 + 0x1304) != 0x636f7079)) && (*(int *)(param_1 + 0x7d8) < 0)))
                  ) && (*(char *)(param_1 + 0x642) != '\0')) {
                FUN_1004af7d3(param_1,0,1);
              }
              iVar5 = FUN_1004b354e(param_1);
              if (iVar5 == -0x80) {
LAB_1004b2bf5:
                *(undefined8 *)(param_1 + 0x180) = 0;
                FUN_1001c62d9(lVar2);
                iVar5 = -0x80;
LAB_1004b2c17:
                iVar9 = iVar5;
                if (*(int *)(param_1 + 0x170) == 0) {
                  *(int *)(param_1 + 0x170) = iVar9;
                }
              }
              else if (iVar5 == 0) {
                cVar4 = FUN_1004b3506(param_1);
                if (cVar4 == '\0') {
                  local_468 = (long *)0x0;
                  plStack_460 = (long *)0x0;
                  if (*(long *)(param_1 + 0x78) != 0) {
                    plStack_460 = (long *)std::__shared_weak_count::lock();
                    if (plStack_460 != (long *)0x0) {
                      local_468 = *(long **)(param_1 + 0x70);
                    }
                    if (local_468 != (long *)0x0) {
                      iVar5 = (**(code **)(*local_468 + 0x30))(local_468,param_1);
                      if (iVar5 != -0x80) {
                        if (iVar5 == 0) goto LAB_1004b2b70;
                        uVar7 = FUN_1001cc310();
                        cVar4 = _os_log_type_enabled(uVar7,0x10);
                        if (cVar4 != '\0') {
                          local_458 = 0x8220202;
                          local_454 = "Assertion failure";
                          local_44c = 0x400;
                          local_44a = (char *)CONCAT44(local_44a._4_4_,iVar5);
                          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",
                                              &local_458,0x12);
                        }
                      }
                      FUN_10021e316(&local_468);
                      goto LAB_1004b2adb;
                    }
                  }
LAB_1004b2b70:
                  FUN_10021e316(&local_468);
                  if (*(code **)(param_1 + 0x80) != (code *)0x0) {
                    iVar5 = (**(code **)(param_1 + 0x80))(param_1,0x73747274,0,0,param_1 + 0x90);
                    if (iVar5 == -0x80) goto LAB_1004b2bf5;
                    if (iVar5 != 0) {
                      uVar7 = FUN_1001cc310();
                      cVar4 = _os_log_type_enabled(uVar7,0x10);
                      if (cVar4 != '\0') {
                        local_44a = (char *)CONCAT44(local_44a._4_4_,iVar5);
                        goto LAB_1004b2f9b;
                      }
                      goto LAB_1004b2adb;
                    }
                  }
                  cVar4 = FUN_1004b3506(param_1);
                  if (cVar4 == '\0') {
                    if (((*(char *)(param_1 + 0x778) != '\0') ||
                        (((*(int *)(param_1 + 0x140) == 0x66696c65 &&
                          (*(int *)(param_1 + 0x1304) != 0x636f7079)) &&
                         (*(int *)(param_1 + 0x7d8) < 0)))) &&
                       ((*(long *)(param_1 + 0x1b60) != -1 &&
                        (*(long *)(param_1 + 0x1b60) <= *(long *)(param_1 + 7000))))) {
                      *(undefined1 *)(param_1 + 0x178) = 1;
                    }
                    cVar4 = FUN_1004b3506(param_1);
                    if (cVar4 == '\0') {
                      iVar5 = FUN_1004b582e(param_1);
                      FUN_1004b620b(param_1 + 0x7b8,1);
                      FUN_1004b467c(param_1);
                      uVar7 = FUN_1001ebd46();
                      *(undefined8 *)(param_1 + 0x688) = uVar7;
                      *(undefined1 *)(param_1 + 0x691) = 1;
                      if (iVar5 != 0) goto LAB_1004b2adb;
                      FUN_1004b3506(param_1);
                    }
                  }
                }
                *(undefined8 *)(param_1 + 0x180) = 0;
                FUN_1001c62d9(lVar2);
                iVar9 = 0;
              }
              else {
                uVar7 = FUN_1001cc310();
                cVar4 = _os_log_type_enabled(uVar7,0x10);
                if (cVar4 != '\0') {
                  local_44a = (char *)CONCAT44(local_44a._4_4_,iVar5);
LAB_1004b2f9b:
                  local_44c = 0x400;
                  local_454 = "Assertion failure";
                  local_458 = 0x8220202;
                  __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_458,
                                      0x12);
                }
LAB_1004b2adb:
                *(undefined8 *)(param_1 + 0x180) = 0;
                FUN_1001c62d9(lVar2);
                iVar9 = 0;
                if ((iVar5 != 0) && (iVar5 != 0x1f41)) goto LAB_1004b2c17;
              }
              if (*plVar8 != 0) {
                local_458 = CONCAT31(local_458._1_3_,1);
                FUN_1004abe13(param_1,0x73757370,&local_458);
                if ((char)local_458 != '\0') {
                  (**(code **)(*(long *)*plVar8 + 8))();
                  FUN_100203686(plVar1);
                  (**(code **)(*(long *)*plVar1 + 0x178))();
                  FUN_100295c56(plVar8);
                }
                if ((*(int *)(param_1 + 0x170) != 0) && ((*(byte *)(param_1 + 0x7d8) & 4) != 0)) {
                  *(undefined1 *)(param_1 + 0x12d0) = 1;
                }
              }
              cVar4 = FUN_1004aa626(param_1);
              if ((cVar4 == '\0') || (*(char *)(param_1 + 0x778) != '\0')) {
                uVar7 = FUN_1001cc310();
                cVar4 = _os_log_type_enabled(uVar7);
                if (cVar4 != '\0') {
                  local_458 = 0x8220202;
                  local_454 = "Assertion failure";
                  local_44c = 0x822;
                  local_44a = "( DownloadItem_IsValid(inItem) && ((inItem)->isContainer == false) )"
                  ;
                  __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_458,
                                      0x16);
                }
                FUN_1001782e9(0);
              }
              else if (*(int *)(param_1 + 0x1304) == 0x636f7079) {
                cVar4 = FUN_1004aa626(param_1);
                if ((cVar4 == '\0') || (*(char *)(param_1 + 0x778) != '\0')) {
                  uVar7 = FUN_1001cc310();
                  cVar4 = _os_log_type_enabled(uVar7);
                  if (cVar4 != '\0') {
                    local_458 = 0x8220202;
                    local_454 = "Assertion failure";
                    local_44c = 0x822;
                    local_44a = 
                    "( DownloadItem_IsValid(inItem) && ((inItem)->isContainer == false) )";
                    __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_458
                                        ,0x16);
                  }
                  FUN_1001782e9(0);
                }
              }
              else if ((*(int *)(param_1 + 0x1304) == 0x68747470) &&
                      (*(long *)(param_1 + 0x1338) != 0)) {
                FUN_100199903();
                uVar6 = FUN_10019aa5a(*(undefined8 *)(param_1 + 0x1338));
                *(undefined4 *)(param_1 + 0x1368) = uVar6;
                FUN_100199872(*(undefined8 *)(param_1 + 0x1338));
                *(undefined8 *)(param_1 + 0x1338) = 0;
              }
              if (*(char *)(param_1 + 0x1ca) == '\0') {
                if (*(int *)(param_1 + 0x170) == 0) {
                  if ((*(long *)(param_1 + 0x1b60) == 0) &&
                     ((*(long *)(param_1 + 7000) != 0 || (*(long *)(param_1 + 0x1b78) == 0)))) {
                    *(undefined4 *)(param_1 + 0x170) = 0x1fa8;
                  }
                  else {
                    cVar4 = FUN_1004accfb(param_1);
                    if (cVar4 == '\x02') {
                      if (*(int *)(param_1 + 0x170) == 0) {
                        *(undefined4 *)(param_1 + 0x170) = 0x232e;
                      }
                    }
                    else if ((*(int *)(param_1 + 0x170) == 0) &&
                            (*(char *)(param_1 + 0x1ce) == '\0')) {
                      iVar5 = FUN_1004b633b(param_1 + 0x1bc0);
                      if ((iVar5 == 0) ||
                         ((*(int *)(param_1 + 0x1b90) = iVar5, *(char *)(param_1 + 0x778) == '\0' &&
                          (*(int *)(param_1 + 0x1304) == 0x636f7079)))) {
                        iVar9 = 0;
                        iVar5 = 0;
                        if (*(int *)(param_1 + 0x170) == 0) goto LAB_1004b2e33;
                      }
                      else if (*(int *)(param_1 + 0x170) == 0) {
                        *(int *)(param_1 + 0x170) = iVar5;
                      }
                      iVar9 = iVar5;
                      if ((*(byte *)(param_1 + 0x7d8) & 4) != 0) {
                        *(undefined1 *)(param_1 + 0x12d0) = 1;
                      }
                    }
                  }
LAB_1004b2e33:
                  if (*(char *)(param_1 + 0x1ca) != '\0') goto LAB_1004b2e40;
                }
                if ((*(long *)(param_1 + 0x80) != 0) ||
                   ((*(long *)(param_1 + 0x78) != 0 &&
                    (*(long *)(*(long *)(param_1 + 0x78) + 8) != -1)))) {
                  iVar5 = FUN_1004b46da(param_1);
                  iVar9 = 0;
                  if (iVar5 != 0) goto LAB_1004b2930;
                }
              }
LAB_1004b2e40:
              iVar5 = iVar9;
              cVar4 = FUN_1004b3506(param_1);
              if ((cVar4 != '\0') || (*(char *)(param_1 + 0x1ca) == '\0')) break;
              if ((long *)*plVar1 == (long *)0x0) {
                cVar4 = '\x01';
              }
              else {
                if (((*(int *)(param_1 + 0x140) == 0x70656e64) ||
                    (*(char *)(param_1 + 0x778) != '\0')) || (*(char *)(param_1 + 0x1250) == '\0'))
                {
                  (**(code **)(*(long *)*plVar1 + 0x198))();
                }
                else {
                  FUN_1004aa912(param_1,&local_458);
                  (**(code **)(**(long **)(param_1 + 0x1278) + 400))
                            (*(long **)(param_1 + 0x1278),&local_458);
                }
                (**(code **)(**(long **)(param_1 + 0x1278) + 0x180))();
                FUN_100203686(plVar8);
                FUN_100295c56(plVar1);
                cVar4 = *(char *)(param_1 + 0x1ca);
              }
            } while (cVar4 != '\0');
            goto LAB_1004b292b;
          }
        }
        goto LAB_1004b2940;
      }
      uVar7 = FUN_1001cc310();
LAB_1004b2887:
      cVar4 = _os_log_type_enabled(uVar7,0x10);
      if (cVar4 != '\0') {
        local_458 = 0x8220202;
        local_454 = "Assertion failure";
        local_44c = 0x822;
        local_44a = "( DownloadItem_IsValid(inItem) && ((inItem)->isContainer == false) )";
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
      }
      FUN_1001782e9(0,0);
      iVar5 = 0x1faa;
LAB_1004b28ae:
      uVar7 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar7,0x10);
      if (cVar4 != '\0') {
        local_458 = 0x8220202;
        local_454 = "Assertion failure";
        local_44c = 0x400;
        local_44a = (char *)CONCAT44(local_44a._4_4_,iVar5);
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_458,0x12);
      }
    }
    else {
      iVar5 = (**(code **)(param_1 + 0x80))(param_1,0x70737474,0,0,param_1 + 0x90);
      if (iVar5 != -0x80) {
        if (iVar5 != 0) {
          uVar7 = FUN_1001cc310();
          cVar4 = _os_log_type_enabled(uVar7,0x10);
          if (cVar4 != '\0') {
            local_458 = 0x8220202;
            local_454 = "Assertion failure";
            local_44c = 0x400;
            local_44a = (char *)CONCAT44(local_44a._4_4_,iVar5);
            __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_458,0x12);
          }
          goto LAB_1004b292b;
        }
        goto LAB_1004b284b;
      }
    }
LAB_1004b2930:
    if (*(int *)(param_1 + 0x170) == 0) {
      *(int *)(param_1 + 0x170) = iVar5;
    }
  }
  else {
    local_468 = *(long **)(param_1 + 0x70);
    bVar3 = true;
    if (local_468 == (long *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = (**(code **)(*local_468 + 0x28))(local_468,param_1);
      if (iVar5 != -0x80) {
        if (iVar5 == 0) goto LAB_1004b27e9;
        uVar7 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar7,0x10);
        if (cVar4 != '\0') {
          local_458 = 0x8220202;
          local_454 = "Assertion failure";
          local_44c = 0x400;
          local_44a = (char *)CONCAT44(local_44a._4_4_,iVar5);
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_458,0x12);
        }
      }
      bVar3 = false;
    }
LAB_1004b27e9:
    LOCK();
    plVar1 = plVar8 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      std::__shared_weak_count::__release_weak();
    }
    if (bVar3) goto LAB_1004b2815;
LAB_1004b292b:
    if (iVar5 != 0) goto LAB_1004b2930;
  }
LAB_1004b2940:
  if ((*(char *)(param_1 + 0x779) == '\0') || (*(int *)(param_1 + 0x118) != 3)) {
    *(undefined4 *)(param_1 + 0x118) = 4;
  }
LAB_1004b268d:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

