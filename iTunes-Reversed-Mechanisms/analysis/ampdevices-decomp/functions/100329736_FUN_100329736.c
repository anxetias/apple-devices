// name: FUN_100329736
// address: 100329736

int FUN_100329736(long *param_1)

{
  long *plVar1;
  undefined1 *puVar2;
  cfstringStruct *pcVar3;
  qword qVar4;
  char cVar5;
  byte bVar6;
  short sVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  cfstringStruct *pcVar11;
  long *plVar12;
  cfstringStruct **ppcVar13;
  undefined8 uVar14;
  long lVar15;
  void *pvVar16;
  ulong uVar17;
  undefined8 uVar18;
  long *plVar19;
  long lVar20;
  long *plVar21;
  long lVar22;
  ulong uVar23;
  undefined8 *puVar24;
  bool bVar25;
  cfstringStruct *local_2f8;
  long *local_2f0;
  cfstringStruct *local_2e8;
  long *plStack_2e0;
  long *local_2d8;
  undefined6 uStack_2d0;
  undefined2 uStack_2ca;
  undefined6 uStack_2c8;
  undefined4 local_2c0;
  undefined1 local_2bc;
  undefined2 uStack_2bb;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined1 uStack_2a8;
  undefined7 uStack_2a7;
  undefined1 uStack_2a0;
  undefined8 uStack_29f;
  long local_288 [2];
  long *local_278;
  long *local_270;
  ulong local_268;
  long *local_260;
  undefined8 local_258;
  undefined4 uStack_250;
  undefined2 uStack_24c;
  undefined2 uStack_24a;
  undefined2 uStack_248;
  undefined4 uStack_246;
  undefined8 local_238;
  undefined4 local_230;
  undefined2 uStack_22c;
  undefined2 uStack_22a;
  undefined2 uStack_228;
  undefined4 uStack_226;
  undefined2 uStack_222;
  undefined4 local_220;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar8 = FUN_1003c59c2();
  if (iVar8 == -0x80) goto LAB_10032ab11;
  if (iVar8 != 0) {
    uVar14 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar14,0x10);
    if (cVar5 != '\0') {
      local_238._0_4_ = 0x8220202;
      local_238._4_4_ = 0x7a0a90;
      local_230 = 1;
      uStack_22c = 0x400;
      uStack_22a = (undefined2)iVar8;
      uStack_228 = (undefined2)((uint)iVar8 >> 0x10);
      __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: err == (%d)",&local_238,0x12);
    }
    goto LAB_10032ab11;
  }
  lVar10 = (**(code **)(*param_1 + 0x10))(param_1);
  if (lVar10 == 0) {
    uVar14 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar14,0x10);
    if (cVar5 != '\0') {
      local_238._0_4_ = 0x8220202;
      local_238._4_4_ = 0x7a0a90;
      local_230 = 1;
      uStack_22c = 0x822;
      uStack_22a = 0x1013;
      uStack_228 = 0x7b;
      uStack_226 = 1;
      __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
    }
    FUN_1001782e9(0,0);
    iVar8 = -0x32;
    goto LAB_10032ab11;
  }
  pcVar11 = operator_new(0x2b8,(nothrow_t *)PTR_nothrow_10082c970);
  if (pcVar11 != (cfstringStruct *)0x0) {
    FUN_100220a12(pcVar11);
    pcVar11->field0_0x0 = (qword)&PTR_FUN_100854410;
    FUN_100325b88(&pcVar11[1].field1_0x8);
    *(undefined1 *)((long)&pcVar11[0x15].field2_0x10 + 6) = 0;
  }
  local_2e8 = pcVar11;
  plVar12 = operator_new(0x20);
  plVar12[1] = 0;
  plVar12[2] = 0;
  *plVar12 = (long)&PTR_FUN_100854540;
  plVar12[3] = (long)pcVar11;
  plStack_2e0 = plVar12;
  if (pcVar11 != (cfstringStruct *)0x0) {
    if (pcVar11->field2_0x10 == (undefined *)0x0) {
      LOCK();
      plVar12[1] = plVar12[1] + 1;
      UNLOCK();
      LOCK();
      plVar12[2] = plVar12[2] + 1;
      UNLOCK();
      pcVar11->field1_0x8 = (qword)pcVar11;
      pcVar11->field2_0x10 = (undefined *)plVar12;
    }
    else {
      if (*(long *)(pcVar11->field2_0x10 + 8) != -1) goto LAB_100329910;
      LOCK();
      plVar12[1] = plVar12[1] + 1;
      UNLOCK();
      LOCK();
      plVar12[2] = plVar12[2] + 1;
      UNLOCK();
      pcVar11->field1_0x8 = (qword)pcVar11;
      pcVar11->field2_0x10 = (undefined *)plVar12;
      std::__shared_weak_count::__release_weak();
    }
    plVar19 = plVar12 + 1;
    LOCK();
    lVar15 = *plVar19;
    *plVar19 = *plVar19 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
      std::__shared_weak_count::__release_weak();
    }
  }
LAB_100329910:
  pcVar11 = local_2e8;
  if (local_2e8 == (cfstringStruct *)0x0) {
    uVar14 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar14,0x10);
    if (cVar5 != '\0') {
      local_238._0_4_ = 0x8220202;
      local_238._4_4_ = 0x7a0a90;
      local_230 = 1;
      uStack_22c = 0x822;
      uStack_22a = 0xf62;
      uStack_228 = 0x7b;
      uStack_226 = 1;
      __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
    }
    FUN_1001782e9(0,0);
LAB_100329971:
    ppcVar13 = &local_2f8;
  }
  else {
    cVar5 = (**(code **)(local_2e8->field0_0x0 + 0x18))(local_2e8,param_1 + 4);
    if (cVar5 == '\0') goto LAB_100329971;
    local_2f8 = pcVar11;
    ppcVar13 = &local_2e8;
    local_2f0 = plStack_2e0;
  }
  *ppcVar13 = (cfstringStruct *)0x0;
  ppcVar13[1] = (cfstringStruct *)0x0;
  if (plStack_2e0 != (long *)0x0) {
    LOCK();
    plVar12 = plStack_2e0 + 1;
    lVar15 = *plVar12;
    *plVar12 = *plVar12 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*plStack_2e0 + 0x10))(plStack_2e0);
      std::__shared_weak_count::__release_weak();
    }
  }
  pcVar11 = local_2f8;
  if (local_2f8 == (cfstringStruct *)0x0) {
    uVar14 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar14,0x10);
    if (cVar5 != '\0') {
      local_238._0_4_ = 0x8220202;
      local_238._4_4_ = 0x7a0a90;
      local_230 = 1;
      uStack_22c = 0x822;
      uStack_22a = 0x1028;
      uStack_228 = 0x7b;
      uStack_226 = 1;
      __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
    }
    iVar8 = -0x32;
    FUN_1001782e9(0,0);
  }
  else {
    if (local_2f0 != (long *)0x0) {
      LOCK();
      local_2f0[1] = local_2f0[1] + 1;
      UNLOCK();
    }
    local_260 = local_2f0;
    if (*(char *)((long)&local_2f8[0x15].field2_0x10 + 6) == '\0') {
      FUN_100327d7e(local_2f8);
    }
    local_258._0_4_ = CONCAT31(local_258._1_3_,1);
    if (pcVar11->field3_0x18 == 0) {
      uVar14 = FUN_1001cc310();
      cVar5 = _os_log_type_enabled(uVar14,0x10);
      if (cVar5 != '\0') {
        local_238._0_4_ = 0x8220202;
        local_238._4_4_ = 0x7a0a90;
        local_230 = 1;
        uStack_22c = 0x822;
        uStack_22a = 0xffe;
        uStack_228 = 0x7b;
        uStack_226 = 1;
        __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
      }
      bVar6 = 0;
      FUN_1001782e9(0,0);
    }
    else {
      local_2e8 = &cf_isNewPlaylist;
      FUN_1001a7b90(&local_238);
      FUN_1001a957a(&pcVar11->field3_0x18,&local_238,&local_258);
      FUN_1001ab240(&local_238);
      bVar6 = (byte)local_258;
    }
    local_270 = (long *)0x0;
    qVar4 = pcVar11[1].field1_0x8;
    if (qVar4 == 0) {
      uVar14 = FUN_1001cc310();
      cVar5 = _os_log_type_enabled(uVar14,0x10);
      if (cVar5 != '\0') {
        local_238._0_4_ = 0x8220202;
        local_238._4_4_ = 0x7a0a90;
        local_230 = 1;
        uStack_22c = 0x822;
        uStack_22a = 0xfadd;
        uStack_228 = 0x7b;
        uStack_226 = 1;
        __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
      }
      FUN_1001782e9(0,0);
      if (bVar6 != 0) goto LAB_100329b0f;
      bVar25 = false;
      plVar19 = (long *)0x0;
      plVar12 = local_260;
    }
    else {
      local_270 = (long *)FUN_10048b5ec(lVar10,qVar4);
      if ((local_270 == (long *)0x0 & bVar6) == 0) {
        bVar25 = false;
        plVar19 = local_270;
        plVar12 = local_260;
      }
      else {
LAB_100329b0f:
        local_2d8 = (long *)0x0;
        uStack_2d0 = 0;
        local_2e8 = (cfstringStruct *)0x0;
        plStack_2e0 = (long *)0x0;
        uStack_2ca = 0;
        uStack_2c8 = 0;
        local_2c0 = 0;
        local_2bc = 0;
        uStack_2bb = 0;
        local_2b8 = 0x3ff0000000000000;
        local_2b0 = 0;
        uStack_2a8 = 0;
        uStack_2a7 = 0;
        uStack_2a0 = 0;
        uStack_29f = 0;
        puVar2 = (undefined1 *)((long)&pcVar11[0xe].field0_0x0 + 6);
        cVar5 = FUN_1001b8428(puVar2);
        if (cVar5 == '\0') {
          FUN_1001bb41a(puVar2,&local_238);
        }
        else {
          local_238._0_4_ = 0x200001;
        }
        if (*(long *)((long)&pcVar11[2].field1_0x8 + 2) == 0) {
          plVar12 = (long *)0x0;
        }
        else {
          local_288[0] = FUN_10048b5ec(lVar10);
          if (local_288[0] == 0) {
            uVar14 = FUN_1001cc310();
            cVar5 = _os_log_type_enabled(uVar14,0x10);
            if (cVar5 != '\0') {
              local_258._0_4_ = 0x8220202;
              local_258._4_4_ = 0x7a0a90;
              uStack_250 = 1;
              uStack_24c = 0x822;
              uStack_24a = 0xfaf7;
              uStack_248 = 0x7b;
              uStack_246 = 1;
              __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: (%{public}s)",&local_258,0x16
                                 );
            }
            plVar12 = (long *)0x0;
            FUN_1001782e9(0,0);
          }
          else {
            plVar12 = local_288;
            local_288[1] = 0xffffffffffffffff;
          }
        }
        plStack_2e0 = &local_238;
        local_2bc = 0;
        uStack_2d0 = (undefined6)qVar4;
        uStack_2ca = (undefined2)(qVar4 >> 0x30);
        local_2c0 = *(undefined4 *)&pcVar11[1].field2_0x10;
        local_2d8 = plVar12;
        iVar8 = FUN_1002e2674(lVar10,*(undefined1 *)((long)&pcVar11[1].field3_0x18 + 4),&local_2e8,
                              &local_270);
        bVar25 = iVar8 == 0;
        if (bVar25) {
          local_270[0x4c] = *(long *)((long)&pcVar11[1].field2_0x10 + 4);
          bVar6 = *(byte *)(local_270 + 0x53) & 0xfe | *(byte *)((long)&pcVar11[1].field3_0x18 + 5);
          *(byte *)(local_270 + 0x53) = bVar6;
          *(byte *)(local_270 + 0x53) =
               bVar6 & 0xfd | *(char *)((long)&pcVar11[1].field3_0x18 + 6) * '\x02';
          *(short *)(local_270 + 2) = (short)pcVar11[2].field0_0x0;
          plVar19 = local_270;
          plVar12 = local_260;
        }
        else {
          if (DAT_1008c7660 != -1) {
            _dispatch_once(&DAT_1008c7660,&PTR___NSConcreteGlobalBlock_1008575c0);
          }
          plVar12 = local_260;
          uVar14 = DAT_1008c7658;
          cVar5 = _os_log_type_enabled(DAT_1008c7658,0x10);
          if (cVar5 != '\0') {
            local_258._0_4_ = 0x8000200;
            local_258._4_4_ = (undefined4)qVar4;
            uStack_250 = (undefined4)(qVar4 >> 0x20);
            uStack_24c = 0x400;
            uStack_24a = (undefined2)iVar8;
            uStack_248 = (undefined2)((uint)iVar8 >> 0x10);
            __os_log_impl(0x100000000,uVar14,0x10,"ch> **ERROR** NewPlaylist %16.16llx err %d",
                          &local_258,0x12);
          }
          plVar19 = (long *)0x0;
        }
      }
    }
    if (plVar12 != (long *)0x0) {
      LOCK();
      plVar21 = plVar12 + 1;
      lVar10 = *plVar21;
      *plVar21 = *plVar21 + -1;
      UNLOCK();
      if (lVar10 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
        std::__shared_weak_count::__release_weak();
      }
    }
    pcVar11 = local_2f8;
    if (plVar19 == (long *)0x0) {
      uVar14 = FUN_1001cc310();
      cVar5 = _os_log_type_enabled(uVar14,0x10);
      if (cVar5 != '\0') {
        local_238._0_4_ = 0x8220202;
        local_238._4_4_ = 0x7a0a90;
        local_230 = 1;
        uStack_22c = 0x822;
        uStack_22a = 0x8d24;
        uStack_228 = 0x7b;
        uStack_226 = 1;
        __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
      }
      iVar8 = -0x32;
      FUN_1001782e9(0,0);
    }
    else {
      if (local_2f0 != (long *)0x0) {
        LOCK();
        local_2f0[1] = local_2f0[1] + 1;
        UNLOCK();
      }
      local_260 = local_2f0;
      if (*(char *)((long)&local_2f8[0x15].field2_0x10 + 6) == '\0') {
        FUN_100327d7e(local_2f8);
      }
      uVar23 = *(ulong *)((long)&pcVar11[2].field0_0x0 + 2);
      if (uVar23 == 0) {
        plVar12 = (long *)0x0;
      }
      else {
        plVar21 = (long *)0x200000;
        if (((uVar23 & 2) == 0) ||
           (iVar8 = *(int *)((long)&pcVar11[2].field3_0x18 + 2), iVar8 == (int)plVar19[0x4e])) {
          plVar12 = (long *)0x0;
        }
        else {
          *(int *)(plVar19 + 0x4e) = iVar8;
          plVar21 = (long *)0x300000;
          plVar12 = (long *)0x100000;
        }
        if ((uVar23 & 4) != 0) {
          plVar19[0x72] = *(long *)((long)&pcVar11[2].field3_0x18 + 6);
          *(undefined4 *)(plVar19 + 0x73) = *(undefined4 *)((long)&pcVar11[3].field0_0x0 + 6);
          plVar12 = plVar21;
        }
        if ((uVar23 & 0x10) != 0) {
          bVar6 = *(byte *)((long)&pcVar11[3].field1_0x8 + 3);
          if ((*(uint *)(plVar19 + 0x48) >> 0x13 & 1) != (uint)bVar6) {
            *(uint *)(plVar19 + 0x48) = *(uint *)(plVar19 + 0x48) & 0xfff7ffff | (uint)bVar6 << 0x13
            ;
            plVar12 = (long *)((ulong)plVar12 | 0x1000000);
            uVar23 = *(ulong *)((long)&pcVar11[2].field0_0x0 + 2);
          }
        }
        if ((uVar23 & 0x20) != 0) {
          bVar6 = *(byte *)((long)&pcVar11[3].field1_0x8 + 4);
          if ((*(uint *)(plVar19 + 0x48) >> 0x14 & 1) != (uint)bVar6) {
            *(uint *)(plVar19 + 0x48) = *(uint *)(plVar19 + 0x48) & 0xffefffff | (uint)bVar6 << 0x14
            ;
            plVar12 = (long *)((ulong)plVar12 | 0x1000);
            uVar23 = *(ulong *)((long)&pcVar11[2].field0_0x0 + 2);
          }
        }
        if ((((uint)uVar23 >> 0xb & 1) != 0) &&
           (cVar5 = (char)pcVar11[2].field3_0x18, *(char *)((long)plVar19 + 0x4ec) != cVar5)) {
          *(char *)((long)plVar19 + 0x4ec) = cVar5;
          *(byte *)((long)plVar19 + 0x24a) = *(byte *)((long)plVar19 + 0x24a) | 1;
          plVar12 = (long *)((ulong)plVar12 | 0x10000);
        }
        if (((uint)uVar23 >> 0xd & 1) != 0) {
          iVar8 = *(int *)((long)&pcVar11[2].field2_0x10 + 2);
          if ((int)plVar19[0x4f] == iVar8) {
            uVar9 = *(uint *)(plVar19 + 0x48);
            bVar6 = *(byte *)((long)&pcVar11[2].field2_0x10 + 6);
            if ((uVar9 >> 0x17 & 1) == (uint)bVar6) goto LAB_100329ede;
          }
          else {
            bVar6 = *(byte *)((long)&pcVar11[2].field2_0x10 + 6);
            uVar9 = *(uint *)(plVar19 + 0x48);
          }
          *(int *)(plVar19 + 0x4f) = iVar8;
          *(uint *)(plVar19 + 0x48) = (uVar9 & 0xff7fffff) + (uint)bVar6 * 0x800000;
          *(byte *)((long)plVar19 + 0x24b) = *(byte *)((long)plVar19 + 0x24b) | 2;
          plVar12 = (long *)((ulong)plVar12 | 0x2000000);
          uVar23 = *(ulong *)((long)&pcVar11[2].field0_0x0 + 2);
        }
LAB_100329ede:
        uVar9 = (uint)uVar23;
        if ((uVar9 >> 0xe & 1) != 0) {
          cVar5 = *(char *)((long)&pcVar11[2].field2_0x10 + 7);
          if ((char)plVar19[0x87] == cVar5) {
            iVar8 = *(int *)((long)&pcVar11[3].field3_0x18 + 2);
            if (*(int *)((long)plVar19 + 0x43c) == iVar8) goto LAB_100329f1c;
          }
          else {
            iVar8 = *(int *)((long)&pcVar11[3].field3_0x18 + 2);
          }
          *(char *)(plVar19 + 0x87) = cVar5;
          *(int *)((long)plVar19 + 0x43c) = iVar8;
          *(byte *)(plVar19 + 0x49) = *(byte *)(plVar19 + 0x49) | 0x20;
          plVar12 = (long *)((ulong)plVar12 | 0x20);
        }
LAB_100329f1c:
        if (((uVar9 >> 0xc & 1) != 0) &&
           (iVar8 = *(int *)((long)&pcVar11[3].field1_0x8 + 6), (int)plVar19[0x9d] != iVar8)) {
          *(int *)(plVar19 + 0x9d) = iVar8;
          *(byte *)(plVar19 + 0x49) = *(byte *)(plVar19 + 0x49) | 8;
          plVar12 = (long *)((ulong)plVar12 | 8);
        }
        if (((uVar9 >> 10 & 1) != 0) &&
           (lVar10 = *(long *)((long)&pcVar11[3].field2_0x10 + 2), plVar19[0x9c] != lVar10)) {
          plVar19[0x9c] = lVar10;
          *(byte *)(plVar19 + 0x49) = *(byte *)(plVar19 + 0x49) | 8;
          plVar12 = (long *)((ulong)plVar12 | 8);
        }
        if ((uVar9 >> 0x10 & 1) != 0) {
          bVar6 = *(byte *)((long)&pcVar11[2].field3_0x18 + 1);
          if ((*(uint *)(plVar19 + 0x48) >> 0x10 & 1) != (uint)bVar6) {
            *(uint *)(plVar19 + 0x48) = *(uint *)(plVar19 + 0x48) & 0xfffeffff | (uint)bVar6 << 0x10
            ;
            plVar12 = (long *)((ulong)plVar12 | 0x8000000000);
            uVar23 = *(ulong *)((long)&pcVar11[2].field0_0x0 + 2);
          }
        }
        sVar7 = (short)uVar23;
        if (((uVar23 & 0x40) != 0) &&
           ((((short)plVar19[2] == 0x27 || ((short)plVar19[2] == 0x14)) &&
            (lVar10 = *(long *)((long)&pcVar11[4].field1_0x8 + 6), plVar19[0x9e] != lVar10)))) {
          plVar19[0x9e] = lVar10;
          plVar12 = (long *)((ulong)plVar12 | 0x400000);
          sVar7 = (short)*(undefined8 *)((long)&pcVar11[2].field0_0x0 + 2);
        }
        if (sVar7 < 0) {
          uVar9 = (uint)*(byte *)((long)&pcVar11[3].field1_0x8 + 5);
          if ((*(uint *)(plVar19 + 0x48) >> 0x19 & 1) != uVar9) {
            *(uint *)(plVar19 + 0x48) = *(uint *)(plVar19 + 0x48) & 0xfdffffff | uVar9 << 0x19;
            plVar12 = (long *)((ulong)plVar12 | 0x4000000000);
          }
        }
      }
      uVar23 = *(ulong *)((long)&pcVar11[0xd].field3_0x18 + 6);
      if (uVar23 == 0) {
        local_268 = 0;
        local_238 = (cfstringStruct *)CONCAT44(local_238._4_4_,(undefined4)local_238);
      }
      else {
        if ((uVar23 & 1) == 0) {
          local_268 = 0;
        }
        else {
          FUN_100486d8f(&local_2e8,plVar19);
          FUN_1001b7a5c(&local_238,&local_2e8);
          puVar2 = (undefined1 *)((long)&pcVar11[0xe].field0_0x0 + 6);
          iVar8 = FUN_1001b96de(puVar2,&local_238,0);
          FUN_1001b7a50(&local_238);
          if (iVar8 != 0) {
            FUN_1001bb41a(puVar2,&local_238);
            FUN_1004872d8(plVar19,&local_238);
          }
          local_268 = (ulong)(iVar8 != 0);
          FUN_1001b7a50(&local_2e8);
          uVar23 = *(ulong *)((long)&pcVar11[0xd].field3_0x18 + 6);
        }
        if ((uVar23 & 2) != 0) {
          FUN_1001a8c1c(&local_2e8,plVar19 + 0x9b);
          local_278 = plVar12;
          FUN_1001b7f2a(&local_238,&local_2e8);
          puVar2 = (undefined1 *)((long)&pcVar11[0xe].field2_0x10 + 6);
          iVar8 = FUN_1001b96de(puVar2,&local_238,0);
          FUN_1001b7a50(&local_238);
          if (iVar8 != 0) {
            FUN_1001ab076(plVar19 + 0x9b,puVar2);
            local_268 = local_268 + 8;
          }
          plVar12 = local_278;
          FUN_1001ab006(&local_2e8);
          uVar23 = *(ulong *)((long)&pcVar11[0xd].field3_0x18 + 6);
        }
        if ((uVar23 & 0x10) != 0) {
          FUN_10048768a(&local_2e8,plVar19,0);
          FUN_1001b7a5c(&local_238,&local_2e8);
          puVar2 = (undefined1 *)((long)&pcVar11[0x10].field2_0x10 + 6);
          iVar8 = FUN_1001b96de(puVar2,&local_238,0);
          FUN_1001b7a50(&local_238);
          if (iVar8 != 0) {
            uVar14 = FUN_1001bb41a(puVar2,&local_238);
            FUN_100487957(plVar19,uVar14);
            local_268 = local_268 | 2;
          }
          FUN_1001b7a50(&local_2e8);
          uVar23 = *(ulong *)((long)&pcVar11[0xd].field3_0x18 + 6);
        }
        if ((uVar23 & 0x20) != 0) {
          FUN_100487ce4(&local_238,plVar19);
          FUN_1001b7a5c(&local_2e8,&local_238);
          puVar2 = (undefined1 *)((long)&pcVar11[0x11].field0_0x0 + 6);
          iVar8 = FUN_1001b96de(puVar2,&local_2e8,0);
          FUN_1001b7a50(&local_2e8);
          if (iVar8 != 0) {
            FUN_100487e4d(plVar19,puVar2);
            local_268 = local_268 | 4;
          }
          FUN_1001b7a50(&local_238);
          uVar23 = *(ulong *)((long)&pcVar11[0xd].field3_0x18 + 6);
        }
        if (((uint)uVar23 >> 8 & 1) != 0) {
          FUN_100488006(&local_238,plVar19);
          FUN_1001b7a5c(&local_2e8,&local_238);
          puVar2 = (undefined1 *)((long)&pcVar11[0x11].field2_0x10 + 6);
          iVar8 = FUN_1001b96de(puVar2,&local_2e8,0);
          FUN_1001b7a50(&local_2e8);
          if (iVar8 != 0) {
            FUN_100488025(plVar19,puVar2);
            local_268 = local_268 | 0x2000000000;
          }
          FUN_1001b7a50(&local_238);
          uVar23 = *(ulong *)((long)&pcVar11[0xd].field3_0x18 + 6);
        }
        cVar5 = (char)uVar23;
        if ((uVar23 & 4) != 0) {
          lVar10 = FUN_100492e62(plVar19,1);
          if (lVar10 == 0) {
            uVar14 = FUN_1001cc310();
            cVar5 = _os_log_type_enabled(uVar14,0x10);
            if (cVar5 != '\0') {
              local_238._0_4_ = 0x8220202;
              local_238._4_4_ = 0x7a168c;
              local_230 = 1;
              uStack_22c = 0x822;
              uStack_22a = 0x580c;
              uStack_228 = 0x7b;
              uStack_226 = 1;
              __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: (%{public}s)",&local_238,0x16
                                 );
            }
            cVar5 = FUN_1001782e9(0,0);
            if (cVar5 != '\0') goto LAB_10032a32e;
          }
          else {
LAB_10032a32e:
            FUN_100166802(lVar10,*(undefined8 *)((long)&pcVar11[0xf].field0_0x0 + 6));
          }
          local_268 = local_268 | 0x40000;
          cVar5 = (char)*(undefined8 *)((long)&pcVar11[0xd].field3_0x18 + 6);
        }
        local_238 = (cfstringStruct *)CONCAT44(local_238._4_4_,(undefined4)local_238);
        if ((cVar5 < '\0') &&
           (local_238 = (cfstringStruct *)CONCAT44(local_238._4_4_,(undefined4)local_238),
           *(long *)((long)&pcVar11[0xf].field2_0x10 + 6) != 0)) {
          pcVar3 = (cfstringStruct *)((long)&pcVar11[0xf].field2_0x10 + 6);
          lVar10 = FUN_1001a7bfa(pcVar3);
          if (lVar10 != 0) {
            FUN_100483533(&local_258,plVar19,0);
            if (CONCAT44(local_258._4_4_,(undefined4)local_258) != 0) {
              local_230 = 0;
              uStack_22c = 0;
              uStack_22a = 0;
              local_278 = plVar12;
              local_238 = pcVar3;
              FUN_1001aa318(&uStack_228);
              plStack_2e0 = (long *)FUN_1001a7bfa(pcVar3);
              local_2e8 = pcVar3;
              FUN_1001aa318(&local_2d8);
              plVar12 = (long *)CONCAT26(uStack_22a,CONCAT24(uStack_22c,local_230));
              while ((local_238 != local_2e8 || (plVar12 != plStack_2e0))) {
                FUN_1001a7f52(local_288);
                FUN_1001aaadc(&uStack_228,local_288);
                FUN_1001ab240(local_288);
                FUN_1004c5488(CONCAT44(local_258._4_4_,(undefined4)local_258),
                              CONCAT26(uStack_222,CONCAT42(uStack_226,uStack_228)));
                plVar12 = (long *)(CONCAT26(uStack_22a,CONCAT24(uStack_22c,local_230)) + 1);
                local_230 = SUB84(plVar12,0);
                uStack_22c = (undefined2)((ulong)plVar12 >> 0x20);
                uStack_22a = (undefined2)((ulong)plVar12 >> 0x30);
              }
              FUN_1001ab240(&local_2d8);
              FUN_1001ab240(&uStack_228);
              local_268 = local_268 | 0x40000;
              plVar12 = local_278;
            }
            plVar21 = (long *)CONCAT26(uStack_24a,CONCAT24(uStack_24c,uStack_250));
            if (plVar21 != (long *)0x0) {
              LOCK();
              plVar1 = plVar21 + 1;
              lVar10 = *plVar1;
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (lVar10 == 0) {
                (**(code **)(*plVar21 + 0x10))(plVar21);
                std::__shared_weak_count::__release_weak();
              }
            }
          }
        }
      }
      local_268 = local_268 | (ulong)plVar12;
      if ((*(byte *)(plVar19 + 0x53) & 1) != 0) {
        uVar9 = (uint)*(undefined8 *)((long)&pcVar11[2].field0_0x0 + 2);
        if ((pcVar11[0xd].field3_0x18 & 0x8000000000000) == 0) {
          if ((uVar9 >> 8 & 1) != 0) {
LAB_10032a5a1:
            FUN_10056e2b4((undefined1 *)((long)&pcVar11[7].field3_0x18 + 6),&local_238,0);
            if (((pcVar11[0xd].field3_0x18 & 0x8000000000000) != 0) &&
               (*(long *)((long)&pcVar11[0x10].field0_0x0 + 6) != 0)) {
              uVar14 = FUN_100289f90();
              local_230 = (undefined4)uVar14;
              uStack_22c = (undefined2)((ulong)uVar14 >> 0x20);
              uStack_22a = (undefined2)((ulong)uVar14 >> 0x30);
            }
            if (*(long *)((long)&pcVar11[0x12].field0_0x0 + 6) != 0) {
              FUN_1001a7a9e(&local_2e8,(undefined1 *)((long)&pcVar11[0x12].field0_0x0 + 6));
              uVar9 = FUN_1001a7bfa(&local_2e8);
              local_288[0] = 0;
              iVar8 = FUN_100594adc(local_288,uVar9);
              if (iVar8 == 0) {
                if ((ulong)uVar9 != 0) {
                  uVar23 = 0;
                  do {
                    cVar5 = FUN_1001a7fd8(&local_2e8,uVar23,&local_258);
                    if ((cVar5 != '\0') && (CONCAT44(local_258._4_4_,(undefined4)local_258) != 0)) {
                      lVar10 = FUN_100300729(plVar19[1]);
                      if (lVar10 != 0) {
                        FUN_10059563f(local_288[0],lVar10,0);
                      }
                    }
                    uVar23 = uVar23 + 1;
                  } while (uVar9 != uVar23);
                }
                uStack_228 = (undefined2)local_288[0];
                uStack_226 = (undefined4)((ulong)local_288[0] >> 0x10);
                uStack_222 = (undefined2)((ulong)local_288[0] >> 0x30);
              }
              FUN_1001a7a94(&local_2e8);
            }
            FUN_100581b2a(plVar19,&local_238,1);
            if ((*(byte *)(plVar19 + 0x53) & 2) != 0) {
              FUN_100352633(plVar19);
            }
            FUN_1005814bd(&local_238);
            local_268 = local_268 | 0x20000;
          }
        }
        else {
          if ((uVar9 >> 8 & 1) != 0) goto LAB_10032a5a1;
          if (DAT_1008c7660 != -1) {
            _dispatch_once(&DAT_1008c7660,&PTR___NSConcreteGlobalBlock_1008575c0);
          }
          uVar14 = DAT_1008c7658;
          cVar5 = _os_log_type_enabled(DAT_1008c7658,0x10);
          if (cVar5 != '\0') {
            local_238._0_4_ = 0x8000100;
            local_238._4_4_ = (undefined4)plVar19[0xc];
            local_230 = (undefined4)((ulong)plVar19[0xc] >> 0x20);
            __os_log_impl(0x100000000,uVar14,0x10,
                          "ch> **ERROR** UpdateSmartPlaylistMetadata -  %16.16llx SmartPlaylistCriteria valid but info is not"
                          ,&local_238,0xc);
          }
        }
        if ((short)plVar19[2] != 0) {
          FUN_100586196(plVar19,bVar25);
        }
      }
      uVar23 = *(ulong *)((long)&pcVar11[2].field0_0x0 + 2);
      if ((uVar23 & 1) == 0) {
        lVar10 = 0;
      }
      else {
        lVar10 = *(long *)((long)&pcVar11[2].field1_0x8 + 2);
      }
      if (local_260 != (long *)0x0) {
        LOCK();
        plVar12 = local_260 + 1;
        lVar15 = *plVar12;
        *plVar12 = *plVar12 + -1;
        UNLOCK();
        if (lVar15 == 0) {
          (**(code **)(*local_260 + 0x10))(local_260);
          std::__shared_weak_count::__release_weak();
        }
      }
      plVar12 = local_2f0;
      pcVar11 = local_2f8;
      if (local_2f0 != (long *)0x0) {
        LOCK();
        local_2f0[1] = local_2f0[1] + 1;
        UNLOCK();
      }
      local_288[0] = 0;
      local_288[1] = 0;
      local_2e8 = &cf_noItems;
      FUN_1001a7b90(&local_238);
      bVar6 = FUN_1001a957a(&pcVar11->field3_0x18,&local_238,&local_270);
      bVar6 = bVar6 & (byte)local_270;
      FUN_1001ab240(&local_238);
      local_260 = plVar19;
      if (bVar6 == 1) {
LAB_10032a7bc:
        FUN_10048b1e7(plVar19);
      }
      else {
        FUN_1001a7b90(&local_270);
        FUN_10032f0f2(&local_258);
        FUN_10032f0f2(&local_238);
        cVar5 = FUN_1001a92ae(&pcVar11->field3_0x18,&local_270,&local_238);
        puVar24 = &local_258;
        if (cVar5 != '\0') {
          puVar24 = &local_238;
        }
        FUN_1001a7a9e(&local_2e8,puVar24);
        FUN_1001a85d4(&local_238);
        FUN_1001a85d4(&local_258);
        FUN_1001ab240(&local_270);
        if (local_2e8 != (cfstringStruct *)0x0) {
          lVar15 = FUN_1001a8610(&local_2e8);
          if (lVar15 != 0) {
            pvVar16 = (void *)FUN_1001a8626(&local_2e8);
            uVar17 = FUN_1001a8610(&local_2e8);
            if (uVar17 < 0x22) {
              FUN_1001a85d4(&local_2e8);
              goto LAB_10032a7bc;
            }
            plVar19 = (long *)FUN_10032b536(uVar17 / 0x22);
            lVar15 = (uVar17 / 0x22) * 0x22;
            local_278 = (long *)((long)plVar19 + lVar15);
            lVar22 = 0;
            do {
              puVar24 = (undefined8 *)((long)plVar19 + lVar22 + 0x10);
              *puVar24 = 0;
              puVar24[1] = 0;
              *(undefined8 *)((long)plVar19 + lVar22) = 0;
              ((undefined8 *)((long)plVar19 + lVar22))[1] = 0;
              lVar22 = lVar22 + 0x22;
            } while (lVar15 != lVar22);
            _memcpy(plVar19,pvVar16,uVar17);
            FUN_1001a85d4(&local_2e8);
            local_258._0_4_ = 0;
            local_258._4_4_ = 0;
            uStack_250 = 0;
            uStack_24c = 0;
            uStack_24a = 0;
            FUN_1004897f6(local_260,1);
            plVar21 = plVar19;
            do {
              lVar15 = *plVar21;
              lVar22 = plVar21[1];
              if (lVar15 == 0) {
                uVar14 = FUN_1001cc310();
                cVar5 = _os_log_type_enabled(uVar14,0x10);
                if (cVar5 != '\0') {
                  local_238._0_4_ = 0x8220202;
                  local_238._4_4_ = 0x7a0a90;
                  local_230 = 1;
                  uStack_22c = 0x822;
                  uStack_22a = 0xfb35;
                  uStack_228 = 0x7b;
                  uStack_226 = 1;
                  __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: (%{public}s)",&local_238,
                                      0x16);
                }
                FUN_1001782e9(0,0);
              }
              lVar20 = FUN_10048a10b(local_260,lVar15);
              if (lVar20 == 0) {
                local_2e8 = (cfstringStruct *)local_260[0xf];
                plStack_2e0 = (long *)0xffffffffffffffff;
                if (lVar22 == 0) {
                  lVar20 = 0;
LAB_10032acdf:
                  lVar20 = FUN_100489a1f(local_260,lVar20,&local_2e8,lVar15);
                  if (lVar20 != 0) goto LAB_10032ad00;
                  uVar14 = FUN_1001cc310();
                  cVar5 = _os_log_type_enabled(uVar14,0x10);
                  if (cVar5 != '\0') {
                    local_238._0_4_ = 0x8220202;
                    local_238._4_4_ = 0x7a0a90;
                    local_230 = 1;
                    uStack_22c = 0x822;
                    uStack_22a = 0xfbaa;
                    uStack_228 = 0x7b;
                    uStack_226 = 1;
                    __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: (%{public}s)",
                                        &local_238,0x16);
                  }
                  FUN_1001782e9(0,0);
                }
                else {
                  lVar20 = FUN_100300729(local_260[1],lVar22);
                  if (lVar20 != 0) goto LAB_10032acdf;
                  if (DAT_1008c7660 != -1) {
                    _dispatch_once(&DAT_1008c7660,&PTR___NSConcreteGlobalBlock_1008575c0);
                  }
                  uVar14 = DAT_1008c7658;
                  cVar5 = _os_log_type_enabled(DAT_1008c7658,0x10);
                  if (cVar5 != '\0') {
                    local_238._0_4_ = 0x8000100;
                    local_238._4_4_ = (undefined4)lVar22;
                    local_230 = (undefined4)((ulong)lVar22 >> 0x20);
                    __os_log_impl(0x100000000,uVar14,0x10,
                                  "ch> **ERROR** NewPlaylistItem - no track with persistentID %16.16llx "
                                  ,&local_238,0xc);
                  }
                }
              }
              else {
                if ((*(long **)(lVar20 + 8) != (long *)0x0) && (**(long **)(lVar20 + 8) != lVar22))
                {
                  uVar14 = FUN_1001cc310();
                  cVar5 = _os_log_type_enabled(uVar14,0x10);
                  if (cVar5 != '\0') {
                    local_238._0_4_ = 0x8220202;
                    local_238._4_4_ = 0x7a0a90;
                    local_230 = 1;
                    uStack_22c = 0x822;
                    uStack_22a = 0xfb5b;
                    uStack_228 = 0x7b;
                    uStack_226 = 1;
                    __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: (%{public}s)",
                                        &local_238,0x16);
                  }
                  FUN_1001782e9(0,0);
                }
LAB_10032ad00:
                local_238._0_4_ = (undefined4)local_260[0xf];
                local_238._4_4_ = (undefined4)((ulong)local_260[0xf] >> 0x20);
                local_230 = 0xffffffff;
                uStack_22c = 0xffff;
                uStack_22a = 0xffff;
                FUN_10048a5e2(lVar20,&local_238);
                *(undefined4 *)(lVar20 + 0x5c) = 0;
              }
              plVar21 = (long *)((long)plVar21 + 0x22);
            } while (plVar21 != local_278);
            FUN_10048ac76(local_260,0);
            if (plVar19 != (long *)0x0) {
              operator_delete(plVar19);
            }
            goto LAB_10032a8c0;
          }
        }
        FUN_1001a85d4(&local_2e8);
      }
LAB_10032a8c0:
      if (plVar12 != (long *)0x0) {
        LOCK();
        plVar19 = plVar12 + 1;
        lVar15 = *plVar19;
        *plVar19 = *plVar19 + -1;
        UNLOCK();
        if (lVar15 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
          std::__shared_weak_count::__release_weak();
        }
      }
      uVar14 = FUN_1003c5880();
      cVar5 = _os_log_type_enabled(uVar14,1);
      plVar12 = local_260;
      if (bVar25 == false) {
        if (cVar5 != '\0') {
          lVar15 = local_260[0xc];
          FUN_100486d8f(&local_2e8,local_260);
          uVar18 = FUN_1001b83ae(&local_2e8);
          plVar12 = local_260;
          local_220 = *(undefined4 *)(local_260[0xf] + 0x18);
          local_238._0_4_ = 0x8000302;
          local_238._4_4_ = (undefined4)lVar15;
          local_230 = (undefined4)((ulong)lVar15 >> 0x20);
          uStack_22c = 0x820;
          uStack_22a = (undefined2)uVar18;
          uStack_228 = (undefined2)((ulong)uVar18 >> 0x10);
          uStack_226 = (undefined4)((ulong)uVar18 >> 0x20);
          uStack_222 = 0x400;
          __os_log_impl(0x100000000,uVar14,1,"ch> PLAYLIST: %16.16llx \'%s\' %d playlistItems",
                        &local_238,0x1c);
          FUN_1001b7a50(&local_2e8);
        }
      }
      else {
        if (cVar5 != '\0') {
          lVar15 = local_260[0xc];
          FUN_100486d8f(&local_2e8,local_260);
          uVar18 = FUN_1001b83ae(&local_2e8);
          plVar12 = local_260;
          local_220 = *(undefined4 *)(local_260[0xf] + 0x18);
          local_238._0_4_ = 0x8000302;
          local_238._4_4_ = (undefined4)lVar15;
          local_230 = (undefined4)((ulong)lVar15 >> 0x20);
          uStack_22c = 0x820;
          uStack_22a = (undefined2)uVar18;
          uStack_228 = (undefined2)((ulong)uVar18 >> 0x10);
          uStack_226 = (undefined4)((ulong)uVar18 >> 0x20);
          uStack_222 = 0x400;
          __os_log_impl(0x100000000,uVar14,1,"ch> PLAYLIST: (new) %16.16llx \'%s\' %d playlistItems"
                        ,&local_238,0x1c);
          FUN_1001b7a50(&local_2e8);
        }
        FUN_100488970(plVar12);
        FUN_100484c95(plVar12);
      }
      if ((uVar23 & 1) != 0) {
        lVar15 = plVar12[5];
        if (lVar10 == 0) {
          if (lVar15 != 0) {
            local_2e8 = (cfstringStruct *)0x0;
LAB_10032aab4:
            plStack_2e0 = (long *)0xffffffffffffffff;
            FUN_100489366(plVar12);
          }
        }
        else if ((lVar15 == 0) || (*(long *)(lVar15 + 0x60) != lVar10)) {
          local_2e8 = (cfstringStruct *)FUN_10048b5ec(plVar12[1],lVar10);
          if (local_2e8 != (cfstringStruct *)0x0) goto LAB_10032aab4;
          uVar14 = FUN_1001cc310();
          cVar5 = _os_log_type_enabled(uVar14,0x10);
          if (cVar5 != '\0') {
            local_238._0_4_ = 0x8220202;
            local_238._4_4_ = 0x7a0a90;
            local_230 = 1;
            uStack_22c = 0x822;
            uStack_22a = 0xfb12;
            uStack_228 = 0x7b;
            uStack_226 = 1;
            __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
          }
          FUN_1001782e9(0,0);
        }
      }
      iVar8 = 0;
      if (local_268 != 0) {
        FUN_1004874fd(plVar12);
      }
    }
  }
  if (local_2f0 != (long *)0x0) {
    LOCK();
    plVar12 = local_2f0 + 1;
    lVar10 = *plVar12;
    *plVar12 = *plVar12 + -1;
    UNLOCK();
    if (lVar10 == 0) {
      (**(code **)(*local_2f0 + 0x10))(local_2f0);
      std::__shared_weak_count::__release_weak();
    }
  }
LAB_10032ab11:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar8;
}

