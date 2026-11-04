// name: FUN_1005100e7
// address: 1005100e7

/* WARNING: Removing unreachable block (ram,0x000100511146) */
/* WARNING: Removing unreachable block (ram,0x000100511158) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005100e7(long param_1,undefined1 *param_2)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  double dVar4;
  char cVar5;
  short sVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  char *pcVar16;
  size_t sVar17;
  undefined8 uVar18;
  uint *puVar19;
  undefined8 *puVar20;
  undefined8 uVar21;
  bool bVar22;
  uint uStack_37b4;
  uint uStack_37b0;
  uint uStack_37ac;
  uint local_37a8;
  uint uStack_37a4;
  uint uStack_37a0;
  uint uStack_379c;
  uint local_3798;
  uint uStack_3794;
  uint uStack_3790;
  uint uStack_378c;
  uint local_3780 [4];
  long local_3770;
  char *local_3768;
  undefined1 *local_3760;
  double local_3758;
  int local_3750;
  int local_374c;
  int local_3748;
  int local_3744;
  long local_3740;
  uint local_3738 [4];
  cfstringStruct *local_3728;
  long local_3720;
  undefined8 local_3718 [2];
  long local_3708;
  undefined1 local_3700 [12];
  uint local_36f4;
  long local_36f0;
  long local_36e8;
  long *plStack_36e0;
  long local_36d0;
  uint local_36c8;
  char *local_36c4;
  undefined2 local_36bc;
  char *local_36ba;
  undefined2 local_36b2;
  undefined4 local_36b0;
  uint *local_36a8;
  undefined1 local_3698 [8];
  undefined4 uStack_3690;
  undefined2 uStack_368c;
  undefined2 uStack_368a;
  undefined6 auStack_3688 [2];
  long local_3678 [2];
  undefined1 local_3668 [16];
  undefined1 local_3658 [16];
  long local_3648 [407];
  int local_298c;
  int local_2988;
  int local_2984;
  int local_2980;
  undefined4 local_50;
  undefined1 local_4c [12];
  undefined8 uStack_40;
  long local_38;
  
  uStack_40 = 0x1005100ff;
  lVar11 = FUN_100108310();
  lVar11 = -lVar11;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  *(undefined8 *)((long)&local_38 + lVar11) = 0x10051011c;
  dVar4 = (double)FUN_1001ebd46();
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = 0;
  }
  local_3760 = param_2;
  if (*(char *)(param_1 + 0x379) == '\0') {
    *(undefined8 *)((long)&local_38 + lVar11) = 0x1005116c3;
    uVar13 = FUN_1001cc310();
    *(undefined8 *)((long)&local_38 + lVar11) = 0x1005116d3;
    cVar5 = _os_log_type_enabled(uVar13,0x10);
    if (cVar5 != '\0') {
      local_3698._0_2_ = 0x202;
      local_3698[2] = 0x22;
      local_3698[3] = 8;
      local_3698._4_4_ = 0x7a0a90;
      uStack_3690 = 1;
      uStack_368c = 0x822;
      uStack_368a = 0x7d3d;
      auStack_3688[0] = 0x1007d;
      *(undefined8 *)((long)&local_38 + lVar11) = 0x100511804;
      __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",local_3698,0x16);
    }
    *(undefined8 *)((long)&local_38 + lVar11) = 0x1005116e4;
    FUN_1001782e9(0,0);
  }
  else {
    uVar13 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)((long)&local_38 + lVar11) = 0x10051014a;
    local_3758 = dVar4;
    lVar12 = FUN_1002f930c(uVar13);
    if (lVar12 == 0) {
      *(undefined8 *)((long)&local_38 + lVar11) = 0x1005116f0;
      FUN_10017060f(0);
      *(undefined8 *)((long)&local_38 + lVar11) = 0x1005116f7;
      FUN_10017060f(0);
    }
    else {
      local_3720 = param_1 + 0x75e0;
      local_3768 = (char *)(param_1 + 0x106);
      local_3740 = param_1 + 0x71a0;
      local_36f0 = 0;
      local_3708 = 0;
      bVar22 = false;
      local_36f4 = 0;
      local_36d0 = param_1;
      do {
        *(undefined8 *)((long)&local_38 + lVar11) = 0x1005101b2;
        local_3770 = FUN_1002f9451(lVar12);
        *(undefined8 *)((long)&local_38 + lVar11) = 0x1005101c1;
        cVar5 = FUN_1002bd28d(lVar12);
        if (cVar5 != '\0') {
          lVar2 = *(long *)(lVar12 + 0x58);
          if (lVar2 == 0) {
            *(undefined8 *)((long)&local_38 + lVar11) = 0x100510296;
            uVar13 = FUN_1001cc310();
            *(undefined8 *)((long)&local_38 + lVar11) = 0x1005102a6;
            cVar5 = _os_log_type_enabled(uVar13,0x10);
            if (cVar5 != '\0') {
              local_3698._0_2_ = 0x202;
              local_3698[2] = 0x22;
              local_3698[3] = 8;
              local_3698._4_4_ = 0x7a0a90;
              uStack_3690 = 1;
              uStack_368c = 0x822;
              uStack_368a = 0x8e77;
              auStack_3688[0] = 0x1007b;
              *(undefined8 *)((long)&local_38 + lVar11) = 0x100511275;
              __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",local_3698,0x16
                                 );
            }
            *(undefined8 *)((long)&local_38 + lVar11) = 0x1005102b7;
            FUN_1001782e9(0,0);
            *(undefined8 *)((long)&local_38 + lVar11) = 0x1005102c3;
            iVar7 = FUN_1002b0559(0,2);
            if (iVar7 == 0) goto LAB_1005102cb;
          }
          else {
            *(undefined8 *)((long)&local_38 + lVar11) = 0x1005101e3;
            iVar7 = FUN_1002b0559(lVar2,2);
            if (iVar7 == 0) {
LAB_1005102cb:
              if (bVar22) {
LAB_100510467:
                if (local_36f0 == 0) {
LAB_1005108c6:
                  bVar22 = true;
                  local_36f0 = 0;
                  goto LAB_100511206;
                }
              }
              else {
                *(undefined8 *)((long)&local_38 + lVar11) = 0x1005102e2;
                FUN_1001c62d9(&local_50,0x18);
                local_50 = *(undefined4 *)(local_36d0 + 0x71b4);
                *(undefined8 *)((long)&local_38 + lVar11) = 0x100510302;
                FUN_1001c631b(local_3740,local_4c);
                if (0x5ff < *(ushort *)(local_36d0 + 100)) {
                  uVar13 = *(undefined8 *)(local_36d0 + 0x7168);
                  *(undefined8 *)((long)&local_38 + lVar11) = 0x100510321;
                  uVar14 = _CFDictionaryGetTypeID();
                  *(undefined8 *)((long)&local_38 + lVar11) = 0x10051033d;
                  lVar15 = FUN_1005ba383(uVar13,&cf_com_apple_fairplay,&cf_RentalBagRequest,uVar14,0
                                        );
                  if (lVar15 == 0) {
                    *(undefined8 *)((long)&local_38 + lVar11) = 0x10051034a;
                    uVar13 = FUN_1001cc310();
                    *(undefined8 *)((long)&local_38 + lVar11) = 0x10051035a;
                    cVar5 = _os_log_type_enabled(uVar13,0x10);
                    if (cVar5 != '\0') {
                      local_3698._0_2_ = 0x202;
                      local_3698[2] = 0x22;
                      local_3698[3] = 8;
                      local_3698._4_4_ = 0x7a0a90;
                      uStack_3690 = 1;
                      uStack_368c = 0x822;
                      uStack_368a = 0x7d89;
                      auStack_3688[0] = 0x1007d;
                      *(undefined8 *)((long)&local_38 + lVar11) = 0x1005113e5;
                      __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",
                                          local_3698,0x16);
                    }
                    *(undefined8 *)((long)&local_38 + lVar11) = 0x10051036b;
                    FUN_1001782e9(0,0);
                    if (DAT_1008c75c0 != -1) {
                      *(undefined8 *)((long)&local_38 + lVar11) = 0x100511622;
                      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                    }
                    uVar13 = DAT_1008c75b8;
                    *(undefined8 *)((long)&local_38 + lVar11) = 0x10051038d;
                    cVar5 = _os_log_type_enabled(DAT_1008c75b8,1);
                    if (cVar5 != '\0') {
                      local_3698._0_2_ = 0;
                      *(undefined8 *)((long)&local_38 + lVar11) = 0x1005103c2;
                      __os_log_impl(0x100000000,uVar13,1,"sync> failed to get RentalBagRequest",
                                    local_3698,2);
                    }
                  }
                  *(undefined8 *)((long)&local_38 + lVar11) = 0x1005103d1;
                  local_36f0 = FUN_1001669a0(lVar15,&cf_Message);
                  if (local_36f0 == 0) {
                    *(undefined8 *)((long)&local_38 + lVar11) = 0x1005103e7;
                    uVar13 = FUN_1001cc310();
                    *(undefined8 *)((long)&local_38 + lVar11) = 0x1005103f7;
                    cVar5 = _os_log_type_enabled(uVar13,0x10);
                    if (cVar5 != '\0') {
                      local_3698._0_2_ = 0x202;
                      local_3698[2] = 0x22;
                      local_3698[3] = 8;
                      local_3698._4_4_ = 0x7a0a90;
                      uStack_3690 = 1;
                      uStack_368c = 0x822;
                      uStack_368a = 0x7da9;
                      auStack_3688[0] = 0x1007d;
                      *(undefined8 *)((long)&local_38 + lVar11) = 0x100511441;
                      __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",
                                          local_3698,0x16);
                    }
                    *(undefined8 *)((long)&local_38 + lVar11) = 0x100510408;
                    FUN_1001782e9(0,0);
                    if (DAT_1008c75c0 != -1) {
                      *(undefined8 *)((long)&local_38 + lVar11) = 0x10051163a;
                      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                    }
                    uVar13 = DAT_1008c75b8;
                    *(undefined8 *)((long)&local_38 + lVar11) = 0x10051042a;
                    cVar5 = _os_log_type_enabled(DAT_1008c75b8,1);
                    if (cVar5 != '\0') {
                      local_3698._0_2_ = 0;
                      *(undefined8 *)((long)&local_38 + lVar11) = 0x10051045f;
                      __os_log_impl(0x100000000,uVar13,1,
                                    "sync> failed to get Message from RentalBagRequest",local_3698,2
                                   );
                    }
                  }
                  *(undefined8 *)((long)&local_38 + lVar11) = 0x100510467;
                  FUN_10017060f(lVar15);
                  goto LAB_100510467;
                }
                *(undefined8 *)((long)&local_38 + lVar11) = 0x100510857;
                local_36f0 = FUN_1005137d0(local_3720,"IC-Info.sidr");
                if (local_36f0 == 0) goto LAB_1005108c6;
                *(undefined8 *)((long)&local_38 + lVar11) = 0x10051087b;
                local_3708 = FUN_1005137d0(local_3720,"IC-Info.sidl");
                if (local_3708 == 0) {
                  *(undefined8 *)((long)&local_38 + lVar11) = 0x100510895;
                  uVar13 = FUN_1001cc310();
                  *(undefined8 *)((long)&local_38 + lVar11) = 0x1005108a5;
                  cVar5 = _os_log_type_enabled(uVar13,0x10);
                  if (cVar5 != '\0') {
                    local_3698._0_2_ = 0x202;
                    local_3698[2] = 0x22;
                    local_3698[3] = 8;
                    local_3698._4_4_ = 0x7a0a90;
                    uStack_3690 = 1;
                    uStack_368c = 0x822;
                    uStack_368a = 0x7dc8;
                    auStack_3688[0] = 0x1007d;
                    *(undefined8 *)((long)&local_38 + lVar11) = 0x100511555;
                    __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",
                                        local_3698,0x16);
                  }
                  *(undefined8 *)((long)&local_38 + lVar11) = 0x1005108b6;
                  FUN_1001782e9(0,0);
                  local_3708 = 0;
                }
              }
              *(undefined8 *)((long)&local_38 + lVar11) = 0x100510486;
              FUN_1001c62d9(&local_3750,0x10);
              *(undefined8 *)((long)&local_38 + lVar11) = 0x100510492;
              uVar13 = FUN_100170f3b(local_36f0);
              *(undefined8 *)((long)&local_38 + lVar11) = 0x1005104a1;
              uVar8 = FUN_100170ef7(local_36f0);
              if (local_3708 == 0) {
                uVar14 = 0;
                uVar9 = 0;
              }
              else {
                *(undefined8 *)((long)&local_38 + lVar11) = 0x1005104b5;
                uVar14 = FUN_100170f3b();
                *(undefined8 *)((long)&local_38 + lVar11) = 0x1005104c4;
                uVar9 = FUN_100170ef7(local_3708);
              }
              lVar15 = *(long *)(lVar2 + 0x10);
              if (lVar15 == 0) {
                uVar21 = 0;
                uVar18 = 0;
              }
              else {
                uVar21 = *(undefined8 *)(lVar15 + 8);
                uVar18 = *(undefined8 *)(lVar15 + 0x10);
              }
              *(int **)(&stack0xffffffffffffffd8 + lVar11) = &local_3750;
              *(undefined8 *)(&stack0xffffffffffffffd0 + lVar11) = uVar18;
              *(undefined8 *)((long)&local_38 + lVar11) = 0x100510508;
              iVar7 = FUN_100034350(&local_50,uVar13,uVar8,uVar14,uVar9,uVar21);
              if (iVar7 < 0x2375) {
                if (iVar7 + 0xa415U < 2) goto LAB_100510744;
                if (iVar7 != 0) goto LAB_100510d4b;
                if (*(char *)(local_36d0 + 0x42f) != '\0') {
                  local_3698._0_2_ = 0;
                  local_3698[2] = 0;
                  local_3698[3] = 0;
                  local_3698._4_4_ = 0;
                  uStack_3690 = 0;
                  uStack_368c = 0;
                  uStack_368a = 0;
                  *(undefined8 *)((long)&local_38 + lVar11) = 0x10051055b;
                  FUN_1003af7fe(local_3698);
                  local_3698[2] = local_3698[2] | 0x20;
                  uVar10 = local_3750 + *(int *)(local_36d0 + 0x430);
                  local_298c = uVar10 + 0x7c25b080;
                  if (0x83da4f7f < uVar10) {
                    local_298c = -1;
                  }
                  local_2988 = local_374c;
                  if (local_3748 != -1) {
                    uVar10 = local_3748 + *(int *)(local_36d0 + 0x430);
                    local_2984 = uVar10 + 0x7c25b080;
                    if (0x83da4f7f < uVar10) {
                      local_2984 = -1;
                    }
                    local_2980 = local_3744;
                  }
                  lVar15 = *(long *)(lVar12 + 0x78);
                  if ((((local_298c == *(int *)(lVar15 + 0x10)) &&
                       (local_374c == *(int *)(lVar15 + 0x14))) &&
                      (local_2984 == *(int *)(lVar15 + 0x18))) &&
                     (local_2980 == *(int *)(lVar15 + 0x1c))) goto LAB_100511203;
                  local_36e8 = 0;
                  plStack_36e0 = (long *)0x0;
                  *(long **)(&stack0xffffffffffffffd0 + lVar11) = &local_36e8;
                  *(undefined8 *)(&stack0xffffffffffffffd8 + lVar11) = 0;
                  *(undefined8 *)((long)&local_38 + lVar11) = 0x100510622;
                  FUN_100312763(lVar2,0,local_3698,0);
                  local_36f4 = local_36f4 & 0xff;
                  if (plStack_36e0 != (long *)0x0 || local_36e8 != 0) {
                    local_36f4 = 1;
                  }
                  *(undefined8 *)((long)&local_38 + lVar11) = 0x10051064f;
                  uVar8 = FUN_1003186de(lVar12);
                  *(undefined8 *)((long)&local_38 + lVar11) = 0x100510665;
                  FUN_1001e2489(local_3718,uVar8,0x12);
                  if (DAT_1008c75c0 != -1) {
                    *(undefined8 *)((long)&local_38 + lVar11) = 0x100511652;
                    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                  }
                  uVar13 = DAT_1008c75b8;
                  *(undefined8 *)((long)&local_38 + lVar11) = 0x100510687;
                  cVar5 = _os_log_type_enabled(DAT_1008c75b8,1);
                  if (cVar5 != '\0') {
                    *(undefined8 *)((long)&local_38 + lVar11) = 0x1005106a1;
                    FUN_100476ac1(local_3738,lVar12);
                    *(undefined8 *)((long)&local_38 + lVar11) = 0x1005106a9;
                    pcVar16 = (char *)FUN_1001b83ae(local_3738);
                    *(undefined8 *)((long)&local_38 + lVar11) = 0x1005106b8;
                    local_36ba = (char *)FUN_1001b83ae(local_3718);
                    local_36c8 = 0x8220302;
                    local_36bc = 0x822;
                    local_36b2 = 0x400;
                    *(undefined8 *)((long)&local_38 + lVar11) = 0x100510711;
                    local_36c4 = pcVar16;
                    local_36b0 = uVar8;
                    __os_log_impl(0x100000000,uVar13,1,
                                  "setup> updated expiration date of rental \"%{public}s\" to %{public}s (0x%08X)"
                                 );
                    *(undefined8 *)((long)&local_38 + lVar11) = 0x10051071d;
                    FUN_1001b7a50(local_3738);
                  }
                  puVar20 = local_3718;
                  goto LAB_1005111fe;
                }
              }
              else {
                if ((iVar7 != 0x2375) && (iVar7 != 0x2380)) {
LAB_100510d4b:
                  if (DAT_1008c75c0 != -1) {
                    *(undefined8 *)((long)&local_38 + lVar11) = 0x1005115f2;
                    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                  }
                  uVar13 = DAT_1008c75b8;
                  *(undefined8 *)((long)&local_38 + lVar11) = 0x100510d6d;
                  cVar5 = _os_log_type_enabled(DAT_1008c75b8,1);
                  if (cVar5 != '\0') {
                    local_3698._0_2_ = 0x100;
                    local_3698[2] = 0;
                    local_3698[3] = 4;
                    *(undefined8 *)((long)&local_38 + lVar11) = 0x100510da9;
                    local_3698._4_4_ = iVar7;
                    __os_log_impl(0x100000000,uVar13,1,
                                  "setup> unknown FairPlayGetRentalInfoExternal error %d");
                  }
                  goto LAB_100511203;
                }
LAB_100510744:
                puVar20 = (undefined8 *)local_3698;
                if (DAT_1008c75c0 != -1) {
                  *(undefined8 *)((long)&local_38 + lVar11) = 0x1005115da;
                  _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                }
                uVar13 = DAT_1008c75b8;
                *(undefined8 *)((long)&local_38 + lVar11) = 0x100510766;
                cVar5 = _os_log_type_enabled(DAT_1008c75b8,1);
                if (cVar5 != '\0') {
                  *(undefined8 *)((long)&local_38 + lVar11) = 0x100510775;
                  FUN_100476ac1(puVar20,lVar12);
                  *(undefined8 *)((long)&local_38 + lVar11) = 0x10051077d;
                  local_36c4 = (char *)FUN_1001b83ae(puVar20);
                  local_36c8 = 0x8220102;
                  *(undefined8 *)((long)&local_38 + lVar11) = 0x1005107b6;
                  __os_log_impl(0x100000000,uVar13,1,
                                "setup> attempting to check out rental \"%{public}s\"");
                  *(undefined8 *)((long)&local_38 + lVar11) = 0x1005107be;
                  FUN_1001b7a50(puVar20);
                }
                *(undefined8 *)((long)&local_38 + lVar11) = 0x1005107d1;
                FUN_1004dccf5(local_36d0,"");
                *(undefined8 *)((long)&local_38 + lVar11) = 0x1005107dd;
                FUN_1001b7a44(local_3698);
                *(undefined8 *)((long)&local_38 + lVar11) = 0x1005107e9;
                FUN_1001b7a44(auStack_3688);
                *(undefined8 *)((long)&local_38 + lVar11) = 0x1005107f5;
                FUN_10032f0f2(local_3678);
                pcVar16 = local_3768;
                *(undefined8 *)((long)&local_38 + lVar11) = 0x100510808;
                FUN_10032f0f2(local_3668);
                *(undefined8 *)((long)&local_38 + lVar11) = 0x100510814;
                FUN_10032f0f2(local_3658);
                *(undefined8 *)((long)&local_38 + lVar11) = 0x100510820;
                FUN_10032f0f2(local_3648);
                if (*pcVar16 == '\0') {
                  uVar8 = *(undefined4 *)(local_36d0 + 0x284);
                  *(undefined8 *)((long)&local_38 + lVar11) = 0x1005108fb;
                  FUN_1001bbc1c(&local_36c8,&cf_iPod__u,uVar8);
                  *(undefined8 *)((long)&local_38 + lVar11) = 0x10051090d;
                  FUN_1001b80b2(puVar20,&local_36c8);
                  *(undefined8 *)((long)&local_38 + lVar11) = 0x100510915;
                  FUN_1001b7a50(&local_36c8);
                }
                else {
                  *(undefined8 *)((long)&local_38 + lVar11) = 0x100510831;
                  sVar17 = _strlen(pcVar16);
                  *(undefined8 *)((long)&local_38 + lVar11) = 0x10051083f;
                  FUN_1001b82d4(puVar20,pcVar16,sVar17);
                }
                uVar8 = *(undefined4 *)(local_36d0 + 0x71b4);
                *(undefined8 *)((long)&local_38 + lVar11) = 0x10051093a;
                FUN_1001e0d0f(&local_36c8,local_3740,uVar8,0);
                *(undefined8 *)((long)&local_38 + lVar11) = 0x100510950;
                FUN_1001b80b2(auStack_3688,&local_36c8);
                *(undefined8 *)((long)&local_38 + lVar11) = 0x100510958;
                FUN_1001b7a50(&local_36c8);
                *(undefined8 *)((long)&local_38 + lVar11) = 0x10051096b;
                uVar13 = FUN_1005137d0(local_3720,"IC-Info.sidr");
                *(undefined8 *)((long)&local_38 + lVar11) = 0x10051097a;
                FUN_1001a78d6(&local_36c8,uVar13);
                *(undefined8 *)((long)&local_38 + lVar11) = 0x100510989;
                FUN_1001a7b1c(local_3668,&local_36c8);
                *(undefined8 *)((long)&local_38 + lVar11) = 0x100510991;
                FUN_1001a85d4(&local_36c8);
                lVar2 = *(long *)(local_36d0 + 0x7168);
                if (lVar2 == 0) {
                  if ((*(byte *)(local_36d0 + 0x434) & 2) == 0) {
                    *(undefined8 *)((long)&local_38 + lVar11) = 0x100510ca2;
                    FUN_100500aa3(local_36d0,0,0,0x69706463);
                    uVar13 = *(undefined8 *)(local_36d0 + 0x66d8);
                    *(undefined8 *)((long)&local_38 + lVar11) = 0x100510cb5;
                    uVar14 = _CFDataGetTypeID();
                    *(undefined8 *)((long)&local_38 + lVar11) = 0x100510cc7;
                    uVar13 = FUN_10059ca0a(uVar13,&cf_rbsync,uVar14);
                    *(undefined8 *)((long)&local_38 + lVar11) = 0x100510cd6;
                    FUN_1001a790a(&local_36c8,uVar13);
                    *(undefined8 *)((long)&local_38 + lVar11) = 0x100510cec;
                    FUN_1001a7b1c(local_3678,&local_36c8);
                    *(undefined8 *)((long)&local_38 + lVar11) = 0x100510cf4;
                    FUN_1001a85d4(&local_36c8);
                    uVar13 = *(undefined8 *)(local_36d0 + 0x66d8);
                    *(undefined8 *)((long)&local_38 + lVar11) = 0x100510d07;
                    uVar14 = _CFArrayGetTypeID();
                    *(undefined8 *)((long)&local_38 + lVar11) = 0x100510d19;
                    uVar13 = FUN_10059ca0a(uVar13,&cf_rbDivElementIDs,uVar14);
                    *(undefined8 *)((long)&local_38 + lVar11) = 0x100510d28;
                    FUN_1001a790a(&local_36c8,uVar13);
                    *(undefined8 *)((long)&local_38 + lVar11) = 0x100510d3e;
                    FUN_1001a7b1c(local_3648,&local_36c8);
                    *(undefined8 *)((long)&local_38 + lVar11) = 0x100510d46;
                    FUN_1001a7a94(&local_36c8);
LAB_100510ef7:
                    *(undefined8 *)((long)&local_38 + lVar11) = 0x100510f0a;
                    uVar13 = FUN_1005137d0(local_3720,"IC-Info.rbSyncResp");
                    *(undefined8 *)((long)&local_38 + lVar11) = 0x100510f19;
                    FUN_1001a78d6(&local_36c8,uVar13);
                    *(undefined8 *)((long)&local_38 + lVar11) = 0x100510f28;
                    FUN_1001a7b1c(local_3658,&local_36c8);
                    *(undefined8 *)((long)&local_38 + lVar11) = 0x100510f30;
                    FUN_1001a85d4(&local_36c8);
                    goto LAB_100510f30;
                  }
                  local_36e8 = 0;
                  local_3718[0] = 0;
                  uVar13 = *(undefined8 *)(local_36d0 + 0x66d8);
                  *(undefined8 *)((long)&local_38 + lVar11) = 0x100510e66;
                  iVar7 = FUN_1002670e7(uVar13,&local_36e8,local_3718);
                  *(undefined8 *)((long)&local_38 + lVar11) = 0x100510e7c;
                  FUN_1001a78d6(&local_36c8,local_36e8);
                  *(undefined8 *)((long)&local_38 + lVar11) = 0x100510e92;
                  FUN_1001a7b1c(local_3678,&local_36c8);
                  *(undefined8 *)((long)&local_38 + lVar11) = 0x100510e9a;
                  FUN_1001a85d4(&local_36c8);
                  *(undefined8 *)((long)&local_38 + lVar11) = 0x100510ea9;
                  FUN_1001a78d6(&local_36c8,local_3718[0]);
                  *(undefined8 *)((long)&local_38 + lVar11) = 0x100510eb8;
                  FUN_1001a7b1c(local_3648,&local_36c8);
                  *(undefined8 *)((long)&local_38 + lVar11) = 0x100510ec0;
                  FUN_1001a7a94(&local_36c8);
                  if (iVar7 == 0) goto LAB_100510ef7;
                  if (iVar7 == -0x80) goto LAB_1005111ac;
                  *(undefined8 *)((long)&local_38 + lVar11) = 0x100510ed4;
                  uVar13 = FUN_1001cc310();
                  *(undefined8 *)((long)&local_38 + lVar11) = 0x100510ee4;
                  cVar5 = _os_log_type_enabled(uVar13,0x10);
                  if (cVar5 != '\0') {
                    local_36c8 = 0x8220202;
                    local_36c4 = "Assertion failure";
                    local_36bc = 0x400;
                    local_36ba = (char *)CONCAT44(local_36ba._4_4_,iVar7);
                    *(undefined8 *)((long)&local_38 + lVar11) = 0x1005115aa;
                    __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: err == (%d)");
                  }
                  if (iVar7 == 0) goto LAB_100510f30;
LAB_1005111a7:
                  if (iVar7 != 0) goto LAB_1005111ac;
                }
                else {
                  *(undefined8 *)((long)&local_38 + lVar11) = 0x1005109ad;
                  uVar13 = _CFDictionaryGetTypeID();
                  *(undefined8 *)((long)&local_38 + lVar11) = 0x1005109c9;
                  uVar13 = FUN_1005ba383(lVar2,&cf_com_apple_fairplay,&cf_RentalBagRequest,uVar13,0)
                  ;
                  *(undefined8 *)((long)&local_38 + lVar11) = 0x1005109d8;
                  FUN_1001a8d40(&local_36e8,uVar13);
                  if (local_36e8 != 0) {
                    local_3728 = &cf_Message;
                    *(undefined8 *)((long)&local_38 + lVar11) = 0x100510a07;
                    FUN_1001a7b90(local_3700,&local_3728);
                    *(undefined8 *)((long)&local_38 + lVar11) = 0x100510a13;
                    FUN_10032f0f2(local_3738);
                    *(undefined8 *)((long)&local_38 + lVar11) = 0x100510a22;
                    FUN_10032f0f2(&local_36c8);
                    *(undefined8 *)((long)&local_38 + lVar11) = 0x100510a38;
                    cVar5 = FUN_1001a92ae(&local_36e8,local_3700,&local_36c8);
                    puVar19 = local_3738;
                    if (cVar5 != '\0') {
                      puVar19 = &local_36c8;
                    }
                    *(undefined8 *)((long)&local_38 + lVar11) = 0x100510a54;
                    FUN_1001a7a9e(local_3718,puVar19);
                    *(undefined8 *)((long)&local_38 + lVar11) = 0x100510a5c;
                    FUN_1001a85d4(&local_36c8);
                    *(undefined8 *)((long)&local_38 + lVar11) = 0x100510a6b;
                    FUN_1001a7b1c(local_3678,local_3718);
                    *(undefined8 *)((long)&local_38 + lVar11) = 0x100510a73;
                    FUN_1001a85d4(local_3718);
                    *(undefined8 *)((long)&local_38 + lVar11) = 0x100510a7f;
                    FUN_1001a85d4(local_3738);
                    *(undefined8 *)((long)&local_38 + lVar11) = 0x100510a8b;
                    FUN_1001ab240(local_3700);
                    if (local_3678[0] == 0) {
                      *(undefined8 *)((long)&local_38 + lVar11) = 0x100510a9a;
                      uVar13 = FUN_1001cc310();
                      *(undefined8 *)((long)&local_38 + lVar11) = 0x100510aaa;
                      cVar5 = _os_log_type_enabled(uVar13,0x10);
                      if (cVar5 != '\0') {
                        local_36c8 = 0x8220202;
                        local_36c4 = "Assertion failure";
                        local_36bc = 0x822;
                        local_36ba = "outParams.rentalBagSyncData.IsValid()";
                        *(undefined8 *)((long)&local_38 + lVar11) = 0x10051149d;
                        __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)");
                      }
                      *(undefined8 *)((long)&local_38 + lVar11) = 0x100510abb;
                      FUN_1001782e9(0,0);
                      if (DAT_1008c75c0 != -1) {
                        *(undefined8 *)((long)&local_38 + lVar11) = 0x10051166a;
                        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                      }
                      uVar13 = DAT_1008c75b8;
                      *(undefined8 *)((long)&local_38 + lVar11) = 0x100510add;
                      cVar5 = _os_log_type_enabled(DAT_1008c75b8,0x10);
                      if (cVar5 != '\0') {
                        local_36c8 = local_36c8 & 0xffff0000;
                        *(undefined8 *)((long)&local_38 + lVar11) = 0x100510b12;
                        __os_log_impl(0x100000000,uVar13,0x10,
                                      "sync> failed to get Message from RentalBagRequest");
                      }
                    }
                    local_3728 = &cf_DiversityElements;
                    *(undefined8 *)((long)&local_38 + lVar11) = 0x100510b33;
                    FUN_1001a7b90(local_3700,&local_3728);
                    *(undefined8 *)((long)&local_38 + lVar11) = 0x100510b3f;
                    FUN_10032f0f2(local_3780);
                    *(undefined8 *)((long)&local_38 + lVar11) = 0x100510b4e;
                    FUN_10032f0f2(&local_36c8);
                    *(undefined8 *)((long)&local_38 + lVar11) = 0x100510b64;
                    cVar5 = FUN_1001a90d0(&local_36e8,local_3700,&local_36c8);
                    puVar19 = local_3780;
                    if (cVar5 != '\0') {
                      puVar19 = &local_36c8;
                    }
                    *(undefined8 *)((long)&local_38 + lVar11) = 0x100510b79;
                    FUN_1001a7a9e(local_3718,puVar19);
                    *(undefined8 *)((long)&local_38 + lVar11) = 0x100510b81;
                    FUN_1001a7a94(&local_36c8);
                    *(undefined8 *)((long)&local_38 + lVar11) = 0x100510b90;
                    FUN_1001a7b1c(local_3648,local_3718);
                    *(undefined8 *)((long)&local_38 + lVar11) = 0x100510b98;
                    FUN_1001a7a94(local_3718);
                    *(undefined8 *)((long)&local_38 + lVar11) = 0x100510ba4;
                    FUN_1001a7a94(local_3780);
                    *(undefined8 *)((long)&local_38 + lVar11) = 0x100510bb0;
                    FUN_1001ab240(local_3700);
                    if (local_3648[0] == 0) {
                      *(undefined8 *)((long)&local_38 + lVar11) = 0x100510bbf;
                      uVar13 = FUN_1001cc310();
                      *(undefined8 *)((long)&local_38 + lVar11) = 0x100510bcf;
                      cVar5 = _os_log_type_enabled(uVar13,0x10);
                      if (cVar5 != '\0') {
                        local_36c8 = 0x8220202;
                        local_36c4 = "Assertion failure";
                        local_36bc = 0x822;
                        local_36ba = "outParams.rentalDiversityElementIDs.IsValid()";
                        *(undefined8 *)((long)&local_38 + lVar11) = 0x1005114f9;
                        __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)");
                      }
                      *(undefined8 *)((long)&local_38 + lVar11) = 0x100510be0;
                      FUN_1001782e9(0,0);
                      if (DAT_1008c75c0 != -1) {
                        *(undefined8 *)((long)&local_38 + lVar11) = 0x100511682;
                        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                      }
                      uVar13 = DAT_1008c75b8;
                      *(undefined8 *)((long)&local_38 + lVar11) = 0x100510c02;
                      cVar5 = _os_log_type_enabled(DAT_1008c75b8,0x10);
                      if (cVar5 != '\0') {
                        local_36c8 = local_36c8 & 0xffff0000;
                        *(undefined8 *)((long)&local_38 + lVar11) = 0x100510c37;
                        __os_log_impl(0x100000000,uVar13,0x10,
                                      "sync> failed to get DiversityElements from RentalBagRequest")
                        ;
                      }
                    }
                    uVar13 = *(undefined8 *)(local_36d0 + 0x7168);
                    *(undefined8 *)((long)&local_38 + lVar11) = 0x100510c58;
                    iVar7 = FUN_1005c0b97(uVar13,local_3678[0],&local_36c8);
                    if (iVar7 == 0) {
                      *(uint *)(local_36d0 + 0x430) = local_36c8;
                      *(undefined1 *)(local_36d0 + 0x42f) = 1;
                    }
                    *(undefined8 *)((long)&local_38 + lVar11) = 0x100510c82;
                    FUN_1001a8fac(&local_36e8);
LAB_100510f30:
                    *(undefined8 *)((long)&local_38 + lVar11) = 0x100510f3c;
                    FUN_10040eb0a(&local_36e8);
                    if (local_36e8 == 0) {
                      *(undefined8 *)((long)&local_38 + lVar11) = 0x100510f4b;
                      uVar13 = FUN_1001cc310();
                      *(undefined8 *)((long)&local_38 + lVar11) = 0x100510f5b;
                      cVar5 = _os_log_type_enabled(uVar13,0x10);
                      if (cVar5 != '\0') {
                        local_36c8 = 0x8220202;
                        local_36c4 = "Assertion failure (expected to be not NULL)";
                        local_36bc = 0x822;
                        local_36ba = "rentalCheckoutRequest";
                        *(undefined8 *)((long)&local_38 + lVar11) = 0x10051132d;
                        __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)");
                      }
                      *(undefined8 *)((long)&local_38 + lVar11) = 0x100510f6c;
                      cVar5 = FUN_1001782e9(0,0);
                      iVar7 = -0x6c;
                      if (cVar5 != '\0') goto LAB_100510f7a;
                    }
                    else {
LAB_100510f7a:
                      *(undefined8 *)((long)&local_38 + lVar11) = 0x100510f84;
                      sVar6 = FUN_1004744bf(lVar12,0);
                      if (-1 < sVar6) {
                        *(undefined8 *)((long)&local_38 + lVar11) = 0x100510f8e;
                        uVar13 = FUN_1001cc310();
                        *(undefined8 *)((long)&local_38 + lVar11) = 0x100510f9e;
                        cVar5 = _os_log_type_enabled(uVar13,0x10);
                        if (cVar5 != '\0') {
                          local_36c8 = 0x8220202;
                          local_36c4 = "Assertion failure";
                          local_36bc = 0x822;
                          local_36ba = "(mediaKind & kTrackInfoMediaKind_Rental) != 0";
                          *(undefined8 *)((long)&local_38 + lVar11) = 0x1005112d1;
                          __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)");
                        }
                        *(undefined8 *)((long)&local_38 + lVar11) = 0x100510faf;
                        FUN_1001782e9(0,0);
                      }
                      *(undefined8 *)((long)&local_38 + lVar11) = 0x100510fc0;
                      FUN_100154eee(local_36e8,1);
                      lVar2 = local_36e8;
                      *(undefined8 *)((long)&local_38 + lVar11) = 0x100510fcf;
                      uVar13 = FUN_10044b189(lVar12);
                      *(undefined8 *)((long)&local_38 + lVar11) = 0x100510fda;
                      FUN_100154bde(lVar2,uVar13);
                      *(undefined8 *)((long)&local_38 + lVar11) = 0x100510fe9;
                      FUN_100154c50(local_36e8,puVar20);
                      *(undefined8 *)((long)&local_38 + lVar11) = 0x100510ffc;
                      FUN_100154ce0(local_36e8,auStack_3688);
                      *(undefined8 *)((long)&local_38 + lVar11) = 0x10051100f;
                      FUN_100154d40(local_36e8,local_3678);
                      *(undefined8 *)((long)&local_38 + lVar11) = 0x100511022;
                      FUN_100154da0(local_36e8,local_3668);
                      *(undefined8 *)((long)&local_38 + lVar11) = 0x100511035;
                      FUN_100154e00(local_36e8,local_3658);
                      *(undefined8 *)((long)&local_38 + lVar11) = 0x100511048;
                      FUN_100154e60(local_36e8,local_3648);
                      lVar2 = *(long *)(*(long *)(lVar12 + 0x58) + 0x10);
                      if (lVar2 != 0) {
                        uVar13 = *(undefined8 *)(lVar2 + 8);
                        *(undefined8 *)((long)&local_38 + lVar11) = 0x100511065;
                        FUN_10013ef30(local_36e8,uVar13);
                      }
                      plVar1 = plStack_36e0;
                      lVar2 = local_36e8;
                      if (plStack_36e0 != (long *)0x0) {
                        LOCK();
                        plStack_36e0[1] = plStack_36e0[1] + 1;
                        UNLOCK();
                      }
                      uVar10 = *(uint *)(local_36d0 + 0x28);
                      *(undefined8 *)((long)&local_38 + lVar11) = 0x1005110aa;
                      FUN_10031ba20(&uStack_37b4,lVar12);
                      local_36a8 = (uint *)0x0;
                      *(undefined8 *)((long)&local_38 + lVar11) = 0x1005110bf;
                      local_36a8 = operator_new(0x48);
                      *(undefined ***)local_36a8 = &PTR_FUN_10085f760;
                      *(long *)(local_36a8 + 2) = lVar2;
                      *(long **)(local_36a8 + 4) = plVar1;
                      local_36a8[0xe] = local_3798;
                      local_36a8[0xf] = uStack_3794;
                      local_36a8[0x10] = uStack_3790;
                      local_36a8[0x11] = uStack_378c;
                      local_36a8[10] = local_37a8;
                      local_36a8[0xb] = uStack_37a4;
                      local_36a8[0xc] = uStack_37a0;
                      local_36a8[0xd] = uStack_379c;
                      local_36a8[6] = uVar10;
                      local_36a8[7] = uStack_37b4;
                      local_36a8[8] = uStack_37b0;
                      local_36a8[9] = uStack_37ac;
                      *(undefined8 *)((long)&local_38 + lVar11) = 0x100511117;
                      FUN_10015601e(lVar2,&local_36c8);
                      if (local_36a8 == &local_36c8) {
                        lVar12 = 0x20;
LAB_100511134:
                        pcVar3 = *(code **)(*(long *)local_36a8 + lVar12);
                        *(undefined8 *)((long)&local_38 + lVar11) = 0x10051113a;
                        (*pcVar3)();
                      }
                      else {
                        lVar12 = 0x28;
                        if (local_36a8 != (uint *)0x0) goto LAB_100511134;
                      }
                      iVar7 = 0;
                      *(undefined8 *)((long)&local_38 + lVar11) = 0x100511178;
                      FUN_10014105c(local_36e8);
                    }
                    if (plStack_36e0 != (long *)0x0) {
                      LOCK();
                      plVar1 = plStack_36e0 + 1;
                      lVar12 = *plVar1;
                      *plVar1 = *plVar1 + -1;
                      UNLOCK();
                      if (lVar12 == 0) {
                        pcVar3 = *(code **)(*plStack_36e0 + 0x10);
                        *(undefined8 *)((long)&local_38 + lVar11) = 0x10051119f;
                        (*pcVar3)(plStack_36e0);
                        *(undefined8 *)((long)&local_38 + lVar11) = 0x1005111a7;
                        std::__shared_weak_count::__release_weak();
                      }
                    }
                    goto LAB_1005111a7;
                  }
                  *(undefined8 *)((long)&local_38 + lVar11) = 0x100510db3;
                  uVar13 = FUN_1001cc310();
                  *(undefined8 *)((long)&local_38 + lVar11) = 0x100510dc3;
                  cVar5 = _os_log_type_enabled(uVar13,0x10);
                  if (cVar5 != '\0') {
                    local_36c8 = 0x8220202;
                    local_36c4 = "Assertion failure";
                    local_36bc = 0x822;
                    local_36ba = "rentalBagRequestDict != nullptr";
                    *(undefined8 *)((long)&local_38 + lVar11) = 0x100511389;
                    __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)");
                  }
                  *(undefined8 *)((long)&local_38 + lVar11) = 0x100510dd4;
                  FUN_1001782e9(0,0);
                  if (DAT_1008c75c0 != -1) {
                    *(undefined8 *)((long)&local_38 + lVar11) = 0x10051160a;
                    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                  }
                  uVar13 = DAT_1008c75b8;
                  *(undefined8 *)((long)&local_38 + lVar11) = 0x100510df6;
                  cVar5 = _os_log_type_enabled(DAT_1008c75b8,0x10);
                  if (cVar5 != '\0') {
                    local_36c8 = local_36c8 & 0xffff0000;
                    *(undefined8 *)((long)&local_38 + lVar11) = 0x100510e2b;
                    __os_log_impl(0x100000000,uVar13,0x10,"sync> failed to get RentalBagRequest");
                  }
                  *(undefined8 *)((long)&local_38 + lVar11) = 0x100510e37;
                  FUN_1001a8fac(&local_36e8);
LAB_1005111ac:
                  *(undefined8 *)((long)&local_38 + lVar11) = 0x1005111bf;
                  FUN_1004dd69c(local_36d0,"");
                }
                *(undefined8 *)((long)&local_38 + lVar11) = 0x1005111cb;
                FUN_1001a7a94(local_3648);
                *(undefined8 *)((long)&local_38 + lVar11) = 0x1005111d7;
                FUN_1001a85d4(local_3658);
                *(undefined8 *)((long)&local_38 + lVar11) = 0x1005111e3;
                FUN_1001a85d4(local_3668);
                *(undefined8 *)((long)&local_38 + lVar11) = 0x1005111ef;
                FUN_1001a85d4(local_3678);
                *(undefined8 *)((long)&local_38 + lVar11) = 0x1005111fb;
                FUN_1001b7a50(auStack_3688);
LAB_1005111fe:
                *(undefined8 *)((long)&local_38 + lVar11) = 0x100511203;
                FUN_1001b7a50(puVar20);
              }
LAB_100511203:
              bVar22 = true;
            }
            else if (*(char *)(lVar2 + 0x44) == '\x02') {
              if (DAT_1008c75c0 != -1) {
                *(undefined8 *)((long)&local_38 + lVar11) = 0x1005115c2;
                _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
              }
              uVar13 = DAT_1008c75b8;
              *(undefined8 *)((long)&local_38 + lVar11) = 0x100510219;
              cVar5 = _os_log_type_enabled(DAT_1008c75b8,1);
              if (cVar5 != '\0') {
                *(undefined8 *)((long)&local_38 + lVar11) = 0x10051022c;
                FUN_100476ac1(local_3698,lVar12);
                *(undefined8 *)((long)&local_38 + lVar11) = 0x10051023b;
                local_36c4 = (char *)FUN_1001b83ae(local_3698);
                local_36c8 = 0x8220102;
                *(undefined8 *)((long)&local_38 + lVar11) = 0x100510274;
                __os_log_impl(0x100000000,uVar13,1,"setup> deleting expired rental \"%{public}s\"");
                *(undefined8 *)((long)&local_38 + lVar11) = 0x10051027c;
                FUN_1001b7a50(local_3698);
              }
              *(undefined8 *)((long)&local_38 + lVar11) = 0x100510284;
              uVar13 = FUN_1004737f5(lVar12);
              local_36f4 = (uint)CONCAT71((int7)((ulong)uVar13 >> 8),1);
            }
          }
        }
LAB_100511206:
        lVar12 = local_3770;
      } while (local_3770 != 0);
      bVar22 = (char)local_36f4 != '\0';
      *(undefined8 *)((long)&local_38 + lVar11) = 0x10051169d;
      FUN_10017060f(local_36f0);
      *(undefined8 *)((long)&local_38 + lVar11) = 0x1005116a9;
      FUN_10017060f(local_3708);
      if (bVar22) {
        if (local_3760 == (undefined1 *)0x0) {
          uVar13 = *(undefined8 *)(local_36d0 + 0x30);
          *(undefined8 *)((long)&local_38 + lVar11) = 0x100511713;
          FUN_100316867(uVar13,0xf,1);
          uVar13 = *(undefined8 *)(local_36d0 + 0x30);
          *(undefined8 *)((long)&local_38 + lVar11) = 0x100511726;
          FUN_1002fbbfc(uVar13);
        }
        else {
          *local_3760 = 1;
        }
      }
    }
    if (DAT_1008c75c0 != -1) {
      *(undefined8 *)((long)&local_38 + lVar11) = 0x10051181c;
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar13 = DAT_1008c75b8;
    *(undefined8 *)((long)&local_38 + lVar11) = 0x100511748;
    cVar5 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar5 != '\0') {
      *(undefined8 *)((long)&local_38 + lVar11) = 0x100511751;
      dVar4 = (double)FUN_1001ebd46();
      unique0x100008a8 = (dVar4 - local_3758) * _DAT_100708b48;
      local_3698._0_2_ = 0x100;
      local_3698[2] = 0;
      local_3698[3] = 8;
      *(undefined8 *)((long)&local_38 + lVar11) = 0x100511796;
      __os_log_impl(0x100000000,uVar13,1,"perf> UpdateIPodRentalTracks() took %.2f ms",local_3698,
                    0xc);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)((long)&local_38 + lVar11) = &UNK_100511826;
  ___stack_chk_fail();
}

