// name: FUN_100256606
// address: 100256606

int FUN_100256606(long param_1,undefined2 *param_2,char *param_3,undefined8 param_4,
                 undefined8 param_5)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  char cVar4;
  byte bVar5;
  ushort uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  undefined4 *puVar13;
  undefined8 uVar14;
  byte bVar15;
  bool bVar16;
  undefined8 in_stack_fffffffffffffdb8;
  undefined1 local_220 [16];
  undefined4 local_210 [2];
  undefined1 local_208 [8];
  undefined1 local_200 [16];
  undefined1 local_1f0 [16];
  undefined1 local_1e0 [16];
  undefined1 local_1d0 [16];
  undefined1 local_1c0 [16];
  undefined4 local_1b0 [2];
  undefined1 local_1a8 [8];
  int local_1a0 [2];
  undefined1 local_198 [8];
  undefined1 local_190 [16];
  undefined1 local_180 [16];
  undefined8 local_170;
  undefined1 local_168 [16];
  int *local_158;
  int *local_150;
  long local_148;
  int *local_140;
  undefined **local_138;
  undefined8 local_130;
  undefined ***local_118;
  undefined8 local_108;
  undefined4 local_100;
  undefined2 uStack_fc;
  undefined2 uStack_fa;
  undefined2 uStack_f8;
  undefined4 uStack_f6;
  long *local_e8;
  undefined8 local_d8;
  undefined7 uStack_d0;
  undefined4 uStack_c9;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  uint local_a8;
  char *local_a4;
  undefined2 local_9c;
  char *local_9a;
  long local_60 [5];
  long local_38;
  
  uVar9 = (undefined4)((ulong)in_stack_fffffffffffffdb8 >> 0x20);
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_150 = (int *)0x0;
  param_3[8] = '\x01';
  if (param_1 == 0) {
    uVar10 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar10,0x10);
    if (cVar4 != '\0') {
      local_a8 = 0x8220202;
      local_a4 = "Assertion failure";
      local_9c = 0x822;
      local_9a = "handlerData != nullptr";
      __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_a8,0x16);
    }
    FUN_1001782e9(0,0);
    iVar7 = -0x32;
    goto LAB_100256b95;
  }
  FUN_1004e17a4();
  cVar4 = FUN_100247cdd(*(undefined4 *)(param_1 + 0x66b0));
  if (cVar4 == '\0') {
    local_170 = param_5;
    lVar11 = FUN_100279b99();
    iVar7 = 0;
    if (*(char *)(lVar11 + 0x1b) == '\0') {
      local_a8 = local_a8 & 0xffffff00;
      FUN_1004de771(FUN_10025b287);
      bVar15 = (byte)local_a8;
      plVar12 = (long *)FUN_10039a28c();
      bVar5 = (**(code **)(*plVar12 + 0x28))(plVar12,0,0,0,0);
      iVar7 = -0x80;
      if (((bVar5 | bVar15) & 1) == 0) {
        cVar4 = FUN_100266cae(*(undefined8 *)(param_1 + 0x66d8));
        if (cVar4 == '\0') {
          FUN_100249c30(&local_a8);
          local_1a0[0] = 0;
          FUN_1001c62d9(local_198,8);
          FUN_100255ad1(param_1);
          uVar3 = *(undefined4 *)(param_1 + 0x66b0);
          uVar10 = FUN_1004de449(*(undefined4 *)(param_1 + 0x28));
          uVar10 = FUN_100501f71(uVar10);
          local_108._0_4_ = (undefined4)uVar10;
          local_108._4_4_ = (undefined4)((ulong)uVar10 >> 0x20);
          FUN_1001b7eb0(local_220,uVar10);
          cVar4 = FUN_1002669ba(*(undefined8 *)(param_1 + 0x66d8));
          iVar7 = FUN_100255c63(uVar3,local_220,cVar4 != '\0',*(undefined4 *)(param_1 + 0x284),
                                *(undefined8 *)(param_1 + 0x61e8),*(undefined4 *)(param_1 + 0x61f0),
                                CONCAT44(uVar9,*(undefined4 *)(param_1 + 0x61f4)),param_1 + 0x58,
                                &local_a8,local_1a0,0);
          FUN_1001b7a50(local_220);
          FUN_10016d588(&local_108);
          if (iVar7 == 0) {
            if ((*(int *)(param_1 + 0x66b0) != 0x6950686e) ||
               (cVar4 = FUN_10024bc99(0), cVar4 == '\0')) {
LAB_100256d06:
              iVar7 = FUN_1002537af(&local_a8,local_1a0,1,0,&local_150);
              if (iVar7 == 0) {
                local_1b0[0] = 0;
                FUN_1001c62d9(local_1a8,8);
                local_210[0] = 0;
                FUN_1001c62d9(local_208,8);
                FUN_1001b7a44(local_168);
                FUN_1001b7a44(local_200);
                FUN_1001b7a44(local_1c0);
                FUN_1001b7a44(local_1f0);
                FUN_1001b7a44(local_1e0);
                if (*param_3 == '\0') {
                  plVar12 = (long *)FUN_10039a28c();
                  uVar10 = (**(code **)(*plVar12 + 0x50))(plVar12);
                  plVar12 = (long *)FUN_10039c4fa(uVar10,1,*(undefined8 *)(local_150 + 0x36),
                                                  *(undefined8 *)(local_150 + 0x10));
                  if ((plVar12 == (long *)0x0) ||
                     (lVar11 = (**(code **)(*plVar12 + 0x50))(plVar12),
                     (int)lVar11 == *(int *)(param_1 + 0x28))) {
                    plVar12 = (long *)FUN_10039a28c();
                    uVar14 = (**(code **)(*plVar12 + 0x50))(plVar12);
                    uVar10 = *(undefined8 *)(local_150 + 0x36);
                    local_108._0_4_ = 0x83f010;
                    local_108._4_4_ = 1;
                    local_100 = (undefined4)uVar10;
                    uStack_fc = (undefined2)((ulong)uVar10 >> 0x20);
                    uStack_fa = (undefined2)((ulong)uVar10 >> 0x30);
                    local_e8 = &local_108;
                    lVar11 = FUN_10039c40c(uVar14);
                    bVar16 = true;
                    if (lVar11 == 0) {
                      plVar12 = (long *)FUN_10039a28c();
                      uVar10 = (**(code **)(*plVar12 + 0x50))(plVar12);
                      local_130 = *(undefined8 *)(local_150 + 0x10);
                      local_138 = &PTR_FUN_10083f010;
                      local_118 = &local_138;
                      lVar11 = FUN_10039c40c(uVar10,&local_138);
                      bVar16 = lVar11 != 0;
                      if (local_118 == &local_138) {
                        lVar11 = 0x20;
                      }
                      else {
                        lVar11 = 0x28;
                        if (local_118 == (undefined ***)0x0) goto LAB_10025765a;
                      }
                      (**(code **)((long)*local_118 + lVar11))();
                    }
LAB_10025765a:
                    if (local_e8 == &local_108) {
                      lVar11 = 0x20;
LAB_10025767e:
                      lVar11 = (**(code **)(*local_e8 + lVar11))();
                    }
                    else {
                      lVar11 = 0x28;
                      if (local_e8 != (long *)0x0) goto LAB_10025767e;
                    }
                    if (!bVar16) goto LAB_100256daf;
                  }
                  iVar7 = -0x80;
                  local_140 = (int *)CONCAT44(local_140._4_4_,
                                              (int)CONCAT71((int7)((ulong)lVar11 >> 8),1));
LAB_10025769e:
                  local_148 = 0;
LAB_1002576a9:
                  bVar16 = false;
                  bVar15 = 0;
                }
                else {
LAB_100256daf:
                  if (local_1a0[0] == 0x73766d64) {
                    uVar10 = *(undefined8 *)PTR__kCFAllocatorNull_10082e028;
                    local_148 = FUN_1001734f5(DAT_1008c4d90,param_1 + 0x14db4,0x600,uVar10);
                    if (local_148 == 0) {
                      uVar10 = FUN_1001cc310();
LAB_10025760d:
                      cVar4 = _os_log_type_enabled(uVar10,0x10);
                      if (cVar4 != '\0') {
                        local_108._0_4_ = 0x8220202;
                        local_108._4_4_ = 0x7a0a90;
                        local_100 = 1;
                        uStack_fc = 0x822;
                        uStack_fa = 0x4ac7;
                        uStack_f8 = 0x7b;
                        uStack_f6 = 1;
                        __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",
                                            &local_108,0x16);
                      }
                      uVar10 = FUN_1001782e9(0,0);
                      iVar7 = -0x6c;
                      local_140 = (int *)CONCAT44(local_140._4_4_,
                                                  (int)CONCAT71((int7)((ulong)uVar10 >> 8),1));
                      goto LAB_10025769e;
                    }
                    local_108._0_4_ = 0x73766d64;
                    uVar14 = FUN_1001705fc();
                    local_100 = (undefined4)uVar14;
                    uStack_fc = (undefined2)((ulong)uVar14 >> 0x20);
                    uStack_fa = (undefined2)((ulong)uVar14 >> 0x30);
                    FUN_100249f2c(local_1b0);
                    FUN_100249fca(&local_108);
                    if (*(int *)(param_1 + 0x284) == 0x2711) {
                      FUN_10017060f(local_148);
                      local_148 = FUN_1001734f5(DAT_1008c4d90,param_1 + 0x15190,0x600,uVar10);
                      if (local_148 == 0) {
                        uVar10 = FUN_1001cc310();
                        goto LAB_10025760d;
                      }
                      local_108._0_4_ = 0x73766d64;
                      uVar10 = FUN_1001705fc();
                      local_100 = (undefined4)uVar10;
                      uStack_fc = (undefined2)((ulong)uVar10 >> 0x20);
                      uStack_fa = (undefined2)((ulong)uVar10 >> 0x30);
                      FUN_100249f2c(local_210);
                      FUN_100249fca(&local_108);
                    }
                  }
                  else {
                    local_108._0_4_ = 0x73766970;
                    local_100 = *(undefined4 *)(param_1 + 0x14d44);
                    FUN_100249f2c(local_1b0);
                    FUN_100249fca(&local_108);
                    local_148 = 0;
                  }
                  FUN_100249f90(local_150 + 0x1a);
                  if (*local_150 - 1U < 2) {
                    cVar4 = FUN_10024ab23(local_150 + 0x3e,local_1b0);
                    local_140 = local_150;
                    if ((cVar4 != '\0') || (*param_3 == '\x01')) {
                      uVar10 = FUN_100416f20(*(undefined4 *)(param_1 + 0x66b0),0x10cc00ce);
                      FUN_1001b7eb0(&local_138,uVar10);
                      piVar2 = local_140 + 0x42;
                      FUN_10024a49a(local_190,piVar2);
                      FUN_1004fdbd0(local_180,param_1);
                      FUN_1001bbf68(&local_108,&local_138,local_190,local_180);
                      FUN_1001b80b2(local_168,&local_108);
                      FUN_1001b7a50(&local_108);
                      FUN_1001b7a50(local_180);
                      FUN_1001b7a50(local_190);
                      FUN_1001b7a50(&local_138);
                      FUN_1001c334a(&local_108,0x10cf000d);
                      FUN_1001b80b2(local_1c0,&local_108);
                      FUN_1001b7a50(&local_108);
                      FUN_1001c334a(&local_108,0x232c0001);
                      FUN_1001b80b2(local_1e0,&local_108);
                      local_140 = local_140 + 0x3e;
                      local_158 = piVar2;
                      goto LAB_100257271;
                    }
LAB_100257286:
                    local_158 = (int *)0x0;
                    local_140 = (int *)0x0;
                  }
                  else {
                    if ((*local_150 != 3) ||
                       ((cVar4 = FUN_10024ab23(local_150 + 6,local_1b0), local_140 = local_150,
                        cVar4 == '\0' && (*param_3 != '\x01')))) goto LAB_100257286;
                    uVar10 = FUN_100416f20(*(undefined4 *)(param_1 + 0x66b0),0x10cc00cf);
                    FUN_1001b7eb0(&local_138,uVar10);
                    piVar2 = local_140 + 10;
                    FUN_10024a49a(local_190,piVar2);
                    FUN_1004fdbd0(local_180,param_1);
                    FUN_1001bbf68(&local_108,&local_138,local_190,local_180);
                    FUN_1001b80b2(local_168,&local_108);
                    FUN_1001b7a50(&local_108);
                    FUN_1001b7a50(local_180);
                    FUN_1001b7a50(local_190);
                    FUN_1001b7a50(&local_138);
                    FUN_1001c334a(&local_108,0x10cf000b);
                    FUN_1001b80b2(local_1c0,&local_108);
                    FUN_1001b7a50(&local_108);
                    FUN_1001c334a(&local_108,0x10cf000c);
                    FUN_1001b80b2(local_1f0,&local_108);
                    local_140 = local_140 + 6;
                    local_158 = piVar2;
LAB_100257271:
                    FUN_1001b7a50(&local_108);
                  }
                  cVar4 = FUN_1001b8428(local_168);
                  if ((((cVar4 == '\0') &&
                       (cVar4 = FUN_100266bdc(*(undefined8 *)(param_1 + 0x66d8)), cVar4 != '\0')) &&
                      ((char)local_150[4] == '\x01')) && ((char)local_150[0x17] == '\x01')) {
                    FUN_1001c334a(&local_108,0x10cf0029);
                    FUN_1001b80b2(local_200,&local_108);
                    FUN_1001b7a50(&local_108);
                  }
                  cVar4 = FUN_1001b8428(local_168);
                  bVar15 = 0;
                  iVar7 = 0;
                  if (cVar4 == '\0') {
                    FUN_100266bdc(*(undefined8 *)(param_1 + 0x66d8));
                    param_3[8] = '\0';
                    if ((param_3[4] == '\x01') && (cVar4 = FUN_1002482fd(), cVar4 == '\0')) {
                      uVar9 = *(undefined4 *)(param_1 + 0x28);
                      uVar3 = *(undefined4 *)(param_1 + 0x66b0);
                      if (local_158 == (int *)0x0) {
                        FUN_1001b7a44(local_1d0);
                      }
                      else {
                        FUN_10024a49a(local_1d0);
                      }
                      cVar4 = FUN_100257ca7(uVar9,uVar3,local_1d0);
                      FUN_1001b7a50(local_1d0);
                      bVar15 = 0;
                      iVar7 = 0;
                      if (cVar4 == '\0') {
                        uVar10 = FUN_1001cc310();
                        cVar4 = _os_log_type_enabled(uVar10,0x10);
                        if (cVar4 != '\0') {
                          local_108._0_4_ = 0x8220202;
                          local_108._4_4_ = 0x7a0a90;
                          local_100 = 1;
                          uStack_fc = 0x822;
                          uStack_fa = 0x4aef;
                          uStack_f8 = 0x7b;
                          uStack_f6 = 1;
                          __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",
                                              &local_108,0x16);
                        }
                        bVar15 = 0;
                        FUN_1001782e9(0,0);
                        iVar7 = 0;
                      }
                    }
                    else {
                      cVar4 = FUN_1001b8428(local_168);
                      bVar15 = 0;
                      iVar7 = 0;
                      if (cVar4 == '\0' && param_3[2] == '\0') {
                        uVar6 = FUN_100257f5e(param_1,*param_3,local_168,local_200,local_1c0,
                                              local_1f0,local_1e0,local_140,param_1 + 0x14db4);
                        if ((uVar6 | 2) == 3) {
                          puVar13 = (undefined4 *)FUN_1001c629e(0x18,&DAT_100711c6e);
                          if (puVar13 == (undefined4 *)0x0) {
                            uVar10 = FUN_1001cc310();
                            cVar4 = _os_log_type_enabled(uVar10,0x10);
                            if (cVar4 != '\0') {
                              local_108._0_4_ = 0x8220202;
                              local_108._4_4_ = 0x7a0a90;
                              local_100 = 1;
                              uStack_fc = 0x822;
                              uStack_fa = 0x4b9e;
                              uStack_f8 = 0x7b;
                              uStack_f6 = 1;
                              __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)"
                                                  ,&local_108,0x16);
                            }
                            uVar10 = FUN_1001782e9(0,0);
                            iVar7 = -0x6c;
                            local_140 = (int *)CONCAT44(local_140._4_4_,
                                                        (int)CONCAT71((int7)((ulong)uVar10 >> 8),1))
                            ;
                            goto LAB_1002576a9;
                          }
                          local_140 = (int *)CONCAT71(local_140._1_7_,uVar6 == 3);
                          *(undefined2 *)((long)puVar13 + 10) = 2;
                          *(undefined1 *)(puVar13 + 3) = 0;
                          *puVar13 = 0x75646170;
                          puVar13[1] = *(undefined4 *)(param_1 + 0x28);
                          *(char *)(puVar13 + 2) = *param_3;
                          *(bool *)((long)puVar13 + 9) = uVar6 == 3;
                          if (param_2 != (undefined2 *)0x0) {
                            *(undefined1 *)(puVar13 + 3) = *(undefined1 *)(param_2 + 1);
                            *(undefined2 *)((long)puVar13 + 10) = *param_2;
                          }
                          *(int **)(puVar13 + 4) = local_150;
                          local_150 = (int *)0x0;
                          if (*(int *)(param_1 + 0x15800) != 0) {
                            uVar10 = FUN_1001cc310();
                            cVar4 = _os_log_type_enabled(uVar10,0x10);
                            if (cVar4 != '\0') {
                              local_108._0_4_ = 0x8220202;
                              local_108._4_4_ = 0x7a0a90;
                              local_100 = 1;
                              uStack_fc = 0x822;
                              uStack_fa = 0x4bb6;
                              uStack_f8 = 0x7b;
                              uStack_f6 = 1;
                              __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)"
                                                  ,&local_108,0x16);
                            }
                            FUN_1001782e9(0,0);
                          }
                          uVar9 = FUN_1001ea5dc();
                          *(undefined4 *)(param_1 + 0x15800) = uVar9;
                          DAT_1008c7590 = DAT_1008c7590 + 1;
                          FUN_100258303(uVar9,puVar13);
                          param_3[6] = uVar6 == 1;
                          param_3[7] = (char)local_140;
                          bVar15 = 0;
                          iVar7 = 0;
                        }
                        else {
                          iVar7 = -0x80;
                          bVar15 = 1;
                        }
                      }
                    }
                  }
                  bVar5 = FUN_1001b8428(local_168);
                  bVar15 = bVar15 | bVar5;
                  bVar16 = true;
                  local_140 = (int *)((ulong)local_140 & 0xffffffff00000000);
                }
                FUN_1001b7a50(local_1e0);
                FUN_1001b7a50(local_1f0);
                FUN_1001b7a50(local_1c0);
                FUN_1001b7a50(local_200);
                FUN_1001b7a50(local_168);
                FUN_100249fca(local_210);
                FUN_100249fca(local_1b0);
                lVar11 = local_148;
                if (bVar16) goto LAB_1002577cd;
                FUN_100249fca(local_1a0);
                FUN_100249ea6(&local_a8);
                lVar11 = local_148;
                if ((char)local_140 == '\0') goto LAB_100256b8d;
              }
              else {
                bVar15 = 0;
                lVar11 = 0;
LAB_1002577cd:
                FUN_100249fca(local_1a0);
                FUN_100249ea6(&local_a8);
                if (bVar15 != 0) goto LAB_10025673a;
              }
              goto LAB_100256b02;
            }
            if (*(char *)(param_1 + 0x6352) == '\0') {
              local_148 = param_1 + 0x6352;
              iVar7 = FUN_10024ae56(&local_a8,param_1 + 0x6250,*(undefined1 *)(param_1 + 0x151f8),
                                    *param_3,param_1 + 0x6230,param_1 + 0x144,local_60,param_4);
              if (iVar7 != -0x80) {
                if (iVar7 == 0) {
                  cVar4 = FUN_10017393c(local_60[0],local_148,0x100,0x8000100);
                  if (cVar4 == '\0') {
                    uVar10 = FUN_1001cc310();
                    cVar4 = _os_log_type_enabled(uVar10,0x10);
                    if (cVar4 != '\0') {
                      local_108._0_4_ = 0x8220202;
                      local_108._4_4_ = 0x7a0a90;
                      local_100 = 1;
                      uStack_fc = 0x822;
                      uStack_fa = 0x49d7;
                      uStack_f8 = 0x7b;
                      uStack_f6 = 1;
                      __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",
                                          &local_108,0x16);
                    }
                    FUN_1001782e9(0,0);
                  }
                  local_108._0_4_ = 0x83c1d0;
                  local_108._4_4_ = 1;
                  local_100 = 0x257c80;
                  uStack_fc = 1;
                  uStack_fa = 0;
                  local_e8 = &local_108;
                  local_d8 = 0;
                  uStack_d0 = 0;
                  uStack_c9 = 0;
                  local_c0 = 0;
                  uStack_b8 = 0;
                  local_b0 = 0;
                  FUN_10017869a();
                  FUN_100133f06(&local_108);
                  goto LAB_100256d06;
                }
                if (*param_3 != '\0') {
                  uVar10 = FUN_1001cc310();
                  cVar4 = _os_log_type_enabled(uVar10,0x10);
                  if (cVar4 != '\0') {
                    local_108._0_4_ = 0x8220202;
                    local_108._4_4_ = 0x7a0a90;
                    local_100 = 1;
                    uStack_fc = 0x822;
                    uStack_fa = 0x4998;
                    uStack_f8 = 0x7b;
                    uStack_f6 = 1;
                    __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",
                                        &local_108,0x16);
                  }
                  FUN_1001782e9(0,0);
                }
              }
            }
            else {
              local_60[0] = FUN_100172473(DAT_1008c4d90,param_1 + 0x6352,0x8000100);
              if (local_60[0] != 0) goto LAB_100256d06;
              uVar10 = FUN_1001cc310();
              cVar4 = _os_log_type_enabled(uVar10,0x10);
              if (cVar4 != '\0') {
                local_108._0_4_ = 0x8220202;
                local_108._4_4_ = 0x7a0a90;
                local_100 = 1;
                uStack_fc = 0x822;
                uStack_fa = 0x4a8a;
                uStack_f8 = 0x7b;
                uStack_f6 = 1;
                __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_108,
                                    0x16);
              }
              iVar7 = -0x6c;
              FUN_1001782e9(0,0);
            }
          }
          else {
            uVar10 = FUN_1001cc310();
            cVar4 = _os_log_type_enabled(uVar10,0x10);
            if (cVar4 != '\0') {
              local_108._0_4_ = 0x8220202;
              local_108._4_4_ = 0x7a0a90;
              local_100 = 1;
              uStack_fc = 0x400;
              uStack_fa = (undefined2)iVar7;
              uStack_f8 = (undefined2)((uint)iVar7 >> 0x10);
              __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: err == (%d)",&local_108,0x12)
              ;
            }
          }
          FUN_100249fca(local_1a0);
          FUN_100249ea6(&local_a8);
          lVar11 = 0;
        }
        else {
          iVar7 = 0;
          lVar11 = 0;
LAB_10025673a:
          if (((*(int *)(param_1 + 0x66b0) == 0x6950686e) ||
              (*(int *)(param_1 + 0x66b0) == 0x69506164)) && (*(char *)(param_1 + 0x386) != '\0')) {
            local_148 = lVar11;
            puVar13 = (undefined4 *)FUN_1001c629e(0x20,&DAT_100711c6e);
            if (puVar13 == (undefined4 *)0x0) {
              local_140 = (int *)FUN_1001cc310();
              cVar4 = _os_log_type_enabled(local_140,0x10);
              if (cVar4 != '\0') {
                local_a8 = 0x8220202;
                local_a4 = "Assertion failure (expected to be not NULL)";
                local_9c = 0x822;
                local_9a = "context";
                __os_log_error_impl(0x100000000,local_140,0x10,"%{public}s: (%{public}s)",&local_a8,
                                    0x16);
              }
              cVar4 = FUN_1001782e9(0,0);
              local_140 = (int *)CONCAT44(local_140._4_4_,0xffffff94);
              if (cVar4 != '\0') goto LAB_100256a15;
            }
            else {
              *(undefined8 *)(puVar13 + 2) = 0;
              *(undefined8 *)(puVar13 + 4) = 0;
LAB_100256a15:
              *puVar13 = *(undefined4 *)(param_1 + 0x28);
              *(char *)(puVar13 + 1) = *param_3;
              *(char *)((long)puVar13 + 5) = param_3[5];
              FUN_100203686(puVar13 + 2,local_170);
              if (*param_3 == '\x01') {
                iVar8 = FUN_100258862(0,puVar13);
                local_140 = (int *)CONCAT44(local_140._4_4_,iVar8);
                if ((iVar8 != -0x80) && (iVar8 != 0)) {
                  local_170 = FUN_1001cc310();
                  cVar4 = _os_log_type_enabled(local_170,0x10);
                  if (cVar4 != '\0') {
                    local_a8 = 0x8220202;
                    local_a4 = "Assertion failure";
                    local_9c = 0x400;
                    local_9a = (char *)CONCAT44(local_9a._4_4_,(int)local_140);
                    __os_log_error_impl(0x100000000,local_170,0x10,"%{public}s: err == (%d)",
                                        &local_a8,0x12);
                  }
                }
                param_3[9] = *(char *)(puVar13 + 6);
                param_3[0xb] = *(char *)((long)puVar13 + 0x19);
                FUN_100205d70(puVar13 + 2);
                operator_delete(puVar13);
              }
              else {
                iVar8 = FUN_1005b9808(*(undefined8 *)(param_1 + 0x7168),0x15,0,FUN_100258b63,puVar13
                                     );
                local_140 = (int *)CONCAT44(local_140._4_4_,iVar8);
                if ((iVar8 != -0x80) && (iVar8 != 0)) {
                  uVar10 = FUN_1001cc310();
                  cVar4 = _os_log_type_enabled(uVar10,0x10);
                  if (cVar4 != '\0') {
                    local_a8 = 0x8220202;
                    local_a4 = "Assertion failure";
                    local_9c = 0x400;
                    local_9a = (char *)CONCAT44(local_9a._4_4_,iVar8);
                    __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: err == (%d)",&local_a8,
                                        0x12);
                  }
                }
              }
            }
            lVar11 = local_148;
            if (iVar7 == 0) {
              iVar7 = (int)local_140;
            }
          }
        }
LAB_100256b02:
        FUN_10017060f(lVar11);
        piVar2 = local_150;
        if (local_150 != (int *)0x0) {
          piVar1 = local_150 + 0x25e;
          FUN_100249fee(local_150 + 0x262);
          FUN_100249fca(piVar1);
          FUN_100249fee(piVar2 + 0x152);
          FUN_100249fca(piVar2 + 0x14e);
          FUN_100249fee(piVar2 + 0x42);
          FUN_100249fca(piVar2 + 0x3e);
          FUN_10024f3ba(piVar2 + 0x2c);
          FUN_10024f3ba(piVar2 + 0x1a);
          FUN_10024f3ba(piVar2 + 6);
          operator_delete(piVar2);
        }
      }
    }
  }
  else {
    uVar10 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar10,0x10);
    if (cVar4 != '\0') {
      local_a8 = 0x8220202;
      local_a4 = "Assertion failure";
      local_9c = 0x822;
      local_9a = "IsSoftwareRestoreOnlyDeviceClass(handlerData->deviceClass) == false";
      __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_a8,0x16);
    }
    iVar7 = -0x32;
    FUN_1001782e9(0,0);
  }
LAB_100256b8d:
  FUN_1004e1e68(param_1);
LAB_100256b95:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar7;
}

