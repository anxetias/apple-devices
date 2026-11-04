// name: FUN_10033e88b
// address: 10033e88b

void FUN_10033e88b(long param_1,undefined8 param_2)

{
  short *psVar1;
  undefined *puVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined4 local_88;
  char *local_84;
  undefined2 local_7c;
  int local_7a;
  undefined8 local_68;
  undefined2 uStack_60;
  undefined2 uStack_5e;
  undefined2 uStack_5c;
  undefined2 uStack_5a;
  undefined2 uStack_58;
  undefined2 uStack_56;
  undefined2 uStack_54;
  undefined2 uStack_52;
  undefined4 uStack_50;
  long *local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(int *)(param_1 + 0x166d4) == 5) {
    FUN_10033470c(param_1,6,0);
  }
  lVar5 = FUN_1003401bb(param_2,&cf_AssetManifest);
  if (lVar5 == 0) {
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar11 = DAT_1008c75b8;
    cVar3 = _os_log_type_enabled(DAT_1008c75b8,0x10);
    if (cVar3 != '\0') {
      uVar10 = _ATCFMessageGetName(param_2);
      local_68._0_4_ = 0x8420202;
      local_68._4_4_ = 0x87b490;
      uStack_60 = 1;
      uStack_5e = 0;
      uStack_5c = 0x842;
      uStack_5a = (undefined2)uVar10;
      uStack_58 = (undefined2)((ulong)uVar10 >> 0x10);
      uStack_56 = (undefined2)((ulong)uVar10 >> 0x20);
      uStack_54 = (undefined2)((ulong)uVar10 >> 0x30);
      __os_log_impl(0x100000000,uVar11,0x10,"airtraffic> missing %{public}@ in %{public}@ message",
                    &local_68,0x16);
    }
    goto LAB_10033ee14;
  }
  lVar9 = 0;
  do {
    puVar2 = (&PTR_cf_Media_100854700)[lVar9];
    lVar6 = FUN_100166844(lVar5,puVar2);
    if (lVar6 != 0) {
      lVar7 = FUN_10017076e(lVar6);
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar11 = DAT_1008c75b8;
      cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar3 != '\0') {
        uVar10 = *(undefined8 *)(param_1 + 0x152c8);
        local_68._0_4_ = 0x4000302;
        local_68._4_4_ = (undefined4)lVar7;
        uStack_60 = 0x842;
        uStack_5e = SUB82(puVar2,0);
        uStack_5c = (undefined2)((ulong)puVar2 >> 0x10);
        uStack_5a = (undefined2)((ulong)puVar2 >> 0x20);
        uStack_58 = (undefined2)((ulong)puVar2 >> 0x30);
        uStack_56 = 0x842;
        uStack_54 = (undefined2)uVar10;
        uStack_52 = (undefined2)((ulong)uVar10 >> 0x10);
        uStack_50 = (undefined4)((ulong)uVar10 >> 0x20);
        __os_log_impl(0x100000000,uVar11,1,
                      "airtraffic> processing %d asset manifest(s) for dataclass %{public}@ for device %{public}@"
                      ,&local_68,0x1c);
      }
      cVar3 = FUN_100170633(puVar2,&cf_Photo);
      if (cVar3 == '\0') {
        if (0 < lVar7) {
          lVar12 = 0;
          do {
            lVar8 = FUN_10016499b(lVar6,lVar12);
            if (lVar8 == 0) {
              uVar11 = FUN_1001cc310();
              cVar3 = _os_log_type_enabled(uVar11,0x10);
              if (cVar3 != '\0') {
                local_68._0_4_ = 0x8220202;
                local_68._4_4_ = 0x7a0a90;
                uStack_60 = 1;
                uStack_5e = 0;
                uStack_5c = 0x822;
                uStack_5a = 799;
                uStack_58 = 0x7c;
                uStack_56 = 1;
                uStack_54 = 0;
                __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",&local_68,
                                    0x16);
              }
              FUN_1001782e9(0,0);
            }
            else {
              lVar8 = FUN_100172752(DAT_1008c4d90,lVar8,1);
              if (lVar8 == 0) {
                uVar11 = FUN_1001cc310();
                cVar3 = _os_log_type_enabled(uVar11,0x10);
                if (cVar3 != '\0') {
                  local_68._0_4_ = 0x8220202;
                  local_68._4_4_ = 0x7a0a90;
                  uStack_60 = 1;
                  uStack_5e = 0;
                  uStack_5c = 0x822;
                  uStack_5a = 0x1756;
                  uStack_58 = 0x7c;
                  uStack_56 = 1;
                  uStack_54 = 0;
                  __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",&local_68,
                                      0x16);
                }
                FUN_1001782e9(0,0);
              }
              else {
                FUN_100171502(lVar8,&cf_Dataclass,puVar2);
                iVar4 = *(int *)(param_1 + 0x167e0) + 1;
                *(int *)(param_1 + 0x167e0) = iVar4;
                FUN_100168746(lVar8,&cf_AssetManifestIndex,iVar4,0);
                FUN_1001709a5(*(undefined8 *)(param_1 + 0x167e8),lVar8);
                FUN_10017060f(lVar8);
              }
            }
            lVar12 = lVar12 + 1;
          } while (lVar7 != lVar12);
        }
      }
      else if (0 < lVar7) {
        lVar12 = 0;
        do {
          lVar8 = FUN_10016499b(lVar6,lVar12);
          if (lVar8 == 0) {
            uVar11 = FUN_1001cc310();
            cVar3 = _os_log_type_enabled(uVar11,0x10);
            if (cVar3 != '\0') {
              local_68._0_4_ = 0x8220202;
              local_68._4_4_ = 0x7a0a90;
              uStack_60 = 1;
              uStack_5e = 0;
              uStack_5c = 0x822;
              uStack_5a = 799;
              uStack_58 = 0x7c;
              uStack_56 = 1;
              uStack_54 = 0;
              __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",&local_68,0x16)
              ;
            }
            FUN_1001782e9(0,0);
          }
          else {
            lVar8 = FUN_100166c1b(lVar8,&cf_AssetID);
            if (lVar8 == 0) {
              uVar11 = FUN_1001cc310();
              cVar3 = _os_log_type_enabled(uVar11,0x10);
              if (cVar3 != '\0') {
                local_68._0_4_ = 0x8220202;
                local_68._4_4_ = 0x7a0a90;
                uStack_60 = 1;
                uStack_5e = 0;
                uStack_5c = 0x822;
                uStack_5a = 0x173b;
                uStack_58 = 0x7c;
                uStack_56 = 1;
                uStack_54 = 0;
                __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",&local_68,
                                    0x16);
              }
              FUN_1001782e9(0,0);
            }
            else {
              if (DAT_1008c75c0 != -1) {
                _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
              }
              uVar11 = DAT_1008c75b8;
              cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
              if (cVar3 != '\0') {
                uVar10 = *(undefined8 *)(param_1 + 0x152c8);
                local_68._0_4_ = 0x8420202;
                local_68._4_4_ = (undefined4)lVar8;
                uStack_60 = (undefined2)((ulong)lVar8 >> 0x20);
                uStack_5e = (undefined2)((ulong)lVar8 >> 0x30);
                uStack_5c = 0x842;
                uStack_5a = (undefined2)uVar10;
                uStack_58 = (undefined2)((ulong)uVar10 >> 0x10);
                uStack_56 = (undefined2)((ulong)uVar10 >> 0x20);
                uStack_54 = (undefined2)((ulong)uVar10 >> 0x30);
                __os_log_impl(0x100000000,uVar11,1,
                              "airtraffic> queueing photo asset request for identifier \"%{public}@\" for device %{public}@"
                              ,&local_68,0x16);
              }
              FUN_1001709a5(*(undefined8 *)(param_1 + 0x16870),lVar8);
            }
          }
          lVar12 = lVar12 + 1;
        } while (lVar7 != lVar12);
      }
    }
    lVar9 = lVar9 + 1;
  } while (lVar9 != 7);
  lVar5 = FUN_10017076e(*(undefined8 *)(param_1 + 0x167e8));
  if (((0 < lVar5) &&
      (FUN_100170cd6(*(undefined8 *)(param_1 + 0x167e8),0,lVar5,FUN_100340496,0),
      *(int *)(param_1 + 0x16810) == 0)) && (iVar4 = FUN_1004dccf5(param_1,""), iVar4 != -0x80)) {
    if (iVar4 == 0) {
      if (*(long *)(param_1 + 0x30) != 0) {
        psVar1 = (short *)(*(long *)(param_1 + 0x30) + 0x27b0);
        *psVar1 = *psVar1 + 1;
      }
      local_68._0_4_ = 0x854778;
      local_68._4_4_ = 1;
      uStack_60 = 0xe42;
      uStack_5e = 0x34;
      uStack_5c = 1;
      uStack_5a = 0;
      uStack_58 = (undefined2)param_1;
      uStack_56 = (undefined2)((ulong)param_1 >> 0x10);
      uStack_54 = (undefined2)((ulong)param_1 >> 0x20);
      uStack_52 = (undefined2)((ulong)param_1 >> 0x30);
      local_48 = &local_68;
      iVar4 = FUN_1001b1a89(&local_68,"AirTrafficAssetCopyFiber",param_1 + 0x16810,0);
      if (local_48 == &local_68) {
        lVar5 = 0x20;
LAB_10033ef32:
        (**(code **)(*local_48 + lVar5))();
      }
      else {
        lVar5 = 0x28;
        if (local_48 != (long *)0x0) goto LAB_10033ef32;
      }
      if (iVar4 == -0x80) {
LAB_10033ef69:
        if (*(long *)(param_1 + 0x30) != 0) {
          psVar1 = (short *)(*(long *)(param_1 + 0x30) + 0x27b0);
          *psVar1 = *psVar1 + -1;
        }
        FUN_1004dd69c(param_1,"");
      }
      else if (iVar4 != 0) {
        uVar11 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar11,0x10);
        if (cVar3 != '\0') {
          local_88 = 0x8220202;
          local_84 = "Assertion failure";
          local_7c = 0x400;
          local_7a = iVar4;
          __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: err == (%d)",&local_88,0x12);
        }
        if (iVar4 != 0) goto LAB_10033ef69;
      }
    }
    else {
      uVar11 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar11,0x10);
      if (cVar3 != '\0') {
        local_68._0_4_ = 0x8220202;
        local_68._4_4_ = 0x7a0a90;
        uStack_60 = 1;
        uStack_5e = 0;
        uStack_5c = 0x400;
        uStack_5a = (undefined2)iVar4;
        uStack_58 = (undefined2)((uint)iVar4 >> 0x10);
        __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: err == (%d)",&local_68,0x12);
      }
    }
  }
  lVar5 = FUN_10017076e(*(undefined8 *)(param_1 + 0x16870));
  if (0 < lVar5) {
    FUN_1003937cf(param_1);
  }
LAB_10033ee14:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

