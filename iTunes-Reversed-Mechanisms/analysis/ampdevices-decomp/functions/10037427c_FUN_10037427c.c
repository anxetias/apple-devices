// name: FUN_10037427c
// address: 10037427c

undefined8 FUN_10037427c(int *param_1,int *param_2,undefined8 param_3,undefined4 *param_4)

{
  char cVar1;
  int iVar2;
  long lVar3;
  size_t sVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  undefined4 local_478;
  int local_474;
  undefined2 uStack_470;
  undefined2 uStack_46e;
  undefined2 uStack_46c;
  int iStack_46a;
  undefined2 uStack_466;
  undefined2 uStack_464;
  undefined6 uStack_462;
  undefined4 local_458;
  char *local_454;
  undefined2 local_44c;
  char *local_44a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = FUN_10017cbd0();
  if ((cVar1 == '\0') || (*param_1 != 0x41464350)) {
    uVar8 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar8,0x10);
    if (cVar1 != '\0') {
      local_44a = "JRFileSpecIsAFCPath(targetSpec)";
LAB_100374517:
      local_44c = 0x822;
      local_454 = "Assertion failure";
      local_458 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
    }
  }
  else {
    cVar1 = FUN_10017cbd0(param_2);
    if ((cVar1 == '\0') || (*param_2 != 0x41464350)) {
      uVar8 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar8,0x10);
      if (cVar1 != '\0') {
        local_44a = "JRFileSpecIsAFCPath(linkParentSpec)";
        goto LAB_100374517;
      }
    }
    else {
      cVar1 = FUN_10017fbfb(param_2);
      if (cVar1 != '\0') {
        lVar3 = FUN_10036f8fa(param_1[6]);
        if (lVar3 == 0) {
          uVar8 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar8,0x10);
          if (cVar1 != '\0') {
            local_458 = 0x8220202;
            local_454 = "Assertion failure";
            local_44c = 0x822;
            local_44a = "afcVolumeInfo != nullptr";
            __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
          }
          FUN_1001782e9(0,0);
          uVar8 = 0xffffffdd;
          goto LAB_100374569;
        }
        puVar10 = &local_458;
        if (param_4 != (undefined4 *)0x0) {
          puVar10 = param_4;
        }
        iVar2 = FUN_1003779dc(param_2,param_3,puVar10);
        if (iVar2 == -0x80) {
LAB_1003745dc:
          uVar8 = 0;
          lVar7 = 0;
          lVar6 = 0;
          lVar5 = 0;
        }
        else {
          if (iVar2 != 0) {
            uVar8 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar8,0x10);
            if (cVar1 != '\0') {
              local_478 = 0x8220202;
              local_474 = 0x7a0a90;
              uStack_470 = 1;
              uStack_46e = 0;
              uStack_46c = 0x400;
              iStack_46a = iVar2;
              __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_478,0x12);
            }
            goto LAB_1003745dc;
          }
          param_1 = param_1 + 7;
          cVar1 = FUN_1001e3580(param_1,param_2 + 7,1);
          if (cVar1 != '\0') {
            sVar4 = _strlen((char *)(param_2 + 7));
            param_1 = (int *)((long)param_1 + (*(char *)((long)param_1 + sVar4) == '/') + sVar4);
          }
          lVar5 = FUN_10036d2f1(lVar3,0);
          if (lVar5 == 0) {
            uVar8 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar8,0x10);
            if (cVar1 != '\0') {
              local_478 = 0x8220202;
              local_474 = 0x7a0a90;
              uStack_470 = 1;
              uStack_46e = 0;
              uStack_46c = 0x822;
              iStack_46a = 0x7c5917;
              uStack_466 = 1;
              uStack_464 = 0;
              __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_478,0x16)
              ;
            }
            FUN_1001782e9(0,0);
            iVar2 = -0x17ffbfe9;
            goto LAB_1003745dc;
          }
          lVar6 = FUN_100172473(DAT_1008c4d90,param_1,0x8000100);
          if (lVar6 == 0) {
            uVar8 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar8,0x10);
            if (cVar1 != '\0') {
              local_478 = 0x8220202;
              local_474 = 0x7a0a90;
              uStack_470 = 1;
              uStack_46e = 0;
              uStack_46c = 0x822;
              iStack_46a = 0x7c61bb;
              uStack_466 = 1;
              uStack_464 = 0;
              __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_478,0x16)
              ;
            }
            uVar8 = 0;
            FUN_1001782e9(0,0);
            iVar2 = -0x17ffbffd;
            lVar7 = 0;
            lVar6 = 0;
          }
          else {
            lVar7 = FUN_10036e72b(puVar10);
            if (lVar7 == 0) {
              uVar8 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar8,0x10);
              if (cVar1 != '\0') {
                local_478 = 0x8220202;
                local_474 = 0x7a0a90;
                uStack_470 = 1;
                uStack_46e = 0;
                uStack_46c = 0x822;
                iStack_46a = 0x7c61d1;
                uStack_466 = 1;
                uStack_464 = 0;
                __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_478,
                                    0x16);
              }
              uVar8 = 0;
              FUN_1001782e9(0,0);
              iVar2 = -0x17ffbffd;
              lVar7 = 0;
            }
            else {
              uVar8 = _AFCOperationCreateLinkPath(DAT_1008c4d90,2,lVar6,lVar7,0);
              iVar2 = FUN_10036ed41(lVar5,uVar8);
              if (iVar2 != -0x80) {
                if (iVar2 == 0) goto LAB_1003746b6;
                uVar9 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar9,0x10);
                if (cVar1 != '\0') {
                  local_478 = 0x8220202;
                  local_474 = 0x7a0a90;
                  uStack_470 = 1;
                  uStack_46e = 0;
                  uStack_46c = 0x400;
                  iStack_46a = iVar2;
                  __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",&local_478,
                                      0x12);
                }
              }
              cVar1 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0x10);
              if (cVar1 != '\0') {
                local_478 = 0x4000302;
                uStack_470 = 0x842;
                uStack_46e = (undefined2)lVar7;
                uStack_46c = (undefined2)((ulong)lVar7 >> 0x10);
                iStack_46a = (int)((ulong)lVar7 >> 0x20);
                uStack_466 = 0x800;
                uStack_464 = (undefined2)lVar5;
                uStack_462 = (undefined6)((ulong)lVar5 >> 0x10);
                local_474 = iVar2;
                __os_log_error_impl(0x100000000,PTR___os_log_default_10082cb88,0x10,
                                    "AFC LinkPath failed (0x%08X) for \"%{public}@\" with connection %p"
                                    ,&local_478,0x1c);
              }
            }
          }
        }
LAB_1003746b6:
        FUN_10017060f(uVar8);
        FUN_10017060f(lVar6);
        FUN_10017060f(lVar7);
        FUN_10017060f(lVar5);
        FUN_10036d4d2(lVar3);
        uVar8 = FUN_10036db97(iVar2);
        goto LAB_100374569;
      }
      uVar8 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar8,0x10);
      if (cVar1 != '\0') {
        local_44a = "JRFileSpecIsDirectory(linkParentSpec)";
        goto LAB_100374517;
      }
    }
  }
  FUN_1001782e9(0,0);
  uVar8 = 0xffffffce;
LAB_100374569:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar8;
}

