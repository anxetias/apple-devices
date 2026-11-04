// name: FUN_10025f10e
// address: 10025f10e

int FUN_10025f10e(long *param_1)

{
  cfstringStruct *pcVar1;
  ulong *puVar2;
  ushort uVar3;
  long *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  char cVar10;
  byte bVar11;
  int iVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined8 *puVar15;
  long *plVar16;
  long **pplVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  byte bVar25;
  byte bVar26;
  char *pcVar27;
  undefined1 uVar28;
  byte bVar29;
  uint uVar30;
  long *plVar31;
  cfstringStruct **ppcVar32;
  byte *pbVar33;
  ulong uVar34;
  size_t sVar35;
  long *plVar36;
  long *plVar37;
  bool bVar38;
  undefined1 auVar39 [16];
  cfstringStruct *local_5a8;
  undefined1 local_5a0 [16];
  ulong local_590;
  long *local_588;
  undefined8 local_580;
  cfstringStruct *local_578;
  undefined8 uStack_570;
  cfstringStruct *local_568;
  long *local_560;
  long local_558 [2];
  long *local_548;
  long *local_540;
  long *local_538;
  long *plStack_530;
  long *local_528;
  long *local_520;
  long *local_518;
  cfstringStruct *local_510;
  long *local_508;
  long *local_500;
  undefined8 local_4f8;
  long *local_4f0;
  undefined8 local_4e8;
  cfstringStruct *local_4e0;
  undefined8 local_4d8;
  undefined8 uStack_4d0;
  long *local_4c0;
  undefined8 local_4b8;
  undefined4 uStack_4b0;
  undefined2 uStack_4ac;
  undefined2 uStack_4aa;
  undefined2 uStack_4a8;
  undefined2 uStack_4a6;
  undefined2 uStack_4a4;
  undefined2 uStack_4a2;
  undefined4 local_4a0;
  undefined4 uStack_49c;
  undefined4 uStack_498;
  undefined4 local_494;
  long local_490;
  undefined1 local_488;
  undefined1 local_487;
  uint local_484;
  char local_47f;
  ushort local_47e;
  char local_47c;
  char local_47b;
  int local_47a;
  int local_476;
  short local_472;
  short local_470;
  long local_46e;
  int local_466;
  int local_462;
  long local_45e;
  int local_456;
  short local_452;
  short local_450;
  float local_44e;
  short local_44a;
  short local_448;
  int local_446;
  int local_442;
  int local_43e;
  int local_43a;
  long local_436;
  long local_42e;
  byte local_426 [2];
  short local_424;
  short local_422;
  undefined1 local_41e [568];
  byte local_1e6;
  undefined7 uStack_1e5;
  undefined8 uStack_1de;
  undefined4 local_1d6;
  undefined4 uStack_1d2;
  undefined4 uStack_1ce;
  undefined4 uStack_1ca;
  undefined8 local_1c6;
  undefined8 uStack_1be;
  byte local_1b6;
  int local_1b2;
  long local_1ae;
  long lStack_1a6;
  long local_19e;
  long lStack_196;
  undefined4 local_18e;
  undefined4 uStack_18a;
  undefined4 uStack_186;
  undefined4 uStack_182;
  long local_17e;
  long local_176;
  long lStack_16e;
  long local_166;
  long lStack_15e;
  long local_156;
  int local_14e;
  int iStack_14a;
  int iStack_146;
  int iStack_142;
  short local_13e;
  uint local_13a;
  undefined1 local_136 [16];
  undefined8 local_126 [2];
  undefined8 local_116 [2];
  undefined4 local_106;
  undefined4 uStack_102;
  undefined4 uStack_fe;
  undefined4 uStack_fa;
  undefined8 local_f6 [3];
  long *local_d8;
  long *local_d0;
  long *local_b8;
  long *local_b0;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined2 uStack_8c;
  undefined2 uStack_8a;
  undefined2 uStack_88;
  undefined4 uStack_86;
  undefined2 uStack_82;
  long *local_80;
  undefined2 local_78;
  undefined8 local_76;
  undefined2 local_6e;
  undefined8 local_6c;
  undefined2 local_64;
  undefined8 local_62;
  undefined8 local_58;
  undefined4 local_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined6 local_48 [2];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar12 = FUN_1003c59c2();
  if (iVar12 == -0x80) goto LAB_1002626b6;
  if (iVar12 != 0) {
    uVar18 = FUN_1001cc310();
    cVar10 = _os_log_type_enabled(uVar18,0x10);
    if (cVar10 != '\0') {
      local_4b8._0_4_ = 0x8220202;
      local_4b8._4_4_ = 0x7a0a90;
      uStack_4b0 = 1;
      uStack_4ac = 0x400;
      uStack_4aa = (undefined2)iVar12;
      uStack_4a8 = (undefined2)((uint)iVar12 >> 0x10);
      __os_log_error_impl(0x100000000,uVar18,0x10,"%{public}s: err == (%d)",&local_4b8,0x12);
    }
    goto LAB_1002626b6;
  }
  local_4f0 = (long *)(**(code **)(*param_1 + 0x10))(param_1);
  if (local_4f0 == (long *)0x0) {
    uVar18 = FUN_1001cc310();
    cVar10 = _os_log_type_enabled(uVar18,0x10);
    if (cVar10 != '\0') {
      local_4b8._0_4_ = 0x8220202;
      local_4b8._4_4_ = 0x7a0a90;
      uStack_4b0 = 1;
      uStack_4ac = 0x822;
      uStack_4aa = 0x1013;
      uStack_4a8 = 0x7b;
      uStack_4a6 = 1;
      uStack_4a4 = 0;
      __os_log_error_impl(0x100000000,uVar18,0x10,"%{public}s: (%{public}s)",&local_4b8,0x16);
    }
    FUN_1001782e9(0,0);
    iVar12 = -0x32;
    goto LAB_1002626b6;
  }
  FUN_1001a7a9e(local_5a0,param_1 + 4);
  puVar15 = operator_new(0x4dd0,(nothrow_t *)PTR_nothrow_10082c970);
  if (puVar15 != (undefined8 *)0x0) {
    FUN_100220a12(puVar15);
    *puVar15 = &PTR_FUN_10083f210;
    FUN_10025c0da(puVar15 + 5);
    *(undefined1 *)((long)puVar15 + 0x4dce) = 0;
  }
  local_98._0_4_ = SUB84(puVar15,0);
  local_98._4_4_ = (undefined4)((ulong)puVar15 >> 0x20);
  plVar16 = operator_new(0x20);
  plVar16[1] = 0;
  plVar16[2] = 0;
  *plVar16 = (long)&PTR_FUN_10083f2c0;
  plVar16[3] = (long)puVar15;
  uStack_90 = SUB84(plVar16,0);
  uStack_8c = (undefined2)((ulong)plVar16 >> 0x20);
  uStack_8a = (undefined2)((ulong)plVar16 >> 0x30);
  if (puVar15 != (undefined8 *)0x0) {
    if (puVar15[2] == 0) {
      LOCK();
      plVar16[1] = plVar16[1] + 1;
      UNLOCK();
      LOCK();
      plVar16[2] = plVar16[2] + 1;
      UNLOCK();
      puVar15[1] = puVar15;
      puVar15[2] = plVar16;
    }
    else {
      if (*(long *)(puVar15[2] + 8) != -1) goto LAB_10025f2f1;
      LOCK();
      plVar16[1] = plVar16[1] + 1;
      UNLOCK();
      LOCK();
      plVar16[2] = plVar16[2] + 1;
      UNLOCK();
      puVar15[1] = puVar15;
      puVar15[2] = plVar16;
      std::__shared_weak_count::__release_weak();
    }
    plVar31 = plVar16 + 1;
    LOCK();
    lVar20 = *plVar31;
    *plVar31 = *plVar31 + -1;
    UNLOCK();
    if (lVar20 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
      std::__shared_weak_count::__release_weak();
    }
  }
LAB_10025f2f1:
  plVar16 = (long *)CONCAT44(local_98._4_4_,(undefined4)local_98);
  if (plVar16 == (long *)0x0) {
    uVar18 = FUN_1001cc310();
    cVar10 = _os_log_type_enabled(uVar18,0x10);
    if (cVar10 != '\0') {
      local_4b8._0_4_ = 0x8220202;
      local_4b8._4_4_ = 0x7a0a90;
      uStack_4b0 = 1;
      uStack_4ac = 0x822;
      uStack_4aa = 0xf62;
      uStack_4a8 = 0x7b;
      uStack_4a6 = 1;
      uStack_4a4 = 0;
      __os_log_error_impl(0x100000000,uVar18,0x10,"%{public}s: (%{public}s)",&local_4b8,0x16);
    }
    FUN_1001782e9(0,0);
LAB_10025f375:
    pplVar17 = &local_520;
  }
  else {
    FUN_1001a7a9e(&local_4b8,local_5a0);
    cVar10 = (**(code **)(*plVar16 + 0x18))(plVar16,&local_4b8);
    FUN_1001a8fac(&local_4b8);
    if (cVar10 == '\0') goto LAB_10025f375;
    pplVar17 = (long **)&local_98;
    local_518 = (long *)CONCAT26(uStack_8a,CONCAT24(uStack_8c,uStack_90));
    local_520 = plVar16;
  }
  *pplVar17 = (long *)0x0;
  pplVar17[1] = (long *)0x0;
  plVar16 = (long *)CONCAT26(uStack_8a,CONCAT24(uStack_8c,uStack_90));
  if (plVar16 != (long *)0x0) {
    LOCK();
    plVar31 = plVar16 + 1;
    lVar20 = *plVar31;
    *plVar31 = *plVar31 + -1;
    UNLOCK();
    if (lVar20 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
      std::__shared_weak_count::__release_weak();
    }
  }
  FUN_1001a8fac(local_5a0);
  plVar16 = local_520;
  if (local_520 == (long *)0x0) {
    uVar18 = FUN_1001cc310();
    cVar10 = _os_log_type_enabled(uVar18,0x10);
    if (cVar10 != '\0') {
      local_4b8._0_4_ = 0x8220202;
      local_4b8._4_4_ = 0x7a0a90;
      uStack_4b0 = 1;
      uStack_4ac = 0x822;
      uStack_4aa = 0x1028;
      uStack_4a8 = 0x7b;
      uStack_4a6 = 1;
      uStack_4a4 = 0;
      __os_log_error_impl(0x100000000,uVar18,0x10,"%{public}s: (%{public}s)",&local_4b8,0x16);
    }
    iVar12 = -0x32;
    FUN_1001782e9(0,0);
    goto LAB_100262687;
  }
  local_590 = local_4f0[0x376] & 0x1000000000000;
  local_b8 = (long *)CONCAT71(local_b8._1_7_,1);
  if (local_520[3] == 0) {
    uVar18 = FUN_1001cc310();
    cVar10 = _os_log_type_enabled(uVar18,0x10);
    if (cVar10 != '\0') {
      local_4b8._0_4_ = 0x8220202;
      local_4b8._4_4_ = 0x7a0a90;
      uStack_4b0 = 1;
      uStack_4ac = 0x822;
      uStack_4aa = 0xffe;
      uStack_4a8 = 0x7b;
      uStack_4a6 = 1;
      uStack_4a4 = 0;
      __os_log_error_impl(0x100000000,uVar18,0x10,"%{public}s: (%{public}s)",&local_4b8,0x16);
    }
    local_4f8 = (long *)((ulong)local_4f8._4_4_ << 0x20);
    FUN_1001782e9(0,0);
  }
  else {
    local_98._0_4_ = 0x877090;
    local_98._4_4_ = 1;
    FUN_1001a7b90(&local_4b8);
    FUN_1001a957a(plVar16 + 3,&local_4b8,&local_b8);
    uVar18 = FUN_1001ab240(&local_4b8);
    local_4f8 = (long *)CONCAT44(local_4f8._4_4_,
                                 (int)CONCAT71((int7)((ulong)uVar18 >> 8),local_b8._0_1_));
  }
  plVar31 = local_518;
  if (local_518 != (long *)0x0) {
    LOCK();
    local_518[1] = local_518[1] + 1;
    UNLOCK();
  }
  local_548 = param_1;
  if (*(char *)((long)plVar16 + 0x4dce) == '\0') {
    FUN_10025e6e0(plVar16);
  }
  lVar20 = plVar16[5];
  if (lVar20 == 0) {
    uVar18 = FUN_1001cc310();
    cVar10 = _os_log_type_enabled(uVar18,0x10);
    if (cVar10 != '\0') {
      local_4b8._0_4_ = 0x8220202;
      local_4b8._4_4_ = 0x7a0a90;
      uStack_4b0 = 1;
      uStack_4ac = 0x822;
      uStack_4aa = 0x591c;
      uStack_4a8 = 0x7b;
      uStack_4a6 = 1;
      uStack_4a4 = 0;
      __os_log_error_impl(0x100000000,uVar18,0x10,"%{public}s: (%{public}s)",&local_4b8,0x16);
    }
    FUN_1001782e9(0,0);
LAB_10025f54f:
    if ((char)local_4f8 == '\0') {
      local_4e8 = 0;
      local_4c0 = (long *)0x0;
    }
    else {
      uStack_498 = 0;
      local_490 = 0;
      local_488 = 0;
      local_4b8._0_4_ = 0;
      local_4b8._4_4_ = 0;
      uStack_4b0 = 0;
      uStack_4ac = 0;
      uStack_4aa = 0;
      uStack_4a8 = 0;
      uStack_4a6 = 0;
      local_4a0 = (undefined4)lVar20;
      uVar13 = local_4a0;
      uStack_49c = (undefined4)((ulong)lVar20 >> 0x20);
      uVar5 = uStack_49c;
      lVar20 = plVar16[8];
      if (lVar20 == 0) {
        lVar19 = plVar16[9];
        if (lVar19 != 0) {
LAB_10025f998:
          lVar20 = FUN_1004cfdd1(local_4f0,lVar19);
          goto LAB_10025faf0;
        }
      }
      else {
        if (lVar20 == -1) {
          lVar19 = FUN_100276e24(local_4f0);
        }
        else {
          lVar19 = FUN_1003a3354(local_4f0,lVar20);
        }
        local_4b8._0_4_ = (undefined4)lVar19;
        local_4b8._4_4_ = (undefined4)((ulong)lVar19 >> 0x20);
        if (lVar19 == 0) {
          (**(code **)(*local_548 + 0x30))(&local_98);
          plVar37 = (long *)CONCAT44(local_98._4_4_,(undefined4)local_98);
          if (plVar37 != (long *)0x0) {
            if (local_548[2] == 0) {
LAB_1002628d3:
                    /* WARNING: Subroutine does not return */
              FUN_10013bd04();
            }
            local_4c0 = (long *)local_548[1];
            local_b0 = (long *)std::__shared_weak_count::lock();
            if (local_b0 == (long *)0x0) goto LAB_1002628d3;
            local_b8 = local_4c0;
            uVar18 = (**(code **)(*plVar37 + 0x10))(plVar37,&local_b8,lVar20);
            local_4b8._0_4_ = (undefined4)uVar18;
            local_4b8._4_4_ = (undefined4)((ulong)uVar18 >> 0x20);
            if (local_b0 != (long *)0x0) {
              LOCK();
              plVar37 = local_b0 + 1;
              lVar19 = *plVar37;
              *plVar37 = *plVar37 + -1;
              UNLOCK();
              if (lVar19 == 0) {
                (**(code **)(*local_b0 + 0x10))(local_b0);
                std::__shared_weak_count::__release_weak();
              }
            }
          }
          plVar37 = (long *)CONCAT26(uStack_8a,CONCAT24(uStack_8c,uStack_90));
          if (plVar37 != (long *)0x0) {
            LOCK();
            plVar36 = plVar37 + 1;
            lVar19 = *plVar36;
            *plVar36 = *plVar36 + -1;
            UNLOCK();
            if (lVar19 == 0) {
              (**(code **)(*plVar37 + 0x10))(plVar37);
              std::__shared_weak_count::__release_weak();
            }
          }
        }
        lVar19 = plVar16[9];
        if (lVar19 != 0) {
          if (lVar20 != -1) goto LAB_10025f998;
          lVar20 = FUN_1004d0068(local_4f0);
LAB_10025faf0:
          uStack_4b0 = (undefined4)lVar20;
          uStack_4ac = (undefined2)((ulong)lVar20 >> 0x20);
          uStack_4aa = (undefined2)((ulong)lVar20 >> 0x30);
          if (lVar20 == 0) {
            (**(code **)(*local_548 + 0x30))(&local_98);
            plVar37 = (long *)CONCAT44(local_98._4_4_,(undefined4)local_98);
            if (plVar37 != (long *)0x0) {
              if (local_548[2] == 0) {
LAB_1002628da:
                    /* WARNING: Subroutine does not return */
                FUN_10013bd04();
              }
              local_4c0 = (long *)local_548[1];
              local_d0 = (long *)std::__shared_weak_count::lock();
              if (local_d0 == (long *)0x0) goto LAB_1002628da;
              local_d8 = local_4c0;
              uVar18 = (**(code **)(*plVar37 + 0x18))(plVar37,&local_d8,lVar19);
              uStack_4b0 = (undefined4)uVar18;
              uStack_4ac = (undefined2)((ulong)uVar18 >> 0x20);
              uStack_4aa = (undefined2)((ulong)uVar18 >> 0x30);
              if (local_d0 != (long *)0x0) {
                LOCK();
                plVar37 = local_d0 + 1;
                lVar20 = *plVar37;
                *plVar37 = *plVar37 + -1;
                UNLOCK();
                if (lVar20 == 0) {
                  (**(code **)(*local_d0 + 0x10))(local_d0);
                  std::__shared_weak_count::__release_weak();
                }
              }
            }
            plVar37 = (long *)CONCAT26(uStack_8a,CONCAT24(uStack_8c,uStack_90));
            if (plVar37 != (long *)0x0) {
              LOCK();
              plVar36 = plVar37 + 1;
              lVar20 = *plVar36;
              *plVar36 = *plVar36 + -1;
              UNLOCK();
              if (lVar20 == 0) {
                (**(code **)(*plVar37 + 0x10))(plVar37);
                std::__shared_weak_count::__release_weak();
              }
            }
          }
        }
      }
      local_4f0[0x376] = local_4f0[0x376] | 0x1000000000000;
      local_4c0 = (long *)FUN_100472d20(local_4f0,(char)plVar16[6],&local_4b8);
      local_4e8 = CONCAT71((int7)((ulong)local_4c0 >> 8),local_4c0 != (long *)0x0);
      if (local_4c0 == (long *)0x0) {
        if (DAT_1008c7660 != -1) {
          _dispatch_once(&DAT_1008c7660,&PTR___NSConcreteGlobalBlock_1008575c0);
        }
        plVar16 = DAT_1008c7658;
        cVar10 = _os_log_type_enabled(DAT_1008c7658,0x10);
        if (cVar10 != '\0') {
          local_98._0_4_ = 0x8000100;
          local_98._4_4_ = uVar13;
          uStack_90 = uVar5;
          __os_log_impl(0x100000000,plVar16,0x10,"ch> **ERROR** nil from NewTrackInfo %16.16llx",
                        &local_98,0xc);
        }
      }
    }
  }
  else {
    local_4c0 = (long *)FUN_100300729(local_4f0,lVar20);
    if (local_4c0 == (long *)0x0) goto LAB_10025f54f;
    lVar20 = local_4c0[2];
    if (plVar16[8] != 0) {
      if (plVar16[8] == -1) {
        lVar19 = FUN_100276e24(lVar20);
      }
      else {
        lVar19 = FUN_1003a3354(lVar20);
      }
      if ((lVar19 != 0) && (lVar24 = local_4c0[5], lVar19 != lVar24)) {
        if (DAT_1008c7660 != -1) {
          _dispatch_once(&DAT_1008c7660,&PTR___NSConcreteGlobalBlock_1008575c0);
        }
        local_500 = DAT_1008c7658;
        cVar10 = _os_log_type_enabled(DAT_1008c7658,1);
        if (cVar10 != '\0') {
          local_540 = (long *)*local_4c0;
          FUN_100476ac1(&local_b8);
          local_4e8 = FUN_1001b83ae(&local_b8);
          local_588 = *(long **)(lVar24 + 0x20);
          FUN_1001de8ee(lVar24 + 0xb8,&local_4b8);
          FUN_1001b8dfc(&local_d8,&local_4b8);
          local_580 = FUN_1001b83ae(&local_d8);
          uVar18 = *(undefined8 *)(lVar19 + 0x20);
          FUN_1001de8ee(lVar19 + 0xb8,&local_4b8);
          FUN_1001b8dfc(&local_58,&local_4b8);
          local_62 = FUN_1001b83ae(&local_58);
          local_98._0_4_ = 0x8000602;
          local_98._4_4_ = SUB84(local_540,0);
          uStack_90 = (undefined4)((ulong)local_540 >> 0x20);
          uStack_8c = 0x822;
          uStack_8a = (undefined2)local_4e8;
          uStack_88 = (undefined2)((ulong)local_4e8 >> 0x10);
          uStack_86 = (undefined4)((ulong)local_4e8 >> 0x20);
          uStack_82 = 0x800;
          local_80 = local_588;
          local_78 = 0x820;
          local_76 = local_580;
          local_6e = 0x800;
          local_64 = 0x822;
          local_6c = uVar18;
          __os_log_impl(0x100000000,local_500,1,
                        "ch> Moving track %16.16llx (\'%{public}s\') from album %16.16llx (\'%s\') to %16.16llx (\'%{public}s\')"
                        ,&local_98,0x3e);
          FUN_1001b7a50(&local_58);
          FUN_1001b7a50(&local_d8);
          FUN_1001b7a50(&local_b8);
        }
        FUN_1003a371d(local_4c0,lVar19);
      }
    }
    if (plVar16[9] != 0) {
      if (plVar16[9] == -1) {
        lVar20 = FUN_1004d0068(lVar20);
      }
      else {
        lVar20 = FUN_1004cfdd1(lVar20);
      }
      if ((lVar20 != 0) && (lVar19 = local_4c0[8], lVar19 != 0 && lVar20 != lVar19)) {
        if (DAT_1008c7660 != -1) {
          _dispatch_once(&DAT_1008c7660,&PTR___NSConcreteGlobalBlock_1008575c0);
        }
        plVar16 = DAT_1008c7658;
        cVar10 = _os_log_type_enabled(DAT_1008c7658,1);
        if (cVar10 != '\0') {
          lVar24 = *local_4c0;
          FUN_100476ac1(&local_b8);
          local_500 = (long *)FUN_1001b83ae(&local_b8);
          local_540 = *(long **)(lVar19 + 0x18);
          FUN_1005e4722(lVar19,0,&local_4b8);
          FUN_1001b8dfc(&local_d8,&local_4b8);
          local_4e8 = FUN_1001b83ae(&local_d8);
          uVar18 = *(undefined8 *)(lVar20 + 0x18);
          FUN_1005e4722(lVar20,0,&local_4b8);
          FUN_1001b8dfc(&local_58,&local_4b8);
          local_62 = FUN_1001b83ae(&local_58);
          local_98._0_4_ = 0x8000602;
          local_98._4_4_ = (undefined4)lVar24;
          uStack_90 = (undefined4)((ulong)lVar24 >> 0x20);
          uStack_8c = 0x820;
          uStack_8a = SUB82(local_500,0);
          uStack_88 = (undefined2)((ulong)local_500 >> 0x10);
          uStack_86 = (undefined4)((ulong)local_500 >> 0x20);
          uStack_82 = 0x800;
          local_80 = local_540;
          local_78 = 0x820;
          local_76 = local_4e8;
          local_6e = 0x800;
          local_64 = 0x820;
          local_6c = uVar18;
          __os_log_impl(0x100000000,plVar16,1,
                        "ch> Moving track %16.16llx (\'%s\') from artist %16.16llx (\'%s\') to %16.16llx (\'%s\')"
                        ,&local_98,0x3e);
          FUN_1001b7a50(&local_58);
          FUN_1001b7a50(&local_d8);
          FUN_1001b7a50(&local_b8);
        }
        FUN_1005e565a(lVar20,local_4c0);
      }
    }
    local_4e8 = 0;
  }
  if (plVar31 != (long *)0x0) {
    LOCK();
    plVar16 = plVar31 + 1;
    lVar20 = *plVar16;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (lVar20 == 0) {
      (**(code **)(*plVar31 + 0x10))(plVar31);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar16 = local_520;
  if (local_4c0 == (long *)0x0) {
    if (*(char *)((long)local_520 + 0x4dce) == '\0') {
      FUN_10025e6e0(local_520);
    }
    uVar6 = uStack_4b0;
    uVar13 = local_4b8._4_4_;
    lVar20 = plVar16[5];
    uStack_4b0 = (undefined4)((ulong)lVar20 >> 0x20);
    uVar7 = uStack_4b0;
    local_4b8._4_4_ = (undefined4)lVar20;
    uVar5 = local_4b8._4_4_;
    local_4b8._4_4_ = uVar13;
    uStack_4b0 = uVar6;
    if ((char)local_4f8 == '\0') {
      for (plVar16 = (long *)FUN_1002f930c(local_4f0); plVar16 != (long *)0x0;
          plVar16 = (long *)FUN_1002f9451(plVar16)) {
        if (*plVar16 == lVar20) {
          local_4c0 = plVar16;
          if (DAT_1008c7660 != -1) {
            _dispatch_once(&DAT_1008c7660,&PTR___NSConcreteGlobalBlock_1008575c0);
          }
          plVar16 = DAT_1008c7658;
          cVar10 = _os_log_type_enabled(DAT_1008c7658,0x10);
          if (cVar10 != '\0') {
            local_4b8._0_4_ = 0x8000202;
            uStack_4ac = 0x820;
            uStack_4aa = 0x1b00;
            uStack_4a8 = 0x7a;
            uStack_4a6 = 1;
            uStack_4a4 = 0;
            local_4b8._4_4_ = uVar5;
            uStack_4b0 = uVar7;
            __os_log_impl(0x100000000,plVar16,0x10,"ch> found track w/o map! %16.16llx \'%s\'",
                          &local_4b8,0x16);
          }
          goto LAB_10025fbcf;
        }
      }
      if (DAT_1008c7660 != -1) {
        _dispatch_once(&DAT_1008c7660,&PTR___NSConcreteGlobalBlock_1008575c0);
      }
      plVar16 = DAT_1008c7658;
      cVar10 = _os_log_type_enabled(DAT_1008c7658,0x10);
      iVar12 = 0x234f;
      if (cVar10 != '\0') {
        pcVar27 = 
        "ch> Skipped creating TRACK: %16.16llx as the change is not for a new track and it does NOT exist!"
        ;
        goto LAB_100262248;
      }
    }
    else {
      if (DAT_1008c7660 != -1) {
        _dispatch_once(&DAT_1008c7660,&PTR___NSConcreteGlobalBlock_1008575c0);
      }
      plVar16 = DAT_1008c7658;
      cVar10 = _os_log_type_enabled(DAT_1008c7658,0x10);
      iVar12 = 0x234f;
      if (cVar10 != '\0') {
        pcVar27 = "ch> Failed to create TRACK: %16.16llx!";
LAB_100262248:
        local_4b8._0_4_ = 0x8000100;
        iVar12 = 0x234f;
        local_4b8._4_4_ = uVar5;
        uStack_4b0 = uVar7;
        __os_log_impl(0x100000000,plVar16,0x10,pcVar27,&local_4b8,0xc);
      }
    }
  }
  else {
LAB_10025fbcf:
    uVar18 = FUN_1003c5880();
    cVar10 = _os_log_type_enabled(uVar18,1);
    if ((char)local_4e8 == '\0') {
      if (cVar10 != '\0') {
        lVar20 = *local_4c0;
        FUN_100476ac1(&local_98);
        uVar21 = FUN_1001b83ae(&local_98);
        local_4b8._4_4_ = (undefined4)lVar20;
        uStack_4b0 = (undefined4)((ulong)lVar20 >> 0x20);
        uStack_4aa = (undefined2)uVar21;
        uStack_4a8 = (undefined2)((ulong)uVar21 >> 0x10);
        uStack_4a6 = (undefined2)((ulong)uVar21 >> 0x20);
        uStack_4a4 = (undefined2)((ulong)uVar21 >> 0x30);
        pcVar27 = "ch> TRACK: %16.16llx \'%s\'";
        goto LAB_10025fd19;
      }
    }
    else if (cVar10 != '\0') {
      lVar20 = *local_4c0;
      FUN_100476ac1(&local_98);
      uVar21 = FUN_1001b83ae(&local_98);
      local_4b8._4_4_ = (undefined4)lVar20;
      uStack_4b0 = (undefined4)((ulong)lVar20 >> 0x20);
      uStack_4aa = (undefined2)uVar21;
      uStack_4a8 = (undefined2)((ulong)uVar21 >> 0x10);
      uStack_4a6 = (undefined2)((ulong)uVar21 >> 0x20);
      uStack_4a4 = (undefined2)((ulong)uVar21 >> 0x30);
      pcVar27 = "ch> TRACK: (new) %16.16llx \'%s\'";
LAB_10025fd19:
      uStack_4ac = 0x820;
      local_4b8._0_4_ = 0x8000202;
      __os_log_impl(0x100000000,uVar18,1,pcVar27,&local_4b8,0x16);
      FUN_1001b7a50(&local_98);
    }
    FUN_1001c62d9(&local_d8,0x20);
    plVar16 = local_520;
    local_538 = (long *)0x0;
    plStack_530 = (long *)0x0;
    local_528 = (long *)0x0;
    local_4d8 = &cf_instances;
    FUN_1001a7b90(&local_510);
    FUN_10032f0f2(&local_58);
    FUN_10032f0f2(&local_4b8);
    cVar10 = FUN_1001a90d0(plVar16 + 3,&local_510,&local_4b8);
    puVar15 = &local_58;
    if (cVar10 != '\0') {
      puVar15 = &local_4b8;
    }
    FUN_1001a7a9e(&local_98,puVar15);
    FUN_1001a7a94(&local_4b8);
    FUN_1001a7a94(&local_58);
    FUN_1001ab240(&local_510);
    if (CONCAT44(local_98._4_4_,(undefined4)local_98) == 0) {
      FUN_1001a7a94(&local_98);
    }
    else {
      plVar16 = (long *)FUN_1001a7bfa(&local_98);
      FUN_1001a7a94(&local_98);
      if (0 < (long)plVar16) {
        local_540 = local_4c0 + 0xb;
        local_4f8 = (long *)0x0;
        local_500 = plVar16;
        do {
          FUN_10025c3d0(&local_4b8);
          plVar16 = local_520;
          local_510 = &cf_instances;
          FUN_1001a7b90(&local_58,&local_510);
          local_578 = (cfstringStruct *)0x0;
          uStack_570 = 0;
          FUN_10032f0f2(&local_578);
          FUN_10032f0f2(&local_98);
          cVar10 = FUN_10026326c(plVar16 + 3,&local_58,&local_98);
          ppcVar32 = &local_578;
          if (cVar10 != '\0') {
            ppcVar32 = (cfstringStruct **)&local_98;
          }
          FUN_1001a7a9e(&local_568,ppcVar32);
          FUN_1001a7a94(&local_98);
          FUN_1001a7a94(&local_578);
          FUN_1001ab240(&local_58);
          if (local_568 != (cfstringStruct *)0x0) {
            FUN_10025ee76(local_558,&local_568,local_4f8);
            if (local_558[0] == 0) {
              uVar18 = FUN_1001cc310();
              cVar10 = _os_log_type_enabled(uVar18,0x10);
              if (cVar10 != '\0') {
                local_98._0_4_ = 0x8220202;
                local_98._4_4_ = 0x7a0a90;
                uStack_90 = 1;
                uStack_8c = 0x822;
                uStack_8a = 0x58e8;
                uStack_88 = 0x7b;
                uStack_86 = 1;
                __os_log_error_impl(0x100000000,uVar18,0x10,"%{public}s: (%{public}s)",&local_98,
                                    0x16);
              }
              FUN_1001782e9(0,0);
            }
            else {
              local_4e0 = &cf_create;
              FUN_1001a7b90(&local_4d8,&local_4e0);
              FUN_10032f0f2(&local_510);
              FUN_10032f0f2(&local_98);
              cVar10 = FUN_1001a92ae(local_558,&local_4d8,&local_98);
              ppcVar32 = &local_510;
              if (cVar10 != '\0') {
                ppcVar32 = (cfstringStruct **)&local_98;
              }
              FUN_1001a7a9e(&local_58,ppcVar32);
              FUN_1001a85d4(&local_98);
              FUN_1001a85d4(&local_510);
              FUN_1001ab240(&local_4d8);
              if (CONCAT44(local_58._4_4_,(undefined4)local_58) != 0) {
                uVar22 = FUN_1001a8610(&local_58);
                uVar18 = 0x34;
                if (uVar22 < 0x35) {
                  uVar18 = FUN_1001a8610(&local_58);
                }
                uVar21 = FUN_1001a8626(&local_58);
                FUN_1001c631b(uVar21,&local_4b8,uVar18);
              }
              FUN_1001a85d4(&local_58);
              local_4e0 = &cf_fixed;
              FUN_1001a7b90(&local_4d8,&local_4e0);
              FUN_10032f0f2(&local_510);
              FUN_10032f0f2(&local_98);
              cVar10 = FUN_1001a92ae(local_558,&local_4d8,&local_98);
              ppcVar32 = &local_510;
              if (cVar10 != '\0') {
                ppcVar32 = (cfstringStruct **)&local_98;
              }
              FUN_1001a7a9e(&local_58,ppcVar32);
              FUN_1001a85d4(&local_98);
              FUN_1001a85d4(&local_510);
              FUN_1001ab240(&local_4d8);
              if (CONCAT44(local_58._4_4_,(undefined4)local_58) != 0) {
                uVar22 = FUN_1001a8610(&local_58);
                uVar18 = 0x34a;
                if (uVar22 < 0x34b) {
                  uVar18 = FUN_1001a8610(&local_58);
                }
                uVar21 = FUN_1001a8626(&local_58);
                FUN_1001c631b(uVar21,&local_484,uVar18);
              }
              FUN_1001a85d4(&local_58);
              FUN_10032f0f2(&local_98);
              FUN_1001b7a44(&local_58);
              FUN_10032f0f2(&local_510);
              local_5a8 = &cf_validFields;
              FUN_1001a7b90(&local_4e0,&local_5a8);
              cVar10 = FUN_1001a9810(local_558,&local_4e0,&local_4d8);
              local_13a = 0;
              if (cVar10 != '\0') {
                local_13a = (uint)local_4d8;
              }
              FUN_1001ab240(&local_4e0);
              local_4e0 = &cf_bookmarkURL;
              FUN_1001a7b90(&local_4d8,&local_4e0);
              cVar10 = FUN_1001a92ae(local_558,&local_4d8,&local_98);
              FUN_1001ab240(&local_4d8);
              if (cVar10 != '\0') {
                FUN_1001a7ad8(local_116,&local_98);
                local_13a = local_13a | 1;
              }
              local_4e0 = &cf_url;
              FUN_1001a7b90(&local_4d8,&local_4e0);
              cVar10 = FUN_1001a944e(local_558,&local_4d8,&local_58);
              FUN_1001ab240(&local_4d8);
              if (cVar10 != '\0') {
                FUN_1001b8172(local_136,&local_58);
                local_13a = local_13a | 2;
              }
              local_4e0 = &cf_dataDict;
              FUN_1001a7b90(&local_4d8,&local_4e0);
              cVar10 = FUN_1001a9164(local_558,&local_4d8,&local_510);
              FUN_1001ab240(&local_4d8);
              if (cVar10 != '\0') {
                FUN_1001a7ad8(local_126,&local_510);
                local_13a = local_13a | 4;
              }
              local_4e0 = &cf_chapterData;
              FUN_1001a7b90(&local_4d8,&local_4e0);
              cVar10 = FUN_1001a92ae(local_558,&local_4d8,&local_98);
              FUN_1001ab240(&local_4d8);
              if (cVar10 != '\0') {
                uVar13 = FUN_1001a8610(&local_98);
                uVar18 = FUN_1001a8626(&local_98);
                FUN_10045710c(&local_4d8,uVar13,uVar18);
                local_106 = (undefined4)local_4d8;
                uStack_102 = local_4d8._4_4_;
                uVar13 = (undefined4)uStack_4d0;
                uVar5 = uStack_4d0._4_4_;
                local_4d8 = (cfstringStruct *)0x0;
                uStack_4d0 = (long *)0x0;
                plVar16 = (long *)CONCAT44(uStack_fa,uStack_fe);
                uStack_fe = uVar13;
                uStack_fa = uVar5;
                if (plVar16 != (long *)0x0) {
                  LOCK();
                  plVar31 = plVar16 + 1;
                  lVar20 = *plVar31;
                  *plVar31 = *plVar31 + -1;
                  UNLOCK();
                  if (lVar20 == 0) {
                    (**(code **)(*plVar16 + 0x10))(plVar16);
                    std::__shared_weak_count::__release_weak();
                  }
                }
                if (uStack_4d0 != (long *)0x0) {
                  LOCK();
                  plVar16 = uStack_4d0 + 1;
                  lVar20 = *plVar16;
                  *plVar16 = *plVar16 + -1;
                  UNLOCK();
                  if (lVar20 == 0) {
                    (**(code **)(*uStack_4d0 + 0x10))(uStack_4d0);
                    std::__shared_weak_count::__release_weak();
                  }
                }
                local_13a = local_13a | 8;
              }
              local_4e0 = &cf_bookInfo;
              FUN_1001a7b90(&local_4d8,&local_4e0);
              cVar10 = FUN_1001a9164(local_558,&local_4d8,&local_510);
              FUN_1001ab240(&local_4d8);
              if (cVar10 != '\0') {
                FUN_1001a7ad8(local_f6,&local_510);
                local_13a = local_13a | 0x20;
              }
              FUN_1001a8fac(&local_510);
              FUN_1001b7a50(&local_58);
              FUN_1001a85d4(&local_98);
            }
            FUN_1001a8fac(local_558);
          }
          FUN_1001a7a94(&local_568);
          uVar5 = local_4b8._4_4_;
          uVar13 = (undefined4)local_4b8;
          lVar20 = CONCAT44(local_4b8._4_4_,(undefined4)local_4b8);
          plVar16 = local_540;
          if (lVar20 != 0) {
            do {
              plVar16 = (long *)*plVar16;
              if (plVar16 == (long *)0x0) {
                plVar16 = (long *)FUN_1002b390d(local_4f0,lVar20);
                if (plVar16 == (long *)0x0) goto LAB_1002603d2;
                FUN_1004808be(plVar16,local_4c0);
                break;
              }
            } while (plVar16[5] != lVar20);
            goto LAB_100260774;
          }
LAB_1002603d2:
          uVar9 = uStack_4a2;
          uVar8 = uStack_4a4;
          iVar12 = CONCAT22(uStack_4a2,uStack_4a4);
          plVar16 = (long *)FUN_1002ae502(local_4c0,iVar12,local_4a0,lVar20);
          if (plVar16 == (long *)0x0) {
            if (DAT_1008c7660 != -1) {
              _dispatch_once(&DAT_1008c7660,&PTR___NSConcreteGlobalBlock_1008575c0);
            }
            plVar16 = DAT_1008c7658;
            cVar10 = _os_log_type_enabled(DAT_1008c7658,0x10);
            if (cVar10 != '\0') {
              pcVar27 = "ch> **ERROR** nil from NewTrackInstance %16.16llx";
LAB_1002604d5:
              local_98._0_4_ = 0x8000100;
              uVar18 = 0x10;
              uVar21 = 0xc;
LAB_100260696:
              uStack_90 = uVar5;
              local_98._4_4_ = uVar13;
              __os_log_impl(0x100000000,plVar16,uVar18,pcVar27,&local_98,uVar21);
            }
            goto LAB_10026069b;
          }
          if (iVar12 == 0x53485244) {
            plVar16[0x13] = CONCAT44(uStack_498,uStack_49c);
            *(undefined4 *)(plVar16 + 0x15) = local_494;
            plVar16[0x16] = local_490;
            *(undefined1 *)((long)plVar16 + 0xac) = local_488;
            *(undefined1 *)((long)plVar16 + 0xad) = local_487;
            uVar18 = FUN_1003c5880();
            cVar10 = _os_log_type_enabled(uVar18,1);
            if (cVar10 != '\0') {
              local_98._0_4_ = 0x8000100;
              local_98._4_4_ = (undefined4)plVar16[5];
              uStack_90 = (undefined4)((ulong)plVar16[5] >> 0x20);
              __os_log_impl(0x100000000,uVar18,1,"ch>    new INSTANCE: %llx (remote)",&local_98,0xc)
              ;
            }
LAB_100260774:
            plVar31 = local_518;
            if (local_518 != (long *)0x0) {
              LOCK();
              local_518[1] = local_518[1] + 1;
              UNLOCK();
            }
            (**(code **)(*local_548 + 0x30))(&local_4d8);
            FUN_1001c62d9(&local_b8,0x20);
            plVar37 = uStack_4d0;
            pcVar1 = local_4d8;
            local_568 = local_4d8;
            local_560 = uStack_4d0;
            if (uStack_4d0 != (long *)0x0) {
              LOCK();
              uStack_4d0[1] = uStack_4d0[1] + 1;
              UNLOCK();
            }
            FUN_1001c62d9(&local_98,0x20);
            local_510 = pcVar1;
            local_508 = plVar37;
            if (plVar37 != (long *)0x0) {
              LOCK();
              plVar37[1] = plVar37[1] + 1;
              UNLOCK();
            }
            if (local_484 != 0) {
              if ((local_484 & 4) != 0) {
                if (*(char *)((long)plVar16 + 0x4d) != local_47f) {
                  *(char *)((long)plVar16 + 0x4d) = local_47f;
                }
                if (*(char *)((long)plVar16 + 0x47) != local_47c) {
                  *(char *)((long)plVar16 + 0x47) = local_47c;
                }
                if (*(char *)((long)plVar16 + 0x46) != local_47b) {
                  *(char *)((long)plVar16 + 0x46) = local_47b;
                }
                uVar14 = *(uint *)(plVar16 + 9);
                if ((uVar14 >> 1 & 1) != (local_47e & 1)) {
                  uVar14 = (uVar14 & 0xfffffffd) + (local_47e & 1) * 2;
                  *(uint *)(plVar16 + 9) = uVar14;
                }
                if (*(char *)((long)plVar16 + 0x45) == '\x01') {
                  if ((local_47e & 2) == 0) {
                    uVar28 = 0;
                    goto LAB_100260883;
                  }
                }
                else if ((*(char *)((long)plVar16 + 0x45) == '\0') &&
                        (uVar28 = 1, (local_47e & 2) != 0)) {
LAB_100260883:
                  *(undefined1 *)((long)plVar16 + 0x45) = uVar28;
                }
                uVar30 = local_47e >> 2 & 1;
                if ((uVar14 >> 10 & 1) != uVar30) {
                  uVar14 = uVar14 & 0xfffffbff | uVar30 << 10;
                  *(uint *)(plVar16 + 9) = uVar14;
                }
                uVar30 = local_47e >> 3 & 1;
                if ((uVar14 >> 7 & 1) != uVar30) {
                  uVar14 = uVar14 & 0xffffff7f | uVar30 << 7;
                  *(uint *)(plVar16 + 9) = uVar14;
                }
                uVar30 = local_47e >> 4 & 1;
                if ((uVar14 >> 3 & 1) != uVar30) {
                  uVar14 = (uVar14 & 0xfffffff7) + uVar30 * 8;
                  *(uint *)(plVar16 + 9) = uVar14;
                }
                uVar30 = local_47e >> 5 & 1;
                if ((uVar14 >> 0x13 & 1) != uVar30) {
                  uVar14 = uVar14 & 0xfff7ffff | uVar30 << 0x13;
                  *(uint *)(plVar16 + 9) = uVar14;
                }
                uVar30 = local_47e >> 6 & 1;
                if ((uVar14 >> 0x14 & 1) != uVar30) {
                  uVar14 = uVar14 & 0xffefffff | uVar30 << 0x14;
                  *(uint *)(plVar16 + 9) = uVar14;
                }
                uVar30 = local_47e >> 7 & 1;
                if ((uVar14 >> 0x15 & 1) != uVar30) {
                  uVar14 = uVar14 & 0xffdfffff | uVar30 << 0x15;
                  *(uint *)(plVar16 + 9) = uVar14;
                }
                uVar30 = local_47e >> 8 & 1;
                if ((uVar14 >> 0x16 & 1) != uVar30) {
                  uVar14 = uVar14 & 0xffbfffff | uVar30 << 0x16;
                  *(uint *)(plVar16 + 9) = uVar14;
                }
                uVar30 = local_47e >> 9 & 1;
                if ((uVar14 >> 0x17 & 1) != uVar30) {
                  uVar14 = uVar14 & 0xff7fffff | uVar30 << 0x17;
                  *(uint *)(plVar16 + 9) = uVar14;
                }
                uVar30 = local_47e >> 10 & 1;
                if ((uVar14 >> 0x12 & 1) != uVar30) {
                  *(uint *)(plVar16 + 9) = uVar14 & 0xfffbffff | uVar30 << 0x12;
                }
                if ((int)plVar16[8] != local_47a) {
                  *(int *)(plVar16 + 8) = local_47a;
                }
                if (*(int *)((long)plVar16 + 0x3c) == 0x46494c45) {
                  if (*(int *)((long)plVar16 + 0xa4) != local_476) {
                    *(int *)((long)plVar16 + 0xa4) = local_476;
                  }
                  if ((short)plVar16[0x15] != local_472) {
                    *(short *)(plVar16 + 0x15) = local_472;
                  }
                  if (*(short *)((long)plVar16 + 0xaa) != local_470) {
                    *(short *)((long)plVar16 + 0xaa) = local_470;
                  }
                }
                if (plVar16[0x19] != local_46e) {
                  plVar16[0x19] = local_46e;
                }
                if ((*(int *)((long)plVar16 + 0x34) != local_466) &&
                   (*(int *)((long)plVar16 + 0x34) = local_466,
                   pcVar1 != (cfstringStruct *)0x0 && local_466 != 0)) {
                  (**(code **)(pcVar1->field0_0x0 + 0x20))(pcVar1);
                }
                if (*(int *)((long)plVar16 + 100) != local_462) {
                  *(int *)((long)plVar16 + 100) = local_462;
                }
                if (plVar16[0xd] != local_45e) {
                  plVar16[0xd] = local_45e;
                }
                if ((int)plVar16[0xe] != local_456) {
                  *(int *)(plVar16 + 0xe) = local_456;
                }
                if (*(short *)((long)plVar16 + 0x54) != local_452) {
                  *(short *)((long)plVar16 + 0x54) = local_452;
                }
                if (*(short *)((long)plVar16 + 0x56) != local_450) {
                  *(short *)((long)plVar16 + 0x56) = local_450;
                }
                if ((*(float *)(plVar16 + 10) != local_44e) ||
                   (NAN(*(float *)(plVar16 + 10)) || NAN(local_44e))) {
                  *(float *)(plVar16 + 10) = local_44e;
                }
                if ((short)plVar16[0xb] != local_44a) {
                  *(short *)(plVar16 + 0xb) = local_44a;
                }
                if (*(short *)((long)plVar16 + 0x5a) != local_448) {
                  *(short *)((long)plVar16 + 0x5a) = local_448;
                }
                if (*(int *)((long)plVar16 + 0x7c) != local_446) {
                  *(int *)((long)plVar16 + 0x7c) = local_446;
                }
                if ((int)plVar16[0x1c] != local_442) {
                  *(int *)(plVar16 + 0x1c) = local_442;
                }
                if (*(int *)((long)plVar16 + 0xe4) != local_43e) {
                  *(int *)((long)plVar16 + 0xe4) = local_43e;
                }
                if ((int)plVar16[0x1d] != local_43a) {
                  *(int *)(plVar16 + 0x1d) = local_43a;
                }
                if (plVar16[0x1a] != local_436) {
                  plVar16[0x1a] = local_436;
                }
                if (plVar16[0x1b] != local_42e) {
                  plVar16[0x1b] = local_42e;
                }
                if (*(short *)((long)plVar16 + 0xec) != local_13e) {
                  *(short *)((long)plVar16 + 0xec) = local_13e;
                }
              }
              if ((local_484 & 1) != 0) {
                if ((local_426[0] & 1) == 0) {
                  if ((*(byte *)plVar16[3] & 1) != 0) {
                    _memcpy((byte *)plVar16[3],local_426,0x240);
                    *(byte *)plVar16[3] = *(byte *)plVar16[3] | 1;
                  }
                }
                else {
                  FUN_1002af503(plVar16);
                  if ((local_426[0] & 1) != 0) {
                    pbVar33 = (byte *)plVar16[3];
                    bVar11 = *pbVar33;
                    if ((bVar11 & 1) != 0) {
                      bVar29 = local_426[0] >> 1 & 1;
                      if ((bVar11 >> 1 & 1) != bVar29) {
                        bVar11 = bVar11 & 0xfd | bVar29 * '\x02';
                        *pbVar33 = bVar11;
                      }
                      bVar29 = local_426[0] >> 2 & 1;
                      if ((bVar11 >> 2 & 1) != bVar29) {
                        bVar11 = bVar11 & 0xfb | bVar29 << 2;
                        *pbVar33 = bVar11;
                      }
                      bVar29 = local_426[0] >> 3 & 1;
                      if ((bVar11 >> 3 & 1) != bVar29) {
                        bVar11 = bVar11 & 0xf7 | bVar29 << 3;
                        *pbVar33 = bVar11;
                      }
                      bVar29 = local_426[0] >> 4 & 1;
                      if ((bVar11 >> 4 & 1) != bVar29) {
                        *pbVar33 = bVar11 & 0xef | bVar29 << 4;
                      }
                      if (*(short *)(pbVar33 + 2) != local_424) {
                        *(short *)(pbVar33 + 2) = local_424;
                      }
                      if (*(short *)(pbVar33 + 4) != local_422) {
                        *(short *)(pbVar33 + 4) = local_422;
                      }
                      cVar10 = FUN_1001c5630(pbVar33 + 8,local_41e,0x238);
                      if (cVar10 == '\0') {
                        _memcpy(pbVar33 + 8,local_41e,0x238);
                      }
                    }
                  }
                }
              }
              if ((local_484 & 2) != 0) {
                pbVar33 = (byte *)plVar16[4];
                if ((local_1e6 & 1) == 0) {
                  if ((*pbVar33 & 1) != 0) {
                    FUN_1002af85d(plVar16,local_1c6);
                    puVar15 = (undefined8 *)plVar16[4];
                    puVar15[4] = local_1c6;
                    puVar15[5] = uStack_1be;
                    *(undefined4 *)(puVar15 + 2) = local_1d6;
                    *(undefined4 *)((long)puVar15 + 0x14) = uStack_1d2;
                    *(undefined4 *)(puVar15 + 3) = uStack_1ce;
                    *(undefined4 *)((long)puVar15 + 0x1c) = uStack_1ca;
                    *puVar15 = CONCAT71(uStack_1e5,local_1e6);
                    puVar15[1] = uStack_1de;
                    *(byte *)plVar16[4] = *(byte *)plVar16[4] | 1;
                  }
                }
                else {
                  if ((*pbVar33 & 1) == 0) {
                    FUN_1002af688(plVar16);
                    pbVar33 = (byte *)plVar16[4];
                  }
                  cVar10 = FUN_1001c5630(&local_1e6,pbVar33,8);
                  if (cVar10 == '\0') {
                    FUN_1002af85d(plVar16,local_1c6);
                    puVar15 = (undefined8 *)plVar16[4];
                    puVar15[4] = local_1c6;
                    puVar15[5] = uStack_1be;
                    *(undefined4 *)(puVar15 + 2) = local_1d6;
                    *(undefined4 *)((long)puVar15 + 0x14) = uStack_1d2;
                    *(undefined4 *)(puVar15 + 3) = uStack_1ce;
                    *(undefined4 *)((long)puVar15 + 0x1c) = uStack_1ca;
                    *puVar15 = CONCAT71(uStack_1e5,local_1e6);
                    puVar15[1] = uStack_1de;
                  }
                }
              }
              if ((local_484 & 8) != 0) {
                pbVar33 = (byte *)plVar16[2];
                bVar11 = *pbVar33;
                if ((((((((((bVar11 >> 1 ^ local_1b6) & 1) != 0) ||
                         (((bVar11 >> 2 ^ local_1b6 >> 1) & 1) != 0)) ||
                        (((bVar11 >> 5 ^ local_1b6 >> 2) & 1) != 0)) ||
                       (((byte)(local_1b6 >> 3 & 1) != (byte)-((char)bVar11 >> 7) ||
                        (local_1b2 != *(int *)(pbVar33 + 4))))) ||
                      (local_1ae != *(long *)(pbVar33 + 8))) ||
                     (((lStack_1a6 != *(long *)(pbVar33 + 0x10) ||
                       (local_19e != *(long *)(pbVar33 + 0x18))) ||
                      ((lStack_196 != *(long *)(pbVar33 + 0x20) ||
                       (((CONCAT44(uStack_18a,local_18e) != *(long *)(pbVar33 + 0x28) ||
                         (CONCAT44(uStack_182,uStack_186) != *(long *)(pbVar33 + 0x30))) ||
                        (local_17e != *(long *)(pbVar33 + 0x38))))))))) ||
                    ((local_176 != *(long *)(pbVar33 + 0x40) ||
                     (lStack_16e != *(long *)(pbVar33 + 0x48))))) ||
                   ((local_166 != *(long *)(pbVar33 + 0x50) ||
                    (((lStack_15e != *(long *)(pbVar33 + 0x58) ||
                      (local_156 != *(long *)(pbVar33 + 0x60))) ||
                     ((local_14e != *(int *)(pbVar33 + 0x84) ||
                      (((iStack_14a != *(int *)(pbVar33 + 0x88) ||
                        (iStack_146 != *(int *)(pbVar33 + 0x8c))) ||
                       (iStack_142 != *(int *)(pbVar33 + 0x90))))))))))) {
                  cVar10 = FUN_1002af0ff(plVar16);
                  if (cVar10 == '\0') {
                    uVar18 = FUN_1001cc310();
                    cVar10 = _os_log_type_enabled(uVar18,0x10);
                    if (cVar10 != '\0') {
                      local_58._0_4_ = 0x8220202;
                      local_58._4_4_ = 0x7a0a90;
                      local_50 = 1;
                      uStack_4c = 0x822;
                      uStack_4a = 0x57dd;
                      local_48[0] = 0x1007b;
                      __os_log_error_impl(0x100000000,uVar18,0x10,"%{public}s: (%{public}s)",
                                          &local_58,0x16);
                    }
                    FUN_1001782e9(0,0);
                  }
                  else {
                    pbVar33 = (byte *)plVar16[2];
                    bVar11 = *pbVar33;
                    bVar29 = local_1b6 * '\x02' & 2;
                    *pbVar33 = bVar11 & 0xfd | bVar29;
                    bVar25 = local_1b6 * '\x02' & 4;
                    *pbVar33 = bVar11 & 0xf9 | bVar29 | bVar25;
                    bVar26 = (local_1b6 & 4) << 3;
                    *pbVar33 = bVar11 & 0xd9 | bVar29 | bVar25 | bVar26;
                    *pbVar33 = bVar11 & 0x59 | bVar29 | bVar25 | bVar26 | (local_1b6 & 8) << 4;
                    *(int *)(pbVar33 + 4) = local_1b2;
                    *(long *)(pbVar33 + 8) = local_1ae;
                    *(long *)(pbVar33 + 0x10) = lStack_1a6;
                    *(long *)(pbVar33 + 0x18) = local_19e;
                    *(long *)(pbVar33 + 0x20) = lStack_196;
                    *(undefined4 *)(pbVar33 + 0x28) = local_18e;
                    *(undefined4 *)(pbVar33 + 0x2c) = uStack_18a;
                    *(undefined4 *)(pbVar33 + 0x30) = uStack_186;
                    *(undefined4 *)(pbVar33 + 0x34) = uStack_182;
                    FUN_1002b772e(plVar16,local_17e);
                    *(long *)(pbVar33 + 0x40) = local_176;
                    *(long *)(pbVar33 + 0x48) = lStack_16e;
                    *(long *)(pbVar33 + 0x50) = local_166;
                    *(long *)(pbVar33 + 0x58) = lStack_15e;
                    *(long *)(pbVar33 + 0x60) = local_156;
                    *(ulong *)(pbVar33 + 0x84) = CONCAT44(iStack_14a,local_14e);
                    *(ulong *)(pbVar33 + 0x8c) = CONCAT44(iStack_142,iStack_146);
                  }
                }
              }
            }
            if (plVar37 != (long *)0x0) {
              LOCK();
              plVar36 = plVar37 + 1;
              lVar20 = *plVar36;
              *plVar36 = *plVar36 + -1;
              UNLOCK();
              if (lVar20 == 0) {
                (**(code **)(*plVar37 + 0x10))(plVar37);
                std::__shared_weak_count::__release_weak();
              }
            }
            FUN_100538b99(&local_b8,&local_98);
            if (local_13a != 0) {
              if ((local_13a & 1) != 0) {
                FUN_1002b486a(&local_58,plVar16);
                cVar10 = FUN_10016640b(local_116[0],CONCAT44(local_58._4_4_,(undefined4)local_58));
                if (cVar10 == '\0') {
                  FUN_1002b482f(plVar16,local_116);
                  *(undefined1 *)((long)plVar16 + 0x44) = 0;
                  FUN_1005389ba(&local_98,0xf);
                }
                FUN_1001a85d4(&local_58);
              }
              if ((local_13a & 2) != 0) {
                FUN_1002b4b5e(&local_58,plVar16);
                iVar12 = FUN_1001b9c66(local_136,&local_58);
                if (iVar12 != 0) {
                  FUN_1002b5020(plVar16,local_136);
                  FUN_1005389ba(&local_98,0xf);
                }
                FUN_1001b7a50(&local_58);
              }
              if ((local_13a & 4) != 0) {
                lVar20 = FUN_1002b7275(plVar16,1);
                if (lVar20 == 0) {
                  uVar18 = FUN_1001cc310();
                  cVar10 = _os_log_type_enabled(uVar18,0x10);
                  if (cVar10 != '\0') {
                    local_58._0_4_ = 0x8220202;
                    local_58._4_4_ = 0x7a168c;
                    local_50 = 1;
                    uStack_4c = 0x822;
                    uStack_4a = 0x580c;
                    local_48[0] = 0x1007b;
                    __os_log_error_impl(0x100000000,uVar18,0x10,"%{public}s: (%{public}s)",&local_58
                                        ,0x16);
                  }
                  cVar10 = FUN_1001782e9(0,0);
                  if (cVar10 == '\0') goto LAB_100261132;
                }
                FUN_10017156e(lVar20);
                FUN_100166802(lVar20,local_126[0]);
                FUN_1005389ba(&local_98,0xad);
              }
LAB_100261132:
              if ((local_13a & 8) != 0) {
                lVar20 = FUN_1002af284(plVar16);
                if (lVar20 != 0) {
                  uVar18 = (*(code *)**(undefined8 **)CONCAT44(uStack_102,local_106))();
                  FUN_1002af370(plVar16,uVar18);
                  FUN_1005389ba(&local_98,0x58);
                }
                FUN_100175848(lVar20);
              }
              if ((local_13a & 0x20) != 0) {
                FUN_1002af0ff(plVar16);
                FUN_10017060f(*(undefined8 *)(plVar16[2] + 0x98));
                uVar18 = FUN_100171413(0,0,local_f6[0]);
                *(undefined8 *)(plVar16[2] + 0x98) = uVar18;
              }
            }
            FUN_100538b99(&local_b8,&local_98);
            if (plVar37 != (long *)0x0) {
              LOCK();
              plVar36 = plVar37 + 1;
              lVar20 = *plVar36;
              *plVar36 = *plVar36 + -1;
              UNLOCK();
              if (lVar20 == 0) {
                (**(code **)(*plVar37 + 0x10))(plVar37);
                std::__shared_weak_count::__release_weak();
              }
            }
            if (uStack_4d0 != (long *)0x0) {
              LOCK();
              plVar37 = uStack_4d0 + 1;
              lVar20 = *plVar37;
              *plVar37 = *plVar37 + -1;
              UNLOCK();
              if (lVar20 == 0) {
                (**(code **)(*uStack_4d0 + 0x10))(uStack_4d0);
                std::__shared_weak_count::__release_weak();
              }
            }
            if (plVar31 != (long *)0x0) {
              LOCK();
              plVar37 = plVar31 + 1;
              lVar20 = *plVar37;
              *plVar37 = *plVar37 + -1;
              UNLOCK();
              if (lVar20 == 0) {
                (**(code **)(*plVar31 + 0x10))(plVar31);
                std::__shared_weak_count::__release_weak();
              }
            }
            FUN_100538b99(&local_d8,&local_b8);
            if (plStack_530 < local_528) {
              *plStack_530 = (long)plVar16;
              plStack_530 = plStack_530 + 1;
            }
            else {
              lVar20 = (long)plStack_530 - (long)local_538 >> 3;
              uVar22 = lVar20 + 1;
              if (0x1fffffffffffffff < uVar22) {
                    /* WARNING: Subroutine does not return */
                FUN_100263112(&local_538);
              }
              uVar34 = (long)local_528 - (long)local_538 >> 2;
              if (uVar34 <= uVar22) {
                uVar34 = uVar22;
              }
              if (0x7ffffffffffffff7 < (ulong)((long)local_528 - (long)local_538)) {
                uVar34 = 0x1fffffffffffffff;
              }
              if (uVar34 == 0) {
                auVar39 = ZEXT816(0);
              }
              else {
                auVar39 = FUN_100249b6c(&local_528);
              }
              lVar19 = auVar39._0_8_;
              puVar15 = (undefined8 *)(lVar19 + lVar20 * 8);
              plVar31 = (long *)(lVar19 + auVar39._8_8_ * 8);
              *puVar15 = plVar16;
              plVar36 = (long *)(lVar19 + lVar20 * 8 + 8);
              plVar37 = (long *)((long)puVar15 - ((long)plStack_530 - (long)local_538));
              _memcpy(plVar37,local_538,(long)plStack_530 - (long)local_538);
              plVar16 = local_538;
              bVar38 = local_538 != (long *)0x0;
              local_538 = plVar37;
              plStack_530 = plVar36;
              local_528 = plVar31;
              if (bVar38) {
                operator_delete(plVar16);
                plStack_530 = plVar36;
              }
            }
          }
          else {
            if (iVar12 == 0x48545450) {
              FUN_1001b7a5c(&local_58,local_136);
              cVar10 = FUN_1001b8428(&local_58);
              if (cVar10 != '\0') {
                uVar18 = FUN_1001cc310();
                cVar10 = _os_log_type_enabled(uVar18,0x10);
                if (cVar10 != '\0') {
                  local_98._0_4_ = 0x8220202;
                  local_98._4_4_ = 0x7a0a90;
                  uStack_90 = 1;
                  uStack_8c = 0x822;
                  uStack_8a = 0x5937;
                  uStack_88 = 0x7b;
                  uStack_86 = 1;
                  __os_log_error_impl(0x100000000,uVar18,0x10,"%{public}s: (%{public}s)",&local_98,
                                      0x16);
                }
                FUN_1001782e9(0,0);
              }
              cVar10 = FUN_1001b8428(&local_58);
              if (cVar10 == '\0') {
                FUN_1002b5020(plVar16,&local_58);
              }
              uVar18 = FUN_1003c5880();
              cVar10 = _os_log_type_enabled(uVar18,1);
              if (cVar10 != '\0') {
                local_98._0_4_ = 0x8000100;
                local_98._4_4_ = (undefined4)plVar16[5];
                uStack_90 = (undefined4)((ulong)plVar16[5] >> 0x20);
                __os_log_impl(0x100000000,uVar18,1,"ch>    new INSTANCE: %16.16llx (url)",&local_98,
                              0xc);
              }
              FUN_1001b7a50(&local_58);
              goto LAB_100260774;
            }
            if (iVar12 == 0x46494c45) {
              if ((local_13a & 1) != 0) {
                FUN_1001a7a9e(&local_98,local_116);
                FUN_1002b482f(plVar16,&local_98);
                *(undefined1 *)((long)plVar16 + 0x44) = 0;
                if ((local_13a & 2) != 0) {
                  FUN_1001b7a5c(&local_58,local_136);
                  FUN_1002b5020(plVar16,&local_58);
                  FUN_1001b7a50(&local_58);
                }
                uVar18 = FUN_1003c5880();
                cVar10 = _os_log_type_enabled(uVar18,1);
                if (cVar10 != '\0') {
                  local_58._0_4_ = 0x8000100;
                  local_58._4_4_ = (undefined4)plVar16[5];
                  local_50 = (undefined4)((ulong)plVar16[5] >> 0x20);
                  __os_log_impl(0x100000000,uVar18,1,"ch>    new INSTANCE: %16.16llx (file)",
                                &local_58,0xc);
                }
                FUN_1001a85d4(&local_98);
                goto LAB_100260774;
              }
              if (DAT_1008c7660 != -1) {
                _dispatch_once(&DAT_1008c7660,&PTR___NSConcreteGlobalBlock_1008575c0);
              }
              plVar16 = DAT_1008c7658;
              cVar10 = _os_log_type_enabled(DAT_1008c7658,0x10);
              if (cVar10 != '\0') {
                pcVar27 = 
                "ch> **ERROR** NewInstance filekind bug bookmarkURL is not there %16.16llx";
                goto LAB_1002604d5;
              }
            }
            else {
              plVar16 = (long *)FUN_1003c5880();
              cVar10 = _os_log_type_enabled(plVar16,1);
              if (cVar10 != '\0') {
                local_98._0_4_ = 0x8000200;
                uStack_8c = 0x400;
                uStack_8a = uVar8;
                uStack_88 = uVar9;
                uVar18 = 1;
                pcVar27 = "ch> **ERROR** CREATE: %16.16llx unhandled trackKind %x";
                uVar21 = 0x12;
                goto LAB_100260696;
              }
            }
LAB_10026069b:
            uVar18 = FUN_1001cc310();
            cVar10 = _os_log_type_enabled(uVar18,0x10);
            if (cVar10 != '\0') {
              local_98._0_4_ = 0x8220202;
              local_98._4_4_ = 0x7a168c;
              uStack_90 = 1;
              uStack_8c = 0x822;
              uStack_8a = 0x590e;
              uStack_88 = 0x7b;
              uStack_86 = 1;
              __os_log_error_impl(0x100000000,uVar18,0x10,"%{public}s: (%{public}s)",&local_98,0x16)
              ;
            }
            cVar10 = FUN_1001782e9(0,0);
            if (cVar10 != '\0') {
              plVar16 = (long *)0x0;
              goto LAB_100260774;
            }
          }
          FUN_1001a8fac(local_f6);
          plVar16 = (long *)CONCAT44(uStack_fa,uStack_fe);
          if (plVar16 != (long *)0x0) {
            LOCK();
            plVar31 = plVar16 + 1;
            lVar20 = *plVar31;
            *plVar31 = *plVar31 + -1;
            UNLOCK();
            if (lVar20 == 0) {
              (**(code **)(*plVar16 + 0x10))(plVar16);
              std::__shared_weak_count::__release_weak();
            }
          }
          FUN_1001a85d4(local_116);
          FUN_1001a8fac(local_126);
          FUN_1001b7a50(local_136);
          local_4f8 = (long *)((long)local_4f8 + 1);
        } while (local_4f8 != local_500);
      }
    }
    plVar31 = (long *)0x0;
    uStack_4b0 = 0;
    uStack_4ac = 0;
    uStack_4aa = 0;
    uStack_4a8 = 0;
    uStack_4a6 = 0;
    uStack_4a4 = 0;
    uStack_4a2 = 0;
    plVar16 = (long *)local_4c0[0xb];
    if (plVar16 == (long *)0x0) {
      plVar37 = (long *)0x0;
      plVar31 = (long *)0x0;
    }
    else {
      plVar37 = (long *)0x0;
      do {
        plVar36 = (long *)CONCAT26(uStack_4a2,CONCAT24(uStack_4a4,CONCAT22(uStack_4a6,uStack_4a8)));
        if (plVar37 < plVar36) {
          *plVar37 = (long)plVar16;
          plVar37 = plVar37 + 1;
        }
        else {
          lVar20 = (long)plVar37 - (long)plVar31 >> 3;
          uVar22 = lVar20 + 1;
          local_4b8 = plVar31;
          if (0x1fffffffffffffff < uVar22) {
                    /* WARNING: Subroutine does not return */
            FUN_100263112(&local_4b8);
          }
          uVar23 = (long)plVar36 - (long)plVar31;
          uVar34 = (long)uVar23 >> 2;
          if (uVar34 <= uVar22) {
            uVar34 = uVar22;
          }
          if (0x7ffffffffffffff7 < uVar23) {
            uVar34 = 0x1fffffffffffffff;
          }
          if (uVar34 == 0) {
            auVar39 = ZEXT816(0);
          }
          else {
            auVar39 = FUN_100249b6c(&uStack_4a8);
            plVar31 = local_4b8;
          }
          lVar24 = auVar39._0_8_;
          plVar36 = (long *)(lVar24 + lVar20 * 8);
          lVar19 = lVar24 + auVar39._8_8_ * 8;
          *plVar36 = (long)plVar16;
          plVar37 = (long *)(lVar24 + lVar20 * 8 + 8);
          sVar35 = CONCAT26(uStack_4aa,CONCAT24(uStack_4ac,uStack_4b0)) - (long)plVar31;
          plVar36 = (long *)((long)plVar36 - sVar35);
          local_4b8 = plVar31;
          _memcpy(plVar36,plVar31,sVar35);
          uStack_4b0 = SUB84(plVar37,0);
          uStack_4ac = (undefined2)((ulong)plVar37 >> 0x20);
          uStack_4aa = (undefined2)((ulong)plVar37 >> 0x30);
          uStack_4a8 = (undefined2)lVar19;
          uStack_4a6 = (undefined2)((ulong)lVar19 >> 0x10);
          uStack_4a4 = (undefined2)((ulong)lVar19 >> 0x20);
          uStack_4a2 = (undefined2)((ulong)lVar19 >> 0x30);
          plVar31 = plVar36;
          if (local_4b8 != (long *)0x0) {
            operator_delete(local_4b8);
            local_4b8 = plVar36;
            plVar31 = local_4b8;
          }
        }
        uStack_4b0 = SUB84(plVar37,0);
        uStack_4ac = (undefined2)((ulong)plVar37 >> 0x20);
        uStack_4aa = (undefined2)((ulong)plVar37 >> 0x30);
        plVar16 = (long *)*plVar16;
      } while (plVar16 != (long *)0x0);
    }
    local_500 = plStack_530;
    if (((long)plStack_530 - (long)local_538 != 8) || ((long)plVar37 - (long)plVar31 != 8)) {
      local_4f8 = local_4c0 + 0xb;
      if (local_538 == plStack_530) {
        plVar16 = (long *)0x0;
        plVar36 = plVar31;
      }
      else {
        plVar36 = local_538;
        plVar37 = (long *)0x0;
        do {
          plVar16 = (long *)*plVar36;
          if (plVar37 == (long *)0x0) {
            plVar37 = local_4f8;
          }
          *plVar37 = (long)plVar16;
          *plVar16 = 0;
          plVar37 = (long *)CONCAT26(uStack_4aa,CONCAT24(uStack_4ac,uStack_4b0));
          local_4b8 = plVar31;
          if (plVar31 == plVar37) {
LAB_100261773:
            if (plVar31 == plVar37) goto LAB_10026179c;
            sVar35 = (long)plVar37 - (long)(plVar31 + 1);
            if (sVar35 != 0) {
              _memmove(plVar31,plVar31 + 1,sVar35);
            }
            lVar20 = (long)plVar31 + sVar35;
            uStack_4b0 = (undefined4)lVar20;
            uStack_4ac = (undefined2)((ulong)lVar20 >> 0x20);
            uStack_4aa = (undefined2)((ulong)lVar20 >> 0x30);
            plVar31 = local_4b8;
          }
          else {
            do {
              if ((long *)*plVar31 == plVar16) goto LAB_100261773;
              plVar31 = plVar31 + 1;
            } while (plVar31 != plVar37);
LAB_10026179c:
            if (DAT_1008c7660 != -1) {
              _dispatch_once(&DAT_1008c7660,&PTR___NSConcreteGlobalBlock_1008575c0);
            }
            plVar37 = DAT_1008c7658;
            cVar10 = _os_log_type_enabled(DAT_1008c7658,0x10);
            plVar31 = local_4b8;
            if (cVar10 != '\0') {
              local_98._0_4_ = 0x8000200;
              local_98._4_4_ = (undefined4)plVar16[5];
              uStack_90 = (undefined4)((ulong)plVar16[5] >> 0x20);
              uStack_8c = 0x400;
              uStack_8a = (undefined2)*(undefined4 *)((long)plVar16 + 0x3c);
              uStack_88 = (undefined2)((uint)*(undefined4 *)((long)plVar16 + 0x3c) >> 0x10);
              __os_log_impl(0x100000000,plVar37,0x10,
                            "ch> **ERROR** SetTrackInstanceOrder: instance %16.16llx not in list %x"
                            ,&local_98,0x12);
              plVar31 = local_4b8;
            }
          }
          plVar36 = plVar36 + 1;
          plVar37 = plVar16;
        } while (plVar36 != local_500);
        plVar37 = (long *)CONCAT26(uStack_4aa,CONCAT24(uStack_4ac,uStack_4b0));
        plVar36 = plVar31;
      }
      for (; plVar36 != plVar37; plVar36 = plVar36 + 1) {
        plVar4 = (long *)*plVar36;
        local_4b8 = plVar31;
        uVar18 = FUN_1003c5880();
        cVar10 = _os_log_type_enabled(uVar18,1);
        if (cVar10 != '\0') {
          lVar20 = *local_4c0;
          local_98._0_4_ = 0x8000200;
          local_98._4_4_ = (undefined4)plVar4[5];
          uStack_90 = (undefined4)((ulong)plVar4[5] >> 0x20);
          uStack_8c = 0x800;
          uStack_8a = (undefined2)lVar20;
          uStack_88 = (undefined2)((ulong)lVar20 >> 0x10);
          uStack_86 = (undefined4)((ulong)lVar20 >> 0x20);
          __os_log_impl(0x100000000,uVar18,1,
                        "ch> Inserting remaining instance %16.16llx from info %16.16llx at the end of the list"
                        ,&local_98,0x16);
        }
        if (plVar16 == (long *)0x0) {
          plVar16 = local_4f8;
        }
        *plVar16 = (long)plVar4;
        *plVar4 = 0;
        plVar16 = plVar4;
        plVar31 = local_4b8;
      }
    }
    local_4b8 = plVar31;
    if (plVar31 != (long *)0x0) {
      uStack_4b0 = SUB84(plVar31,0);
      uStack_4ac = (undefined2)((ulong)plVar31 >> 0x20);
      uStack_4aa = (undefined2)((ulong)plVar31 >> 0x30);
      operator_delete(plVar31);
    }
    plVar31 = local_518;
    plVar16 = local_520;
    if (local_518 != (long *)0x0) {
      LOCK();
      local_518[1] = local_518[1] + 1;
      UNLOCK();
    }
    if (*(char *)((long)local_520 + 0x4dce) == '\0') {
      FUN_10025e6e0(local_520);
    }
    FUN_1001c62d9(&local_b8,0x20);
    FUN_1001c62d9(&local_4b8,0x20);
    FUN_1001c62d9(&local_4b8,0x20);
    uVar14 = *(uint *)((long)plVar16 + 0x3c);
    if (uVar14 != 0) {
      if ((uVar14 >> 0x17 & 1) != 0) {
        if ((*(uint *)((long)local_4c0 + 0xc2) >> 2 & 1) != (uint)*(byte *)(plVar16 + 10)) {
          *(uint *)((long)local_4c0 + 0xc2) =
               (*(uint *)((long)local_4c0 + 0xc2) & 0xfffffffb) + (*(byte *)(plVar16 + 10) & 1) * 4;
          FUN_1005389ba(&local_4b8,0x7d);
          uVar14 = *(uint *)((long)plVar16 + 0x3c);
        }
      }
      if ((uVar14 & 4) != 0) {
        if ((*(uint *)((long)local_4c0 + 0xc2) >> 0x1d & 1) != (uint)*(byte *)((long)plVar16 + 0x51)
           ) {
          *(uint *)((long)local_4c0 + 0xc2) =
               *(uint *)((long)local_4c0 + 0xc2) & 0xdfffffff |
               (*(byte *)((long)plVar16 + 0x51) & 1) << 0x1d;
          FUN_1005389ba(&local_4b8,0x5f);
        }
      }
      uVar3 = *(ushort *)((long)local_4c0 + 0xc6);
      uVar14 = (uint)uVar3;
      if ((uVar3 >> 5 & 1) != (ushort)*(byte *)((long)plVar16 + 0x52)) {
        uVar14 = uVar3 & 0xffffffdf | ((ushort)*(byte *)((long)plVar16 + 0x52) & 1) << 5;
        *(short *)((long)local_4c0 + 0xc6) = (short)uVar14;
      }
      if (((ushort)(uVar14 >> 10) & 1) != (ushort)*(byte *)((long)plVar16 + 0x53)) {
        *(ushort *)((long)local_4c0 + 0xc6) =
             (ushort)uVar14 & 0xfbff | (*(byte *)((long)plVar16 + 0x53) & 1) << 10;
      }
      uVar14 = *(uint *)((long)local_4c0 + 0xc2);
      if ((uVar14 >> 0x16 & 1) != (uint)*(byte *)((long)plVar16 + 0x54)) {
        uVar14 = uVar14 & 0xffbfffff | (*(byte *)((long)plVar16 + 0x54) & 1) << 0x16;
        *(uint *)((long)local_4c0 + 0xc2) = uVar14;
      }
      if ((uVar14 >> 0xd & 1) != (uint)*(byte *)((long)plVar16 + 0x55)) {
        uVar14 = uVar14 & 0xffffdfff | (*(byte *)((long)plVar16 + 0x55) & 1) << 0xd;
        *(uint *)((long)local_4c0 + 0xc2) = uVar14;
      }
      if ((uVar14 >> 4 & 1) != (uint)*(byte *)(plVar16 + 0xb)) {
        uVar14 = uVar14 & 0xffffffef | (*(byte *)(plVar16 + 0xb) & 1) << 4;
        *(uint *)((long)local_4c0 + 0xc2) = uVar14;
      }
      if ((uVar14 >> 0x13 & 1) != (uint)*(byte *)((long)plVar16 + 0x59)) {
        uVar14 = uVar14 & 0xfff7ffff | (*(byte *)((long)plVar16 + 0x59) & 1) << 0x13;
        *(uint *)((long)local_4c0 + 0xc2) = uVar14;
      }
      if ((uVar14 >> 0x1a & 1) != (uint)*(byte *)((long)plVar16 + 0x5a)) {
        *(uint *)((long)local_4c0 + 0xc2) =
             uVar14 & 0xfbffffff | (*(byte *)((long)plVar16 + 0x5a) & 1) << 0x1a;
      }
      if ((int)local_4c0[0x33] != *(int *)((long)plVar16 + 0x5c)) {
        *(int *)(local_4c0 + 0x33) = *(int *)((long)plVar16 + 0x5c);
      }
      if (*(int *)((long)local_4c0 + 0x124) != (int)plVar16[0xc]) {
        *(int *)((long)local_4c0 + 0x124) = (int)plVar16[0xc];
      }
      if (((*(byte *)((long)plVar16 + 0x3d) & 0x10) != 0) &&
         (local_4c0[0x32] != *(long *)((long)plVar16 + 100))) {
        local_4c0[0x32] = *(long *)((long)plVar16 + 100);
        FUN_1005389ba(&local_4b8,0x6f);
      }
      if (local_4c0[0x30] == *(long *)((long)plVar16 + 0x6c)) {
        lVar20 = *(long *)((long)plVar16 + 0x74);
        if (local_4c0[0x31] != lVar20) goto LAB_100261be4;
      }
      else {
        lVar20 = *(long *)((long)plVar16 + 0x74);
LAB_100261be4:
        FUN_100472a20(local_4c0,*(long *)((long)plVar16 + 0x6c),lVar20);
      }
      if (local_4c0[0x2f] != *(long *)((long)plVar16 + 0x7c)) {
        local_4c0[0x2f] = *(long *)((long)plVar16 + 0x7c);
      }
      uVar14 = *(uint *)((long)plVar16 + 0x3c);
      if (((uVar14 >> 0x10 & 1) != 0) && (local_4c0[0x2d] != *(long *)((long)plVar16 + 0x84))) {
        local_4c0[0x2d] = *(long *)((long)plVar16 + 0x84);
        FUN_1005389ba(&local_4b8,0x25);
        uVar14 = *(uint *)((long)plVar16 + 0x3c);
      }
      if (((uVar14 >> 0x11 & 1) != 0) && ((int)local_4c0[0x2e] != *(int *)((long)plVar16 + 0x8c))) {
        *(int *)(local_4c0 + 0x2e) = *(int *)((long)plVar16 + 0x8c);
        FUN_1005389ba(&local_4b8,0x25);
        uVar14 = *(uint *)((long)plVar16 + 0x3c);
      }
      if (((uVar14 >> 0x12 & 1) != 0) && (*(char *)((long)local_4c0 + 0x13e) != (char)plVar16[0x12])
         ) {
        *(char *)((long)local_4c0 + 0x13e) = (char)plVar16[0x12];
        FUN_1005389ba(&local_4b8,0xaf);
        uVar14 = *(uint *)((long)plVar16 + 0x3c);
      }
      if (((uVar14 >> 0x13 & 1) != 0) &&
         (*(short *)(local_4c0[0xf] + 0x38) != *(short *)((long)plVar16 + 0x94))) {
        FUN_100471fde(local_4c0);
        *(undefined2 *)(local_4c0[0xf] + 0x38) = *(undefined2 *)((long)plVar16 + 0x94);
        FUN_1005389ba(&local_4b8,0xb1);
        uVar14 = *(uint *)((long)plVar16 + 0x3c);
      }
      if (((uVar14 >> 0x14 & 1) != 0) &&
         (*(short *)(local_4c0[0xf] + 0x3a) != *(short *)((long)plVar16 + 0x96))) {
        FUN_100471fde(local_4c0);
        *(undefined2 *)(local_4c0[0xf] + 0x3a) = *(undefined2 *)((long)plVar16 + 0x96);
        FUN_1005389ba(&local_4b8,0xb2);
        uVar14 = *(uint *)((long)plVar16 + 0x3c);
      }
      if (((uVar14 >> 0x15 & 1) != 0) && ((short)local_4c0[0x28] != (short)plVar16[0x13])) {
        *(short *)(local_4c0 + 0x28) = (short)plVar16[0x13];
        FUN_1005389ba(&local_4b8,0xb8);
        uVar14 = *(uint *)((long)plVar16 + 0x3c);
      }
      if ((uVar14 >> 0x16 & 1) != 0) {
        lVar20 = local_4c0[0x13];
        uVar13 = *(undefined4 *)((long)plVar16 + 0x9e);
        uVar5 = *(undefined4 *)((long)plVar16 + 0xa2);
        uVar6 = *(undefined4 *)((long)plVar16 + 0xa6);
        *(undefined4 *)(local_4c0 + 0x12) = *(undefined4 *)((long)plVar16 + 0x9a);
        *(undefined4 *)((long)local_4c0 + 0x94) = uVar13;
        *(undefined4 *)(local_4c0 + 0x13) = uVar5;
        *(undefined4 *)((long)local_4c0 + 0x9c) = uVar6;
        *(int *)(local_4c0 + 0x13) = (int)lVar20;
        FUN_100475f85(local_4c0,*(undefined8 *)((long)plVar16 + 0xaa),
                      *(undefined8 *)((long)plVar16 + 0xb2),*(undefined8 *)((long)plVar16 + 0xba),
                      *(undefined4 *)((long)plVar16 + 0xa2));
      }
    }
    FUN_100538b99(&local_b8,&local_4b8);
    FUN_1001c62d9(&local_4b8,0x20);
    uVar14 = *(uint *)((long)plVar16 + 0xc2);
    local_98 = (cfstringStruct *)CONCAT44(local_98._4_4_,(undefined4)local_98);
    local_58 = (cfstringStruct *)CONCAT44(local_58._4_4_,(undefined4)local_58);
    if (uVar14 != 0) {
      if ((uVar14 & 1) != 0) {
        plVar37 = local_4c0 + 0x2c;
        FUN_1001a8c1c(&local_58,plVar37);
        FUN_1001b7f2a(&local_98,&local_58);
        iVar12 = FUN_1001b9c66((long)plVar16 + 0xc6,&local_98);
        FUN_1001b7a50(&local_98);
        if (iVar12 != 0) {
          FUN_1001ab076(plVar37,(long)plVar16 + 0xc6);
          FUN_1005389ba(&local_4b8,0x25);
        }
        FUN_1001ab006(&local_58);
        uVar14 = *(uint *)((long)plVar16 + 0xc2);
      }
      if ((uVar14 & 2) != 0) {
        FUN_100480e23(&local_98,local_4c0,1);
        if (CONCAT44(local_98._4_4_,(undefined4)local_98) != 0) {
          FUN_1004c527e(CONCAT44(local_98._4_4_,(undefined4)local_98),(long)plVar16 + 0xd6);
          FUN_1005389ba(&local_4b8,0xac);
        }
        plVar37 = (long *)CONCAT26(uStack_8a,CONCAT24(uStack_8c,uStack_90));
        if (plVar37 != (long *)0x0) {
          LOCK();
          plVar36 = plVar37 + 1;
          lVar20 = *plVar36;
          *plVar36 = *plVar36 + -1;
          UNLOCK();
          if (lVar20 == 0) {
            (**(code **)(*plVar37 + 0x10))(plVar37);
            std::__shared_weak_count::__release_weak();
          }
        }
        uVar14 = *(uint *)((long)plVar16 + 0xc2);
      }
      if ((uVar14 & 4) != 0) {
        FUN_10047c600(&local_98,local_4c0);
        FUN_1001aaf14(&local_58,&local_98);
        FUN_1001b7a50(&local_98);
        FUN_1001aaf14(&local_98,(long)plVar16 + 0xf6);
        cVar10 = FUN_100169da8(CONCAT44(local_58._4_4_,(undefined4)local_58),
                               CONCAT44(local_98._4_4_,(undefined4)local_98));
        if (cVar10 == '\0') {
          FUN_10047c840(local_4c0,CONCAT44(local_98._4_4_,(undefined4)local_98));
          FUN_1005389ba(&local_4b8,0x56);
        }
        FUN_1001ab006(&local_98);
        FUN_1001ab006(&local_58);
        uVar14 = *(uint *)((long)plVar16 + 0xc2);
      }
      if ((uVar14 & 0x10) != 0) {
        FUN_10047cad6(&local_98,local_4c0);
        FUN_1001aaf14(&local_58,&local_98);
        FUN_1001b7a50(&local_98);
        FUN_1001aaf14(&local_98,(long)plVar16 + 0x106);
        cVar10 = FUN_100169da8(CONCAT44(local_58._4_4_,(undefined4)local_58),
                               CONCAT44(local_98._4_4_,(undefined4)local_98));
        if (cVar10 == '\0') {
          FUN_10047cd16(local_4c0,CONCAT44(local_98._4_4_,(undefined4)local_98));
          FUN_1005389ba(&local_4b8,0x7f);
        }
        FUN_1001ab006(&local_98);
        FUN_1001ab006(&local_58);
        uVar14 = *(uint *)((long)plVar16 + 0xc2);
      }
      if ((uVar14 & 8) != 0) {
        uVar18 = FUN_1001a8626((long)plVar16 + 0x116);
        uVar13 = FUN_1001a8610((long)plVar16 + 0x116);
        iVar12 = FUN_10047d6ce(local_4c0,uVar18,uVar13);
        if (iVar12 == 0) {
          FUN_1005389ba(&local_4b8,0x54);
        }
      }
      uVar14 = *(uint *)((long)plVar16 + 0xc2);
      if ((uVar14 & 0x20) != 0) {
        FUN_1005389ba(&local_4b8,0x71);
        uVar14 = *(uint *)((long)plVar16 + 0xc2);
      }
      local_98 = (cfstringStruct *)CONCAT44(local_98._4_4_,(undefined4)local_98);
      local_58 = (cfstringStruct *)CONCAT44(local_58._4_4_,(undefined4)local_58);
      if (((uVar14 & 0x40) != 0) &&
         (local_98 = (cfstringStruct *)CONCAT44(local_98._4_4_,(undefined4)local_98),
         local_58 = (cfstringStruct *)CONCAT44(local_58._4_4_,(undefined4)local_58),
         *(long *)((long)plVar16 + 0xe6) != 0)) {
        pcVar1 = (cfstringStruct *)((long)plVar16 + 0xe6);
        lVar20 = FUN_1001a7bfa(pcVar1);
        if (lVar20 != 0) {
          FUN_100480e23(&local_510,local_4c0,0);
          if (local_510 != (cfstringStruct *)0x0) {
            uStack_90 = 0;
            uStack_8c = 0;
            uStack_8a = 0;
            local_98 = pcVar1;
            FUN_1001aa318(&uStack_88);
            uVar18 = FUN_1001a7bfa(pcVar1);
            local_50 = (undefined4)uVar18;
            uStack_4c = (undefined2)((ulong)uVar18 >> 0x20);
            uStack_4a = (undefined2)((ulong)uVar18 >> 0x30);
            local_58 = pcVar1;
            FUN_1001aa318(local_48);
            lVar20 = CONCAT26(uStack_8a,CONCAT24(uStack_8c,uStack_90));
            while ((local_98 != local_58 ||
                   (lVar20 != CONCAT26(uStack_4a,CONCAT24(uStack_4c,local_50))))) {
              FUN_1001a7f52(&local_4d8);
              FUN_1001aaadc(&uStack_88,&local_4d8);
              FUN_1001ab240(&local_4d8);
              FUN_1004c5488(local_510,CONCAT26(uStack_82,CONCAT42(uStack_86,uStack_88)));
              lVar20 = CONCAT26(uStack_8a,CONCAT24(uStack_8c,uStack_90)) + 1;
              uStack_90 = (undefined4)lVar20;
              uStack_8c = (undefined2)((ulong)lVar20 >> 0x20);
              uStack_8a = (undefined2)((ulong)lVar20 >> 0x30);
            }
            FUN_1001ab240(local_48);
            FUN_1001ab240(&uStack_88);
            FUN_1005389ba(&local_4b8,0xac);
          }
          if (local_508 != (long *)0x0) {
            LOCK();
            plVar37 = local_508 + 1;
            lVar20 = *plVar37;
            *plVar37 = *plVar37 + -1;
            UNLOCK();
            if (lVar20 == 0) {
              (**(code **)(*local_508 + 0x10))(local_508);
              std::__shared_weak_count::__release_weak();
            }
          }
        }
      }
    }
    FUN_100538b99(&local_b8,&local_4b8);
    puVar2 = (ulong *)((long)plVar16 + 0x1786);
    uVar22 = *(ulong *)((long)plVar16 + 0x1786);
    if ((uVar22 & 0x6000000000) != 0) {
      uVar18 = *(undefined8 *)((long)plVar16 + 0x178e);
      *(ulong *)((long)plVar16 + 0x1786) = uVar22 & 0x6000000000;
      *(undefined8 *)((long)plVar16 + 0x178e) = 0;
      FUN_10030f524(puVar2,local_4c0,0,&local_4b8);
      FUN_100538b99(&local_b8,&local_4b8);
      uVar22 = uVar22 & 0xffffff9fffffffff;
      *(ulong *)((long)plVar16 + 0x1786) = uVar22;
      *(undefined8 *)((long)plVar16 + 0x178e) = uVar18;
    }
    if (*(int *)((long)plVar16 + 0x126) != 0) {
      FUN_10030e43f((int *)((long)plVar16 + 0x126),local_4c0,0,&local_4b8);
      FUN_100538b99(&local_b8,&local_4b8);
      uVar22 = *puVar2;
    }
    if ((uVar22 != 0) || (*(long *)((long)plVar16 + 0x178e) != 0)) {
      FUN_10030f524(puVar2,local_4c0,0,&local_4b8);
      FUN_100538b99(&local_b8,&local_4b8);
    }
    if (plVar31 != (long *)0x0) {
      LOCK();
      plVar16 = plVar31 + 1;
      lVar20 = *plVar16;
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (lVar20 == 0) {
        (**(code **)(*plVar31 + 0x10))(plVar31);
        std::__shared_weak_count::__release_weak();
      }
    }
    FUN_100538b99(&local_d8,&local_b8);
    uVar18 = FUN_1003c5880();
    cVar10 = _os_log_type_enabled(uVar18,1);
    if ((cVar10 != '\0') && (DAT_1008c7668 < 1)) {
      FUN_10053979d(&local_4b8,&local_d8,1);
      uVar18 = FUN_1003c5880();
      cVar10 = _os_log_type_enabled(uVar18,1);
      if (cVar10 != '\0') {
        uVar21 = FUN_1001b83ae(&local_4b8);
        local_98._0_4_ = 0x8200102;
        local_98._4_4_ = (undefined4)uVar21;
        uStack_90 = (undefined4)((ulong)uVar21 >> 0x20);
        __os_log_impl(0x100000000,uVar18,1,"ch>      modified fields %s",&local_98,0xc);
      }
      FUN_1001b7a50(&local_4b8);
    }
    FUN_1002fe16c(local_4c0,&local_d8,0);
    FUN_1004755ef(local_4c0,0,&local_d8);
    FUN_1002e896a(local_4c0);
    if ((char)local_4e8 != '\0') {
      local_4f0[0x376] = local_4f0[0x376] & 0xfffeffffffffffffU | local_590;
      (**(code **)(*local_4f0 + 0x10))(local_4f0,0x61747269,local_4c0,1,0);
    }
    if (local_538 != (long *)0x0) {
      plStack_530 = local_538;
      operator_delete(local_538);
    }
    iVar12 = 0;
  }
LAB_100262687:
  if (local_518 != (long *)0x0) {
    LOCK();
    plVar16 = local_518 + 1;
    lVar20 = *plVar16;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (lVar20 == 0) {
      (**(code **)(*local_518 + 0x10))(local_518);
      std::__shared_weak_count::__release_weak();
    }
  }
LAB_1002626b6:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar12;
}

