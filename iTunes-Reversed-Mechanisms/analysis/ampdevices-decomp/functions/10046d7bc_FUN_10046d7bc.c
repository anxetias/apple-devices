// name: FUN_10046d7bc
// address: 10046d7bc

undefined4 FUN_10046d7bc(long param_1,long param_2,int param_3,int *param_4,undefined8 *param_5)

{
  double dVar1;
  bool bVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  long lVar13;
  double dVar14;
  undefined1 auVar15 [16];
  uint local_64;
  uint local_60;
  int local_5c;
  uint local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_4 == (int *)0x0) {
    uVar9 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar9,0x10);
    if (cVar4 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = 0x7a0a90;
      uStack_50 = 1;
      local_4c = 0x822;
      local_4a = "numDecodedSamples != nullptr";
      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    uVar8 = 0xffffffce;
    goto LAB_10046dcdd;
  }
  *param_4 = 0;
  if (*(int *)(param_1 + 8) == 0x61646563) {
    if (param_2 == 0) {
      uVar9 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar9,0x10);
      if (cVar4 != '\0') {
        local_58 = 0x8220202;
        uStack_54 = 0x7a0a90;
        uStack_50 = 1;
        local_4c = 0x822;
        local_4a = "requestBuffer != nullptr";
        __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
      *(undefined4 *)(param_1 + 0x17c0) = 0xffffffce;
    }
    else if (*(char *)(param_1 + 0x1874) == '\0') {
      FUN_10046d628(param_1);
      if (*(char *)(param_1 + 0x1875) == '\0') {
        *(undefined1 *)(param_1 + 0x1874) = 1;
        *param_5 = *(undefined8 *)(param_1 + 0x17b8);
        bVar2 = false;
        iVar10 = 0;
        local_5c = param_3;
LAB_10046d939:
        do {
          uVar6 = *(uint *)(param_1 + 0x1860);
          do {
            iVar3 = local_5c;
            if ((uVar6 != 0) && (iVar10 != local_5c)) {
              lVar13 = *(long *)(param_1 + 0x1858);
              do {
                uVar11 = iVar3 - iVar10;
                if (uVar6 <= (uint)(iVar3 - iVar10)) {
                  uVar11 = uVar6;
                }
                uVar5 = FUN_10035ff1a(param_1,lVar13,param_2,uVar11);
                lVar13 = (ulong)(*(int *)(param_1 + 0x1808) * uVar11) + *(long *)(param_1 + 0x1858);
                iVar10 = iVar10 + uVar5;
                param_2 = (ulong)(*(int *)(param_1 + 0x1808) * uVar5) + param_2;
                uVar6 = *(int *)(param_1 + 0x1860) - uVar11;
                *(uint *)(param_1 + 0x1860) = uVar6;
                *(long *)(param_1 + 0x1858) = lVar13;
                *(double *)(param_1 + 0x17b8) = (double)uVar5 + *(double *)(param_1 + 0x17b8);
              } while ((uVar6 != 0) && (iVar10 != iVar3));
            }
            iVar7 = 0;
            iVar12 = local_5c;
            if (iVar3 - iVar10 == 0) goto LAB_10046dc90;
            uVar6 = *(uint *)(param_1 + 0x183c);
            iVar12 = iVar10;
            if (uVar6 != 0) {
              local_60 = *(uint *)(param_1 + 0x1828);
              if (uVar6 < *(uint *)(param_1 + 0x1828)) {
                local_60 = uVar6;
              }
              local_60 = local_60 * *(int *)(param_1 + 0x17e0);
              local_64 = *(uint *)(param_1 + 0x1834);
              iVar7 = FUN_10015ed5d(*(undefined8 *)(param_1 + 0x1818),
                                    *(undefined8 *)(param_1 + 0x1840),&local_60,
                                    *(undefined8 *)(param_1 + 0x1820),&local_64,
                                    *(undefined8 *)(param_1 + 0x1868));
              if (iVar7 == 0) {
                *(undefined8 *)(param_1 + 0x1858) = *(undefined8 *)(param_1 + 0x1820);
                *(uint *)(param_1 + 0x1860) = local_64 / *(uint *)(param_1 + 0x1808);
                *(int *)(param_1 + 0x183c) =
                     *(int *)(param_1 + 0x183c) - local_60 / *(uint *)(param_1 + 0x17e0);
                *(long *)(param_1 + 0x1840) = *(long *)(param_1 + 0x1840) + (ulong)local_60;
                goto LAB_10046d939;
              }
              uVar9 = FUN_1001cc310();
              cVar4 = _os_log_type_enabled(uVar9,0x10);
              if (cVar4 != '\0') {
                local_58 = 0x8220202;
                uStack_54 = 0x7a0a90;
                uStack_50 = 1;
                local_4c = 0x822;
                local_4a = "convertStatus == noErr";
                __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_58,0x16
                                   );
              }
              FUN_1001782e9(0,0);
              goto LAB_10046dc90;
            }
            if (*(int *)(param_1 + 0x17c4) == 0) {
              local_60 = 0;
              local_58 = 0;
              uStack_54 = 0;
              if (*(char *)(param_1 + 0x1875) != '\0') goto LAB_10046dc90;
              FUN_10046d6f2(param_1);
              uVar8 = (**(code **)(**(long **)(param_1 + 0x1338) + 0x1c0))
                                (*(long **)(param_1 + 0x1338),*(undefined8 *)(param_1 + 0x1848),
                                 *(undefined4 *)(param_1 + 0x1838),&local_60,&local_58,0);
              FUN_10046d628(param_1);
              *(undefined4 *)(param_1 + 0x17c4) = uVar8;
              dVar14 = *(double *)(param_1 + 0x17b0);
              if (local_60 != 0) {
                dVar1 = (double)CONCAT44(uStack_54,local_58);
                if (((dVar14 != dVar1) || (NAN(dVar14) || NAN(dVar1))) &&
                   ((dVar1 != DAT_100701af0 ||
                    ((NAN(dVar1) || NAN(DAT_100701af0) || (*(int *)(param_1 + 0x17ac) == 0)))))) {
                  auVar15._0_8_ =
                       (*(double *)(param_1 + 0x17f0) * dVar1) / *(double *)(param_1 + 0x17c8);
                  auVar15._8_8_ = 0;
                  auVar15 = roundsd(auVar15,auVar15,9);
                  *(double *)(param_1 + 0x17b0) = dVar1;
                  *(long *)(param_1 + 0x17b8) = auVar15._0_8_;
                  if (!bVar2) {
                    *param_5 = auVar15._0_8_;
                    dVar1 = *(double *)(param_1 + 0x17b0);
                  }
                  bVar2 = true;
                  dVar14 = dVar1;
                }
              }
              *(double *)(param_1 + 0x17b0) = (double)local_60 + dVar14;
              if (*(long *)(param_1 + 0x1818) == 0) {
                uVar11 = 0;
                uVar6 = local_60;
              }
              else {
                *(undefined8 *)(param_1 + 0x1840) = *(undefined8 *)(param_1 + 0x1848);
                uVar6 = 0;
                uVar11 = local_60;
              }
              *(uint *)(param_1 + 0x183c) = uVar11;
              *(undefined8 *)(param_1 + 0x1858) = *(undefined8 *)(param_1 + 0x1848);
              *(uint *)(param_1 + 0x1860) = uVar6;
              goto LAB_10046d939;
            }
            if (*(long *)(param_1 + 0x1818) == 0) break;
            local_58 = *(uint *)(param_1 + 0x1834);
            iVar7 = FUN_10015f247(*(long *)(param_1 + 0x1818),*(undefined8 *)(param_1 + 0x1820),
                                  &local_58);
            if (iVar7 != 0) break;
            *(undefined8 *)(param_1 + 0x1858) = *(undefined8 *)(param_1 + 0x1820);
            uVar6 = local_58 / *(uint *)(param_1 + 0x1808);
            *(uint *)(param_1 + 0x1860) = uVar6;
          } while (*(uint *)(param_1 + 0x1808) <= local_58);
          uVar6 = FUN_100360842(param_1,param_2,iVar3 - iVar10);
          if (uVar6 == 0) goto LAB_10046de38;
          param_2 = param_2 + (ulong)(*(int *)(param_1 + 0x1808) * uVar6);
          iVar10 = iVar10 + uVar6;
          *(double *)(param_1 + 0x17b8) = (double)uVar6 + *(double *)(param_1 + 0x17b8);
        } while( true );
      }
      FUN_10046d6f2(param_1);
      *(undefined4 *)(param_1 + 0x17c0) = 0xffffffe5;
    }
    else {
      uVar9 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar9,0x10);
      if (cVar4 != '\0') {
        local_58 = 0x8220202;
        uStack_54 = 0x7a0a90;
        uStack_50 = 1;
        local_4c = 0x822;
        local_4a = "decoderData->requestInProgress == false";
        __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
      *(undefined4 *)(param_1 + 0x17c0) = 0xfffffc73;
    }
  }
  else {
    uVar9 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar9,0x10);
    if (cVar4 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = 0x7a0a90;
      uStack_50 = 1;
      local_4c = 0x822;
      local_4a = "decoderData->magic == \'adec\'";
      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    *(undefined4 *)(param_1 + 0x17c0) = 0xffffffe4;
  }
  goto LAB_10046dcd7;
LAB_10046de38:
  iVar7 = *(int *)(param_1 + 0x17c4);
LAB_10046dc90:
  *param_4 = iVar12;
  iVar10 = -0x1b;
  if (*(char *)(param_1 + 0x1875) == '\0') {
    iVar10 = iVar7;
  }
  *(int *)(param_1 + 0x17c0) = iVar10;
  *(undefined1 *)(param_1 + 0x1874) = 0;
  if (*(char *)(param_1 + 0x1876) != '\0') {
    *(undefined1 *)(param_1 + 0x1876) = 0;
    FUN_1001e8f15(param_1 + 0x1318);
  }
  FUN_10046d6f2(param_1);
LAB_10046dcd7:
  uVar8 = *(undefined4 *)(param_1 + 0x17c0);
LAB_10046dcdd:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar8;
}

