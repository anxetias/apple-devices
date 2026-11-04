// name: FUN_100562d07
// address: 100562d07

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_100562d07(undefined4 param_1,undefined4 param_2,undefined8 param_3,uint param_4,uint param_5
                 ,long param_6,long param_7,byte param_8)

{
  undefined1 (*pauVar1) [16];
  uint uVar2;
  long *plVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  bool bVar7;
  uint5 uVar8;
  byte bVar9;
  void *pvVar10;
  char cVar11;
  undefined2 uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  undefined8 *puVar20;
  long *plVar21;
  long lVar22;
  byte *pbVar23;
  byte *pbVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  char *pcVar27;
  short sVar28;
  ulong uVar29;
  undefined8 *puVar30;
  long *plVar31;
  byte *pbVar32;
  ulong uVar33;
  byte *pbVar34;
  undefined8 *puVar35;
  undefined8 *puVar36;
  float fVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 local_1c28 [16];
  undefined1 local_1c18 [16];
  long local_1c08;
  undefined8 uStack_1c00;
  undefined8 local_1bf8;
  undefined8 uStack_1bf0;
  undefined1 local_1ba8 [16];
  undefined1 local_1b98 [16];
  undefined1 local_1b88 [16];
  long local_1b78;
  undefined8 uStack_1b70;
  undefined1 local_1b68 [16];
  uint local_1b58;
  uint local_1b54;
  undefined4 local_1b50;
  undefined4 local_1b4c;
  long local_1b48;
  void *local_1b40;
  undefined1 local_1b38 [16];
  ulong local_1b28;
  byte *local_1b20;
  undefined1 local_1b18 [16];
  undefined1 local_1b08 [16];
  long local_1af8 [2];
  undefined1 local_1ae8 [16];
  undefined8 local_1ad8;
  long *local_1ad0;
  undefined4 local_1ac8 [4];
  long local_1ab8;
  undefined8 *local_1ab0;
  undefined8 *local_1aa8;
  undefined4 local_1a9c;
  undefined4 *local_1a98;
  void *local_1a90;
  undefined8 local_1a88;
  long *local_1a80;
  undefined8 local_1a78;
  byte *local_1a70;
  long *local_1a68;
  uint local_1a5c;
  undefined8 local_1a58;
  undefined4 uStack_1a50;
  undefined2 uStack_1a4c;
  undefined1 uStack_1a4a;
  char cStack_1a49;
  undefined2 uStack_1a48;
  undefined4 uStack_1a46;
  undefined2 uStack_1a42;
  int local_1a40;
  uint local_1a3c;
  byte local_1a38;
  long local_1a30;
  long lStack_1a28;
  byte local_1a20;
  byte local_1a1f;
  byte local_1a1e;
  byte local_1a1d;
  undefined1 local_1a18 [16];
  undefined1 local_1a08 [16];
  undefined1 local_19f8 [16];
  undefined1 local_19e8 [16];
  undefined1 local_19d8 [16];
  undefined4 local_19c8;
  char *local_19c4;
  undefined2 local_19bc;
  int local_19ba;
  uint local_19a8;
  uint uStack_19a4;
  undefined4 uStack_19a0;
  undefined2 uStack_199c;
  undefined2 uStack_199a;
  undefined2 uStack_1998;
  undefined4 uStack_1996;
  uint local_17a8;
  uint uStack_17a4;
  uint uStack_17a0;
  undefined2 uStack_179c;
  undefined2 uStack_179a;
  undefined1 uStack_1798;
  undefined1 uStack_1797;
  undefined4 uStack_1796;
  undefined2 uStack_1792;
  undefined8 local_1790;
  undefined8 uStack_1788;
  undefined1 local_1780 [768];
  uint local_1480;
  undefined1 local_1478 [16];
  undefined1 local_1468 [5114];
  char local_6e;
  undefined1 local_5c;
  undefined4 local_4c;
  ulong local_48;
  undefined8 local_40;
  long local_38;
  undefined8 extraout_XMM0_Qb;
  
  local_40 = 0x100562d1f;
  local_1a5c = param_5;
  auVar41 = FUN_100108310();
  local_1ab0 = auVar41._8_8_;
  lVar4 = -auVar41._0_8_;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_1ab8 = param_6;
  if ((local_1a5c >> 10 & 1) != 0) {
    if (DAT_1008c2600 != -1) {
      *(undefined8 *)((long)&local_38 + lVar4) = 0x100566cd2;
      _dispatch_once_f(&DAT_1008c2600,(void *)0x0,FUN_10056177b);
    }
    if (DAT_1008c2608 != '\x01') {
      *(undefined8 *)((long)&local_38 + lVar4) = 0x100564681;
      uVar17 = FUN_1001cc310();
      *(undefined8 *)((long)&local_38 + lVar4) = 0x100564691;
      cVar11 = _os_log_type_enabled(uVar17,0x10);
      if (cVar11 != '\0') {
        local_17a8 = 0x8220202;
        uStack_17a4 = 0x7a0a90;
        uStack_17a0 = 1;
        uStack_179c = 0x822;
        uStack_179a = 0x80b5;
        uStack_1798 = 0x7e;
        uStack_1797 = 0;
        uStack_1796 = 1;
        *(undefined8 *)((long)&local_38 + lVar4) = 0x100566b2f;
        __os_log_error_impl(0x100000000,uVar17,0x10,"%{public}s: (%{public}s)",&local_17a8,0x16);
      }
      *(undefined8 *)((long)&local_38 + lVar4) = 0x1005646a2;
      FUN_1001782e9(0,0);
      iVar13 = -0x32;
      goto LAB_1005646e3;
    }
    param_4 = param_4 & 0xffffff9f;
    *(undefined1 *)(param_7 + 0x1429) = 0;
  }
  local_1b20 = (byte *)CONCAT44(local_1b20._4_4_,param_4);
  local_1b58 = ~param_4 & 2;
  local_1b54 = local_1a5c;
  local_1aa8 = (undefined8 *)CONCAT44(local_1aa8._4_4_,param_1);
  local_1b48 = local_1ab8;
  local_1b40 = (void *)0x0;
  *(undefined8 *)((long)&local_38 + lVar4) = 0x100562dc9;
  local_1b50 = param_1;
  local_1b4c = param_2;
  local_1a9c = param_2;
  iVar13 = FUN_100410d09();
  if (iVar13 != -0x80) {
    if (iVar13 == 0) {
      uVar14 = *(uint *)((long)local_1b40 + 0x98);
      uVar2 = *(uint *)((long)local_1b40 + 0x9c);
      if (0xfff < uVar14) {
        *(undefined8 *)((long)&local_38 + lVar4) = 0x100562e01;
        uVar17 = FUN_1001cc310();
        *(undefined8 *)((long)&local_38 + lVar4) = 0x100562e11;
        cVar11 = _os_log_type_enabled(uVar17,0x10);
        if (cVar11 != '\0') {
          local_17a8 = 0x8220202;
          uStack_17a4 = 0x7a0a90;
          uStack_17a0 = 1;
          uStack_179c = 0x822;
          uStack_179a = 0x80d6;
          uStack_1798 = 0x7e;
          uStack_1797 = 0;
          uStack_1796 = 1;
          *(undefined8 *)((long)&local_38 + lVar4) = 0x100566bca;
          __os_log_error_impl(0x100000000,uVar17,0x10,"%{public}s: (%{public}s)",&local_17a8,0x16);
        }
        *(undefined8 *)((long)&local_38 + lVar4) = 0x100562e22;
        FUN_1001782e9(0,0);
      }
      if (0xfff < uVar2) {
        *(undefined8 *)((long)&local_38 + lVar4) = 0x100562e30;
        uVar17 = FUN_1001cc310();
        *(undefined8 *)((long)&local_38 + lVar4) = 0x100562e40;
        cVar11 = _os_log_type_enabled(uVar17,0x10);
        if (cVar11 != '\0') {
          local_17a8 = 0x8220202;
          uStack_17a4 = 0x7a0a90;
          uStack_17a0 = 1;
          uStack_179c = 0x822;
          uStack_179a = 0x80ea;
          uStack_1798 = 0x7e;
          uStack_1797 = 0;
          uStack_1796 = 1;
          *(undefined8 *)((long)&local_38 + lVar4) = 0x100566c1b;
          __os_log_error_impl(0x100000000,uVar17,0x10,"%{public}s: (%{public}s)",&local_17a8,0x16);
        }
        *(undefined8 *)((long)&local_38 + lVar4) = 0x100562e51;
        FUN_1001782e9(0,0);
      }
      pvVar10 = local_1b40;
      *(uint *)(param_7 + 0x13c4) = (uVar14 & 0xfff) * 0x1000 + (uVar2 & 0xfff) + 0x9000000;
      *(undefined4 *)(param_7 + 0x1458) = *(undefined4 *)((long)local_1b40 + 0xa0);
      local_1a70 = (byte *)CONCAT44(local_1a70._4_4_,local_1b58);
      if (local_1b58 == 2) {
        *(undefined8 *)((long)&local_38 + lVar4) = 0x100562eb4;
        FUN_1001b7a5c(local_1b38,local_1ab0);
        plVar21 = *(long **)((long)pvVar10 + 0x10);
        if (plVar21 != (long *)0x0) {
          local_1a88 = CONCAT44(local_1a88._4_4_,local_1a5c) & 0xfffffffffffffff7;
          local_1a90 = (void *)((long)pvVar10 + 0x68);
          local_1ad0 = (long *)CONCAT44(local_1ad0._4_4_,
                                        (uint)((byte)(local_1a5c >> 0x10) & 1 |
                                              -1 < (short)local_1a5c));
          local_1ad8 = CONCAT44(local_1ad8._4_4_,local_1a5c) & 0xffffffff00000100;
          local_1a98 = local_1ac8;
          iVar13 = 0;
          local_1a80 = (long *)((ulong)local_1a80 & 0xffffffff00000000);
          do {
            *(undefined8 *)((long)&local_38 + lVar4) = 0x100562f2e;
            FUN_1001b7a5c(local_1b18,plVar21 + 2);
            pbVar34 = (byte *)plVar21[4];
            local_1a78 = plVar21;
            if (pbVar34 == (byte *)0x0) {
              *(undefined8 *)((long)&local_38 + lVar4) = 0x100562fec;
              uVar17 = FUN_1001cc310();
              *(undefined8 *)((long)&local_38 + lVar4) = 0x100562ffc;
              cVar11 = _os_log_type_enabled(uVar17,0x10);
              if (cVar11 != '\0') {
                local_17a8 = 0x8220202;
                uStack_17a4 = 0x7a0a90;
                uStack_17a0 = 1;
                uStack_179c = 0x822;
                uStack_179a = 0x80fe;
                uStack_1798 = 0x7e;
                uStack_1797 = 0;
                uStack_1796 = 1;
                *(undefined8 *)((long)&local_38 + lVar4) = 0x100563bf2;
                __os_log_error_impl(0x100000000,uVar17,0x10,"%{public}s: (%{public}s)",&local_17a8,
                                    0x16);
              }
              *(undefined8 *)((long)&local_38 + lVar4) = 0x10056300d;
              FUN_1001782e9(0,0);
            }
            else {
              *(undefined8 *)((long)&local_38 + lVar4) = 0x100562f61;
              local_1a70 = pbVar34;
              iVar13 = FUN_1001ceb24(local_1ab8,0x696d7074,0,0,0);
              if (iVar13 != 0) {
                if (iVar13 != -0x80) {
                  *(undefined8 *)((long)&local_38 + lVar4) = 0x10056472a;
                  uVar17 = FUN_1001cc310();
                  *(undefined8 *)((long)&local_38 + lVar4) = 0x10056473a;
                  cVar11 = _os_log_type_enabled(uVar17,0x10);
                  if (cVar11 != '\0') {
                    local_17a8 = 0x8220202;
                    uStack_17a4 = 0x7a0a90;
                    uStack_17a0 = 1;
                    uStack_179c = 0x400;
                    uStack_179a = (undefined2)iVar13;
                    uStack_1798 = (undefined1)((uint)iVar13 >> 0x10);
                    uStack_1797 = (undefined1)((uint)iVar13 >> 0x18);
                    *(undefined8 *)((long)&local_38 + lVar4) = 0x100566c65;
                    __os_log_error_impl(0x100000000,uVar17,0x10,"%{public}s: err == (%d)",
                                        &local_17a8,0x12);
                  }
                }
                *(undefined8 *)((long)&local_38 + lVar4) = 0x10056474e;
                FUN_1001b7a50(local_1b18);
                break;
              }
              if ((local_1a5c >> 10 & 1) == 0) {
                uVar33 = *(ulong *)(local_1a70 + 0x18);
                if (uVar33 == 0) {
                  *(undefined8 *)((long)&local_38 + lVar4) = 0x100563715;
                  local_1b28 = uVar33;
                  uVar17 = FUN_1001cc310();
                  goto LAB_100563715;
                }
LAB_10056302d:
                *(ulong *)(local_1a70 + 0x30) = uVar33;
                *(undefined8 *)((long)&local_38 + lVar4) = 0x100563047;
                local_1b28 = uVar33;
                lVar22 = FUN_100567324(local_1a90,uVar33,&local_1b28);
                *(byte **)(lVar22 + 0x28) = local_1a70;
                if (param_8 == 0) {
                  *(undefined8 *)((long)&local_38 + lVar4) = 0x100563064;
                  plVar21 = (long *)FUN_1004985e6(param_7,uVar33);
                  if (plVar21 == (long *)0x0) goto LAB_100563086;
                  *(undefined1 *)(plVar21 + 0x10) = 0;
                  *(undefined1 *)((long)plVar21 + 0x83) = 0;
                  *(undefined8 *)((long)&local_38 + lVar4) = 0x100563084;
                  FUN_100497925(plVar21);
                }
                else {
LAB_100563086:
                  *(undefined8 *)((long)&local_38 + lVar4) = 0x100563091;
                  plVar21 = (long *)FUN_100497d69(param_7,0);
                  if (plVar21 == (long *)0x0) {
                    *(undefined8 *)((long)&local_38 + lVar4) = 0x100563769;
                    uVar17 = FUN_1001cc310();
                    *(undefined8 *)((long)&local_38 + lVar4) = 0x100563779;
                    cVar11 = _os_log_type_enabled(uVar17,0x10);
                    if (cVar11 != '\0') {
                      local_17a8 = 0x8220202;
                      uStack_17a4 = 0x7a0a90;
                      uStack_17a0 = 1;
                      uStack_179c = 0x822;
                      uStack_179a = 0x7b90;
                      uStack_1798 = 0x7b;
                      uStack_1797 = 0;
                      uStack_1796 = 1;
                      *(undefined8 *)((long)&local_38 + lVar4) = 0x10056404b;
                      __os_log_error_impl(0x100000000,uVar17,0x10,"%{public}s: (%{public}s)",
                                          &local_17a8,0x16);
                    }
                    *(undefined8 *)((long)&local_38 + lVar4) = 0x10056378a;
                    FUN_1001782e9(0,0);
                    *(undefined8 *)((long)&local_38 + lVar4) = 0x10056378f;
                    uVar17 = FUN_1001cc310();
                    *(undefined8 *)((long)&local_38 + lVar4) = 0x10056379f;
                    cVar11 = _os_log_type_enabled(uVar17,0x10);
                    iVar13 = -0x6c;
                    if (cVar11 != '\0') {
                      local_17a8 = 0x8220202;
                      uStack_17a4 = 0x7a0a90;
                      uStack_17a0 = 1;
                      uStack_179c = 0x400;
                      uStack_179a = 0xff94;
                      uStack_1798 = 0xff;
                      uStack_1797 = 0xff;
                      *(undefined8 *)((long)&local_38 + lVar4) = 0x100563800;
                      __os_log_error_impl(0x100000000,uVar17,0x10,"%{public}s: err == (%d)",
                                          &local_17a8,0x12);
                    }
                    goto LAB_100563fa2;
                  }
                  *(undefined8 *)((long)&local_38 + lVar4) = 0x1005630a8;
                  FUN_1004987ec(plVar21,uVar33);
                  *(undefined1 *)(plVar21 + 0x10) = 1;
                  *(undefined1 *)(param_7 + 6) = 1;
                }
                *(int *)((long)plVar21 + 0x54) = (int)local_1a80;
                *(undefined8 *)((long)&local_38 + lVar4) = 0x1005630ce;
                uVar17 = FUN_1001b83ae(local_1b18);
                *(undefined8 *)((long)&local_38 + lVar4) = 0x1005630dd;
                uVar16 = FUN_1001b83f0(local_1b18);
                *(undefined8 *)((long)&local_38 + lVar4) = 0x1005630ee;
                cVar11 = FUN_100566fca(uVar17,uVar16,&local_1c08);
                if (cVar11 != '\0') {
                  lVar22 = *(long *)(local_1a70 + 0xb0);
                  local_1a68 = plVar21;
                  if (lVar22 != 0) {
                    lVar19 = 0;
                    while( true ) {
                      *(undefined8 *)((long)&local_38 + lVar4) = 0x10056311f;
                      lVar18 = FUN_10017076e(lVar22);
                      if (lVar18 <= lVar19) break;
                      *(undefined8 *)((long)&local_38 + lVar4) = 0x100563133;
                      lVar18 = FUN_10016499b(lVar22,lVar19);
                      if (lVar18 == 0) {
                        *(undefined8 *)((long)&local_38 + lVar4) = 0x100563230;
                        uVar17 = FUN_1001cc310();
                        *(undefined8 *)((long)&local_38 + lVar4) = 0x100563240;
                        cVar11 = _os_log_type_enabled(uVar17,0x10);
                        if (cVar11 != '\0') {
                          local_17a8 = 0x8220202;
                          uStack_17a4 = 0x7a0a90;
                          uStack_17a0 = 1;
                          uStack_179c = 0x822;
                          uStack_179a = 0x7660;
                          uStack_1798 = 0x7c;
                          uStack_1797 = 0;
                          uStack_1796 = 1;
                          *(undefined8 *)((long)&local_38 + lVar4) = 0x10056337d;
                          __os_log_error_impl(0x100000000,uVar17,0x10,"%{public}s: (%{public}s)",
                                              &local_17a8,0x16);
                        }
                        *(undefined8 *)((long)&local_38 + lVar4) = 0x100563251;
                        FUN_1001782e9(0,0);
                      }
                      else {
                        *(undefined8 *)((long)&local_38 + lVar4) = 0x10056315a;
                        cVar11 = FUN_100167b39(lVar18,&cf_faceKey,&local_19c8,1);
                        if (cVar11 == '\0') {
                          *(undefined8 *)((long)&local_38 + lVar4) = 0x10056325b;
                          uVar17 = FUN_1001cc310();
                          *(undefined8 *)((long)&local_38 + lVar4) = 0x10056326b;
                          cVar11 = _os_log_type_enabled(uVar17,0x10);
                          if (cVar11 != '\0') {
                            local_17a8 = 0x8220202;
                            uStack_17a4 = 0x7a0a90;
                            uStack_17a0 = 1;
                            uStack_179c = 0x822;
                            uStack_179a = 0x826d;
                            uStack_1798 = 0x7e;
                            uStack_1797 = 0;
                            uStack_1796 = 1;
                            *(undefined8 *)((long)&local_38 + lVar4) = 0x1005633d9;
                            __os_log_error_impl(0x100000000,uVar17,0x10,"%{public}s: (%{public}s)",
                                                &local_17a8,0x16);
                          }
                          *(undefined8 *)((long)&local_38 + lVar4) = 0x10056327c;
                          FUN_1001782e9(0,0);
                        }
                        else {
                          *(undefined8 *)((long)&local_38 + lVar4) = 0x10056316e;
                          FUN_1001b7a44(&local_1a58);
                          *(undefined8 *)((long)&local_38 + lVar4) = 0x100563184;
                          cVar11 = FUN_100166e24(lVar18,&cf_rectangle,&local_1a58);
                          if (cVar11 == '\0') {
                            *(undefined8 *)((long)&local_38 + lVar4) = 0x10056318d;
                            uVar17 = FUN_1001cc310();
                            *(undefined8 *)((long)&local_38 + lVar4) = 0x10056319d;
                            cVar11 = _os_log_type_enabled(uVar17,0x10);
                            if (cVar11 != '\0') {
                              local_17a8 = 0x8220202;
                              uStack_17a4 = 0x7a0a90;
                              uStack_17a0 = 1;
                              uStack_179c = 0x822;
                              uStack_179a = 0x82fd;
                              uStack_1798 = 0x7e;
                              uStack_1797 = 0;
                              uStack_1796 = 1;
                              *(undefined8 *)((long)&local_38 + lVar4) = 0x100563435;
                              __os_log_error_impl(0x100000000,uVar17,0x10,"%{public}s: (%{public}s)"
                                                  ,&local_17a8,0x16);
                            }
                            *(undefined8 *)((long)&local_38 + lVar4) = 0x1005631ae;
                            FUN_1001782e9(0,0);
                          }
                          *(undefined8 *)((long)&local_38 + lVar4) = 0x1005631ba;
                          uVar17 = FUN_1001b83ae(&local_1a58);
                          *(undefined8 *)((long)&local_38 + lVar4) = 0x1005631c9;
                          uVar16 = FUN_1001b83f0(&local_1a58);
                          local_19a8 = 0;
                          uStack_19a4 = 0;
                          uStack_19a0 = 0;
                          uStack_199c = 0;
                          uStack_199a = 0;
                          *(undefined8 *)((long)&local_38 + lVar4) = 0x1005631eb;
                          FUN_1001dfaed(uVar17,uVar16,&local_17a8,0x400);
                          *(undefined8 *)((long)&local_38 + lVar4) = 0x10056321c;
                          iVar13 = _sscanf((char *)&local_17a8,"{{%f,%f}, {%f,%f}}",&local_19a8,
                                           &uStack_19a4,&uStack_19a0,&uStack_199c);
                          uVar16 = local_19c8;
                          if (iVar13 == 4) {
                            local_1bf8 = CONCAT44(uStack_19a4,local_19a8);
                            uStack_1bf0 = CONCAT26(uStack_199a,CONCAT24(uStack_199c,uStack_19a0));
                          }
                          else {
                            uStack_1bf0 = 0;
                            local_1bf8 = 0;
                          }
                          *(undefined8 *)((long)&local_38 + lVar4) = 0x1005632b2;
                          uVar12 = FUN_100167cc9(lVar18,&cf_index);
                          *(undefined8 *)((long)&local_38 + lVar4) = 0x1005632c4;
                          FUN_100166c1b(lVar18,&cf_faceTileImagePath);
                          *(undefined8 *)((long)&local_38 + lVar4) = 0x1005632e0;
                          lVar18 = FUN_100497564(local_1a68,uVar16,uVar12,&local_1bf8);
                          if (lVar18 == 0) {
                            *(undefined8 *)((long)&local_38 + lVar4) = 0x1005632ea;
                            uVar17 = FUN_1001cc310();
                            *(undefined8 *)((long)&local_38 + lVar4) = 0x1005632fa;
                            cVar11 = _os_log_type_enabled(uVar17,0x10);
                            if (cVar11 != '\0') {
                              local_17a8 = 0x8220202;
                              uStack_17a4 = 0x7a0a90;
                              uStack_17a0 = 1;
                              uStack_179c = 0x822;
                              uStack_179a = 0x839a;
                              uStack_1798 = 0x7e;
                              uStack_1797 = 0;
                              uStack_1796 = 1;
                              *(undefined8 *)((long)&local_38 + lVar4) = 0x100563491;
                              __os_log_error_impl(0x100000000,uVar17,0x10,"%{public}s: (%{public}s)"
                                                  ,&local_17a8,0x16);
                            }
                            *(undefined8 *)((long)&local_38 + lVar4) = 0x10056330b;
                            FUN_1001782e9(0,0);
                          }
                          *(undefined8 *)((long)&local_38 + lVar4) = 0x100563317;
                          FUN_1001b7a50(&local_1a58);
                          plVar21 = local_1a68;
                        }
                      }
                      lVar19 = lVar19 + 1;
                    }
                  }
                  local_1b78 = local_1c08;
                  uStack_1b70 = uStack_1c00;
                  *(undefined8 *)((long)&local_38 + lVar4) = 0x1005634ff;
                  FUN_1005673d2(&local_1a58);
                  *(undefined8 *)((long)&local_38 + lVar4) = 0x10056350b;
                  FUN_1001b7a50(local_19d8);
                  *(undefined8 *)((long)&local_38 + lVar4) = 0x100563517;
                  FUN_1001b7a50(local_19e8);
                  *(undefined8 *)((long)&local_38 + lVar4) = 0x100563523;
                  FUN_1001b7a50(local_19f8);
                  *(undefined8 *)((long)&local_38 + lVar4) = 0x10056352f;
                  FUN_1001b7a50(local_1a08);
                  *(undefined8 *)((long)&local_38 + lVar4) = 0x10056353b;
                  FUN_1001b7a50(local_1a18);
                  *(undefined8 *)((long)&local_38 + lVar4) = 0x100563548;
                  FUN_1001c62d9(&local_1a58,0x90);
                  pbVar34 = local_1a70;
                  *(undefined8 *)((long)&local_38 + lVar4) = 0x100563557;
                  FUN_1005673d2(&local_1a58);
                  local_1a58._0_4_ = (uint)local_1b78;
                  local_1a58._4_4_ = (uint)((ulong)local_1b78 >> 0x20);
                  uStack_1a50 = (undefined4)uStack_1b70;
                  uStack_1a4c = (undefined2)((ulong)uStack_1b70 >> 0x20);
                  uStack_1a4a = (undefined1)((ulong)uStack_1b70 >> 0x30);
                  cStack_1a49 = (char)((ulong)uStack_1b70 >> 0x38);
                  uStack_1a48 = 0;
                  uStack_1a46 = 0;
                  uStack_1a42 = 0;
                  local_1a40 = *(int *)(pbVar34 + 0x78);
                  local_1a38 = pbVar34[0x90];
                  local_1a30 = *(long *)(pbVar34 + 0x98);
                  lStack_1a28 = *(long *)(pbVar34 + 0xa0);
                  local_1a1f = *pbVar34;
                  local_1a20 = local_1a1f ^ 1;
                  local_1a1e = pbVar34[1];
                  local_1a1d = pbVar34[0xa8];
                  *(undefined8 *)((long)&local_38 + lVar4) = 0x1005635d9;
                  FUN_1001b7a5c(&local_17a8,pbVar34 + 0x80);
                  *(undefined8 *)((long)&local_38 + lVar4) = 0x1005635e8;
                  FUN_1001b80b2(local_1a18,&local_17a8);
                  *(undefined8 *)((long)&local_38 + lVar4) = 0x1005635f0;
                  FUN_1001b7a50(&local_17a8);
                  *(undefined8 *)((long)&local_38 + lVar4) = 0x1005635fc;
                  FUN_1001b7a5c(&local_17a8,pbVar34 + 0x38);
                  *(undefined8 *)((long)&local_38 + lVar4) = 0x10056360b;
                  FUN_1001b80b2(local_1a08,&local_17a8);
                  *(undefined8 *)((long)&local_38 + lVar4) = 0x100563613;
                  FUN_1001b7a50(&local_17a8);
                  *(undefined8 *)((long)&local_38 + lVar4) = 0x10056361f;
                  FUN_1001b7a5c(&local_17a8,pbVar34 + 0x48);
                  *(undefined8 *)((long)&local_38 + lVar4) = 0x10056362e;
                  FUN_1001b80b2(local_19f8,&local_17a8);
                  *(undefined8 *)((long)&local_38 + lVar4) = 0x100563636;
                  FUN_1001b7a50(&local_17a8);
                  *(undefined8 *)((long)&local_38 + lVar4) = 0x100563642;
                  FUN_1001b7a5c(&local_17a8,pbVar34 + 0x58);
                  *(undefined8 *)((long)&local_38 + lVar4) = 0x100563651;
                  FUN_1001b80b2(local_19e8,&local_17a8);
                  *(undefined8 *)((long)&local_38 + lVar4) = 0x100563659;
                  FUN_1001b7a50(&local_17a8);
                  *(undefined8 *)((long)&local_38 + lVar4) = 0x100563668;
                  FUN_1001b7a5c(&local_17a8,pbVar34 + 0x68);
                  *(undefined8 *)((long)&local_38 + lVar4) = 0x100563677;
                  FUN_1001b80b2(local_19d8,&local_17a8);
                  *(undefined8 *)((long)&local_38 + lVar4) = 0x10056367f;
                  FUN_1001b7a50(&local_17a8);
                  *(undefined8 *)((long)&local_38 + lVar4) = 0x100563692;
                  FUN_1001b7a5c(local_1b08,local_1b38);
                  if ((local_1a20 == 0) && (local_1a1f != 1)) goto LAB_100563f21;
                  *(undefined8 *)((long)&local_38 + lVar4) = 0x1005636bc;
                  lVar22 = FUN_1004993ef(plVar21,1,0,1);
                  if (lVar22 == 0) {
                    *(undefined8 *)((long)&local_38 + lVar4) = 0x1005636dc;
                    lVar22 = FUN_1004993ef(local_1a68,4,0);
                    if (lVar22 != 0) goto LAB_1005636e8;
                    *(undefined8 *)((long)&local_38 + lVar4) = 0x100563c86;
                    lVar22 = FUN_100499159(local_1a68,(local_1a20 ^ 1) * 3 + 1,0);
                    if (lVar22 != 0) goto LAB_10056385f;
                    *(undefined8 *)((long)&local_38 + lVar4) = 0x100564055;
                    uVar17 = FUN_1001cc310();
                    *(undefined8 *)((long)&local_38 + lVar4) = 0x100564065;
                    cVar11 = _os_log_type_enabled(uVar17,0x10);
                    if (cVar11 != '\0') {
                      local_17a8 = 0x8220202;
                      uStack_17a4 = 0x7a0a90;
                      uStack_17a0 = 1;
                      uStack_179c = 0x822;
                      uStack_179a = 0x8a29;
                      uStack_1798 = 0x7b;
                      uStack_1797 = 0;
                      uStack_1796 = 1;
                      *(undefined8 *)((long)&local_38 + lVar4) = 0x100564455;
                      __os_log_error_impl(0x100000000,uVar17,0x10,"%{public}s: (%{public}s)",
                                          &local_17a8,0x16);
                    }
                    iVar13 = -0x6c;
                    *(undefined8 *)((long)&local_38 + lVar4) = 0x10056407c;
                    FUN_1001782e9(0,0);
LAB_100563f24:
                    *(undefined1 *)((long)local_1a68 + 0x83) = 1;
LAB_100563f32:
                    *(undefined8 *)((long)&local_38 + lVar4) = 0x100563f3e;
                    FUN_1001b7a50(local_1b08);
                    if ((iVar13 != -0x80) && (iVar13 != 0)) {
                      *(undefined8 *)((long)&local_38 + lVar4) = 0x100563f4e;
                      uVar17 = FUN_1001cc310();
                      *(undefined8 *)((long)&local_38 + lVar4) = 0x100563f5e;
                      cVar11 = _os_log_type_enabled(uVar17,0x10);
                      if (cVar11 != '\0') {
                        local_17a8 = 0x8220202;
                        uStack_17a4 = 0x7a0a90;
                        uStack_17a0 = 1;
                        uStack_179c = 0x400;
                        uStack_179a = (undefined2)iVar13;
                        uStack_1798 = (undefined1)((uint)iVar13 >> 0x10);
                        uStack_1797 = (undefined1)((uint)iVar13 >> 0x18);
                        *(undefined8 *)((long)&local_38 + lVar4) = 0x10056429a;
                        __os_log_error_impl(0x100000000,uVar17,0x10,"%{public}s: err == (%d)",
                                            &local_17a8,0x12);
                      }
                    }
                  }
                  else {
LAB_1005636e8:
                    bVar9 = local_1a1f;
                    if (((*(int *)(lVar22 + 0x10) != 4) &&
                        (bVar9 = local_1a20, *(int *)(lVar22 + 0x10) != 1)) || (bVar9 == 0)) {
                      *(undefined8 *)((long)&local_38 + lVar4) = 0x100563813;
                      uVar17 = FUN_1001cc310();
                      *(undefined8 *)((long)&local_38 + lVar4) = 0x100563823;
                      cVar11 = _os_log_type_enabled(uVar17,0x10);
                      if (cVar11 != '\0') {
                        local_17a8 = 0x8220202;
                        uStack_17a4 = 0x7a0a90;
                        uStack_17a0 = 1;
                        uStack_179c = 0x822;
                        uStack_179a = 34000;
                        uStack_1798 = 0x7e;
                        uStack_1797 = 0;
                        uStack_1796 = 1;
                        *(undefined8 *)((long)&local_38 + lVar4) = 0x1005640d8;
                        __os_log_error_impl(0x100000000,uVar17,0x10,"%{public}s: (%{public}s)",
                                            &local_17a8,0x16);
                      }
                      *(undefined8 *)((long)&local_38 + lVar4) = 0x100563834;
                      FUN_1001782e9(0,0);
                    }
                    *(uint *)(lVar22 + 0x10) = (local_1a20 ^ 1) * 3 + 1;
                    *(long *)(local_1a68[2] + 0x1418) =
                         *(long *)(local_1a68[2] + 0x1418) - (ulong)*(uint *)(lVar22 + 0x3c);
LAB_10056385f:
                    if (((local_1a5c >> 10 & 1) != 0) || ((local_1a20 & 1) != 0)) {
                      *(undefined8 *)((long)&local_38 + lVar4) = 0x100563952;
                      FUN_1001b7a5c(local_1ac8,local_1b08);
                      *(undefined8 *)((long)&local_38 + lVar4) = 0x100563968;
                      FUN_1001b7a5c(local_1af8,local_1a08);
                      *(undefined8 *)((long)&local_38 + lVar4) = 0x100563983;
                      iVar13 = FUN_10056747a(local_1a88 & 0xffffffff,local_1ac8,lVar22);
                      *(undefined8 *)((long)&local_38 + lVar4) = 0x10056398e;
                      FUN_1001b7a50(local_1af8);
                      *(undefined8 *)((long)&local_38 + lVar4) = 0x100563996;
                      FUN_1001b7a50(local_1ac8);
                      if (iVar13 != -0x80) {
                        if (iVar13 == 0) goto LAB_1005639a9;
                        *(undefined8 *)((long)&local_38 + lVar4) = 0x100563bfc;
                        uVar17 = FUN_1001cc310();
                        *(undefined8 *)((long)&local_38 + lVar4) = 0x100563c0c;
                        cVar11 = _os_log_type_enabled(uVar17,0x10);
                        if (cVar11 != '\0') {
                          uStack_179a = (undefined2)iVar13;
                          uStack_1798 = (undefined1)((uint)iVar13 >> 0x10);
                          uStack_1797 = (undefined1)((uint)iVar13 >> 0x18);
                          goto LAB_100563c52;
                        }
                      }
                      goto LAB_100563f24;
                    }
                    *(undefined8 *)((long)&local_38 + lVar4) = 0x100563888;
                    FUN_1001b7a5c(local_1b68,local_1b08);
                    *(undefined8 *)((long)&local_38 + lVar4) = 0x10056389e;
                    FUN_1001b7a5c(local_1ae8,local_19f8);
                    *(undefined8 *)((long)&local_38 + lVar4) = 0x1005638b9;
                    iVar13 = FUN_10056747a(local_1a88 & 0xffffffff,local_1b68,lVar22);
                    *(undefined8 *)((long)&local_38 + lVar4) = 0x1005638c4;
                    FUN_1001b7a50(local_1ae8);
                    *(undefined8 *)((long)&local_38 + lVar4) = 0x1005638cc;
                    FUN_1001b7a50(local_1b68);
                    if (iVar13 == -0x80) goto LAB_100563f24;
                    if (iVar13 != 0) {
                      *(undefined8 *)((long)&local_38 + lVar4) = 0x1005638e4;
                      uVar17 = FUN_1001cc310();
                      *(undefined8 *)((long)&local_38 + lVar4) = 0x1005638f4;
                      cVar11 = _os_log_type_enabled(uVar17,0x10);
                      if (cVar11 != '\0') {
                        uStack_179a = (undefined2)iVar13;
                        uStack_1798 = (undefined1)((uint)iVar13 >> 0x10);
                        uStack_1797 = (undefined1)((uint)iVar13 >> 0x18);
LAB_100563c52:
                        uStack_17a0 = 1;
                        uStack_17a4 = 0x7a0a90;
                        uStack_179c = 0x400;
                        local_17a8 = 0x8220202;
                        *(undefined8 *)((long)&local_38 + lVar4) = 0x100563c64;
                        __os_log_error_impl(0x100000000,uVar17,0x10,"%{public}s: err == (%d)",
                                            &local_17a8,0x12);
                      }
                      goto LAB_100563f24;
                    }
LAB_1005639a9:
                    if ((local_1a5c >> 0xe & 1) != 0) {
                      *(undefined8 *)((long)&local_38 + lVar4) = 0x1005639bb;
                      cVar11 = FUN_10058f82f(lVar22);
                      if (cVar11 != '\0') goto LAB_100563f21;
                    }
                    if ((local_1a5c & 4) != 0) {
                      if ((local_1a5c >> 10 & 1) != 0) {
                        *(undefined8 *)((long)&local_38 + lVar4) = 0x100563d63;
                        cVar11 = FUN_10058f82f(lVar22);
                        if (cVar11 != '\0') goto LAB_1005639d1;
                      }
                      *(undefined8 *)((long)&local_38 + lVar4) = 0x100563d84;
                      FUN_1001b7a5c(local_1ba8,local_1b08);
                      *(undefined8 *)((long)&local_38 + lVar4) = 0x100563d9a;
                      FUN_1001b7a5c(local_1c28,local_19e8);
                      *(undefined8 *)((long)&local_38 + lVar4) = 0x100563dc3;
                      iVar13 = FUN_100567901(local_1a88 & 0xffffffff,local_1ba8,param_8,local_1a68,
                                             local_1c28,6);
                      *(undefined8 *)((long)&local_38 + lVar4) = 0x100563dce;
                      FUN_1001b7a50(local_1c28);
                      *(undefined8 *)((long)&local_38 + lVar4) = 0x100563dd6;
                      FUN_1001b7a50(local_1ba8);
                      if (iVar13 != -0x80) {
                        if (iVar13 == 0) goto LAB_1005639d1;
                        *(undefined8 *)((long)&local_38 + lVar4) = 0x100563df4;
                        uVar17 = FUN_1001cc310();
                        *(undefined8 *)((long)&local_38 + lVar4) = 0x100563e04;
                        cVar11 = _os_log_type_enabled(uVar17,0x10);
                        if (cVar11 != '\0') {
                          uStack_179a = (undefined2)iVar13;
                          uStack_1798 = (undefined1)((uint)iVar13 >> 0x10);
                          uStack_1797 = (undefined1)((uint)iVar13 >> 0x18);
                          goto LAB_100563c52;
                        }
                      }
                      goto LAB_100563f24;
                    }
LAB_1005639d1:
                    if ((local_1a5c >> 0xd & 1) != 0) {
                      *(undefined8 *)((long)&local_38 + lVar4) = 0x1005639e7;
                      cVar11 = FUN_1001b8428(local_19d8);
                      if (cVar11 == '\0') {
                        *(undefined8 *)((long)&local_38 + lVar4) = 0x1005639fe;
                        FUN_1001b7a5c(local_1b98,local_1b08);
                        *(undefined8 *)((long)&local_38 + lVar4) = 0x100563a14;
                        FUN_1001b7a5c(local_1c18,local_19d8);
                        *(undefined8 *)((long)&local_38 + lVar4) = 0x100563a3d;
                        iVar13 = FUN_100567901(local_1a88 & 0xffffffff,local_1b98,param_8,local_1a68
                                               ,local_1c18,7);
                        *(undefined8 *)((long)&local_38 + lVar4) = 0x100563a47;
                        FUN_1001b7a50(local_1c18);
                        *(undefined8 *)((long)&local_38 + lVar4) = 0x100563a4f;
                        FUN_1001b7a50(local_1b98);
                        if (iVar13 == 0) {
                          *(undefined1 *)((long)local_1a68 + 0xd6) = 1;
                        }
                      }
                    }
                    *(byte *)((long)local_1a68 + 0xb2) = local_1a1f;
                    *(byte *)((long)local_1a68 + 0xd5) = local_1a1d;
                    if (local_1a1f == 1) {
                      *(byte *)((long)local_1a68 + 0xd7) = local_1a1e;
                    }
                    *(undefined8 *)((long)&local_38 + lVar4) = 0x100563a9f;
                    cVar11 = FUN_10058f82f(lVar22);
                    if (cVar11 == '\0') {
                      lVar19 = *(long *)(lVar22 + 8);
                      iVar13 = *(int *)(lVar22 + 0x10);
                      if (((local_1a5c & 2) == 0) && (iVar13 == 4)) goto LAB_100563f21;
                      *(undefined8 *)((long)&local_38 + lVar4) = 0x100563e7b;
                      iVar15 = FUN_10049980b(lVar22,&local_17a8,0);
                      local_1a70 = (byte *)((long)local_1a68 + 0xd7);
                      if (iVar15 == -0x80) {
LAB_100563f10:
                        if (*(char *)(*(long *)(lVar22 + 8) + 0x80) == '\0') {
LAB_1005643bd:
                          if (((*(char *)((long)local_1a68 + 0xb2) == '\0') &&
                              ((local_1a5c >> 0x10 & 1) != 0)) && (*local_1a70 != 0)) {
                            *local_1a70 = 0;
                          }
                          goto LAB_100563aa7;
                        }
                      }
                      else {
                        if (iVar15 != 0) {
                          *(undefined8 *)((long)&local_38 + lVar4) = 0x100563ea2;
                          uVar17 = FUN_1001cc310();
                          *(undefined8 *)((long)&local_38 + lVar4) = 0x100563eb2;
                          cVar11 = _os_log_type_enabled(uVar17,0x10);
                          if (cVar11 != '\0') {
                            local_19c8 = 0x8220202;
                            local_19c4 = "Assertion failure";
                            local_19bc = 0x400;
                            *(undefined8 *)((long)&local_38 + lVar4) = 0x1005645c6;
                            local_19ba = iVar15;
                            __os_log_error_impl(0x100000000,uVar17,0x10,"%{public}s: err == (%d)",
                                                &local_19c8,0x12);
                          }
                          if (iVar15 != 0) goto LAB_100563f10;
                        }
                        *(undefined8 *)((long)&local_38 + lVar4) = 0x100563ed9;
                        iVar15 = FUN_10017d477(&local_17a8,&local_1bf8,&local_19a8);
                        if (iVar15 == -0x80) goto LAB_100563f10;
                        if (iVar15 != 0) {
                          *(undefined8 *)((long)&local_38 + lVar4) = 0x100563eef;
                          uVar17 = FUN_1001cc310();
                          *(undefined8 *)((long)&local_38 + lVar4) = 0x100563eff;
                          cVar11 = _os_log_type_enabled(uVar17,0x10);
                          if (cVar11 != '\0') {
                            local_19c8 = 0x8220202;
                            local_19c4 = "Assertion failure";
                            local_19bc = 0x400;
                            *(undefined8 *)((long)&local_38 + lVar4) = 0x10056461b;
                            local_19ba = iVar15;
                            __os_log_error_impl(0x100000000,uVar17,0x10,"%{public}s: err == (%d)",
                                                &local_19c8,0x12);
                          }
                          if (iVar15 != 0) goto LAB_100563f10;
                        }
                        if (iVar13 == 4) {
                          *(undefined8 *)((long)&local_38 + lVar4) = 0x100564390;
                          cVar11 = FUN_10059067d(&local_19a8,&local_1bf8);
                          if ((cVar11 == '\0') || ((*local_1a70 & (byte)local_1ad0) != 0))
                          goto LAB_100563f21;
LAB_1005643ad:
                          plVar21 = (long *)(*(long *)(lVar19 + 0x10) + 0x1418);
                          *plVar21 = *plVar21 + (ulong)*(uint *)(lVar22 + 0x3c);
                          goto LAB_1005643bd;
                        }
                        *(byte **)(&stack0xffffffffffffffd8 + lVar4) = local_1a70;
                        *(uint **)(&stack0xffffffffffffffd0 + lVar4) = &local_19a8;
                        *(undefined8 *)(&stack0xffffffffffffffe0 + lVar4) = 0;
                        *(undefined8 *)((long)&local_38 + lVar4) = 0x100564362;
                        cVar11 = FUN_1005905a7((ulong)local_1aa8 & 0xffffffff,local_1a9c,
                                               (ushort)local_1a5c >> 0xf,0,&local_17a8,&local_1bf8);
                        if (cVar11 != '\0') goto LAB_1005643ad;
                      }
LAB_100563f21:
                      iVar13 = 0;
                      goto LAB_100563f24;
                    }
LAB_100563aa7:
                    if ((local_1a5c >> 10 & 1) != 0) {
                      if (local_1a40 == 0) {
                        *(undefined8 *)((long)&local_38 + lVar4) = 0x100563ac0;
                        uVar17 = FUN_1001cc310();
                        *(undefined8 *)((long)&local_38 + lVar4) = 0x100563ad0;
                        cVar11 = _os_log_type_enabled(uVar17,0x10);
                        if (cVar11 != '\0') {
                          local_17a8 = 0x8220202;
                          uStack_17a4 = 0x7ab58c;
                          uStack_17a0 = 1;
                          uStack_179c = 0x822;
                          uStack_179a = 0x8585;
                          uStack_1798 = 0x7e;
                          uStack_1797 = 0;
                          uStack_1796 = 1;
                          *(undefined8 *)((long)&local_38 + lVar4) = 0x100564571;
                          __os_log_error_impl(0x100000000,uVar17,0x10,"%{public}s: (%{public}s)",
                                              &local_17a8,0x16);
                        }
                        *(undefined8 *)((long)&local_38 + lVar4) = 0x100563ae1;
                        cVar11 = FUN_1001782e9(0,0);
                        if (cVar11 == '\0') goto LAB_100563af8;
                      }
                      *(int *)((long)local_1a68 + 0x5c) = local_1a40;
                      *(int *)(local_1a68 + 0xb) = local_1a40;
                    }
LAB_100563af8:
                    *(byte *)((long)local_1a68 + 0x81) = local_1a38;
                    local_1a68[7] = CONCAT26(uStack_1a42,CONCAT42(uStack_1a46,uStack_1a48));
                    *(undefined8 *)((long)&local_38 + lVar4) = 0x100563b22;
                    cVar11 = FUN_1001b8428(local_1a18);
                    if (cVar11 == '\0') {
                      lVar19 = local_1a68[2];
                      *(undefined8 *)((long)&local_38 + lVar4) = 0x100563b41;
                      uVar17 = FUN_1001b83ae(local_1a18);
                      *(undefined8 *)((long)&local_38 + lVar4) = 0x100563b50;
                      uVar16 = FUN_1001b83f0(local_1a18);
                      *(undefined8 *)((long)&local_38 + lVar4) = 0x100563b6f;
                      iVar13 = FUN_1001dda73(lVar19 + 0x70,uVar17,uVar16);
                      if (iVar13 == 0) goto LAB_100563fcc;
                      if (iVar13 == -0x80) {
                        *(undefined8 *)((long)&local_38 + lVar4) = 0x100563b90;
                        FUN_1001b7a50(local_1b08);
                        iVar13 = -0x80;
                        goto LAB_100563f66;
                      }
                      *(undefined8 *)((long)&local_38 + lVar4) = 0x1005642a4;
                      uVar17 = FUN_1001cc310();
                      *(undefined8 *)((long)&local_38 + lVar4) = 0x1005642b4;
                      cVar11 = _os_log_type_enabled(uVar17,0x10);
                      if (cVar11 != '\0') {
                        local_17a8 = 0x8220202;
                        uStack_17a4 = 0x7a0a90;
                        uStack_17a0 = 1;
                        uStack_179c = 0x400;
                        uStack_179a = (undefined2)iVar13;
                        uStack_1798 = (undefined1)((uint)iVar13 >> 0x10);
                        uStack_1797 = (undefined1)((uint)iVar13 >> 0x18);
                        *(undefined8 *)((long)&local_38 + lVar4) = 0x10056430c;
                        __os_log_error_impl(0x100000000,uVar17,0x10,"%{public}s: err == (%d)",
                                            &local_17a8,0x12);
                      }
                      goto LAB_100563f32;
                    }
LAB_100563fcc:
                    if (local_1a3c == 0) {
                      if ((int)local_1ad8 == 0) goto LAB_1005640e6;
                    }
                    else if (*(int *)((long)local_1a68 + 0x5c) == 0 && (int)local_1ad8 == 0) {
LAB_1005640e6:
                      *(undefined8 *)((long)&local_38 + lVar4) = 0x1005640ee;
                      cVar11 = FUN_10058f82f(lVar22);
                      if (cVar11 == '\0') {
                        *(undefined8 *)((long)&local_38 + lVar4) = 0x1005640fa;
                        iVar13 = FUN_10058ed73(lVar22);
                        if (iVar13 == 0) {
                          *(undefined8 *)((long)&local_38 + lVar4) = 0x100564113;
                          iVar13 = FUN_10017d477(lVar22 + 0x58,&local_17a8,0);
                          if (iVar13 == 0) {
                            if (*(int *)((long)local_1a68 + 0x5c) == 0) {
                              uVar14 = uStack_17a4;
                              if (uStack_17a4 == 0) {
                                uVar14 = uStack_17a0;
                              }
                              *(uint *)((long)local_1a68 + 0x5c) = uVar14;
                            }
                            if (uStack_17a0 == 0) {
                              *(undefined8 *)((long)&local_38 + lVar4) = 0x1005644e0;
                              uVar17 = FUN_1001cc310();
                              *(undefined8 *)((long)&local_38 + lVar4) = 0x1005644f0;
                              cVar11 = _os_log_type_enabled(uVar17,0x10);
                              if (cVar11 != '\0') {
                                local_19a8 = 0x8220202;
                                uStack_19a4 = 0x7ab58c;
                                uStack_19a0 = 1;
                                uStack_199c = 0x822;
                                uStack_199a = 0x85aa;
                                uStack_1998 = 0x7e;
                                uStack_1996 = 1;
                                *(undefined8 *)((long)&local_38 + lVar4) = 0x100564677;
                                __os_log_error_impl(0x100000000,uVar17,0x10,
                                                    "%{public}s: (%{public}s)",&local_19a8,0x16);
                              }
                              *(undefined8 *)((long)&local_38 + lVar4) = 0x100564501;
                              cVar11 = FUN_1001782e9(0,0);
                              if (cVar11 == '\0') goto LAB_10056412c;
                            }
                            local_1a3c = uStack_17a0;
                            goto LAB_10056412c;
                          }
                        }
                        if (*(int *)((long)local_1a68 + 0x5c) == 0) goto LAB_100563f21;
                      }
                    }
LAB_10056412c:
                    plVar21 = local_1a68;
                    local_17a8 = 0;
                    uStack_17a4 = 0;
                    uStack_17a0 = 0;
                    uStack_179c = 0;
                    uStack_179a = 0;
                    if ((cStack_1a49 == '\0') &&
                       (auVar41._4_4_ = local_1a58._4_4_, auVar41._0_4_ = (uint)local_1a58,
                       auVar41._8_4_ = uStack_1a50, auVar41._12_2_ = uStack_1a4c,
                       auVar41[0xe] = uStack_1a4a, auVar41[0xf] = 0, auVar41 == ZEXT816(0))) {
                      lVar22 = local_1a68[4];
                      *(undefined8 *)((long)&local_38 + lVar4) = 0x100564378;
                      FUN_100169968(lVar22,local_1a68 + 5);
                    }
                    else {
                      pauVar1 = (undefined1 (*) [16])(local_1a68 + 5);
                      local_17a8 = 0;
                      uStack_17a4 = 0;
                      uStack_17a0 = 0;
                      uStack_179c = 0;
                      uStack_179a = 0;
                      if (((*(char *)((long)local_1a68 + 0x37) != '\0') || (*pauVar1 != ZEXT816(0)))
                         && ((*(char *)((long)local_1a68 + 0x37) != cStack_1a49 ||
                             (auVar5._4_4_ = local_1a58._4_4_, auVar5._0_4_ = (uint)local_1a58,
                             auVar5._8_4_ = uStack_1a50, auVar5._12_2_ = uStack_1a4c,
                             auVar5[0xe] = uStack_1a4a, auVar5[0xf] = cStack_1a49,
                             *pauVar1 != auVar5)))) {
                        *(undefined8 *)((long)&local_38 + lVar4) = 0x1005641b5;
                        uVar17 = FUN_1001cc310();
                        *(undefined8 *)((long)&local_38 + lVar4) = 0x1005641c5;
                        cVar11 = _os_log_type_enabled(uVar17,0x10);
                        if (cVar11 != '\0') {
                          local_17a8 = 0x8220202;
                          uStack_17a4 = 0x7a0a90;
                          uStack_17a0 = 1;
                          uStack_179c = 0x822;
                          uStack_179a = 0x85cc;
                          uStack_1798 = 0x7e;
                          uStack_1797 = 0;
                          uStack_1796 = 1;
                          *(undefined8 *)((long)&local_38 + lVar4) = 0x1005644b1;
                          __os_log_error_impl(0x100000000,uVar17,0x10,"%{public}s: (%{public}s)",
                                              &local_17a8,0x16);
                        }
                        *(undefined8 *)((long)&local_38 + lVar4) = 0x1005641d6;
                        FUN_1001782e9(0,0);
                      }
                      *(ulong *)*pauVar1 = CONCAT44(local_1a58._4_4_,(uint)local_1a58);
                      plVar21[6] = CONCAT17(cStack_1a49,
                                            CONCAT16(uStack_1a4a,CONCAT24(uStack_1a4c,uStack_1a50)))
                      ;
                    }
                    if ((char)local_1a68[0x10] == '\x01') {
                      *(uint *)((long)local_1a68 + 0x8c) = local_1a3c;
                      if ((int)local_1a68[0xb] == 0) {
                        *(undefined4 *)(local_1a68 + 0xb) = *(undefined4 *)((long)local_1a68 + 0x5c)
                        ;
                      }
                    }
                    else if ((local_1a3c != 0) && (*(uint *)((long)local_1a68 + 0x8c) != local_1a3c)
                            ) {
                      *(uint *)((long)local_1a68 + 0x8c) = local_1a3c;
                      *(undefined1 *)(local_1a68 + 0x10) = 2;
                    }
                    local_1a68[0x17] = local_1a30;
                    local_1a68[0x18] = lStack_1a28;
                    *(undefined8 *)((long)&local_38 + lVar4) = 0x100564242;
                    FUN_1001b7a50(local_1b08);
                    iVar13 = 0;
                  }
LAB_100563f66:
                  *(undefined8 *)((long)&local_38 + lVar4) = 0x100563f72;
                  FUN_1001b7a50(local_19d8);
                  *(undefined8 *)((long)&local_38 + lVar4) = 0x100563f7e;
                  FUN_1001b7a50(local_19e8);
                  *(undefined8 *)((long)&local_38 + lVar4) = 0x100563f8a;
                  FUN_1001b7a50(local_19f8);
                  *(undefined8 *)((long)&local_38 + lVar4) = 0x100563f96;
                  FUN_1001b7a50(local_1a08);
                  *(undefined8 *)((long)&local_38 + lVar4) = 0x100563fa2;
                  FUN_1001b7a50(local_1a18);
                  goto LAB_100563fa2;
                }
                *(undefined8 *)((long)&local_38 + lVar4) = 0x10056349b;
                uVar17 = FUN_1001cc310();
                *(undefined8 *)((long)&local_38 + lVar4) = 0x1005634ab;
                cVar11 = _os_log_type_enabled(uVar17,0x10);
                if (cVar11 != '\0') {
                  pcVar27 = 
                  "ImportPhotoGUID(reinterpret_cast<const UInt8 *>(identifierITString.GetUTF8Ptr()), static_cast<UInt32>(identifierITString.GetUTF8Length()), &sourceGUID)"
                  ;
LAB_100563d21:
                  uStack_179c = 0x822;
                  uStack_17a0 = 1;
                  uStack_17a4 = 0x7a0a90;
                  local_17a8 = 0x8220202;
                  uStack_179a = SUB82(pcVar27,0);
                  uStack_1798 = (undefined1)((ulong)pcVar27 >> 0x10);
                  uStack_1797 = 0;
                  uStack_1796 = (undefined4)((ulong)pcVar27 >> 0x20);
                  *(undefined8 *)((long)&local_38 + lVar4) = 0x100563d50;
                  __os_log_error_impl(0x100000000,uVar17,0x10,"%{public}s: (%{public}s)",&local_17a8
                                      ,0x16);
                }
              }
              else {
                *(undefined8 *)((long)&local_38 + lVar4) = 0x100562f86;
                uVar17 = FUN_1001b83ae(local_1b18);
                *(undefined8 *)((long)&local_38 + lVar4) = 0x100562f95;
                uVar14 = FUN_1001b83f0(local_1b18);
                local_17a8 = 0;
                uStack_17a4 = 0;
                if (7 < uVar14) {
                  uVar14 = 8;
                }
                *(undefined8 *)((long)&local_38 + lVar4) = 0x100562fbd;
                FUN_1001c631b(uVar17,&local_17a8,uVar14);
                uVar33 = (ulong)(uStack_17a4 >> 0x18) | ((ulong)uStack_17a4 & 0xff0000) >> 8 |
                         ((ulong)uStack_17a4 & 0xff00) << 8 | ((ulong)uStack_17a4 & 0xff) << 0x18 |
                         ((ulong)local_17a8 & 0xff000000) << 8 |
                         ((ulong)local_17a8 & 0xff0000) << 0x18 |
                         ((ulong)local_17a8 & 0xff00) << 0x28 |
                         CONCAT44(uStack_17a4,local_17a8) << 0x38;
                if (CONCAT44(uStack_17a4,local_17a8) != 0) goto LAB_10056302d;
                *(undefined8 *)((long)&local_38 + lVar4) = 0x100562fe2;
                local_1b28 = uVar33;
                uVar17 = FUN_1001cc310();
LAB_100563715:
                *(undefined8 *)((long)&local_38 + lVar4) = 0x100563725;
                cVar11 = _os_log_type_enabled(uVar17,0x10);
                if (cVar11 != '\0') {
                  local_17a8 = 0x8220202;
                  uStack_17a4 = 0x7a0a90;
                  uStack_17a0 = 1;
                  uStack_179c = 0x822;
                  uStack_179a = 0x8119;
                  uStack_1798 = 0x7e;
                  uStack_1797 = 0;
                  uStack_1796 = 1;
                  *(undefined8 *)((long)&local_38 + lVar4) = 0x100563cf4;
                  __os_log_error_impl(0x100000000,uVar17,0x10,"%{public}s: (%{public}s)",&local_17a8
                                      ,0x16);
                }
                *(undefined8 *)((long)&local_38 + lVar4) = 0x100563736;
                FUN_1001782e9(0,0);
                *(undefined8 *)((long)&local_38 + lVar4) = 0x10056373b;
                uVar17 = FUN_1001cc310();
                *(undefined8 *)((long)&local_38 + lVar4) = 0x10056374b;
                cVar11 = _os_log_type_enabled(uVar17,0x10);
                if (cVar11 != '\0') {
                  pcVar27 = "sourceID != 0";
                  goto LAB_100563d21;
                }
              }
              iVar13 = 0;
              *(undefined8 *)((long)&local_38 + lVar4) = 0x10056375f;
              FUN_1001782e9(0,0);
            }
LAB_100563fa2:
            *(undefined8 *)((long)&local_38 + lVar4) = 0x100563fae;
            FUN_1001b7a50(local_1b18);
            local_1a80 = (long *)CONCAT44(local_1a80._4_4_,(int)local_1a80 + 1);
            plVar21 = (long *)*local_1a78;
          } while (plVar21 != (long *)0x0);
          *(undefined8 *)((long)&local_38 + lVar4) = 0x10056475a;
          FUN_1001b7a50(local_1b38);
          if (iVar13 != -0x80) {
            if (iVar13 == 0) goto LAB_10056476d;
            *(undefined8 *)((long)&local_38 + lVar4) = 0x100565f3c;
            uVar17 = FUN_1001cc310();
            *(undefined8 *)((long)&local_38 + lVar4) = 0x100565f4c;
            cVar11 = _os_log_type_enabled(uVar17,0x10);
            if (cVar11 != '\0') {
              uStack_179a = (undefined2)iVar13;
              uStack_1798 = (undefined1)((uint)iVar13 >> 0x10);
              uStack_1797 = (undefined1)((uint)iVar13 >> 0x18);
              goto LAB_100566b66;
            }
          }
          goto LAB_1005646c7;
        }
        *(undefined8 *)((long)&local_38 + lVar4) = 0x10056471d;
        FUN_1001b7a50(local_1b38);
LAB_10056476d:
        local_1a70 = (byte *)CONCAT44(local_1a70._4_4_,local_1b58);
      }
      plVar21 = *(long **)((long)local_1b40 + 0x50);
      if (plVar21 == *(long **)((long)local_1b40 + 0x58)) {
        local_1a78 = (long *)((ulong)local_1a78._4_4_ << 0x20);
      }
      else {
        local_1a9c = CONCAT31(local_1a9c._1_3_,(local_1a5c >> 10 & 1) == 0 | param_8);
        local_1aa8 = (undefined8 *)(param_7 + 0x28);
        local_1b78 = param_7 + 0x70;
        local_1a90 = local_1b40;
        local_1ad8 = (long)local_1b40 + 0x28;
        local_1ad0 = local_1af8;
        local_1a98 = &local_19c8;
        local_1a78 = (long *)((ulong)local_1a78._4_4_ << 0x20);
        do {
          lVar22 = *plVar21;
          local_1a68 = plVar21;
          if (lVar22 == 0) {
            *(undefined8 *)((long)&local_38 + lVar4) = 0x100564b19;
            uVar17 = FUN_1001cc310();
            *(undefined8 *)((long)&local_38 + lVar4) = 0x100564b29;
            cVar11 = _os_log_type_enabled(uVar17,0x10);
            if (cVar11 != '\0') {
              local_17a8 = 0x8220202;
              uStack_17a4 = 0x7a0a90;
              uStack_17a0 = 1;
              uStack_179c = 0x822;
              uStack_179a = 0xc822;
              uStack_1798 = 0x7c;
              uStack_1797 = 0;
              uStack_1796 = 1;
              *(undefined8 *)((long)&local_38 + lVar4) = 0x100565035;
              __os_log_error_impl(0x100000000,uVar17,0x10,"%{public}s: (%{public}s)",&local_17a8,
                                  0x16);
            }
            *(undefined8 *)((long)&local_38 + lVar4) = 0x100564b3a;
            FUN_1001782e9(0,0);
          }
          else {
            *(undefined8 *)((long)&local_38 + lVar4) = 0x100564826;
            iVar13 = FUN_1001ceb24(local_1ab8,0x696d7074,0,0,0);
            if (iVar13 != 0) {
              if (iVar13 == -0x80) goto LAB_1005646c7;
              *(undefined8 *)((long)&local_38 + lVar4) = 0x100565e52;
              uVar17 = FUN_1001cc310();
              *(undefined8 *)((long)&local_38 + lVar4) = 0x100565e62;
              cVar11 = _os_log_type_enabled(uVar17,0x10);
              if (cVar11 != '\0') {
                local_17a8 = 0x8220202;
                uStack_17a4 = 0x7a0a90;
                uStack_17a0 = 1;
                uStack_179c = 0x400;
                uStack_179a = (undefined2)iVar13;
                uStack_1798 = (undefined1)((uint)iVar13 >> 0x10);
                uStack_1797 = (undefined1)((uint)iVar13 >> 0x18);
                *(undefined8 *)((long)&local_38 + lVar4) = 0x100565eaf;
                __os_log_error_impl(0x100000000,uVar17,0x10,"%{public}s: err == (%d)",&local_17a8,
                                    0x12);
              }
              goto LAB_100565fc9;
            }
            *(undefined8 *)((long)&local_38 + lVar4) = 0x10056483e;
            FUN_1001b7a5c(local_1ae8,lVar22 + 0x30);
            *(undefined8 *)((long)&local_38 + lVar4) = 0x100564846;
            FUN_1001b7a44(local_1478);
            *(undefined8 *)((long)&local_38 + lVar4) = 0x10056484e;
            FUN_1001b7a50(local_1478);
            *(undefined8 *)((long)&local_38 + lVar4) = 0x10056485f;
            FUN_1001c62d9(&local_17a8,6000);
            *(undefined8 *)((long)&local_38 + lVar4) = 0x10056486b;
            FUN_1001b7a44(local_1478);
            uVar17 = *(undefined8 *)(lVar22 + 0x40);
            uStack_17a0 = (uint)uVar17;
            uStack_179c = (undefined2)((ulong)uVar17 >> 0x20);
            uStack_179a = (undefined2)((ulong)uVar17 >> 0x30);
            uStack_17a4 = (uint)((ulong)uVar17 >> 0x20);
            local_6e = *(char *)(lVar22 + 0x10);
            local_4c = *(undefined4 *)(lVar22 + 0x68);
            local_17a8 = uStack_17a0;
            if ((int)local_1a70 == 2) {
              *(undefined8 *)((long)&local_38 + lVar4) = 0x1005648ab;
              FUN_1001b7a5c(&local_19a8,lVar22 + 0x70);
              *(undefined8 *)((long)&local_38 + lVar4) = 0x1005648ba;
              lVar19 = FUN_1004117e4(local_1a90,&local_19a8);
              *(undefined8 *)((long)&local_38 + lVar4) = 0x1005648c5;
              FUN_1001b7a50(&local_19a8);
              if (lVar19 != 0) {
                lVar19 = *(long *)(lVar19 + 0x20);
                if (lVar19 == 0) {
                  *(undefined8 *)((long)&local_38 + lVar4) = 0x1005648d8;
                  uVar17 = FUN_1001cc310();
                  *(undefined8 *)((long)&local_38 + lVar4) = 0x1005648e8;
                  cVar11 = _os_log_type_enabled(uVar17,0x10);
                  if (cVar11 != '\0') {
                    local_19a8 = 0x8220202;
                    uStack_19a4 = 0x7a168c;
                    uStack_19a0 = 1;
                    uStack_199c = 0x822;
                    uStack_199a = 0x86a1;
                    uStack_1998 = 0x7e;
                    uStack_1996 = 1;
                    *(undefined8 *)((long)&local_38 + lVar4) = 0x1005656cc;
                    __os_log_error_impl(0x100000000,uVar17,0x10,"%{public}s: (%{public}s)",
                                        &local_19a8,0x16);
                  }
                  *(undefined8 *)((long)&local_38 + lVar4) = 0x1005648f9;
                  cVar11 = FUN_1001782e9(0,0);
                  if (cVar11 == '\0') goto LAB_100564942;
                }
                local_48 = *(ulong *)(lVar19 + 0x30);
                if (local_48 == 0) {
                  *(undefined8 *)((long)&local_38 + lVar4) = 0x10056490f;
                  uVar17 = FUN_1001cc310();
                  *(undefined8 *)((long)&local_38 + lVar4) = 0x10056491f;
                  cVar11 = _os_log_type_enabled(uVar17,0x10);
                  if (cVar11 != '\0') {
                    local_19a8 = 0x8220202;
                    uStack_19a4 = 0x7a0a90;
                    uStack_19a0 = 1;
                    uStack_199c = 0x822;
                    uStack_199a = 0x86b9;
                    uStack_1998 = 0x7e;
                    uStack_1996 = 1;
                    *(undefined8 *)((long)&local_38 + lVar4) = 0x100565782;
                    __os_log_error_impl(0x100000000,uVar17,0x10,"%{public}s: (%{public}s)",
                                        &local_19a8,0x16);
                  }
                  *(undefined8 *)((long)&local_38 + lVar4) = 0x100564930;
                  FUN_1001782e9(0,0);
                }
                if (local_6e == '\x0f') {
                  local_40 = CONCAT62(local_40._2_6_,*(undefined2 *)(lVar22 + 0x80));
                }
              }
            }
LAB_100564942:
            *(undefined8 *)((long)&local_38 + lVar4) = 0x10056494e;
            uVar17 = FUN_1001b83ae(local_1ae8);
            *(undefined8 *)((long)&local_38 + lVar4) = 0x10056495d;
            uVar16 = FUN_1001b83f0(local_1ae8);
            *(undefined8 *)((long)&local_38 + lVar4) = 0x100564973;
            FUN_1001e5a9c(uVar17,uVar16,local_1780,0x2fe);
            *(undefined8 *)((long)&local_38 + lVar4) = 0x10056497f;
            uVar33 = FUN_1001b83f0(local_1ae8);
            uVar14 = 0x2fe;
            if (uVar33 < 0x2fe) {
              *(undefined8 *)((long)&local_38 + lVar4) = 0x10056499c;
              uVar14 = FUN_1001b83f0(local_1ae8);
            }
            *(undefined8 *)((long)&local_38 + lVar4) = 0x1005649b5;
            local_1480 = uVar14;
            FUN_1001b8172(local_1478,local_1ae8);
            *(undefined8 *)((long)&local_38 + lVar4) = 0x1005649c1;
            uVar33 = FUN_1001b83f0(local_1478);
            if (uVar33 != local_1480) {
              *(undefined8 *)((long)&local_38 + lVar4) = 0x1005649d1;
              uVar17 = FUN_1001cc310();
              *(undefined8 *)((long)&local_38 + lVar4) = 0x1005649e1;
              cVar11 = _os_log_type_enabled(uVar17,0x10);
              if (cVar11 != '\0') {
                local_19a8 = 0x8220202;
                uStack_19a4 = 0x7a0a90;
                uStack_19a0 = 1;
                uStack_199c = 0x822;
                uStack_199a = 0x86d9;
                uStack_1998 = 0x7e;
                uStack_1996 = 1;
                *(undefined8 *)((long)&local_38 + lVar4) = 0x100565091;
                __os_log_error_impl(0x100000000,uVar17,0x10,"%{public}s: (%{public}s)",&local_19a8,
                                    0x16);
              }
              *(undefined8 *)((long)&local_38 + lVar4) = 0x1005649f2;
              FUN_1001782e9(0,0);
            }
            *(undefined8 *)((long)&local_38 + lVar4) = 0x100564a04;
            FUN_1001b7a5c(&local_19a8,lVar22);
            *(undefined8 *)((long)&local_38 + lVar4) = 0x100564a13;
            uVar17 = FUN_1001b83ae(&local_19a8);
            *(undefined8 *)((long)&local_38 + lVar4) = 0x100564a28;
            FUN_1001b7a5c(&local_1a58,lVar22);
            *(undefined8 *)((long)&local_38 + lVar4) = 0x100564a30;
            uVar16 = FUN_1001b83f0(&local_1a58);
            *(undefined8 *)((long)&local_38 + lVar4) = 0x100564a46;
            FUN_1001e59e6(uVar17,uVar16,local_1468);
            *(undefined8 *)((long)&local_38 + lVar4) = 0x100564a52;
            FUN_1001b7a50(&local_1a58);
            *(undefined8 *)((long)&local_38 + lVar4) = 0x100564a5e;
            FUN_1001b7a50(&local_19a8);
            local_5c = 1;
            local_1a78 = (long *)CONCAT44(local_1a78._4_4_,0xffffffce);
            if (local_6e != '\0') {
              local_1a80 = (long *)CONCAT44(local_1a80._4_4_,*(undefined4 *)(lVar22 + 0x58));
              *(undefined8 *)((long)&local_38 + lVar4) = 0x100564a8f;
              FUN_1001b7a5c(local_1af8,local_1478);
              uVar14 = local_1480;
              cVar11 = '\x01';
              if ((local_1a5c >> 10 & 1) == 0) {
                *(undefined8 *)((long)&local_38 + lVar4) = 0x100564ab5;
                FUN_1001b7a5c(&local_1bf8,local_1af8);
                *(undefined8 *)((long)&local_38 + lVar4) = 0x100564ac4;
                cVar11 = FUN_100561582(&local_1bf8);
                *(undefined8 *)((long)&local_38 + lVar4) = 0x100564acf;
                FUN_1001b7a50(&local_1bf8);
              }
              if (cVar11 == '\x01' && uVar14 != 0) {
                *(undefined8 *)((long)&local_38 + lVar4) = 0x100564af5;
                FUN_1001b7a5c(&local_19c8,local_1af8);
                *(undefined8 *)((long)&local_38 + lVar4) = 0x100564b01;
                lVar19 = FUN_100562be4(&local_19c8);
                if (lVar19 == 0) {
                  *(undefined8 *)((long)&local_38 + lVar4) = 0x100564b52;
                  FUN_1001b7a5c(local_1ac8,local_1af8);
                  *(undefined8 *)((long)&local_38 + lVar4) = 0x100564b61;
                  cVar11 = FUN_100561582(local_1ac8);
                  *(undefined8 *)((long)&local_38 + lVar4) = 0x100564b6c;
                  FUN_1001b7a50(local_1ac8);
                  *(undefined8 *)((long)&local_38 + lVar4) = 0x100564b78;
                  FUN_1001b7a50(&local_19c8);
                  if (cVar11 != '\0') goto LAB_100564b81;
                  local_19a8 = 0;
                  uStack_19a4 = 0;
                  if (7 < uVar14) {
                    uVar14 = 8;
                  }
                  *(undefined8 *)((long)&local_38 + lVar4) = 0x100564c74;
                  FUN_1001c631b(local_1780,&local_19a8,uVar14);
                  local_17a8 = uStack_19a4 >> 0x18 | uStack_19a4 >> 8 & 0xff00 |
                               (uStack_19a4 & 0xff00) << 8 | uStack_19a4 << 0x18;
                  uStack_17a4 = local_19a8 >> 0x18 | local_19a8 >> 8 & 0xff00 |
                                (uint)((((ulong)local_19a8 & 0xff00) << 0x28) >> 0x20) |
                                (uint)((ulong)(CONCAT44(uStack_19a4,local_19a8) << 0x38) >> 0x20);
                  if (CONCAT44(uStack_19a4,local_19a8) != 0) goto LAB_100564c91;
                  *(undefined8 *)((long)&local_38 + lVar4) = 0x10056509b;
                  uVar17 = FUN_1001cc310();
                  *(undefined8 *)((long)&local_38 + lVar4) = 0x1005650ab;
                  cVar11 = _os_log_type_enabled(uVar17,0x10);
                  if (cVar11 != '\0') {
                    local_19a8 = 0x8220202;
                    uStack_19a4 = 0x7a0a90;
                    uStack_19a0 = 1;
                    uStack_199c = 0x822;
                    uStack_199a = 0x7d63;
                    uStack_1998 = 0x7e;
                    uStack_1996 = 1;
                    *(undefined8 *)((long)&local_38 + lVar4) = 0x100565bb3;
                    __os_log_error_impl(0x100000000,uVar17,0x10,"%{public}s: (%{public}s)",
                                        &local_19a8,0x16);
                  }
                  bVar7 = false;
                  *(undefined8 *)((long)&local_38 + lVar4) = 0x1005650bf;
                  FUN_1001782e9(0,0);
                }
                else {
                  *(undefined8 *)((long)&local_38 + lVar4) = 0x100564b12;
                  FUN_1001b7a50(&local_19c8);
LAB_100564b81:
                  local_19a8 = local_19a8 & 0xffffff00;
                  uStack_19a4 = 0;
                  *(undefined8 *)((long)&local_38 + lVar4) = 0x100564bad;
                  iVar13 = FUN_1001798b8(1,local_1780,uVar14);
                  if (iVar13 == -0x80) goto LAB_100564c91;
                  if (iVar13 != 0) {
                    *(undefined8 *)((long)&local_38 + lVar4) = 0x100564bc1;
                    uVar17 = FUN_1001cc310();
                    *(undefined8 *)((long)&local_38 + lVar4) = 0x100564bd1;
                    cVar11 = _os_log_type_enabled(uVar17,0x10);
                    if (cVar11 != '\0') {
                      local_1a58._0_4_ = 0x8220202;
                      local_1a58._4_4_ = 0x7a0a90;
                      uStack_1a50 = 1;
                      uStack_1a4c = 0x400;
                      uStack_1a4a = (undefined1)iVar13;
                      cStack_1a49 = (char)((uint)iVar13 >> 8);
                      uStack_1a48 = (undefined2)((uint)iVar13 >> 0x10);
                      *(undefined8 *)((long)&local_38 + lVar4) = 0x100565832;
                      __os_log_error_impl(0x100000000,uVar17,0x10,"%{public}s: err == (%d)",
                                          &local_1a58,0x12);
                    }
                    if (iVar13 != 0) goto LAB_100564c91;
                  }
                  local_1a58._0_4_ = 0;
                  local_1a58._4_4_ = 0;
                  *(undefined8 *)((long)&local_38 + lVar4) = 0x100564c04;
                  FUN_1001c631b(&uStack_19a0,&local_1a58,8);
                  local_17a8 = local_1a58._4_4_ >> 0x18 | local_1a58._4_4_ >> 8 & 0xff00 |
                               (local_1a58._4_4_ & 0xff00) << 8 | local_1a58._4_4_ << 0x18;
                  uStack_17a4 = (uint)local_1a58 >> 0x18 | (uint)local_1a58 >> 8 & 0xff00 |
                                (uint)((((ulong)(uint)local_1a58 & 0xff00) << 0x28) >> 0x20) |
                                (uint)((ulong)((long)local_1a58 << 0x38) >> 0x20);
                  bVar7 = true;
                  if (local_1a58 == (uint *)0x0) {
                    *(undefined8 *)((long)&local_38 + lVar4) = 0x100564c25;
                    uVar17 = FUN_1001cc310();
                    *(undefined8 *)((long)&local_38 + lVar4) = 0x100564c35;
                    cVar11 = _os_log_type_enabled(uVar17,0x10);
                    if (cVar11 != '\0') {
                      local_1a58._0_4_ = 0x8220202;
                      local_1a58._4_4_ = 0x7a0a90;
                      uStack_1a50 = 1;
                      uStack_1a4c = 0x822;
                      uStack_1a4a = 99;
                      cStack_1a49 = '}';
                      uStack_1a48 = 0x7e;
                      uStack_1a46 = 1;
                      *(undefined8 *)((long)&local_38 + lVar4) = 0x100565936;
                      __os_log_error_impl(0x100000000,uVar17,0x10,"%{public}s: (%{public}s)",
                                          &local_1a58,0x16);
                    }
                    *(undefined8 *)((long)&local_38 + lVar4) = 0x100564c46;
                    FUN_1001782e9(0,0);
                  }
                }
              }
              else {
LAB_100564c91:
                bVar7 = false;
              }
              *(undefined8 *)((long)&local_38 + lVar4) = 0x100564ca0;
              FUN_1001b7a50(local_1af8);
              if (CONCAT44(uStack_17a4,local_17a8) == 0) {
                *(undefined8 *)((long)&local_38 + lVar4) = 0x100564da9;
                uVar17 = FUN_1001cc310();
                *(undefined8 *)((long)&local_38 + lVar4) = 0x100564db9;
                cVar11 = _os_log_type_enabled(uVar17,0x10);
                if (cVar11 != '\0') {
                  local_19a8 = 0x8220202;
                  uStack_19a4 = 0x7a0a90;
                  uStack_19a0 = 1;
                  uStack_199c = 0x822;
                  uStack_199a = 0x874f;
                  uStack_1998 = 0x7e;
                  uStack_1996 = 1;
                  *(undefined8 *)((long)&local_38 + lVar4) = 0x10056556c;
                  __os_log_error_impl(0x100000000,uVar17,0x10,"%{public}s: (%{public}s)",&local_19a8
                                      ,0x16);
                }
                *(undefined8 *)((long)&local_38 + lVar4) = 0x100564dca;
                FUN_1001782e9(0,0);
              }
              else {
                uVar8 = CONCAT14(local_6e,local_17a8);
                uVar33 = CONCAT44(uStack_17a4,local_17a8);
                if ((local_1a5c >> 10 & 1) == 0) {
                  uVar33 = (ulong)uVar8;
                }
                if ((bVar7) || (local_1480 == 0)) {
LAB_100564d0e:
                  *(undefined8 *)((long)&local_38 + lVar4) = 0x100564d1d;
                  FUN_100169968(uVar33,&local_1790);
                }
                else {
                  *(undefined8 *)((long)&local_38 + lVar4) = 0x100564ceb;
                  FUN_1001b7a5c(local_1b68,local_1478);
                  *(undefined8 *)((long)&local_38 + lVar4) = 0x100564cfa;
                  lVar19 = FUN_100562be4(local_1b68);
                  *(undefined8 *)((long)&local_38 + lVar4) = 0x100564d05;
                  FUN_1001b7a50(local_1b68);
                  if (lVar19 != 0) goto LAB_100564d0e;
                  *(undefined8 *)((long)&local_38 + lVar4) = 0x100564f7f;
                  cVar11 = FUN_100566fca(local_1780,local_1480,&local_1790);
                  if (cVar11 == '\0') {
                    *(undefined8 *)((long)&local_38 + lVar4) = 0x100564f8c;
                    uVar17 = FUN_1001cc310();
                    *(undefined8 *)((long)&local_38 + lVar4) = 0x100564f9c;
                    cVar11 = _os_log_type_enabled(uVar17,0x10);
                    if (cVar11 != '\0') {
                      local_19a8 = 0x8220202;
                      uStack_19a4 = 0x7a0a90;
                      uStack_19a0 = 1;
                      uStack_199c = 0x822;
                      uStack_199a = 0x8767;
                      uStack_1998 = 0x7e;
                      uStack_1996 = 1;
                      *(undefined8 *)((long)&local_38 + lVar4) = 0x100565a43;
                      __os_log_error_impl(0x100000000,uVar17,0x10,"%{public}s: (%{public}s)",
                                          &local_19a8,0x16);
                    }
                    *(undefined8 *)((long)&local_38 + lVar4) = 0x100564fad;
                    FUN_1001782e9(0,0);
                  }
                }
                if ((char)local_1a9c == '\0') {
                  *(undefined8 *)((long)&local_38 + lVar4) = 0x100564de1;
                  puVar20 = (undefined8 *)FUN_10049aa6e(param_7,CONCAT44(uStack_17a4,local_17a8),0);
                  if (puVar20 == (undefined8 *)0x0) {
                    lVar19 = CONCAT26(uStack_179a,CONCAT24(uStack_179c,uStack_17a0));
                    if (lVar19 != 0) {
                      *(undefined8 *)((long)&local_38 + lVar4) = 0x100564fcd;
                      puVar20 = (undefined8 *)FUN_10049aa6e(param_7,lVar19,0);
                      if (puVar20 != (undefined8 *)0x0) goto LAB_100564ded;
                    }
                    goto LAB_100564d2a;
                  }
LAB_100564ded:
                  *(undefined1 *)(puVar20 + 2) = 0;
                  *(undefined1 *)((long)puVar20 + 0xc5) = 0;
                  puVar25 = local_1aa8;
                  puVar30 = (undefined8 *)0x0;
                  do {
                    puVar26 = puVar30;
                    puVar25 = (undefined8 *)*puVar25;
                    if (puVar25 == (undefined8 *)0x0) goto LAB_100564e2c;
                    puVar30 = puVar25;
                  } while (puVar25 != puVar20);
                  if (puVar26 == (undefined8 *)0x0) {
                    puVar26 = local_1aa8;
                  }
                  *puVar26 = *puVar20;
                  *puVar20 = 0;
LAB_100564e2c:
                  *(undefined8 *)((long)&local_38 + lVar4) = 0x100564e3b;
                  FUN_10049c923(local_1aa8,puVar20);
                }
                else {
LAB_100564d2a:
                  *(undefined8 *)((long)&local_38 + lVar4) = 0x100564d3a;
                  puVar20 = (undefined8 *)FUN_10049a4a2(param_7,0,1);
                  if (puVar20 == (undefined8 *)0x0) {
                    *(undefined8 *)((long)&local_38 + lVar4) = 0x100564f36;
                    uVar17 = FUN_1001cc310();
                    *(undefined8 *)((long)&local_38 + lVar4) = 0x100564f46;
                    cVar11 = _os_log_type_enabled(uVar17,0x10);
                    if (cVar11 != '\0') {
                      local_19a8 = 0x8220202;
                      uStack_19a4 = 0x7a0a90;
                      uStack_19a0 = 1;
                      uStack_199c = 0x822;
                      uStack_199a = 0x87c7;
                      uStack_1998 = 0x7e;
                      uStack_1996 = 1;
                      *(undefined8 *)((long)&local_38 + lVar4) = 0x1005657de;
                      __os_log_error_impl(0x100000000,uVar17,0x10,"%{public}s: (%{public}s)",
                                          &local_19a8,0x16);
                    }
                    local_1a78 = (long *)CONCAT44(local_1a78._4_4_,0xffffff94);
                    *(undefined8 *)((long)&local_38 + lVar4) = 0x100564f61;
                    FUN_1001782e9(0,0);
                    goto LAB_100565639;
                  }
                  *(undefined1 *)(puVar20 + 2) = 1;
                  *(undefined8 *)((long)&local_38 + lVar4) = 0x100564d4f;
                  uVar16 = FUN_1001ea5dc();
                  *(undefined4 *)(puVar20 + 0x18) = uVar16;
                  if ((((local_1a5c >> 10 & 1) == 0) && (puVar20[4] != 0)) &&
                     (puVar20[4] != (ulong)uVar8)) {
                    *(undefined8 *)((long)&local_38 + lVar4) = 0x100564d7e;
                    uVar17 = FUN_1001cc310();
                    *(undefined8 *)((long)&local_38 + lVar4) = 0x100564d8e;
                    cVar11 = _os_log_type_enabled(uVar17,0x10);
                    if (cVar11 != '\0') {
                      local_19a8 = 0x8220202;
                      uStack_19a4 = 0x7a0a90;
                      uStack_19a0 = 1;
                      uStack_199c = 0x822;
                      uStack_199a = 0x87dd;
                      uStack_1998 = 0x7e;
                      uStack_1996 = 1;
                      *(undefined8 *)((long)&local_38 + lVar4) = 0x1005659e7;
                      __os_log_error_impl(0x100000000,uVar17,0x10,"%{public}s: (%{public}s)",
                                          &local_19a8,0x16);
                    }
                    *(undefined8 *)((long)&local_38 + lVar4) = 0x100564d9f;
                    FUN_1001782e9(0,0);
                  }
                }
                puVar20[4] = uVar33;
                uVar17 = CONCAT26(uStack_179a,CONCAT24(uStack_179c,uStack_17a0));
                auVar6[8] = uStack_1798;
                auVar6._0_8_ = uVar17;
                auVar6[9] = uStack_1797;
                auVar6._10_4_ = uStack_1796;
                auVar6._14_2_ = uStack_1792;
                auVar38._0_8_ = auVar6._8_8_;
                auVar38._8_4_ = uStack_17a0;
                auVar38._12_4_ = (int)((ulong)uVar17 >> 0x20);
                *(undefined1 (*) [16])(puVar20 + 5) = auVar38;
                puVar20[7] = local_1790;
                puVar20[8] = uStack_1788;
                *(char *)((long)puVar20 + 0x11) = local_6e;
                *(short *)((long)puVar20 + 0x12) = (short)local_1a80;
                *(undefined8 *)((long)&local_38 + lVar4) = 0x100564e7d;
                uVar16 = FUN_1001dfc0d(local_1468);
                *(undefined8 *)((long)&local_38 + lVar4) = 0x100564e96;
                iVar13 = FUN_1001ddddc(local_1b78,local_1468,uVar16);
                local_1a78 = (long *)CONCAT44(local_1a78._4_4_,iVar13);
                if (iVar13 != -0x80) {
                  if (iVar13 == 0) {
                    *(undefined4 *)(puVar20 + 0x12) = local_4c;
                    if ((local_1a5c >> 0xc & 1) != 0) {
                      if (puVar20[9] == 0) {
                        uVar17 = 0;
                      }
                      else {
                        *(undefined8 *)((long)&local_38 + lVar4) = 0x100564ed6;
                        uVar17 = FUN_1001cc310();
                        *(undefined8 *)((long)&local_38 + lVar4) = 0x100564ee6;
                        cVar11 = _os_log_type_enabled(uVar17,0x10);
                        if (cVar11 != '\0') {
                          local_19a8 = 0x8220202;
                          uStack_19a4 = 0x7a0a90;
                          uStack_19a0 = 1;
                          uStack_199c = 0x822;
                          uStack_199a = 0x8850;
                          uStack_1998 = 0x7e;
                          uStack_1996 = 1;
                          *(undefined8 *)((long)&local_38 + lVar4) = 0x100565a9f;
                          __os_log_error_impl(0x100000000,uVar17,0x10,"%{public}s: (%{public}s)",
                                              &local_19a8,0x16);
                        }
                        *(undefined8 *)((long)&local_38 + lVar4) = 0x100564ef7;
                        FUN_1001782e9(0,0);
                        uVar17 = puVar20[9];
                      }
                      *(undefined8 *)((long)&local_38 + lVar4) = 0x1005650cb;
                      FUN_10017060f(uVar17);
                      *(undefined8 *)((long)&local_38 + lVar4) = 0x1005650d7;
                      lVar19 = FUN_1001b8d0c(local_1478);
                      puVar20[9] = lVar19;
                      if (lVar19 == 0) {
                        *(undefined8 *)((long)&local_38 + lVar4) = 0x1005650e5;
                        uVar17 = FUN_1001cc310();
                        *(undefined8 *)((long)&local_38 + lVar4) = 0x1005650f5;
                        cVar11 = _os_log_type_enabled(uVar17,0x10);
                        if (cVar11 != '\0') {
                          local_19a8 = 0x8220202;
                          uStack_19a4 = 0x7a0a90;
                          uStack_19a0 = 1;
                          uStack_199c = 0x822;
                          uStack_199a = 0x8878;
                          uStack_1998 = 0x7e;
                          uStack_1996 = 1;
                          *(undefined8 *)((long)&local_38 + lVar4) = 0x100565c0f;
                          __os_log_error_impl(0x100000000,uVar17,0x10,"%{public}s: (%{public}s)",
                                              &local_19a8,0x16);
                        }
                        *(undefined8 *)((long)&local_38 + lVar4) = 0x100565106;
                        FUN_1001782e9(0,0);
                      }
                    }
                  }
                  else {
                    *(undefined8 *)((long)&local_38 + lVar4) = 0x100564f05;
                    uVar17 = FUN_1001cc310();
                    *(undefined8 *)((long)&local_38 + lVar4) = 0x100564f15;
                    cVar11 = _os_log_type_enabled(uVar17,0x10);
                    if (cVar11 != '\0') {
                      local_19a8 = 0x8220202;
                      uStack_19a4 = 0x7a0a90;
                      uStack_19a0 = 1;
                      uStack_199c = 0x400;
                      uStack_199a = SUB82(local_1a78,0);
                      uStack_1998 = (undefined2)((ulong)local_1a78 >> 0x10);
                      *(undefined8 *)((long)&local_38 + lVar4) = 0x100565726;
                      __os_log_error_impl(0x100000000,uVar17,0x10,"%{public}s: err == (%d)",
                                          &local_19a8,0x12);
                    }
                    if ((int)local_1a78 != 0) goto LAB_100565639;
                    puVar20 = (undefined8 *)0x0;
                  }
                  lVar19 = puVar20[4];
                  if (lVar19 == 0) {
                    *(undefined8 *)((long)&local_38 + lVar4) = 0x100565114;
                    uVar17 = FUN_1001cc310();
                    *(undefined8 *)((long)&local_38 + lVar4) = 0x100565124;
                    cVar11 = _os_log_type_enabled(uVar17,0x10);
                    if (cVar11 != '\0') {
                      local_19a8 = 0x8220202;
                      uStack_19a4 = 0x7ab58c;
                      uStack_19a0 = 1;
                      uStack_199c = 0x822;
                      uStack_199a = 0x8720;
                      uStack_1998 = 0x7e;
                      uStack_1996 = 1;
                      *(undefined8 *)((long)&local_38 + lVar4) = 0x10056588e;
                      __os_log_error_impl(0x100000000,uVar17,0x10,"%{public}s: (%{public}s)",
                                          &local_19a8,0x16);
                    }
                    *(undefined8 *)((long)&local_38 + lVar4) = 0x100565135;
                    cVar11 = FUN_1001782e9(0,0);
                    if (cVar11 != '\0') {
                      lVar19 = puVar20[4];
                      goto LAB_10056513d;
                    }
                  }
                  else {
LAB_10056513d:
                    *(long *)(lVar22 + 0x60) = lVar19;
                  }
                  if (*(long *)(lVar22 + 0x40) == 0) {
                    puVar20[6] = puVar20[4];
                  }
                  *(undefined8 *)((long)&local_38 + lVar4) = 0x100565166;
                  FUN_1001b7a5c(&local_19a8,lVar22 + 0x48);
                  *(undefined8 *)((long)&local_38 + lVar4) = 0x10056516e;
                  cVar11 = FUN_1001b8428(&local_19a8);
                  *(undefined8 *)((long)&local_38 + lVar4) = 0x100565179;
                  FUN_1001b7a50(&local_19a8);
                  if (cVar11 == '\0') {
                    *(undefined8 *)((long)&local_38 + lVar4) = 0x10056518d;
                    FUN_1001b7a5c(&local_19a8,lVar22 + 0x48);
                    *(undefined8 *)((long)&local_38 + lVar4) = 0x1005651b8;
                    local_1a58 = &local_19a8;
                    lVar19 = FUN_100411906(local_1ad8,&local_19a8,&DAT_100712240);
                    lVar19 = *(long *)(lVar19 + 0x20);
                    *(undefined8 *)((long)&local_38 + lVar4) = 0x1005651c4;
                    FUN_1001b7a50(&local_19a8);
                    if (lVar19 == 0) {
                      *(undefined8 *)((long)&local_38 + lVar4) = 0x1005651ce;
                      uVar17 = FUN_1001cc310();
                      *(undefined8 *)((long)&local_38 + lVar4) = 0x1005651de;
                      cVar11 = _os_log_type_enabled(uVar17,0x10);
                      if (cVar11 != '\0') {
                        local_19a8 = 0x8220202;
                        uStack_19a4 = 0x7a168c;
                        uStack_19a0 = 1;
                        uStack_199c = 0x822;
                        uStack_199a = 0x873a;
                        uStack_1998 = 0x7e;
                        uStack_1996 = 1;
                        *(undefined8 *)((long)&local_38 + lVar4) = 0x100565afb;
                        __os_log_error_impl(0x100000000,uVar17,0x10,"%{public}s: (%{public}s)",
                                            &local_19a8,0x16);
                      }
                      *(undefined8 *)((long)&local_38 + lVar4) = 0x1005651ef;
                      cVar11 = FUN_1001782e9(0,0);
                      if (cVar11 == '\0') goto LAB_100565208;
                    }
                    lVar18 = *(long *)(lVar19 + 0x40);
                    puVar20[5] = lVar18;
                    if (lVar18 == 0) {
                      puVar20[5] = *(undefined8 *)(lVar19 + 0x60);
                    }
                  }
LAB_100565208:
                  local_1a78 = (long *)((ulong)local_1a78 & 0xffffffff00000000);
                  if ((int)local_1a70 == 2) {
                    *(undefined2 *)(puVar20 + 0x15) = (undefined2)local_40;
                    *(undefined2 *)((long)puVar20 + 0xaa) = (undefined2)local_40;
                    *(undefined8 *)((long)&local_38 + lVar4) = 0x100565238;
                    uVar33 = FUN_1001c5bcd(0);
                    local_1a88 = uVar33;
                    if (uVar33 == 0) {
                      *(undefined8 *)((long)&local_38 + lVar4) = 0x10056545c;
                      uVar17 = FUN_1001cc310();
                      *(undefined8 *)((long)&local_38 + lVar4) = 0x10056546c;
                      cVar11 = _os_log_type_enabled(uVar17,0x10);
                      if (cVar11 != '\0') {
                        local_19a8 = 0x8220202;
                        uStack_19a4 = 0x7a0a90;
                        uStack_19a0 = 1;
                        uStack_199c = 0x822;
                        uStack_199a = 0x88a0;
                        uStack_1998 = 0x7e;
                        uStack_1996 = 1;
                        *(undefined8 *)((long)&local_38 + lVar4) = 0x100565b57;
                        __os_log_error_impl(0x100000000,uVar17,0x10,"%{public}s: (%{public}s)",
                                            &local_19a8,0x16);
                      }
                      iVar13 = -0x6c;
                      *(undefined8 *)((long)&local_38 + lVar4) = 0x100565483;
                      FUN_1001782e9(0,0);
LAB_100565615:
                      *(undefined8 *)((long)&local_38 + lVar4) = 0x10056561a;
                      uVar17 = FUN_1001cc310();
                      *(undefined8 *)((long)&local_38 + lVar4) = 0x10056562a;
                      cVar11 = _os_log_type_enabled(uVar17,0x10);
                      if (cVar11 != '\0') {
                        local_19a8 = 0x8220202;
                        uStack_19a4 = 0x7a0a90;
                        uStack_19a0 = 1;
                        uStack_199c = 0x400;
                        uStack_199a = (undefined2)iVar13;
                        uStack_1998 = (undefined2)((uint)iVar13 >> 0x10);
                        *(undefined8 *)((long)&local_38 + lVar4) = 0x10056598b;
                        __os_log_error_impl(0x100000000,uVar17,0x10,"%{public}s: err == (%d)",
                                            &local_19a8,0x12);
                      }
                    }
                    else {
                      for (plVar21 = *(long **)(lVar22 + 0x88); plVar21 != *(long **)(lVar22 + 0x90)
                          ; plVar21 = plVar21 + 1) {
                        lVar19 = *(long *)(*plVar21 + 0x30);
                        local_1a58._0_4_ = (uint)lVar19;
                        local_1a58._4_4_ = (uint)((ulong)lVar19 >> 0x20);
                        if (lVar19 == 0) {
                          *(undefined8 *)((long)&local_38 + lVar4) = 0x10056527b;
                          uVar17 = FUN_1001cc310();
                          *(undefined8 *)((long)&local_38 + lVar4) = 0x10056528b;
                          cVar11 = _os_log_type_enabled(uVar17,0x10);
                          if (cVar11 != '\0') {
                            local_19a8 = 0x8220202;
                            uStack_19a4 = 0x7ab58c;
                            uStack_19a0 = 1;
                            uStack_199c = 0x822;
                            uStack_199a = 0x8119;
                            uStack_1998 = 0x7e;
                            uStack_1996 = 1;
                            *(undefined8 *)((long)&local_38 + lVar4) = 0x100565318;
                            __os_log_error_impl(0x100000000,uVar17,0x10,"%{public}s: (%{public}s)",
                                                &local_19a8,0x16);
                          }
                          *(undefined8 *)((long)&local_38 + lVar4) = 0x100565298;
                          cVar11 = FUN_1001782e9(0,0);
                          if (cVar11 != '\0') goto LAB_10056529c;
                        }
                        else {
LAB_10056529c:
                          *(undefined8 *)((long)&local_38 + lVar4) = 0x1005652b0;
                          iVar13 = FUN_1001c6182(uVar33,&local_1a58,8);
                          if (iVar13 != 0) {
                            if (iVar13 != -0x80) {
                              *(undefined8 *)((long)&local_38 + lVar4) = 0x100565493;
                              uVar17 = FUN_1001cc310();
                              *(undefined8 *)((long)&local_38 + lVar4) = 0x1005654a3;
                              cVar11 = _os_log_type_enabled(uVar17,0x10);
                              uVar33 = local_1a88;
                              if (cVar11 != '\0') {
                                local_19a8 = 0x8220202;
                                uStack_19a4 = 0x7a0a90;
                                uStack_19a0 = 1;
                                uStack_199c = 0x400;
                                uStack_199a = (undefined2)iVar13;
                                uStack_1998 = (undefined2)((uint)iVar13 >> 0x10);
                                *(undefined8 *)((long)&local_38 + lVar4) = 0x100565d4a;
                                __os_log_error_impl(0x100000000,uVar17,0x10,
                                                    "%{public}s: err == (%d)",&local_19a8,0x12);
                              }
                            }
                            *(undefined8 *)((long)&local_38 + lVar4) = 0x1005654ba;
                            FUN_1001c6209(uVar33);
                            goto LAB_1005655c6;
                          }
                        }
                      }
                      *(undefined4 *)(puVar20 + 10) = 0;
                      if (puVar20[0xb] != 0) {
                        *(undefined8 *)((long)&local_38 + lVar4) = 0x100565332;
                        FUN_1001c64c1();
                        puVar20[0xb] = 0;
                      }
                      uVar14 = 0;
                      if (*(char *)((long)puVar20 + 0x11) != '\x11') {
                        *(undefined8 *)((long)&local_38 + lVar4) = 0x10056534f;
                        uVar14 = FUN_1001c5d9c(local_1a88);
                        uVar14 = uVar14 >> 3;
                      }
                      *(undefined8 *)((long)&local_38 + lVar4) = 0x100565362;
                      local_1a80 = (long *)FUN_1001c627e(local_1a88);
                      *(undefined8 *)((long)&local_38 + lVar4) = 0x100565378;
                      lVar22 = FUN_1001c6429((ulong)uVar14 << 4);
                      puVar20[0xb] = lVar22;
                      if (lVar22 == 0) {
                        *(undefined8 *)((long)&local_38 + lVar4) = 0x100565576;
                        uVar17 = FUN_1001cc310();
                        *(undefined8 *)((long)&local_38 + lVar4) = 0x100565586;
                        cVar11 = _os_log_type_enabled(uVar17,0x10);
                        if (cVar11 != '\0') {
                          local_19a8 = 0x8220202;
                          uStack_19a4 = 0x7a0a90;
                          uStack_19a0 = 1;
                          uStack_199c = 0x822;
                          uStack_199a = 0x70c0;
                          uStack_1998 = 0x7c;
                          uStack_1996 = 1;
                          *(undefined8 *)((long)&local_38 + lVar4) = 0x100565cf5;
                          __os_log_error_impl(0x100000000,uVar17,0x10,"%{public}s: (%{public}s)",
                                              &local_19a8,0x16);
                        }
                        *(undefined8 *)((long)&local_38 + lVar4) = 0x100565597;
                        FUN_1001782e9(0,0);
                        iVar13 = -0x6c;
                        *(undefined8 *)((long)&local_38 + lVar4) = 0x1005655a9;
                        FUN_1001c6209(local_1a88);
LAB_1005655a9:
                        *(undefined8 *)((long)&local_38 + lVar4) = 0x1005655ae;
                        uVar17 = FUN_1001cc310();
                        *(undefined8 *)((long)&local_38 + lVar4) = 0x1005655be;
                        cVar11 = _os_log_type_enabled(uVar17,0x10);
                        if (cVar11 != '\0') {
                          local_19a8 = 0x8220202;
                          uStack_19a4 = 0x7a0a90;
                          uStack_19a0 = 1;
                          uStack_199c = 0x400;
                          uStack_199a = (undefined2)iVar13;
                          uStack_1998 = (undefined2)((uint)iVar13 >> 0x10);
                          *(undefined8 *)((long)&local_38 + lVar4) = 0x100565c99;
                          __os_log_error_impl(0x100000000,uVar17,0x10,"%{public}s: err == (%d)",
                                              &local_19a8,0x12);
                        }
                      }
                      else {
                        if (uVar14 != 0) {
                          uVar33 = 0;
                          do {
                            uVar17 = puVar20[1];
                            lVar22 = local_1a80[uVar33];
                            *(undefined8 *)((long)&local_38 + lVar4) = 0x1005653a5;
                            lVar22 = FUN_1004985e6(uVar17,lVar22);
                            if ((lVar22 != 0) && (*(char *)(lVar22 + 0x83) == '\0')) {
                              uVar16 = *(undefined4 *)(puVar20 + 10);
                              *(undefined8 *)((long)&local_38 + lVar4) = 0x1005653d2;
                              iVar13 = FUN_10049b80b(puVar20,uVar16,lVar22);
                              if (iVar13 != -0x80) {
                                if (iVar13 == 0) {
                                  *(int *)(puVar20 + 10) = *(int *)(puVar20 + 10) + 1;
                                  *(short *)(lVar22 + 0x60) = *(short *)(lVar22 + 0x60) + 1;
                                }
                                else {
                                  *(undefined8 *)((long)&local_38 + lVar4) = 0x1005653ee;
                                  uVar17 = FUN_1001cc310();
                                  *(undefined8 *)((long)&local_38 + lVar4) = 0x1005653fe;
                                  cVar11 = _os_log_type_enabled(uVar17,0x10);
                                  if (cVar11 != '\0') {
                                    local_19a8 = 0x8220202;
                                    uStack_19a4 = 0x7a0a90;
                                    uStack_19a0 = 1;
                                    uStack_199c = 0x400;
                                    uStack_199a = (undefined2)iVar13;
                                    uStack_1998 = (undefined2)((uint)iVar13 >> 0x10);
                                    *(undefined8 *)((long)&local_38 + lVar4) = 0x100565452;
                                    __os_log_error_impl(0x100000000,uVar17,0x10,
                                                        "%{public}s: err == (%d)",&local_19a8,0x12);
                                  }
                                }
                              }
                            }
                            uVar33 = uVar33 + 1;
                          } while (uVar14 != uVar33);
                        }
                        *(undefined8 *)((long)&local_38 + lVar4) = 0x1005654c7;
                        iVar13 = FUN_100591a43(puVar20);
                        if ((iVar13 != -0x80) && (iVar13 != 0)) {
                          *(undefined8 *)((long)&local_38 + lVar4) = 0x1005654d9;
                          uVar17 = FUN_1001cc310();
                          *(undefined8 *)((long)&local_38 + lVar4) = 0x1005654e9;
                          cVar11 = _os_log_type_enabled(uVar17,0x10);
                          if (cVar11 != '\0') {
                            local_19a8 = 0x8220202;
                            uStack_19a4 = 0x7a0a90;
                            uStack_19a0 = 1;
                            uStack_199c = 0x400;
                            uStack_199a = (undefined2)iVar13;
                            uStack_1998 = (undefined2)((uint)iVar13 >> 0x10);
                            *(undefined8 *)((long)&local_38 + lVar4) = 0x100565d9f;
                            __os_log_error_impl(0x100000000,uVar17,0x10,"%{public}s: err == (%d)",
                                                &local_19a8,0x12);
                          }
                        }
                        *(undefined8 *)((long)&local_38 + lVar4) = 0x1005654fd;
                        FUN_1001c6209(local_1a88);
                        if ((iVar13 != -0x80) && (iVar13 != 0)) goto LAB_1005655a9;
                      }
LAB_1005655c6:
                      uVar33 = local_48;
                      if (iVar13 != -0x80) {
                        if (iVar13 == 0) {
                          if ((local_48 != 0 & (byte)(local_1a5c >> 10)) == 1) {
                            uVar17 = puVar20[1];
                            *(undefined8 *)((long)&local_38 + lVar4) = 0x1005655f7;
                            plVar21 = (long *)FUN_1004985e6(uVar17,local_48);
                            if (plVar21 == (long *)0x0) {
                              lVar22 = puVar20[1];
                              *(undefined8 *)((long)&local_38 + lVar4) = 0x10056589f;
                              cVar11 = FUN_100495380(lVar22);
                              if (cVar11 == '\0') {
                                *(undefined8 *)((long)&local_38 + lVar4) = 0x100565c19;
                                uVar17 = FUN_1001cc310();
                                *(undefined8 *)((long)&local_38 + lVar4) = 0x100565c29;
                                cVar11 = _os_log_type_enabled(uVar17,0x10);
                                if (cVar11 != '\0') {
                                  local_19a8 = 0x8220202;
                                  uStack_19a4 = 0x7a0a90;
                                  uStack_19a0 = 1;
                                  uStack_199c = 0x822;
                                  uStack_199a = 0x7bca;
                                  uStack_1998 = 0x7b;
                                  uStack_1996 = 1;
                                  *(undefined8 *)((long)&local_38 + lVar4) = 0x100565dfb;
                                  __os_log_error_impl(0x100000000,uVar17,0x10,
                                                      "%{public}s: (%{public}s)",&local_19a8,0x16);
                                }
                                local_1a78 = (long *)((ulong)local_1a78 & 0xffffffff00000000);
                                *(undefined8 *)((long)&local_38 + lVar4) = 0x100565c44;
                                FUN_1001782e9(0,0);
                                goto LAB_100565639;
                              }
                              uVar2 = (uint)(uVar33 >> 0x18);
                              uVar14 = (uint)(uVar33 >> 8);
                              local_19a8 = (uint)(byte)(uVar33 >> 0x38) |
                                           ((uint)(uVar33 >> 0x20) & 0xff0000) >> 8 |
                                           uVar2 & 0xff0000 | uVar14 & 0xff000000;
                              uStack_19a4 = uVar2 & 0xff | uVar14 & 0xff00 |
                                            (uint)(((uVar33 & 0xff00) << 0x28) >> 0x20) |
                                            (uint)((uVar33 << 0x38) >> 0x20);
                              plVar21 = (long *)(lVar22 + 0x10);
                              do {
                                plVar21 = (long *)*plVar21;
                                if (plVar21 == (long *)0x0) goto LAB_100565639;
                                *(undefined8 *)((long)&local_38 + lVar4) = 0x1005658d6;
                                cVar11 = FUN_1001c5630(&local_19a8,plVar21 + 5,8);
                              } while (cVar11 == '\0');
                            }
                            uVar16 = *(undefined4 *)((long)plVar21 + 0x18);
                            *(undefined4 *)((long)puVar20 + 0x94) = uVar16;
                            *(undefined4 *)(puVar20 + 0x13) = uVar16;
                          }
                          goto LAB_100565639;
                        }
                        goto LAB_100565615;
                      }
                    }
                    local_1a78 = (long *)CONCAT44(local_1a78._4_4_,iVar13);
                  }
                }
              }
            }
LAB_100565639:
            *(undefined8 *)((long)&local_38 + lVar4) = 0x100565648;
            FUN_1001b7a50(local_1478);
            *(undefined8 *)((long)&local_38 + lVar4) = 0x100565654;
            FUN_1001b7a50(local_1ae8);
          }
          plVar21 = local_1a68 + 1;
        } while (plVar21 != *(long **)((long)local_1a90 + 0x58));
      }
      iVar13 = (int)local_1a78;
      if (*(int *)(param_7 + 0x20) != 0) {
        puVar20 = (undefined8 *)(param_7 + 0x28);
        if (*(long **)(param_7 + 0x28) == (long *)0x0) {
          plVar21 = (long *)0x0;
        }
        else {
          plVar3 = *(long **)(param_7 + 0x28);
          plVar31 = (long *)0x0;
          do {
            plVar21 = plVar3;
            plVar3 = (long *)*plVar21;
            *plVar21 = (long)plVar31;
            plVar31 = plVar21;
          } while (plVar3 != (long *)0x0);
        }
        *puVar20 = plVar21;
        if (((ulong)local_1b20 & 0x40) != 0) {
          *(undefined8 *)((long)&local_38 + lVar4) = 0x100565eec;
          FUN_100567ae8(puVar20,FUN_100567ad8,0);
          puVar25 = (undefined8 *)*puVar20;
          if (puVar25 == (undefined8 *)0x0) {
            *(undefined8 *)((long)&local_38 + lVar4) = 0x100565f90;
            uVar17 = FUN_1001cc310();
            *(undefined8 *)((long)&local_38 + lVar4) = 0x100565fa0;
            cVar11 = _os_log_type_enabled(uVar17,0x10);
            if (cVar11 != '\0') {
              local_17a8 = 0x8220202;
              uStack_17a4 = 0x7a0a90;
              uStack_17a0 = 1;
              uStack_179c = 0x822;
              uStack_179a = 0x87c7;
              uStack_1798 = 0x7e;
              uStack_1797 = 0;
              uStack_1796 = 1;
              *(undefined8 *)((long)&local_38 + lVar4) = 0x100566cb6;
              __os_log_error_impl(0x100000000,uVar17,0x10,"%{public}s: (%{public}s)",&local_17a8,
                                  0x16);
            }
            *(undefined8 *)((long)&local_38 + lVar4) = 0x100565fb1;
            FUN_1001782e9(0,0);
          }
          else {
            puVar30 = puVar25;
            if (*(char *)((long)puVar25 + 0x11) == '\x0f') {
              do {
                puVar26 = puVar30;
                puVar30 = (undefined8 *)*puVar26;
                if (puVar30 == (undefined8 *)0x0) goto LAB_100565fb1;
              } while (*(char *)((long)puVar30 + 0x11) == '\x0f');
              *puVar20 = puVar30;
              *puVar26 = 0;
              puVar30 = (undefined8 *)*puVar20;
              do {
                puVar26 = puVar30;
                puVar30 = (undefined8 *)*puVar26;
              } while (puVar30 != (undefined8 *)0x0);
              *puVar26 = puVar25;
            }
          }
LAB_100565fb1:
          plVar21 = (long *)*puVar20;
        }
        if (plVar21 != (long *)0x0) {
          sVar28 = 0;
          do {
            *(short *)((long)plVar21 + 0x12) = sVar28;
            sVar28 = sVar28 + 1;
            plVar21 = (long *)*plVar21;
          } while (plVar21 != (long *)0x0);
        }
      }
LAB_100565fc9:
      if (iVar13 != -0x80) {
        if (iVar13 == 0) {
          iVar13 = 0;
          if (local_1b58 == 2) {
            local_1a90 = local_1b40;
            *(undefined8 *)((long)&local_38 + lVar4) = 0x10056600d;
            FUN_1001b7a5c(local_1b88,local_1ab0);
            *(undefined8 *)((long)&local_38 + lVar4) = 0x100566016;
            plVar21 = (long *)FUN_100496019(param_7);
            if (plVar21 != (long *)0x0) {
              local_1a78 = (long *)((long)local_1a90 + 0x68);
              local_1a80 = (long *)((long)local_1a90 + 0x28);
              local_1ab8 = (long)local_1a90 + 0x80;
              local_1ab0 = (undefined8 *)((long)local_1a90 + 0x38);
              puVar20 = (undefined8 *)((long)local_1a90 + 0x88);
              do {
                local_1af8[0] = plVar21[4];
                local_1a68 = plVar21;
                if (local_1af8[0] == 0) {
                  *(undefined8 *)((long)&local_38 + lVar4) = 0x100566176;
                  uVar17 = FUN_1001cc310();
                  *(undefined8 *)((long)&local_38 + lVar4) = 0x100566186;
                  cVar11 = _os_log_type_enabled(uVar17,0x10);
                  if (cVar11 != '\0') {
                    local_17a8 = 0x8220202;
                    uStack_17a4 = 0x7a0a90;
                    uStack_17a0 = 1;
                    uStack_179c = 0x822;
                    uStack_179a = 0x8119;
                    uStack_1798 = 0x7e;
                    uStack_1797 = 0;
                    uStack_1796 = 1;
                    *(undefined8 *)((long)&local_38 + lVar4) = 0x100566461;
                    __os_log_error_impl(0x100000000,uVar17,0x10,"%{public}s: (%{public}s)",
                                        &local_17a8,0x16);
                  }
                  *(undefined8 *)((long)&local_38 + lVar4) = 0x100566197;
                  FUN_1001782e9(0,0);
                }
                else {
                  *(undefined8 *)((long)&local_38 + lVar4) = 0x10056608a;
                  lVar22 = FUN_100567324(local_1a78,local_1af8[0],local_1af8);
                  if (*(long *)(lVar22 + 0x28) != 0) {
                    pbVar34 = (byte *)(*(long *)(lVar22 + 0x28) + 0x20);
                    *(undefined8 *)((long)&local_38 + lVar4) = 0x1005660aa;
                    FUN_1001b7a5c(&local_17a8,pbVar34);
                    *(undefined8 *)((long)&local_38 + lVar4) = 0x1005660b9;
                    cVar11 = FUN_1001b8428(&local_17a8);
                    *(undefined8 *)((long)&local_38 + lVar4) = 0x1005660c4;
                    FUN_1001b7a50(&local_17a8);
                    if (cVar11 == '\0') {
                      *(undefined8 *)((long)&local_38 + lVar4) = 0x1005660e3;
                      FUN_1001b7a5c(&local_1bf8,pbVar34);
                      *(undefined8 *)((long)&local_38 + lVar4) = 0x1005660ef;
                      pbVar23 = (byte *)FUN_1001bd420(&local_1bf8);
                      pbVar32 = *(byte **)((long)local_1a90 + 0x30);
                      if (pbVar32 != (byte *)0x0) {
                        uVar33 = (long)pbVar32 - ((ulong)pbVar32 >> 1 & 0x5555555555555555);
                        uVar33 = (uVar33 >> 2 & 0x3333333333333333) + (uVar33 & 0x3333333333333333);
                        uVar33 = ((uVar33 >> 4) + uVar33 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
                        if (uVar33 >> 0x38 < 2) {
                          local_1a70 = (byte *)((ulong)(pbVar32 + -1) & (ulong)pbVar23);
                        }
                        else {
                          local_1a70 = pbVar23;
                          if (pbVar32 <= pbVar23) {
                            local_1a70 = (byte *)((ulong)pbVar23 % (ulong)pbVar32);
                          }
                        }
                        plVar21 = *(long **)(*local_1a80 + (long)local_1a70 * 8);
                        pbVar34 = local_1a70;
                        if ((plVar21 != (long *)0x0) &&
                           (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0)) {
                          local_1b20 = pbVar32 + -1;
                          do {
                            pbVar24 = (byte *)plVar21[1];
                            if (pbVar24 == pbVar23) {
                              *(undefined8 *)((long)&local_38 + lVar4) = 0x100566210;
                              iVar13 = FUN_1001b9c66(plVar21 + 2,&local_1bf8);
                              if (iVar13 == 0) goto LAB_100566493;
                            }
                            else {
                              if ((byte)(uVar33 >> 0x38) < 2) {
                                pbVar24 = (byte *)((ulong)pbVar24 & (ulong)local_1b20);
                              }
                              else if (pbVar32 <= pbVar24) {
                                pbVar24 = (byte *)((ulong)pbVar24 % (ulong)pbVar32);
                              }
                              pbVar34 = local_1a70;
                              if (pbVar24 != local_1a70) break;
                            }
                            plVar21 = (long *)*plVar21;
                            pbVar34 = local_1a70;
                          } while (plVar21 != (long *)0x0);
                        }
                      }
                      *(undefined8 *)((long)&local_38 + lVar4) = 0x100566258;
                      puVar25 = operator_new(0x28);
                      local_17a8 = (uint)puVar25;
                      uStack_17a4 = (uint)((ulong)puVar25 >> 0x20);
                      uStack_17a0 = (uint)local_1ab0;
                      uStack_179c = (undefined2)((ulong)local_1ab0 >> 0x20);
                      uStack_179a = (undefined2)((ulong)local_1ab0 >> 0x30);
                      uStack_1798 = 0;
                      *puVar25 = 0;
                      puVar25[1] = pbVar23;
                      *(undefined8 *)((long)&local_38 + lVar4) = 0x100566297;
                      auVar39._0_8_ = FUN_1001b7a5c(puVar25 + 2,&local_1bf8);
                      auVar39._8_8_ = extraout_XMM0_Qb;
                      puVar25[4] = 0;
                      uStack_1798 = 1;
                      auVar40._4_12_ = auVar39._4_12_;
                      fVar37 = (float)(*(long *)((long)local_1a90 + 0x40) + 1);
                      if ((pbVar32 == (byte *)0x0) ||
                         ((float)pbVar32 * *(float *)((long)local_1a90 + 0x48) < fVar37)) {
                        uVar33 = 1;
                        if ((byte *)0x2 < pbVar32) {
                          uVar33 = (ulong)(((ulong)pbVar32 & (ulong)(pbVar32 + -1)) != 0);
                        }
                        auVar40._0_4_ = fVar37 / *(float *)((long)local_1a90 + 0x48);
                        auVar41 = roundss(auVar40,auVar40,10);
                        uVar29 = (ulong)auVar41._0_4_;
                        uVar33 = (long)pbVar32 * 2 | uVar33;
                        uVar29 = (long)(auVar41._0_4_ - _DAT_10070844c) & (long)uVar29 >> 0x3f |
                                 uVar29;
                        if (uVar29 < uVar33) {
                          uVar29 = uVar33;
                        }
                        *(undefined8 *)((long)&local_38 + lVar4) = 0x10056636e;
                        FUN_100411c56(local_1a80,uVar29);
                        pbVar32 = *(byte **)((long)local_1a90 + 0x30);
                        if (((ulong)pbVar32 & (ulong)(pbVar32 + -1)) == 0) {
                          pbVar34 = (byte *)((ulong)pbVar23 & (ulong)(pbVar32 + -1));
                        }
                        else {
                          pbVar34 = pbVar23;
                          if (pbVar32 <= pbVar23) {
                            pbVar34 = (byte *)((ulong)pbVar23 % (ulong)pbVar32);
                          }
                        }
                      }
                      puVar25 = *(undefined8 **)(*local_1a80 + (long)pbVar34 * 8);
                      if (puVar25 == (undefined8 *)0x0) {
                        *(undefined8 *)CONCAT44(uStack_17a4,local_17a8) = *local_1ab0;
                        *local_1ab0 = CONCAT44(uStack_17a4,local_17a8);
                        *(undefined8 **)(*local_1a80 + (long)pbVar34 * 8) = local_1ab0;
                        lVar22 = *(long *)CONCAT44(uStack_17a4,local_17a8);
                        if (lVar22 != 0) {
                          pbVar34 = *(byte **)(lVar22 + 8);
                          if (((ulong)pbVar32 & (ulong)(pbVar32 + -1)) == 0) {
                            pbVar34 = (byte *)((ulong)pbVar34 & (ulong)(pbVar32 + -1));
                          }
                          else if (pbVar32 <= pbVar34) {
                            pbVar34 = (byte *)((ulong)pbVar34 % (ulong)pbVar32);
                          }
                          *(long **)(*local_1a80 + (long)pbVar34 * 8) =
                               (long *)CONCAT44(uStack_17a4,local_17a8);
                        }
                      }
                      else {
                        *(undefined8 *)CONCAT44(uStack_17a4,local_17a8) = *puVar25;
                        *puVar25 = CONCAT44(uStack_17a4,local_17a8);
                      }
                      plVar21 = (long *)CONCAT44(uStack_17a4,local_17a8);
                      *(long *)((long)local_1a90 + 0x40) = *(long *)((long)local_1a90 + 0x40) + 1;
LAB_100566493:
                      if (plVar21[4] == 0) {
                        *(undefined8 *)((long)&local_38 + lVar4) = 0x1005664b9;
                        uVar17 = FUN_1001cc310();
                        *(undefined8 *)((long)&local_38 + lVar4) = 0x1005664c9;
                        cVar11 = _os_log_type_enabled(uVar17,0x10);
                        if (cVar11 != '\0') {
                          local_17a8 = 0x8220202;
                          uStack_17a4 = 0x7a0a90;
                          uStack_17a0 = 1;
                          uStack_179c = 0x822;
                          uStack_179a = 0xc822;
                          uStack_1798 = 0x7c;
                          uStack_1797 = 0;
                          uStack_1796 = 1;
                          *(undefined8 *)((long)&local_38 + lVar4) = 0x100566a76;
                          __os_log_error_impl(0x100000000,uVar17,0x10,"%{public}s: (%{public}s)",
                                              &local_17a8,0x16);
                        }
                        *(undefined8 *)((long)&local_38 + lVar4) = 0x1005664da;
                        FUN_1001782e9(0,0);
                        *(undefined8 *)((long)&local_38 + lVar4) = 0x1005664e6;
                        FUN_1001b7a50(&local_1bf8);
LAB_1005664e6:
                        *(undefined8 *)((long)&local_38 + lVar4) = 0x1005664eb;
                        uVar17 = FUN_1001cc310();
                        *(undefined8 *)((long)&local_38 + lVar4) = 0x1005664fb;
                        cVar11 = _os_log_type_enabled(uVar17,0x10);
                        if (cVar11 != '\0') {
                          local_17a8 = 0x8220202;
                          uStack_17a4 = 0x7ab58c;
                          uStack_17a0 = 1;
                          uStack_179c = 0x822;
                          uStack_179a = 34999;
                          uStack_1798 = 0x7e;
                          uStack_1797 = 0;
                          uStack_1796 = 1;
                          *(undefined8 *)((long)&local_38 + lVar4) = 0x100566a1a;
                          __os_log_error_impl(0x100000000,uVar17,0x10,"%{public}s: (%{public}s)",
                                              &local_17a8,0x16);
                        }
                        *(undefined8 *)((long)&local_38 + lVar4) = 0x10056650c;
                        cVar11 = FUN_1001782e9(0,0);
                        if (cVar11 == '\0') goto LAB_100566524;
                        lVar22 = 0;
                      }
                      else {
                        lVar22 = *(long *)(plVar21[4] + 0x60);
                        *(undefined8 *)((long)&local_38 + lVar4) = 0x1005664ad;
                        FUN_1001b7a50(&local_1bf8);
                        if (lVar22 == 0) goto LAB_1005664e6;
                      }
                      local_1a68[7] = lVar22;
                    }
LAB_100566524:
                    for (puVar25 = (undefined8 *)local_1a68[0xf]; puVar25 != (undefined8 *)0x0;
                        puVar25 = (undefined8 *)*puVar25) {
                      uVar14 = *(uint *)(puVar25 + 1);
                      if (uVar14 == 0) {
                        *(undefined8 *)((long)&local_38 + lVar4) = 0x10056656d;
                        uVar17 = FUN_1001cc310();
                        *(undefined8 *)((long)&local_38 + lVar4) = 0x10056657d;
                        cVar11 = _os_log_type_enabled(uVar17,0x10);
                        if (cVar11 != '\0') {
                          pcVar27 = "faceInstance->faceAlbumSourceID != 0";
                          goto LAB_100566820;
                        }
                        goto LAB_10056684f;
                      }
                      puVar30 = (undefined8 *)*puVar20;
                      puVar26 = puVar20;
                      while (puVar35 = puVar26, puVar36 = puVar26, puVar30 != (undefined8 *)0x0) {
                        while (puVar26 = puVar30, *(uint *)(puVar26 + 4) <= uVar14) {
                          if (uVar14 <= *(uint *)(puVar26 + 4)) goto LAB_1005665ec;
                          puVar30 = (undefined8 *)puVar26[1];
                          if ((undefined8 *)puVar26[1] == (undefined8 *)0x0) {
                            puVar36 = puVar26 + 1;
                            puVar35 = puVar26;
                            goto LAB_1005665b6;
                          }
                        }
                        puVar30 = (undefined8 *)*puVar26;
                      }
LAB_1005665b6:
                      *(undefined8 *)((long)&local_38 + lVar4) = 0x1005665c0;
                      puVar26 = operator_new(0x30);
                      *(undefined4 *)(puVar26 + 4) = *(undefined4 *)(puVar25 + 1);
                      puVar26[5] = 0;
                      *(undefined8 *)((long)&local_38 + lVar4) = 0x1005665e9;
                      FUN_10020e4b6(local_1ab8,puVar35,puVar36,puVar26);
LAB_1005665ec:
                      if (puVar26[5] != 0) {
                        lVar22 = *(long *)(puVar26[5] + 0x60);
                        if (lVar22 == 0) {
                          *(undefined8 *)((long)&local_38 + lVar4) = 0x100566684;
                          uVar17 = FUN_1001cc310();
                          *(undefined8 *)((long)&local_38 + lVar4) = 0x100566694;
                          cVar11 = _os_log_type_enabled(uVar17,0x10);
                          if (cVar11 != '\0') {
                            pcVar27 = "iTunesSourceID != 0";
LAB_100566820:
                            uStack_179c = 0x822;
                            uStack_17a0 = 1;
                            uStack_17a4 = 0x7a0a90;
                            local_17a8 = 0x8220202;
                            uStack_179a = SUB82(pcVar27,0);
                            uStack_1798 = (undefined1)((ulong)pcVar27 >> 0x10);
                            uStack_1797 = 0;
                            uStack_1796 = (undefined4)((ulong)pcVar27 >> 0x20);
                            *(undefined8 *)((long)&local_38 + lVar4) = 0x10056684f;
                            __os_log_error_impl(0x100000000,uVar17,0x10,"%{public}s: (%{public}s)",
                                                &local_17a8,0x16);
                          }
                        }
                        else {
                          *(undefined8 *)((long)&local_38 + lVar4) = 0x100566610;
                          lVar22 = FUN_10049aa6e(param_7,lVar22,1);
                          if (lVar22 == 0) {
                            *(undefined8 *)((long)&local_38 + lVar4) = 0x1005666ce;
                            uVar17 = FUN_1001cc310();
                            *(undefined8 *)((long)&local_38 + lVar4) = 0x1005666de;
                            cVar11 = _os_log_type_enabled(uVar17,0x10);
                            if (cVar11 != '\0') {
                              pcVar27 = "imageAlbum != nullptr";
                              goto LAB_100566820;
                            }
                          }
                          else {
                            if (*(int *)(lVar22 + 0x18) != 0) {
                              *(int *)(puVar25 + 1) = *(int *)(lVar22 + 0x18);
                              *(undefined8 *)((long)&local_38 + lVar4) = 0x10056663a;
                              FUN_1001b7a5c(&local_19c8,local_1b88);
                              uVar17 = puVar25[2];
                              *(undefined8 *)((long)&local_38 + lVar4) = 0x10056664a;
                              FUN_1001b7eb0(local_1ac8,uVar17);
                              if (param_8 == 0) {
                                uVar12 = *(undefined2 *)((long)puVar25 + 0xc);
                                *(undefined8 *)((long)&local_38 + lVar4) = 0x100566669;
                                lVar22 = FUN_1004993b9(local_1a68,5,uVar12);
                                if (lVar22 == 0) goto LAB_100566713;
                                *(undefined1 *)(lVar22 + 0x50) = 0;
LAB_100566734:
                                *(undefined8 *)((long)&local_38 + lVar4) = 0x100566747;
                                FUN_1001b7a5c(&local_19a8,&local_19c8);
                                *(undefined8 *)((long)&local_38 + lVar4) = 0x10056675d;
                                FUN_1001b7a5c(&local_1a58,local_1ac8);
                                *(undefined8 *)((long)&local_38 + lVar4) = 0x100566778;
                                iVar13 = FUN_10056747a(local_1a5c,&local_19a8,lVar22,&local_1a58);
                                *(undefined8 *)((long)&local_38 + lVar4) = 0x100566783;
                                FUN_1001b7a50(&local_1a58);
                                *(undefined8 *)((long)&local_38 + lVar4) = 0x10056678b;
                                FUN_1001b7a50(&local_19a8);
                                if ((iVar13 != -0x80) && (iVar13 != 0)) {
                                  *(undefined8 *)((long)&local_38 + lVar4) = 0x10056679b;
                                  uVar17 = FUN_1001cc310();
                                  *(undefined8 *)((long)&local_38 + lVar4) = 0x1005667ab;
                                  cVar11 = _os_log_type_enabled(uVar17,0x10);
                                  if (cVar11 != '\0') {
                                    local_17a8 = 0x8220202;
                                    uStack_17a4 = 0x7a0a90;
                                    uStack_17a0 = 1;
                                    uStack_179c = 0x400;
                                    uStack_179a = (undefined2)iVar13;
                                    uStack_1798 = (undefined1)((uint)iVar13 >> 0x10);
                                    uStack_1797 = (undefined1)((uint)iVar13 >> 0x18);
                                    *(undefined8 *)((long)&local_38 + lVar4) = 0x1005669be;
                                    __os_log_error_impl(0x100000000,uVar17,0x10,
                                                        "%{public}s: err == (%d)",&local_17a8,0x12);
                                  }
                                }
                                *(undefined8 *)((long)&local_38 + lVar4) = 0x1005667bf;
                                FUN_1001b7a50(local_1ac8);
                                *(undefined8 *)((long)&local_38 + lVar4) = 0x1005667cb;
                                FUN_1001b7a50(&local_19c8);
                                if ((iVar13 == -0x80) || (iVar13 == 0)) goto LAB_100566858;
                              }
                              else {
LAB_100566713:
                                uVar12 = *(undefined2 *)((long)puVar25 + 0xc);
                                *(undefined8 *)((long)&local_38 + lVar4) = 0x100566728;
                                lVar22 = FUN_100499159(local_1a68,5,uVar12);
                                if (lVar22 != 0) goto LAB_100566734;
                                *(undefined8 *)((long)&local_38 + lVar4) = 0x100566865;
                                uVar17 = FUN_1001cc310();
                                *(undefined8 *)((long)&local_38 + lVar4) = 0x100566875;
                                cVar11 = _os_log_type_enabled(uVar17,0x10);
                                if (cVar11 != '\0') {
                                  local_17a8 = 0x8220202;
                                  uStack_17a4 = 0x7a0a90;
                                  uStack_17a0 = 1;
                                  uStack_179c = 0x822;
                                  uStack_179a = 0x867f;
                                  uStack_1798 = 0x7e;
                                  uStack_1797 = 0;
                                  uStack_1796 = 1;
                                  *(undefined8 *)((long)&local_38 + lVar4) = 0x100566969;
                                  __os_log_error_impl(0x100000000,uVar17,0x10,
                                                      "%{public}s: (%{public}s)",&local_17a8,0x16);
                                }
                                *(undefined8 *)((long)&local_38 + lVar4) = 0x100566886;
                                FUN_1001782e9(0,0);
                                *(undefined8 *)((long)&local_38 + lVar4) = 0x100566892;
                                FUN_1001b7a50(local_1ac8);
                                *(undefined8 *)((long)&local_38 + lVar4) = 0x10056689e;
                                FUN_1001b7a50(&local_19c8);
                                iVar13 = -0x6c;
                              }
                              *(undefined8 *)((long)&local_38 + lVar4) = 0x1005668a9;
                              uVar17 = FUN_1001cc310();
                              *(undefined8 *)((long)&local_38 + lVar4) = 0x1005668b9;
                              cVar11 = _os_log_type_enabled(uVar17,0x10);
                              if (cVar11 != '\0') {
                                local_17a8 = 0x8220202;
                                uStack_17a4 = 0x7a0a90;
                                uStack_17a0 = 1;
                                uStack_179c = 0x400;
                                uStack_179a = (undefined2)iVar13;
                                uStack_1798 = (undefined1)((uint)iVar13 >> 0x10);
                                uStack_1797 = (undefined1)((uint)iVar13 >> 0x18);
                                *(undefined8 *)((long)&local_38 + lVar4) = 0x10056690d;
                                __os_log_error_impl(0x100000000,uVar17,0x10,
                                                    "%{public}s: err == (%d)",&local_17a8,0x12);
                              }
                              goto LAB_100566858;
                            }
                            *(undefined8 *)((long)&local_38 + lVar4) = 0x1005667e4;
                            uVar17 = FUN_1001cc310();
                            *(undefined8 *)((long)&local_38 + lVar4) = 0x1005667f4;
                            cVar11 = _os_log_type_enabled(uVar17,0x10);
                            if (cVar11 != '\0') {
                              pcVar27 = "imageAlbum->recordID != 0";
                              goto LAB_100566820;
                            }
                          }
                        }
LAB_10056684f:
                        *(undefined8 *)((long)&local_38 + lVar4) = 0x100566858;
                        FUN_1001782e9(0,0);
                      }
LAB_100566858:
                    }
                  }
                }
                *(undefined8 *)((long)&local_38 + lVar4) = 0x1005661a3;
                plVar21 = (long *)FUN_1004960d0(local_1a68);
              } while (plVar21 != (long *)0x0);
            }
            *(undefined8 *)((long)&local_38 + lVar4) = 0x100566adb;
            FUN_1001b7a50(local_1b88);
            iVar13 = 0;
          }
        }
        else {
          *(undefined8 *)((long)&local_38 + lVar4) = 0x100566a80;
          uVar17 = FUN_1001cc310();
          *(undefined8 *)((long)&local_38 + lVar4) = 0x100566a90;
          cVar11 = _os_log_type_enabled(uVar17,0x10);
          if (cVar11 != '\0') {
            uStack_179a = (undefined2)iVar13;
            uStack_1798 = (undefined1)((uint)iVar13 >> 0x10);
            uStack_1797 = (undefined1)((uint)iVar13 >> 0x18);
            goto LAB_100566b66;
          }
        }
      }
    }
    else {
      *(undefined8 *)((long)&local_38 + lVar4) = 0x1005646af;
      uVar17 = FUN_1001cc310();
      *(undefined8 *)((long)&local_38 + lVar4) = 0x1005646bf;
      cVar11 = _os_log_type_enabled(uVar17,0x10);
      if (cVar11 != '\0') {
        uStack_179a = (undefined2)iVar13;
        uStack_1798 = (undefined1)((uint)iVar13 >> 0x10);
        uStack_1797 = (undefined1)((uint)iVar13 >> 0x18);
LAB_100566b66:
        uStack_179c = 0x400;
        uStack_17a0 = 1;
        uStack_17a4 = 0x7a0a90;
        local_17a8 = 0x8220202;
        *(undefined8 *)((long)&local_38 + lVar4) = 0x100566b79;
        __os_log_error_impl(0x100000000,uVar17,0x10,"%{public}s: err == (%d)",&local_17a8,0x12);
      }
    }
  }
LAB_1005646c7:
  pvVar10 = local_1b40;
  if (local_1b40 != (void *)0x0) {
    *(undefined8 *)((long)&local_38 + lVar4) = 0x1005646db;
    FUN_10040fed6(local_1b40);
    *(undefined8 *)((long)&local_38 + lVar4) = 0x1005646e3;
    operator_delete(pvVar10);
  }
LAB_1005646e3:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)((long)&local_38 + lVar4) = &UNK_100566cde;
    ___stack_chk_fail();
  }
  return iVar13;
}

