// name: FUN_1002a4c1e
// address: 1002a4c1e

void FUN_1002a4c1e(long param_1,long *param_2)

{
  undefined4 uVar1;
  long lVar2;
  int *piVar3;
  undefined8 *puVar4;
  long lVar5;
  byte bVar6;
  undefined *puVar7;
  byte bVar8;
  char cVar9;
  int iVar10;
  undefined8 uVar11;
  long *plVar12;
  uint uVar13;
  long *plVar14;
  bool bVar15;
  undefined8 local_488;
  undefined8 uStack_480;
  undefined8 *local_478;
  undefined8 local_470;
  undefined8 uStack_468;
  long *local_460;
  undefined4 local_458;
  undefined4 local_454;
  undefined2 uStack_450;
  undefined2 uStack_44e;
  undefined2 uStack_44c;
  int iStack_44a;
  undefined4 uStack_446;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar2 = *(long *)(param_1 + 0x50);
  if (lVar2 == 0) {
    uVar11 = FUN_1001cc310();
    uVar11 = _objc_retainAutoreleasedReturnValue(uVar11);
    cVar9 = _os_log_type_enabled(uVar11,0x10);
    if (cVar9 != '\0') {
      local_458 = 0x8220202;
      local_454 = 0x7a0a90;
      uStack_450 = 1;
      uStack_44e = 0;
      uStack_44c = 0x822;
      iStack_44a = 0x7b8314;
      uStack_446 = 1;
      __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar11);
    FUN_1001782e9(0,0);
  }
  else if (param_2 == (long *)0x0) {
    uVar11 = FUN_1001cc310();
    uVar11 = _objc_retainAutoreleasedReturnValue(uVar11);
    cVar9 = _os_log_type_enabled(uVar11,0x10);
    if (cVar9 != '\0') {
      local_458 = 0x8220202;
      local_454 = 0x7a0a90;
      uStack_450 = 1;
      uStack_44e = 0;
      uStack_44c = 0x822;
      iStack_44a = 0x7b8255;
      uStack_446 = 1;
      __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar11);
    FUN_1001782e9(0,0);
  }
  else {
    local_460 = param_2;
    if (**(char **)(lVar2 + 0x60) == '\0') {
      iVar10 = FUN_1001e89de(*(undefined8 *)(lVar2 + 0x40));
      if (iVar10 != -0x80) {
        if (iVar10 == 0) {
          plVar14 = (long *)0x0;
          plVar12 = local_460;
          bVar8 = 0;
          do {
            bVar6 = bVar8;
            if ((int)plVar12[0x10e] != 5) {
              plVar14 = plVar12;
            }
            local_488 = 0;
            uStack_480 = 0;
            iVar10 = FUN_1002a5300(lVar2,plVar12,&local_488,0);
            if (iVar10 != 0) {
              if (iVar10 == -0x80) goto LAB_1002a4fde;
              uVar11 = FUN_1001cc310();
              uVar11 = _objc_retainAutoreleasedReturnValue(uVar11);
              cVar9 = _os_log_type_enabled(uVar11,0x10);
              if (cVar9 == '\0') goto LAB_1002a4fd5;
              goto LAB_1002a5200;
            }
            bVar15 = *(char *)((long)plVar12 + 0xcfa) == '\x04';
            plVar12 = (long *)*plVar12;
            bVar8 = bVar6 | bVar15;
          } while (plVar12 != (long *)0x0);
          piVar3 = *(int **)(lVar2 + 0x50);
          LOCK();
          iVar10 = *piVar3;
          *piVar3 = *piVar3 + 1;
          UNLOCK();
          iVar10 = FUN_1001ceb24(*(undefined8 *)(lVar2 + 0x20),*(undefined4 *)(lVar2 + 0x28),
                                 iVar10 + *(int *)(lVar2 + 0x3c) + 1,
                                 *(int *)(lVar2 + 0x3c) + *(int *)(lVar2 + 0x38));
          if ((iVar10 != -0x80) && (iVar10 != 0x2349)) {
            if (*(long *)(lVar2 + 0x30) != 0) {
              if (plVar14 == (long *)0x0) {
                uVar11 = FUN_1001cc310();
                uVar11 = _objc_retainAutoreleasedReturnValue(uVar11);
                cVar9 = _os_log_type_enabled(uVar11,0x10);
                if (cVar9 != '\0') {
                  local_458 = 0x8220202;
                  local_454 = 0x7a0a90;
                  uStack_450 = 1;
                  uStack_44e = 0;
                  uStack_44c = 0x822;
                  iStack_44a = 0x7b82ee;
                  uStack_446 = 1;
                  __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",&local_458,
                                      0x16);
                }
                (*(code *)PTR__objc_release_10082c7b0)(uVar11);
                FUN_1001782e9(0,0);
                plVar14 = local_460;
              }
              if ((bool)(bVar6 | bVar15)) {
                if (DAT_1008c75c0 != -1) {
                  _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                }
                uVar11 = (*(code *)PTR__objc_retain_10082c7b8)(DAT_1008c75b8);
                cVar9 = _os_log_type_enabled(uVar11,0x10);
                if (cVar9 != '\0') {
                  uVar1 = *(undefined4 *)((long)plVar14 + 0xcb4);
                  local_478 = (undefined8 *)FUN_100169885(plVar14[0x197],plVar14[0x198]);
                  local_458 = 0x4000202;
                  uStack_450 = 0x842;
                  uStack_44e = SUB82(local_478,0);
                  uStack_44c = (undefined2)((ulong)local_478 >> 0x10);
                  iStack_44a = (int)((ulong)local_478 >> 0x20);
                  local_454 = uVar1;
                  __os_log_impl(0x100000000,uVar11,0x10,
                                "sync> found failed work item; recordID %d sourceGUID %{public}@",
                                &local_458,0x12);
                  FUN_10016d588(&local_478);
                }
                (*(code *)PTR__objc_release_10082c7b0)(uVar11);
                puVar4 = *(undefined8 **)(lVar2 + 0x30);
                uVar1 = *(undefined4 *)((long)plVar14 + 0xcb4);
                lVar2 = plVar14[0x197];
                lVar5 = plVar14[0x198];
                ___bzero(&local_458,0x420);
                local_478 = &local_470;
                local_470 = 0;
                uStack_468 = 0;
                iVar10 = (**(code **)*puVar4)
                                   (puVar4,uVar1,lVar2,lVar5,&DAT_ffffff30,&local_458,0,0,0,0,
                                    &local_478);
                FUN_1002a8ddc(&local_478,local_470);
              }
              else {
                FUN_1002a71c6(lVar2,local_460);
                plVar12 = plVar14 + 0x86;
                if ((char)plVar14[0x10a] == '\0') {
                  plVar12 = (long *)0x0;
                }
                iVar10 = (**(code **)**(undefined8 **)(lVar2 + 0x30))
                                   (*(undefined8 **)(lVar2 + 0x30),
                                    *(undefined4 *)((long)plVar14 + 0xcb4),plVar14[0x197],
                                    plVar14[0x198],0,plVar14 + 0x112,0,0,plVar12,0,local_460 + 0x19c
                                   );
              }
              if (iVar10 == 0) {
                *(undefined1 *)((long)plVar14 + 0xcf9) = 1;
              }
            }
            goto LAB_1002a4ce0;
          }
        }
        else {
          uVar11 = FUN_1001cc310();
          uVar11 = _objc_retainAutoreleasedReturnValue(uVar11);
          cVar9 = _os_log_type_enabled(uVar11,0x10);
          if (cVar9 != '\0') {
LAB_1002a5200:
            uStack_44c = 0x400;
            uStack_44e = 0;
            uStack_450 = 1;
            local_454 = 0x7a0a90;
            local_458 = 0x8220202;
            iStack_44a = iVar10;
            __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: err == (%d)",&local_458,0x12);
          }
LAB_1002a4fd5:
          (*(code *)PTR__objc_release_10082c7b0)(uVar11);
        }
      }
LAB_1002a4fde:
      **(undefined1 **)(lVar2 + 0x60) = 1;
      **(int **)(lVar2 + 0x58) = iVar10;
      puVar7 = PTR__objc_release_10082c7b0;
      if (*(int *)(lVar2 + 0x48) != 0) {
        uVar13 = 0;
        do {
          iVar10 = FUN_1001e89de(*(undefined8 *)(lVar2 + 0x40));
          if ((iVar10 != -0x80) && (iVar10 != 0)) {
            uVar11 = FUN_1001cc310();
            uVar11 = _objc_retainAutoreleasedReturnValue(uVar11);
            cVar9 = _os_log_type_enabled(uVar11,0x10);
            if (cVar9 != '\0') {
              local_458 = 0x8220202;
              local_454 = 0x7a0a90;
              uStack_450 = 1;
              uStack_44e = 0;
              uStack_44c = 0x400;
              iStack_44a = iVar10;
              __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: err == (%d)",&local_458,0x12)
              ;
            }
            (*(code *)puVar7)(uVar11);
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 < *(uint *)(lVar2 + 0x48));
      }
    }
    FUN_1002a52c5(local_460);
  }
LAB_1002a4ce0:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

