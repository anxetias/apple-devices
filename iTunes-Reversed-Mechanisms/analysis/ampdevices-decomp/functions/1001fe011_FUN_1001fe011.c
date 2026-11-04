// name: FUN_1001fe011
// address: 1001fe011

int FUN_1001fe011(long *param_1)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  double dVar11;
  undefined1 local_4a8 [16];
  undefined8 local_498;
  double local_490;
  long local_488;
  long *plStack_480;
  long local_478;
  long *plStack_470;
  undefined1 local_460 [8];
  undefined1 local_458 [16];
  undefined1 local_448 [16];
  undefined1 local_438 [512];
  undefined2 local_238;
  undefined2 uStack_236;
  int iStack_234;
  undefined4 uStack_230;
  undefined2 local_22c;
  char *local_22a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar4 = *param_1;
  FUN_1001cc3a4(0);
  FUN_1001b7b04(&local_238,"BackupDevice");
  FUN_1001cc232(local_460,&local_238);
  FUN_1001b7a50(&local_238);
  if (*(char *)(lVar4 + 0x6ae9) == '\0') {
    if (*(char *)(lVar4 + 0x6aea) == '\0') {
      if (*(char *)(lVar4 + 0x6aeb) == '\0') {
        cVar5 = FUN_100266cae(*(undefined8 *)(lVar4 + 0x66d8));
        if (cVar5 != '\0') {
          FUN_1001c334a(local_448,0x110e0053);
          FUN_1004f0e83(lVar4,&local_238);
          FUN_1001b8dfc(local_4a8,&local_238);
          FUN_1001bbec4(local_458,local_448,local_4a8);
          FUN_1001bb41a(local_458,local_438);
          FUN_1001b7a50(local_458);
          FUN_1001b7a50(local_4a8);
          FUN_1001b7a50(local_448);
          local_488 = param_1[2];
          plStack_480 = (long *)param_1[3];
          if (param_1[3] != 0) {
            LOCK();
            plVar2 = (long *)(param_1[3] + 8);
            *plVar2 = *plVar2 + 1;
            UNLOCK();
          }
          FUN_1001ceb3c(&local_488,0x7570726d,0,0xffffffffffffffff,local_438);
          if (plStack_480 != (long *)0x0) {
            LOCK();
            plVar2 = plStack_480 + 1;
            lVar3 = *plVar2;
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (lVar3 == 0) {
              (**(code **)(*plStack_480 + 0x10))(plStack_480);
              std::__shared_weak_count::__release_weak();
            }
          }
        }
        iVar6 = FUN_1004dccf5(lVar4,"");
        if (iVar6 != -0x80) {
          if (iVar6 == 0) {
            if (DAT_1008c75c0 != -1) {
              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
            }
            uVar10 = DAT_1008c75b8;
            cVar5 = _os_log_type_enabled(DAT_1008c75b8,1);
            if (cVar5 != '\0') {
              local_238 = 0x102;
              uStack_236 = 0x842;
              iStack_234 = (int)*(undefined8 *)(lVar4 + 0x152c8);
              uStack_230 = (undefined4)((ulong)*(undefined8 *)(lVar4 + 0x152c8) >> 0x20);
              __os_log_impl(0x100000000,uVar10,1,"backup> backing up device %{public}@",&local_238,
                            0xc);
            }
            *(undefined1 *)(lVar4 + 0x6ae9) = 1;
            uVar7 = FUN_1001b19b0();
            *(undefined4 *)((long)param_1 + 0x2c) = uVar7;
            if ((*(byte *)(param_1 + 1) & 2) != 0) {
              uVar10 = FUN_1001c156e();
              FUN_1001c6987(uVar10,0x69706273,*(undefined4 *)(lVar4 + 0x28),0,0);
            }
            iVar6 = FUN_1001ee6ff(FUN_1002036d8,param_1,0xfffffffe,0,0,"BackupMobileDeviceThread");
            if (iVar6 != -0x80) {
              if (iVar6 == 0) {
                local_490 = (double)FUN_1001ebd46();
                FUN_1001c334a(local_458,0x110e0054);
                FUN_1004fdbd0(local_448,lVar4);
                FUN_1001bbec4(&local_238,local_458,local_448);
                FUN_1001bb41a(&local_238,local_438);
                FUN_1001b7a50(&local_238);
                FUN_1001b7a50(local_448);
                FUN_1001b7a50(local_458);
                iVar6 = 0;
                if ((char)param_1[5] == '\0') {
                  local_498 = *(undefined8 *)PTR__kCFRunLoopDefaultMode_10082e118;
                  do {
                    uVar1 = (int)param_1[4] - 1;
                    iVar6 = (int)param_1[4];
                    if (99 < uVar1) {
                      iVar6 = 0;
                    }
                    local_478 = param_1[2];
                    plStack_470 = (long *)param_1[3];
                    if (param_1[3] != 0) {
                      LOCK();
                      plVar2 = (long *)(param_1[3] + 8);
                      *plVar2 = *plVar2 + 1;
                      UNLOCK();
                    }
                    iVar6 = FUN_1001ceb3c(&local_478,0x7570726d,iVar6,(ulong)(uVar1 < 100) - 1 | 100
                                          ,local_438);
                    if (plStack_470 != (long *)0x0) {
                      LOCK();
                      plVar2 = plStack_470 + 1;
                      lVar3 = *plVar2;
                      *plVar2 = *plVar2 + -1;
                      UNLOCK();
                      if (lVar3 == 0) {
                        (**(code **)(*plStack_470 + 0x10))(plStack_470);
                        std::__shared_weak_count::__release_weak();
                      }
                    }
                    if (iVar6 == -0x80) {
                      FUN_1001c34b7(0x110e0047,local_438);
                      if (DAT_1008c75c0 != -1) {
                        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                      }
                      uVar10 = DAT_1008c75b8;
                      cVar5 = _os_log_type_enabled(DAT_1008c75b8,1);
                      if (cVar5 != '\0') {
                        local_238 = 0;
                        __os_log_impl(0x100000000,uVar10,1,"backup> calling AMSCancelBackupRestore",
                                      &local_238,2);
                      }
                      FUN_10016bec9(&local_238,*(undefined8 *)(lVar4 + 0x152c8));
                      iVar8 = _AMSCancelBackupRestore
                                        (CONCAT44(iStack_234,CONCAT22(uStack_236,local_238)));
                      FUN_10016d588(&local_238);
                      if (DAT_1008c75c0 != -1) {
                        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                      }
                      uVar10 = DAT_1008c75b8;
                      cVar5 = _os_log_type_enabled(DAT_1008c75b8,1);
                      if (cVar5 != '\0') {
                        local_238 = 0;
                        __os_log_impl(0x100000000,uVar10,1,
                                      "backup> returned from AMSCancelBackupRestore",&local_238,2);
                      }
                      if (iVar8 != 0) {
                        if (DAT_1008c75c0 != -1) {
                          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                        }
                        uVar10 = DAT_1008c75b8;
                        cVar5 = _os_log_type_enabled(DAT_1008c75b8,0x10);
                        if (cVar5 != '\0') {
                          local_238 = 0x100;
                          uStack_236 = 0x400;
                          iStack_234 = iVar8;
                          __os_log_impl(0x100000000,uVar10,0x10,"AMSCancelBackupRestore failed (%d)"
                                        ,&local_238,8);
                        }
                      }
                    }
                    iVar8 = FUN_1001b1a0f();
                    iVar9 = FUN_1001b19b0();
                    if (iVar8 == iVar9) {
                      FUN_1001727b4(DAT_100712580,local_498,0);
                    }
                    else {
                      FUN_1001b0be5();
                    }
                  } while ((char)param_1[5] == '\0');
                }
                if (*(int *)((long)param_1 + 0x24) == -0x23) {
                  cVar5 = FUN_1005463ad(lVar4);
                  uVar7 = 0xffffffeb;
                  if (cVar5 != '\0') {
                    uVar7 = 0;
                  }
                  *(undefined4 *)((long)param_1 + 0x24) = uVar7;
                }
                cVar5 = FUN_1001fc024(lVar4);
                dVar11 = (double)FUN_1001ebd46();
                iVar8 = *(int *)((long)param_1 + 0x24);
                if (*(int *)((long)param_1 + 0x24) == 0) {
                  iVar8 = iVar6;
                }
                FUN_100367710(dVar11 - local_490,lVar4 + 0x50,cVar5 != '\0',iVar8);
                if ((iVar6 == 0) && (iVar6 = 0, *(int *)((long)param_1 + 0x24) == 0)) {
                  *(undefined1 *)(lVar4 + 0x6af0) = 0;
                  FUN_1004e1698(lVar4);
                }
              }
              else {
                uVar10 = FUN_1001cc310();
                cVar5 = _os_log_type_enabled(uVar10,0x10);
                if (cVar5 != '\0') {
                  local_238 = 0x202;
                  uStack_236 = 0x822;
                  iStack_234 = 0x7a0a90;
                  uStack_230 = 1;
                  local_22c = 0x400;
                  local_22a = (char *)CONCAT44(local_22a._4_4_,iVar6);
                  __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: err == (%d)",&local_238,
                                      0x12);
                }
              }
            }
            *(undefined1 *)(lVar4 + 0x6ae9) = 0;
            if ((*(byte *)(param_1 + 1) & 2) != 0) {
              uVar10 = FUN_1001c156e();
              FUN_1001c6987(uVar10,0x69706266,*(undefined4 *)(lVar4 + 0x28),(long)iVar6,
                            (long)*(int *)((long)param_1 + 0x24));
            }
            FUN_1004dd69c(lVar4,"");
          }
          else {
            uVar10 = FUN_1001cc310();
            cVar5 = _os_log_type_enabled(uVar10,0x10);
            if (cVar5 != '\0') {
              local_238 = 0x202;
              uStack_236 = 0x822;
              iStack_234 = 0x7a0a90;
              uStack_230 = 1;
              local_22c = 0x400;
              local_22a = (char *)CONCAT44(local_22a._4_4_,iVar6);
              __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: err == (%d)",&local_238,0x12)
              ;
            }
          }
        }
      }
      else {
        uVar10 = FUN_1001cc310();
        cVar5 = _os_log_type_enabled(uVar10,0x10);
        if (cVar5 != '\0') {
          local_238 = 0x202;
          uStack_236 = 0x822;
          iStack_234 = 0x7a0a90;
          uStack_230 = 1;
          local_22c = 0x822;
          local_22a = "handlerData->isRestoringFromLocalBackup == false";
          __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
        }
        iVar6 = 0x493;
        FUN_1001782e9(0,0);
      }
    }
    else {
      uVar10 = FUN_1001cc310();
      cVar5 = _os_log_type_enabled(uVar10,0x10);
      if (cVar5 != '\0') {
        local_238 = 0x202;
        uStack_236 = 0x822;
        iStack_234 = 0x7a0a90;
        uStack_230 = 1;
        local_22c = 0x822;
        local_22a = "handlerData->isErasing == false";
        __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
      }
      iVar6 = 0x495;
      FUN_1001782e9(0,0);
    }
  }
  else {
    uVar10 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar10,0x10);
    if (cVar5 != '\0') {
      local_238 = 0x202;
      uStack_236 = 0x822;
      iStack_234 = 0x7a0a90;
      uStack_230 = 1;
      local_22c = 0x822;
      local_22a = "handlerData->isBackingUp == false";
      __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
    }
    iVar6 = 0x492;
    FUN_1001782e9(0,0);
  }
  FUN_1001cc23c(local_460);
  FUN_1001cc4fc(0);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar6;
}

