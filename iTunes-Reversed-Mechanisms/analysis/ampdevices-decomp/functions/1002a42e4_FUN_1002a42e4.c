// name: FUN_1002a42e4
// address: 1002a42e4

void FUN_1002a42e4(long param_1,long *param_2)

{
  long *plVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  undefined8 *local_498;
  undefined8 local_490;
  undefined8 uStack_488;
  long *local_480;
  long *local_478;
  long *local_470;
  long *local_468;
  undefined1 local_459;
  undefined4 local_458;
  int iStack_454;
  undefined2 local_450;
  undefined2 uStack_44e;
  undefined2 uStack_44c;
  undefined2 uStack_44a;
  undefined2 uStack_448;
  undefined4 uStack_446;
  undefined2 uStack_442;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  plVar3 = *(long **)(param_1 + 0x50);
  if (plVar3 == (long *)0x0) {
    uVar9 = FUN_1001cc310();
    uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
    cVar6 = _os_log_type_enabled(uVar9,0x10);
    if (cVar6 != '\0') {
      local_458 = 0x8220202;
      iStack_454 = 0x7a0a90;
      local_450 = 1;
      uStack_44e = 0;
      uStack_44c = 0x822;
      uStack_44a = 0x7e6e;
      uStack_448 = 0x7b;
      uStack_446 = 1;
      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar9);
    FUN_1001782e9(0,0);
  }
  else {
    local_470 = param_2;
    if (param_2 == (long *)0x0) {
      uVar9 = FUN_1001cc310();
      uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
      cVar6 = _os_log_type_enabled(uVar9,0x10);
      if (cVar6 != '\0') {
        local_458 = 0x8220202;
        iStack_454 = 0x7a0a90;
        local_450 = 1;
        uStack_44e = 0;
        uStack_44c = 0x822;
        uStack_44a = 0x8255;
        uStack_448 = 0x7b;
        uStack_446 = 1;
        __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
      }
      (*(code *)PTR__objc_release_10082c7b0)(uVar9);
      FUN_1001782e9(0,0);
    }
    else if (*(char *)plVar3[0x15] == '\0') {
      plVar12 = plVar3 + 1;
      iVar7 = FUN_1001e86ff(plVar12);
      if (iVar7 != -0x80) {
        if (iVar7 == 0) {
          if (*(char *)plVar3[0x15] == '\0') {
            if ((char)plVar3[0x14] == '\0') {
              local_468 = (long *)0x0;
              plVar11 = local_470;
              local_478 = plVar12;
              do {
                plVar12 = local_478;
                if ((int)plVar11[0x10e] != 5) {
                  local_468 = plVar11;
                }
                local_459 = *(undefined1 *)((long)plVar11 + 0xcfa);
                *(undefined1 *)((long)plVar11 + 0xcfa) = 4;
                if ((char)plVar11[1] != '\x01') {
                  iVar7 = FUN_100180f0c(plVar11 + 2,DAT_1008c4d90,plVar11 + 0x10b,0);
                  if (iVar7 == 0) goto LAB_1002a47c8;
                  if (iVar7 != -0x80) {
                    uVar9 = FUN_1001cc310();
                    uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
                    cVar6 = _os_log_type_enabled(uVar9,0x10);
                    if (cVar6 != '\0') {
                      local_458 = 0x8220202;
                      iStack_454 = 0x7a0a90;
                      local_450 = 1;
                      uStack_44e = 0;
                      uStack_44c = 0x400;
                      uStack_44a = (undefined2)iVar7;
                      uStack_448 = (undefined2)((uint)iVar7 >> 0x10);
                      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",
                                          &local_458,0x12);
                    }
LAB_1002a4a0e:
                    (*(code *)PTR__objc_release_10082c7b0)(uVar9);
                  }
                  goto LAB_1002a4461;
                }
                uVar9 = FUN_100169885(plVar11[0x197],plVar11[0x198]);
                local_458 = (undefined4)uVar9;
                iStack_454 = (int)((ulong)uVar9 >> 0x20);
                lVar10 = FUN_1004a4f67(uVar9);
                plVar11[0x10b] = lVar10;
                FUN_10016d588(&local_458);
                if (plVar11[0x10b] == 0) {
                  uVar9 = FUN_1001cc310();
                  uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
                  cVar6 = _os_log_type_enabled(uVar9,0x10);
                  if (cVar6 != '\0') {
                    local_458 = 0x8220202;
                    iStack_454 = 0x7a0a90;
                    local_450 = 1;
                    uStack_44e = 0;
                    uStack_44c = 0x822;
                    uStack_44a = 0x8289;
                    uStack_448 = 0x7b;
                    uStack_446 = 1;
                    __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_458
                                        ,0x16);
                  }
                  (*(code *)PTR__objc_release_10082c7b0)(uVar9);
                  FUN_1001782e9(0,0);
                  goto LAB_1002a43fd;
                }
LAB_1002a47c8:
                uVar9 = _objc_autoreleasePoolPush();
                FUN_1001b52da(&local_458,plVar11[0x10b],0);
                local_480 = plVar11 + 0x10c;
                FUN_100217418(local_480,&local_458);
                plVar12 = (long *)CONCAT26(uStack_44a,
                                           CONCAT24(uStack_44c,CONCAT22(uStack_44e,local_450)));
                if (plVar12 != (long *)0x0) {
                  LOCK();
                  plVar1 = plVar12 + 1;
                  lVar10 = *plVar1;
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (lVar10 == 0) {
                    (**(code **)(*plVar12 + 0x10))(plVar12);
                    std::__shared_weak_count::__release_weak();
                  }
                }
                _objc_autoreleasePoolPop(uVar9);
                plVar12 = local_478;
                if (*local_480 == 0) {
                  uVar9 = FUN_1001cc310();
                  uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
                  cVar6 = _os_log_type_enabled(uVar9,0x10);
                  if (cVar6 != '\0') {
                    local_458 = 0x8220202;
                    iStack_454 = 0x7a0a90;
                    local_450 = 1;
                    uStack_44e = 0;
                    uStack_44c = 0x822;
                    uStack_44a = 0x82bc;
                    uStack_448 = 0x7b;
                    uStack_446 = 1;
                    __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_458
                                        ,0x16);
                  }
                  (*(code *)PTR__objc_release_10082c7b0)(uVar9);
                  FUN_1001782e9(0,0);
                  if (DAT_1008c75c0 != -1) {
                    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                  }
                  uVar9 = (*(code *)PTR__objc_retain_10082c7b8)(DAT_1008c75b8);
                  cVar6 = _os_log_type_enabled(uVar9,0x10);
                  iVar7 = -0xd0;
                  if (cVar6 != '\0') {
                    iVar8 = *(int *)((long)plVar11 + 0xcb4);
                    local_498 = (undefined8 *)FUN_100169885(plVar11[0x197],plVar11[0x198]);
                    local_458 = 0x4000202;
                    local_450 = 0x842;
                    uStack_44e = SUB82(local_498,0);
                    uStack_44c = (undefined2)((ulong)local_498 >> 0x10);
                    uStack_44a = (undefined2)((ulong)local_498 >> 0x20);
                    uStack_448 = (undefined2)((ulong)local_498 >> 0x30);
                    iStack_454 = iVar8;
                    __os_log_impl(0x100000000,uVar9,0x10,
                                  "sync> can\'t create ITImage; recordID %d sourceGUID %{public}@",
                                  &local_458,0x12);
                    FUN_10016d588(&local_498);
                    plVar12 = local_478;
                  }
                  goto LAB_1002a4a0e;
                }
                *(undefined1 *)((long)plVar11 + 0xcfa) = local_459;
                plVar11 = (long *)*plVar11;
              } while (plVar11 != (long *)0x0);
            }
            *(code **)(param_1 + 0x40) = FUN_1002a4c1e;
            FUN_1001ebfee(plVar3[0x13],param_1);
          }
          goto LAB_1002a43fd;
        }
        uVar9 = FUN_1001cc310();
        uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
        cVar6 = _os_log_type_enabled(uVar9,0x10);
        if (cVar6 != '\0') {
          local_458 = 0x8220202;
          iStack_454 = 0x7a0a90;
          local_450 = 1;
          uStack_44e = 0;
          uStack_44c = 0x400;
          uStack_44a = (undefined2)iVar7;
          uStack_448 = (undefined2)((uint)iVar7 >> 0x10);
          __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",&local_458,0x12);
        }
        (*(code *)PTR__objc_release_10082c7b0)(uVar9);
        if (iVar7 == 0) goto LAB_1002a43fd;
      }
      local_468 = (long *)0x0;
LAB_1002a4461:
      FUN_1002a52c5(local_470);
      iVar8 = FUN_1001e89de(plVar12);
      if ((iVar8 != -0x80) && (iVar8 != 0)) {
        uVar9 = FUN_1001cc310();
        uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
        cVar6 = _os_log_type_enabled(uVar9,0x10);
        if (cVar6 != '\0') {
          local_458 = 0x8220202;
          iStack_454 = 0x7a0a90;
          local_450 = 1;
          uStack_44e = 0;
          uStack_44c = 0x400;
          uStack_44a = (undefined2)iVar8;
          uStack_448 = (undefined2)((uint)iVar8 >> 0x10);
          __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",&local_458,0x12);
        }
        (*(code *)PTR__objc_release_10082c7b0)(uVar9);
      }
      if (*plVar3 != 0) {
        if (local_468 == (long *)0x0) {
          uVar9 = FUN_1001cc310();
          uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
          cVar6 = _os_log_type_enabled(uVar9,0x10);
          if (cVar6 != '\0') {
            local_458 = 0x8220202;
            iStack_454 = 0x7a0a90;
            local_450 = 1;
            uStack_44e = 0;
            uStack_44c = 0x822;
            uStack_44a = 0x82ee;
            uStack_448 = 0x7b;
            uStack_446 = 1;
            __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
          }
          (*(code *)PTR__objc_release_10082c7b0)(uVar9);
          FUN_1001782e9(0,0);
          local_468 = local_470;
        }
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar9 = (*(code *)PTR__objc_retain_10082c7b8)(DAT_1008c75b8);
        cVar6 = _os_log_type_enabled(uVar9,0x10);
        if (cVar6 != '\0') {
          uVar2 = *(undefined4 *)((long)local_468 + 0xcb4);
          local_498 = (undefined8 *)FUN_100169885(local_468[0x197],local_468[0x198]);
          local_458 = 0x4000302;
          local_450 = 0x400;
          uStack_44e = (undefined2)uVar2;
          uStack_44c = (undefined2)((uint)uVar2 >> 0x10);
          uStack_44a = 0x842;
          uStack_448 = SUB82(local_498,0);
          uStack_446 = (undefined4)((ulong)local_498 >> 0x10);
          uStack_442 = (undefined2)((ulong)local_498 >> 0x30);
          iStack_454 = iVar7;
          __os_log_impl(0x100000000,uVar9,0x10,
                        "sync> status %d during read image; recordID %d sourceGUID %{public}@",
                        &local_458,0x18);
          FUN_10016d588(&local_498);
        }
        (*(code *)PTR__objc_release_10082c7b0)(uVar9);
        puVar4 = (undefined8 *)*plVar3;
        uVar2 = *(undefined4 *)((long)local_468 + 0xcb4);
        lVar10 = local_468[0x197];
        lVar5 = local_468[0x198];
        ___bzero(&local_458,0x420);
        local_498 = &local_490;
        local_490 = 0;
        uStack_488 = 0;
        iVar7 = (**(code **)*puVar4)
                          (puVar4,uVar2,lVar10,lVar5,&DAT_ffffff30,&local_458,0,0,0,0,&local_498);
        FUN_1002a8ddc(&local_498,local_490);
        if (iVar7 == 0) {
          *(undefined1 *)((long)local_468 + 0xcf9) = 1;
        }
      }
    }
  }
LAB_1002a43fd:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

