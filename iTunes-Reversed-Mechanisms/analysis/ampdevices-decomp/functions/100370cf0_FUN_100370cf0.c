// name: FUN_100370cf0
// address: 100370cf0

undefined8 FUN_100370cf0(long param_1)

{
  int *piVar1;
  uint uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  char *pcVar15;
  long lVar16;
  undefined4 local_68;
  int local_64;
  undefined2 uStack_60;
  undefined2 uStack_5e;
  undefined2 uStack_5c;
  undefined4 uStack_5a;
  undefined2 uStack_56;
  undefined2 uStack_54;
  undefined2 uStack_52;
  undefined2 local_50;
  undefined8 local_4e;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  piVar1 = (int *)(param_1 + 0x18);
  cVar7 = FUN_10017cbd0(piVar1);
  if ((cVar7 == '\0') || (*piVar1 != 0x41464350)) {
    uVar13 = FUN_1001cc310();
    cVar7 = _os_log_type_enabled(uVar13,0x10);
    if (cVar7 != '\0') {
      pcVar15 = "JRFileSpecIsAFCPath(&refNum->fileSpec)";
LAB_1003710fd:
      uStack_5c = 0x822;
      uStack_5e = 0;
      uStack_60 = 1;
      local_64 = 0x7a0a90;
      local_68 = 0x8220202;
      uStack_5a = SUB84(pcVar15,0);
      uStack_56 = (undefined2)((ulong)pcVar15 >> 0x20);
      uStack_54 = 0;
      __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
    }
  }
  else {
    if (*(int *)(param_1 + 8) == 0x64617461) {
      lVar10 = FUN_10036f8fa(*(undefined4 *)(param_1 + 0x30));
      if (lVar10 == 0) {
        uVar13 = FUN_1001cc310();
        cVar7 = _os_log_type_enabled(uVar13,0x10);
        if (cVar7 != '\0') {
          local_68 = 0x8220202;
          local_64 = 0x7a0a90;
          uStack_60 = 1;
          uStack_5e = 0;
          uStack_5c = 0x822;
          uStack_5a = 0x7c589d;
          uStack_56 = 1;
          uStack_54 = 0;
          __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
        }
        FUN_1001782e9(0,0);
        uVar13 = 0xffffffdd;
        goto LAB_100371047;
      }
      *(code **)(param_1 + 0x440) = FUN_100375ed0;
      *(code **)(param_1 + 0x448) = FUN_100375f8e;
      *(code **)(param_1 + 0x450) = FUN_10037604a;
      *(code **)(param_1 + 0x458) = FUN_100376180;
      *(code **)(param_1 + 0x460) = FUN_1003763cb;
      *(code **)(param_1 + 0x468) = FUN_100376503;
      *(code **)(param_1 + 0x470) = FUN_100376552;
      *(code **)(param_1 + 0x478) = FUN_100376638;
      *(code **)(param_1 + 0x480) = FUN_10037664f;
      *(code **)(param_1 + 0x488) = FUN_10037667b;
      *(code **)(param_1 + 0x490) = FUN_100376693;
      *(code **)(param_1 + 0x498) = FUN_1003766bd;
      *(code **)(param_1 + 0x4a0) = FUN_1003766d4;
      *(code **)(param_1 + 0x4a8) = FUN_100376700;
      *(code **)(param_1 + 0x4b0) = FUN_100376718;
      *(code **)(param_1 + 0x4b8) = FUN_100376742;
      *(code **)(param_1 + 0x4c0) = FUN_100376800;
      *(code **)(param_1 + 0x4c8) = FUN_100376920;
      *(code **)(param_1 + 0x4d0) = FUN_100376a39;
      uVar2 = *(uint *)(param_1 + 4);
      lVar16 = 2 - (ulong)((uVar2 & 0x26) == 0);
      lVar11 = FUN_10036d2f1(lVar10,1);
      *(long *)(param_1 + 0x4e0) = lVar11;
      if (lVar11 == 0) {
        uVar13 = FUN_1001cc310();
        cVar7 = _os_log_type_enabled(uVar13,0x10);
        if (cVar7 != '\0') {
          local_68 = 0x8220202;
          local_64 = 0x7a0a90;
          uStack_60 = 1;
          uStack_5e = 0;
          uStack_5c = 0x822;
          uStack_5a = 0x7c5d1b;
          uStack_56 = 1;
          uStack_54 = 0;
          __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
        }
        FUN_1001782e9(0,0);
        iVar8 = -0x17ffbfe9;
LAB_100371187:
        lVar12 = 0;
        lVar11 = 0;
      }
      else {
        lVar11 = FUN_10036e72b(piVar1);
        if (lVar11 == 0) {
          uVar13 = FUN_1001cc310();
          cVar7 = _os_log_type_enabled(uVar13,0x10);
          if (cVar7 != '\0') {
            local_68 = 0x8220202;
            local_64 = 0x7a0a90;
            uStack_60 = 1;
            uStack_5e = 0;
            uStack_5c = 0x822;
            uStack_5a = 0x7a0ee9;
            uStack_56 = 1;
            uStack_54 = 0;
            __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
          }
          FUN_1001782e9(0,0);
          iVar8 = -0x17ffbffd;
          goto LAB_100371187;
        }
        lVar12 = _AFCOperationCreateOpenFile(DAT_1008c4d90,lVar11,lVar16,0);
        if (lVar12 == 0) {
          uVar13 = FUN_1001cc310();
          cVar7 = _os_log_type_enabled(uVar13,0x10);
          if (cVar7 != '\0') {
            local_68 = 0x8220202;
            local_64 = 0x7a0a90;
            uStack_60 = 1;
            uStack_5e = 0;
            uStack_5c = 0x822;
            uStack_5a = 0x7c153d;
            uStack_56 = 1;
            uStack_54 = 0;
            __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
          }
          lVar12 = 0;
          FUN_1001782e9(0,0);
          iVar8 = -0x17ffbffd;
        }
        else {
          iVar8 = FUN_10036ed41(*(undefined8 *)(param_1 + 0x4e0),lVar12);
          uVar5 = uStack_5a;
          uVar3 = uStack_5c;
          if (iVar8 != -0x17ffbff8) {
            uStack_5c = (undefined2)((ulong)lVar11 >> 0x10);
            uVar4 = uStack_5c;
            uStack_5a = (undefined4)((ulong)lVar11 >> 0x20);
            uVar6 = uStack_5a;
            uStack_5c = uVar3;
            uStack_5a = uVar5;
            if (iVar8 == 0) {
              uVar13 = _AFCOperationGetResultObject(lVar12);
              uVar13 = FUN_1001705fc(uVar13);
              *(undefined8 *)(param_1 + 0x4e8) = uVar13;
              lVar16 = FUN_1001705e9(uVar13);
              lVar14 = _AFCFileDescriptorGetTypeID();
              if (lVar16 == lVar14) {
                iVar8 = 0;
                if (((uVar2 & 0x26) != 0) && (iVar8 = 0, (*(byte *)(param_1 + 5) & 8) != 0)) {
                  FUN_10017060f(lVar12);
                  iVar8 = 0;
                  lVar12 = _AFCFileDescriptorCreateSetImmutableHintOperation
                                     (*(undefined8 *)(param_1 + 0x4e8),1,0);
                  iVar9 = FUN_10036ed41(*(undefined8 *)(param_1 + 0x4e0),lVar12);
                  if ((iVar9 != -0x17ffbffa) && (iVar9 != 0)) {
                    uVar13 = FUN_1001cc310();
                    cVar7 = _os_log_type_enabled(uVar13,0x10);
                    if (cVar7 != '\0') {
                      local_68 = 0x8220202;
                      local_64 = 0x7a0a90;
                      uStack_60 = 1;
                      uStack_5e = 0;
                      uStack_5c = 0x822;
                      uStack_5a = 0x7c5d85;
                      uStack_56 = 1;
                      uStack_54 = 0;
                      __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",
                                          &local_68,0x16);
                    }
                    iVar8 = 0;
                    FUN_1001782e9(0,0);
                    cVar7 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0x10);
                    if (cVar7 != '\0') {
                      local_4e = *(undefined8 *)(param_1 + 0x4e0);
                      uStack_54 = 2;
                      uStack_52 = 0;
                      pcVar15 = 
                      "AFC SetImmutableHint failed (0x%08X) for \"%{public}@\" for mode %d with connection %p"
                      ;
                      local_64 = iVar9;
                      goto LAB_1003713eb;
                    }
                  }
                }
              }
              else {
                uVar13 = FUN_1001cc310();
                cVar7 = _os_log_type_enabled(uVar13,0x10);
                if (cVar7 != '\0') {
                  local_68 = 0x8220202;
                  local_64 = 0x7a0a90;
                  uStack_60 = 1;
                  uStack_5e = 0;
                  uStack_5c = 0x822;
                  uStack_5a = 0x7c5d3c;
                  uStack_56 = 1;
                  uStack_54 = 0;
                  __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",&local_68,
                                      0x16);
                }
                FUN_1001782e9(0,0);
                iVar8 = -0x17ffbfe9;
              }
            }
            else {
              cVar7 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0x10);
              if (cVar7 != '\0') {
                local_4e = *(undefined8 *)(param_1 + 0x4e0);
                uStack_54 = (undefined2)lVar16;
                uStack_52 = (undefined2)((ulong)lVar16 >> 0x10);
                pcVar15 = 
                "AFC OpenFile failed (0x%08X) for \"%{public}@\" for mode %d with connection %p";
                local_64 = iVar8;
LAB_1003713eb:
                local_50 = 0x800;
                uStack_56 = 0x400;
                uStack_5e = (undefined2)lVar11;
                uStack_60 = 0x842;
                local_68 = 0x4000402;
                uStack_5c = uVar4;
                uStack_5a = uVar6;
                __os_log_error_impl(0x100000000,PTR___os_log_default_10082cb88,0x10,pcVar15,
                                    &local_68,0x22);
              }
            }
          }
        }
      }
      FUN_10017060f(lVar12);
      FUN_10017060f(lVar11);
      if (iVar8 != 0) {
        FUN_10017060f(*(undefined8 *)(param_1 + 0x4e8));
        *(undefined8 *)(param_1 + 0x4e8) = 0;
        FUN_10017060f(*(undefined8 *)(param_1 + 0x4e0));
        *(undefined8 *)(param_1 + 0x4e0) = 0;
      }
      FUN_10036d4d2(lVar10);
      uVar13 = FUN_10036db97(iVar8);
      goto LAB_100371047;
    }
    uVar13 = FUN_1001cc310();
    cVar7 = _os_log_type_enabled(uVar13,0x10);
    if (cVar7 != '\0') {
      pcVar15 = "refNum->whichFork == kDataFork";
      goto LAB_1003710fd;
    }
  }
  FUN_1001782e9(0,0);
  uVar13 = 0xffffffce;
LAB_100371047:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar13;
}

