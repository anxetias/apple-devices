// name: FUN_1005525d4
// address: 1005525d4

int FUN_1005525d4(long param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  long *plVar4;
  uint *puVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  void *pvVar13;
  long lVar14;
  long lVar15;
  undefined8 *puVar16;
  uint uVar17;
  uint uVar18;
  uint local_4c8;
  undefined4 uStack_4c4;
  undefined4 uStack_4c0;
  undefined2 local_4bc;
  char *local_4ba;
  ushort local_a2;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  *(undefined8 *)(param_1 + 0x4b0) = *(undefined8 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x64a4) = 0;
  uVar2 = param_2[4];
  *(char *)(param_1 + 0x64ad) = (char)((uVar2 & 0x40) >> 6);
  *(byte *)(param_1 + 0x64b0) = (byte)(uVar2 >> 0x16) & 1;
  *(undefined1 *)(param_1 + 0x64b6) = 0;
  *(undefined1 *)(param_1 + 0x64ae) = 0;
  if ((((uVar2 & 0x40) != 0) &&
      (iVar7 = FUN_10017e137(*(long *)(param_2 + 2) + 0x2c,&local_4c8,0), iVar7 == 0)) &&
     ((local_a2 & 4) != 0)) {
    *(undefined1 *)(param_1 + 0x64ae) = 1;
  }
  lVar14 = *(long *)(param_2 + 0xe);
  *(long *)(param_1 + 0x4b8) = lVar14;
  if (lVar14 != 0) {
    if (*(long *)(lVar14 + 8) != 0) {
      iVar7 = (**(code **)(**(long **)(*(long *)(lVar14 + 8) + 0x38) + 0x128))();
      if (iVar7 == -0x80) goto switchD_1005532c8_caseD_3;
      if (iVar7 != 0) {
        uVar11 = FUN_1001cc310();
        cVar6 = _os_log_type_enabled(uVar11,0x10);
        if (cVar6 != '\0') {
          local_4c8 = 0x8220202;
          uStack_4c4 = 0x7a0a90;
          uStack_4c0 = 1;
          local_4bc = 0x400;
          local_4ba = (char *)CONCAT44(local_4ba._4_4_,iVar7);
          __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: err == (%d)",&local_4c8,0x12);
        }
        goto switchD_1005532c8_caseD_3;
      }
      lVar14 = *(long *)(param_1 + 0x4b8);
    }
    *(long *)(lVar14 + 8) = param_1;
  }
  iVar9 = *param_2;
  iVar7 = -4;
  if (0x4854544f < iVar9) {
    if ((iVar9 == 0x48545450) || (iVar9 == 0x53485244)) {
      local_4c8 = local_4c8 & 0xffffff00;
      if ((iVar9 == 0x48545450) || (iVar9 == 0x53485244)) {
        _memcpy((void *)(param_1 + 0x103c),(void *)(*(long *)(param_2 + 2) + 0x2c),0x408);
        iVar7 = FUN_1005491ba(param_1,*param_2,*(undefined8 *)(param_2 + 2),
                              (void *)(param_1 + 0x103c),param_2[0x26],&local_4c8,0,
                              *(undefined8 *)(param_2 + 6));
        if ((iVar7 != -0x80) && (iVar7 != 0)) {
          uVar11 = FUN_1001cc310();
          cVar6 = _os_log_type_enabled(uVar11,0x10);
          if (cVar6 != '\0') {
            local_4a = (char *)CONCAT44(local_4a._4_4_,iVar7);
            goto LAB_100552924;
          }
        }
      }
      else {
        uVar11 = FUN_1001cc310();
        cVar6 = _os_log_type_enabled(uVar11,0x10);
        if (cVar6 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "urlLocation != nullptr";
          __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
        iVar7 = -0x32;
      }
      goto LAB_100552a05;
    }
    if (iVar9 == 0x4d46494c) {
      iVar7 = FUN_100548d34(0,param_1,0x4d46494c,*(undefined8 *)(param_2 + 2),param_2[0x26],1);
      if ((iVar7 == -0x80) || (iVar7 == 0)) goto LAB_100552a05;
      uVar11 = FUN_1001cc310();
      cVar6 = _os_log_type_enabled(uVar11,0x10);
      if (cVar6 != '\0') {
        local_4ba = (char *)CONCAT44(local_4ba._4_4_,iVar7);
        goto LAB_100552aa3;
      }
    }
LAB_100552a0e:
    *(undefined1 *)(param_1 + 0x64a8) = 0;
    goto switchD_1005532c8_caseD_3;
  }
  if (iVar9 == 0x44574e4c) {
    if ((*(byte *)(param_2 + 4) & 100) != 0) {
      uVar11 = FUN_1001cc310();
      cVar6 = _os_log_type_enabled(uVar11,0x10);
      if (cVar6 != '\0') {
        local_4c8 = 0x8220202;
        uStack_4c4 = 0x7a0a90;
        uStack_4c0 = 1;
        local_4bc = 0x822;
        local_4ba = 
        "(msg->options & (kPlayIsForBurning | kPlayIsForConverting | kPlayIsForAnalysis)) == 0";
        __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",&local_4c8,0x16);
      }
      FUN_1001782e9(0,0);
      iVar7 = -0x32;
      goto switchD_1005532c8_caseD_3;
    }
    *(undefined1 *)(param_1 + 0x64af) = 1;
    iVar7 = FUN_100548be8(param_1,*(undefined8 *)(param_2 + 2));
    if (iVar7 != 0) {
      uVar11 = FUN_1001cc310();
      cVar6 = _os_log_type_enabled(uVar11,0x10);
      if (cVar6 != '\0') {
        local_4ba = (char *)CONCAT44(local_4ba._4_4_,iVar7);
LAB_100552aa3:
        local_4bc = 0x400;
        uStack_4c0 = 1;
        uStack_4c4 = 0x7a0a90;
        local_4c8 = 0x8220202;
        __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: err == (%d)",&local_4c8,0x12);
      }
      goto LAB_100552a0e;
    }
  }
  else {
    if (iVar9 != 0x46494c45) goto LAB_100552a0e;
    *(undefined1 *)(param_1 + 0x64af) = 1;
    iVar7 = FUN_10017e137(*(long *)(param_2 + 2) + 0x2c,&local_4c8,0);
    if (((iVar7 == 0) && ((*(byte *)(param_2 + 4) & 0x40) != 0)) &&
       ((ushort)((ushort)((local_a2 & 0x10) == 0) & local_a2 >> 2) != 0)) {
      *(undefined1 *)(param_1 + 0x64af) = 0;
    }
    iVar7 = FUN_100548d34(0,param_1,*param_2,*(undefined8 *)(param_2 + 2),param_2[0x26],1);
    if ((iVar7 != -0x80) && (iVar7 != 0)) {
      uVar11 = FUN_1001cc310();
      cVar6 = _os_log_type_enabled(uVar11,0x10);
      if (cVar6 != '\0') {
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar7);
LAB_100552924:
        local_4c = 0x400;
        local_54 = "Assertion failure";
        local_58 = 0x8220202;
        __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
    }
LAB_100552a05:
    if (iVar7 != 0) goto LAB_100552a0e;
  }
  if ((((uVar2 >> 0x18 & 1) != 0) &&
      (iVar7 = (**(code **)(**(long **)(param_1 + 0x38) + 0x148))
                         (*(long **)(param_1 + 0x38),(char)param_2[0x40]), iVar7 != -0x80)) &&
     (iVar7 != 0)) {
    uVar11 = FUN_1001cc310();
    cVar6 = _os_log_type_enabled(uVar11,0x10);
    if (cVar6 != '\0') {
      local_4c8 = 0x8220202;
      uStack_4c4 = 0x7a0a90;
      uStack_4c0 = 1;
      local_4bc = 0x400;
      local_4ba = (char *)CONCAT44(local_4ba._4_4_,iVar7);
      __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: err == (%d)",&local_4c8,0x12);
    }
  }
  uVar18 = param_2[4];
  uVar8 = (uVar18 & 0x10) >> 1;
  uVar17 = uVar8 | 0x10;
  if ((uVar18 >> 8 & 1) == 0) {
    uVar17 = uVar8 | 0x11;
  }
  uVar17 = uVar18 >> 4 & 0x2000 | uVar18 >> 0xd & 0x1000 | uVar18 & 4 | uVar17;
  *(undefined4 *)(param_1 + 0x61c0) = 0x61727477;
  *(undefined4 *)(param_1 + 0x61d0) = 0;
  *(undefined2 *)(param_1 + 0x61cc) = 0;
  *(undefined8 *)(param_1 + 0x61d8) = 0;
  uVar18 = param_2[4];
  if ((uVar18 & 100) == 0) {
    FUN_1005d38c7(0,0,param_1 + 0x61d8);
    uVar17 = uVar17 | 0x20;
    uVar18 = param_2[4];
  }
  uVar8 = uVar17 | 0x40;
  if ((char)param_2[0x32] == '\0') {
    uVar8 = uVar17;
  }
  uVar17 = uVar8 | 0x80;
  if (*(char *)((long)param_2 + 0xc9) == '\0') {
    uVar17 = uVar8;
  }
  FUN_10054d80c(*param_2);
  puVar3 = *(undefined4 **)(param_2 + 0x3a);
  if (puVar3 == (undefined4 *)0x0) {
    uVar10 = 0;
  }
  else {
    uVar10 = *puVar3;
    FUN_1001c62d9(puVar3,0xc);
  }
  iVar9 = FUN_100549f1e(param_1,uVar10,*param_2,*(undefined8 *)(param_2 + 2),
                        uVar18 >> 0xd & 0x18000 | uVar18 >> 0xc & 0x4000 | (uVar18 & 0x40) << 5 |
                        uVar17,*(undefined8 *)(param_2 + 6),*(undefined8 *)(param_2 + 0x1c));
  lVar14 = *(long *)(param_1 + 0x61d8);
  if (iVar9 == 0) {
    *(long *)(param_1 + 0x63e8) = lVar14;
  }
  else if (lVar14 != 0) {
    piVar1 = (int *)(lVar14 + 4);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_1005d3cba();
    }
  }
  if (((((*(long *)(param_1 + 0x4c0) != 0) || (iVar9 == 0x2375)) || (iVar9 == -0xa414)) &&
      (iVar7 = 0x3e9, (*(byte *)(param_2 + 4) & 0x20) != 0)) ||
     ((*(int *)(param_1 + 0x850) == 0x61617664 &&
      (iVar7 = 0x3e9, (*(byte *)(param_2 + 4) & 0x20) != 0)))) goto switchD_1005532c8_caseD_3;
  iVar7 = iVar9;
  if (iVar9 < 0) {
    if ((iVar9 == -0xa414) || (iVar9 == -0x80)) goto switchD_1005532c8_caseD_3;
LAB_100552cba:
    uVar11 = FUN_1001cc310();
    cVar6 = _os_log_type_enabled(uVar11,0x10);
    if (cVar6 != '\0') {
      local_4c8 = 0x8220202;
      uStack_4c4 = 0x7a0a90;
      uStack_4c0 = 1;
      local_4bc = 0x400;
      local_4ba = (char *)CONCAT44(local_4ba._4_4_,iVar9);
      __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: err == (%d)",&local_4c8,0x12);
    }
    if (iVar9 != 0) goto switchD_1005532c8_caseD_3;
  }
  else if (iVar9 != 0) {
    if (iVar9 == 0x2375) goto switchD_1005532c8_caseD_3;
    goto LAB_100552cba;
  }
  puVar16 = *(undefined8 **)(param_2 + 0x3e);
  if (puVar16 != (undefined8 *)0x0) {
    plVar4 = *(long **)(param_1 + 0x4c0);
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))(plVar4);
      puVar16 = *(undefined8 **)(param_2 + 0x3e);
    }
    *(undefined8 **)(param_1 + 0x4c0) = puVar16;
    (**(code **)*puVar16)();
  }
  if ((*(char *)(param_1 + 0x64ab) == '\0') && ((*(byte *)(param_2 + 0x14) & 1) != 0)) {
    *(undefined2 *)(param_1 + 0x64ab) = 0x101;
    uVar12 = (ulong)(uint)param_2[0x15];
    if (*(char *)(param_1 + 0x649b) == '\0') {
      lVar15 = *(long *)(param_2 + 0x18);
      lVar14 = lVar15 + uVar12;
    }
    else {
      uVar12 = (ulong)(uint)(param_2[0x15] * 2);
      lVar14 = uVar12 + *(long *)(param_2 + 0x18) * 2;
      lVar15 = *(long *)(param_2 + 0x18) * 2;
    }
    *(ulong *)(param_1 + 0x14a0) = uVar12;
    *(long *)(param_1 + 0x14b0) = lVar15;
    *(long *)(param_1 + 0x14a8) = lVar14;
  }
  FUN_10054d85c(param_1,param_1 + 0x14d4,param_1 + 0x2b34);
  if ((char)param_2[0x32] != '\0') {
    uVar11 = FUN_1001757f8(*(undefined8 *)(param_1 + 0x6410));
    *(undefined8 *)(param_2 + 0x34) = uVar11;
  }
  iVar7 = *(int *)(param_1 + 0x850);
  if ((iVar7 == 0x6d703461) || (uVar18 = 0, iVar7 == 0x61617664)) {
    lVar14 = param_1 + 0xa60;
    FUN_1005d6168(param_1 + 0x880,lVar14);
    cVar6 = *(char *)(param_1 + 0x649a);
    if (cVar6 == '\x03') {
      pvVar13 = operator_new(0x24c8,(nothrow_t *)PTR_nothrow_10082c970);
      if (pvVar13 != (void *)0x0) {
        if (*(long **)(param_1 + 0x4c0) == (long *)0x0) {
          uVar11 = 0;
        }
        else {
          uVar11 = (**(code **)(**(long **)(param_1 + 0x4c0) + 0x28))();
        }
        FUN_1001083c0(pvVar13,lVar14,uVar11);
      }
LAB_100553017:
      *(void **)(param_1 + 0xf60) = pvVar13;
    }
    else {
      if (cVar6 == '\x02') {
        pvVar13 = operator_new(0x24b8,(nothrow_t *)PTR_nothrow_10082c970);
        if (pvVar13 != (void *)0x0) {
          if (*(long **)(param_1 + 0x4c0) == (long *)0x0) {
            uVar11 = 0;
          }
          else {
            uVar11 = (**(code **)(**(long **)(param_1 + 0x4c0) + 0x28))();
          }
          FUN_1001111c6(pvVar13,lVar14,uVar11);
        }
        goto LAB_100553017;
      }
      if (cVar6 == '\x01') {
        pvVar13 = operator_new(0x2440,(nothrow_t *)PTR_nothrow_10082c970);
        if (pvVar13 != (void *)0x0) {
          if (*(long **)(param_1 + 0x4c0) == (long *)0x0) {
            uVar11 = 0;
          }
          else {
            uVar11 = (**(code **)(**(long **)(param_1 + 0x4c0) + 0x28))();
          }
          FUN_10010bd4e(pvVar13,lVar14,uVar11);
        }
        goto LAB_100553017;
      }
    }
    if (*(long *)(param_1 + 0xf60) != 0) {
      *(undefined8 *)(param_1 + 0xfc8) = 0;
      *(undefined8 *)(param_1 + 0xfd0) = 0;
      *(undefined8 *)(param_1 + 0xfe8) = 0;
      *(undefined8 *)(param_1 + 0xff0) = 0;
      *(undefined8 *)(param_1 + 0xfd8) = 0;
      *(undefined8 *)(param_1 + 0xfe0) = 0;
      *(undefined8 *)(param_1 + 0xfb8) = 0;
      *(undefined8 *)(param_1 + 0xfc0) = 0;
      *(undefined8 *)(param_1 + 0xfa8) = 0;
      *(undefined8 *)(param_1 + 0xfb0) = 0;
      *(undefined8 *)(param_1 + 0xf98) = 0;
      *(undefined8 *)(param_1 + 4000) = 0;
      *(undefined8 *)(param_1 + 0xf88) = 0;
      *(undefined8 *)(param_1 + 0xf90) = 0;
      *(undefined8 *)(param_1 + 0xf78) = 0;
      *(undefined8 *)(param_1 + 0xf80) = 0;
      *(undefined8 *)(param_1 + 0xf68) = 0;
      *(undefined8 *)(param_1 + 0xf70) = 0;
      *(undefined8 *)(param_1 + 0xff8) = 0;
      *(undefined4 *)(param_1 + 0xfc8) = 0x38000000;
      *(undefined4 *)(param_1 + 0xfcc) = *(undefined4 *)(param_1 + 0x858);
      puVar5 = *(uint **)(param_2 + 0x3a);
      if (puVar5 != (uint *)0x0) {
        *puVar5 = (uint)*(byte *)(param_1 + 0x649a);
        puVar5[1] = *(uint *)(param_1 + 0x14d0);
        *(undefined1 *)(puVar5 + 2) = *(undefined1 *)(param_1 + 0x6498);
        *(undefined1 *)(*(long *)(param_2 + 0x3a) + 9) = *(undefined1 *)(param_1 + 0x6499);
        *(undefined1 *)(*(long *)(param_2 + 0x3a) + 10) = *(undefined1 *)(param_1 + 0x649b);
      }
      iVar7 = *(int *)(param_1 + 0x850);
      uVar18 = 0x400;
      goto LAB_1005530e6;
    }
    uVar11 = FUN_1001cc310();
    cVar6 = _os_log_type_enabled(uVar11,0x10);
    if (cVar6 != '\0') {
      local_4c8 = 0x8220202;
      uStack_4c4 = 0x7a0a90;
      uStack_4c0 = 1;
      local_4bc = 0x822;
      local_4ba = "mAACDecoderV2 != nullptr";
      __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",&local_4c8,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
LAB_1005530e6:
    if (iVar7 == 0x616c6163) {
      *(undefined4 *)(param_1 + 0x1458) = 0x1000;
      pvVar13 = operator_new(0x40,(nothrow_t *)PTR_nothrow_10082c970);
      if (pvVar13 == (void *)0x0) {
        *(undefined8 *)(param_1 + 0x1018) = 0;
        uVar11 = FUN_1001cc310();
        cVar6 = _os_log_type_enabled(uVar11,0x10);
        if (cVar6 != '\0') {
          local_4c8 = 0x8220202;
          uStack_4c4 = 0x7a0a90;
          uStack_4c0 = 1;
          local_4bc = 0x822;
          local_4ba = "mDPAGDecoder != nullptr";
          __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",&local_4c8,0x16);
        }
        FUN_1001782e9(0,0);
        goto LAB_100553356;
      }
      FUN_100127370(pvVar13);
      *(void **)(param_1 + 0x1018) = pvVar13;
      iVar7 = FUN_1001273f0(pvVar13,param_1 + 0x1000);
      if (iVar7 == -0x80) goto switchD_1005532c8_caseD_3;
      if (iVar7 != 0) {
        uVar11 = FUN_1001cc310();
        cVar6 = _os_log_type_enabled(uVar11,0x10);
        if (cVar6 != '\0') {
          local_4c8 = 0x8220202;
          uStack_4c4 = 0x7a0a90;
          uStack_4c0 = 1;
          local_4bc = 0x400;
          local_4ba = (char *)CONCAT44(local_4ba._4_4_,iVar7);
          __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: err == (%d)",&local_4c8,0x12);
        }
        if (iVar7 != 0) goto switchD_1005532c8_caseD_3;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x1458) = *(undefined4 *)(param_1 + 0x870);
    }
    uVar17 = *(uint *)(param_1 + 0x1458);
    if (uVar17 < uVar18) {
      uVar17 = FUN_10054887e(param_1);
      *(uint *)(param_1 + 0x1458) = uVar17;
    }
    lVar14 = FUN_1001c64e6(uVar17 + 0x10);
    *(long *)(param_1 + 0x1450) = lVar14;
    if (lVar14 != 0) {
      *(undefined1 *)(param_1 + 0x64a8) = 1;
      if (param_2[0xc] == 0) {
        uVar12 = *(ulong *)(param_1 + 0x14c0);
        if ((uVar12 != 0) && (*(ulong *)(param_1 + 0x14a0) < uVar12)) {
          local_4c8 = (uint)uVar12;
          uStack_4c4 = (undefined4)(uVar12 >> 0x20);
          uVar10 = FUN_10054e38c(*(undefined8 *)(param_1 + 0x808));
          *(undefined4 *)(param_1 + 0x1478) = uVar10;
          *(long *)(param_1 + 0x1490) = CONCAT44(uStack_4c4,local_4c8) - *(long *)(param_1 + 0x14a0)
          ;
          *(undefined8 *)(param_1 + 0x1030) = 0;
          *(undefined4 *)(param_1 + 0x147c) = 0;
        }
      }
      else {
        FUN_100553780((int)*(undefined8 *)(param_2 + 0x12),param_1,param_2[0xc],param_2 + 0x22,
                      param_2 + 0x24,*(undefined8 *)(param_2 + 6),0);
      }
      *(int *)(param_1 + 0x1480) = *(int *)(param_1 + 0x14d0) + *(int *)(param_1 + 0x14a0);
      if (param_2[0xd] == 0) {
        uVar12 = *(ulong *)(param_1 + 0x14c8);
        if ((uVar12 != 0) && (uVar12 < *(ulong *)(param_1 + 0x14a8))) {
          *(ulong *)(param_1 + 0x14a8) = uVar12;
        }
      }
      else {
        FUN_10054e286(param_1);
      }
      uVar18 = *(uint *)(*(long *)(param_1 + 0x750) + 0x14 +
                        (ulong)(*(char *)(*(long *)(param_1 + 0x750) + 8) == '\x01') * 8);
      *(uint *)(param_1 + 0x740) =
           uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 | (uVar18 & 0xff00) << 8 | uVar18 << 0x18;
      FUN_10015cc72(param_1 + 0x710);
      FUN_1001c23b3(param_1 + 0x710);
      if (*(long *)(param_1 + 0x718) != 0) {
        FUN_1001c64c1();
        FUN_1001c62d9(param_1 + 0x718,0x20);
        FUN_1001c62d9(param_1 + 0x748,0xb0);
      }
      FUN_10015d841(*(undefined4 *)(param_1 + 0x858),*(undefined4 *)(param_1 + 0x860),1,
                    param_2 + 0x28);
      if (*(int *)(param_1 + 0x850) == 0x616c6163) {
        iVar7 = -0xd0;
        switch((uint)*(byte *)(param_1 + 0x1005) << 0x1e | *(byte *)(param_1 + 0x1005) - 0x10 >> 2)
        {
        case 0:
        case 2:
        case 4:
          uVar10 = *(undefined4 *)(param_1 + 0x864);
          break;
        case 1:
          uVar10 = 0x18;
          break;
        default:
          goto switchD_1005532c8_caseD_3;
        }
        FUN_10015d7ff(*(undefined4 *)(param_1 + 0x858),*(undefined4 *)(param_1 + 0x860),uVar10,0xc,
                      param_2 + 0x28);
      }
      param_2[0x27] = *(int *)(param_1 + 0x868);
      param_2[0x26] = *(uint *)(param_1 + 0x86c) / 1000;
      param_2[0x1f] = *(int *)(param_1 + 0x14b8);
      *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x14b0);
      iVar7 = *param_2;
      uVar18 = 0;
      if (iVar7 < 0x48545450) {
        if (iVar7 != 0x44574e4c) {
          if (iVar7 == 0x46494c45) goto LAB_100553486;
          goto LAB_100553492;
        }
        param_2[0x1e] = 0x1bd;
      }
      else {
        if ((iVar7 == 0x48545450) || (iVar7 == 0x53485244)) {
          uVar18 = 0x110c;
        }
        else if (iVar7 == 0x4d46494c) {
LAB_100553486:
          uVar18 = 0x11bd;
        }
LAB_100553492:
        param_2[0x1e] = uVar18;
        if (((iVar7 == 0x53485244) || (iVar7 == 0x48545450)) &&
           (*(char *)(param_1 + 0x64a9) == '\0')) {
          param_2[0x1e] = uVar18 & 0x11b4;
        }
      }
      iVar7 = 0;
      if ((uVar2 >> 0x17 & 1) != 0) {
        iVar7 = FUN_100179732((char)param_2[0x40],(undefined8 *)(param_1 + 0x64c0));
        if (iVar7 != -0x80) {
          if (iVar7 == 0) goto switchD_1005532c8_caseD_3;
          uVar11 = FUN_1001cc310();
          cVar6 = _os_log_type_enabled(uVar11,0x10);
          if (cVar6 != '\0') {
            local_4c8 = 0x8220202;
            uStack_4c4 = 0x7a0a90;
            uStack_4c0 = 1;
            local_4bc = 0x400;
            local_4ba = (char *)CONCAT44(local_4ba._4_4_,iVar7);
            __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: err == (%d)",&local_4c8,0x12);
          }
        }
        *(undefined8 *)(param_1 + 0x64c0) = 0;
      }
      goto switchD_1005532c8_caseD_3;
    }
    uVar11 = FUN_1001cc310();
    cVar6 = _os_log_type_enabled(uVar11,0x10);
    if (cVar6 != '\0') {
      local_4c8 = 0x8220202;
      uStack_4c4 = 0x7a0a90;
      uStack_4c0 = 1;
      local_4bc = 0x822;
      local_4ba = "mInputBuffer != nullptr";
      __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",&local_4c8,0x16);
    }
    FUN_1001782e9(0,0);
  }
LAB_100553356:
  iVar7 = -0x6c;
switchD_1005532c8_caseD_3:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar7;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

