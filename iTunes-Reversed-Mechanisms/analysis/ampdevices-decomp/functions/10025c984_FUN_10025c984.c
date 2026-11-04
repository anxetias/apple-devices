// name: FUN_10025c984
// address: 10025c984

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10025c984(undefined8 param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  long lVar5;
  byte *pbVar6;
  code *pcVar7;
  undefined2 uVar8;
  ushort uVar9;
  long *plVar10;
  undefined1 uVar11;
  char cVar12;
  ushort uVar13;
  int iVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  uint uVar19;
  uint uVar20;
  long *plVar21;
  ulong local_4e58;
  ulong local_4e50 [2];
  cfstringStruct *local_4e40;
  undefined8 local_4e38;
  cfstringStruct *local_4e30 [2];
  cfstringStruct *local_4e20 [2];
  char local_4e09;
  undefined4 local_4e08;
  undefined4 uStack_4e04;
  undefined4 local_4e00;
  undefined2 local_4dfc;
  undefined6 uStack_4dfa;
  byte local_4df4;
  byte bStack_4df3;
  byte bStack_4df2;
  undefined1 uStack_4df1;
  undefined4 local_4df0;
  undefined4 uStack_4dec;
  undefined4 local_4de8;
  undefined4 uStack_4de4;
  undefined8 local_4de0;
  byte local_4dd8;
  byte local_4dd7;
  byte local_4dd6;
  uint local_4dd4;
  undefined4 local_4dd0;
  undefined1 local_4dcc;
  undefined1 uStack_4dcb;
  undefined4 uStack_4dca;
  undefined2 uStack_4dc6;
  undefined2 uStack_4dc4;
  undefined4 uStack_4dc2;
  undefined2 uStack_4dbe;
  undefined6 uStack_4dbc;
  undefined2 uStack_4db6;
  undefined2 local_4db4;
  undefined4 uStack_4db2;
  undefined2 uStack_4dae;
  undefined6 local_4dac;
  undefined2 uStack_4da6;
  undefined2 uStack_4da4;
  undefined2 uStack_4da2;
  undefined1 local_4da0;
  undefined1 uStack_4d9f;
  undefined2 local_4d9e;
  undefined2 uStack_4d9c;
  undefined2 local_4d9a;
  undefined2 uStack_4d98;
  undefined4 local_4d96;
  undefined4 uStack_4d92;
  undefined4 uStack_4d8e;
  undefined4 uStack_4d8a;
  long local_4d86;
  long lStack_4d7e;
  undefined8 local_4d76;
  uint local_4d6e;
  undefined1 local_4d6a [16];
  undefined1 local_4d5a [16];
  undefined1 local_4d4a [16];
  undefined1 local_4d3a [16];
  undefined1 local_4d2a [16];
  undefined1 local_4d1a [16];
  int local_4d0a [117];
  undefined8 local_4b36;
  undefined8 uStack_4b2e;
  undefined4 local_4b26;
  undefined4 uStack_4b22;
  undefined4 uStack_4b1e;
  undefined4 uStack_4b1a;
  undefined8 local_4b16;
  undefined8 uStack_4b0e;
  byte local_4b06;
  undefined4 local_4b02;
  undefined8 local_4afe;
  undefined8 uStack_4af6;
  undefined8 local_4aee;
  undefined8 uStack_4ae6;
  undefined8 local_4ade;
  undefined8 uStack_4ad6;
  undefined8 local_4ace;
  undefined8 uStack_4ac6;
  undefined8 local_4abe;
  undefined8 uStack_4ab6;
  undefined8 local_4aae;
  undefined8 uStack_4aa6;
  undefined8 local_4a9e;
  undefined8 uStack_4a96;
  undefined2 local_4a8e;
  uint local_4a8a;
  undefined1 local_4a86 [16];
  undefined1 local_4a76 [16];
  long local_4a66 [2];
  long *local_4a56;
  long *plStack_4a4e;
  undefined1 local_4a46 [5020];
  long local_36aa;
  long local_36a2;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined6 uStack_48;
  undefined8 uStack_40;
  long local_38;
  
  uStack_40 = 0x10025c99c;
  lVar15 = FUN_100108310();
  lVar15 = -lVar15;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  puVar4 = *(undefined8 **)(param_2 + 0x18);
  local_4e38 = param_1;
  if (puVar4 == (undefined8 *)0x0) {
    *(undefined8 *)((long)&local_38 + lVar15) = 0x10025cb4e;
    uVar17 = FUN_1001cc310();
    *(undefined8 *)((long)&local_38 + lVar15) = 0x10025cb5e;
    cVar12 = _os_log_type_enabled(uVar17,0x10);
    if (cVar12 != '\0') {
      local_4e08 = 0x8220202;
      uStack_4e04 = 0x7a0a90;
      local_4e00 = 1;
      local_4dfc = 0x822;
      uStack_4dfa = 0x1007b581f;
      local_4df4 = 0;
      bStack_4df3 = 0;
      *(undefined8 *)((long)&local_38 + lVar15) = 0x10025e1cf;
      __os_log_error_impl(0x100000000,uVar17,0x10,"%{public}s: (%{public}s)",&local_4e08,0x16);
    }
    *(undefined8 *)((long)&local_38 + lVar15) = 0x10025cb6f;
    FUN_1001782e9(0,0);
    *(undefined8 *)((long)&local_38 + lVar15) = 0x10025cb7b;
    FUN_10032f0f2(local_4e38);
    goto LAB_10025e156;
  }
  *(undefined8 *)((long)&local_38 + lVar15) = 0x10025c9ca;
  FUN_10032f0f2();
  local_4e09 = *(char *)(param_2 + 0x21);
  lVar18 = param_2 + 0x22;
  lVar16 = 0;
  if (local_4e09 != '\0') {
    lVar16 = lVar18;
  }
  *(undefined8 *)((long)&local_38 + lVar15) = 0x10025c9f2;
  FUN_10025c0da(&local_4e08);
  *(undefined8 *)((long)&local_38 + lVar15) = 0x10025c9fe;
  FUN_10025c208(&local_4e08);
  if (puVar4[2] == 0) {
    *(undefined8 *)((long)&local_38 + lVar15) = 0x10025cb85;
    uVar17 = FUN_1001cc310();
    *(undefined8 *)((long)&local_38 + lVar15) = 0x10025cb95;
    cVar12 = _os_log_type_enabled(uVar17,0x10);
    if (cVar12 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = 0x7a0a90;
      uStack_50 = 1;
      uStack_4c = 0x822;
      uStack_4a = 0x24b0;
      uStack_48 = 0x1007b;
      *(undefined8 *)((long)&local_38 + lVar15) = 0x10025e21d;
      __os_log_error_impl(0x100000000,uVar17,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    *(undefined8 *)((long)&local_38 + lVar15) = 0x10025cba6;
    FUN_1001782e9(0,0);
  }
  else {
    local_4e08 = (undefined4)*puVar4;
    uStack_4e04 = (undefined4)((ulong)*puVar4 >> 0x20);
    *(undefined8 *)((long)&local_38 + lVar15) = 0x10025ca1b;
    uVar11 = FUN_100474865(puVar4);
    local_4e00 = CONCAT31(local_4e00._1_3_,uVar11);
    local_4dfc = (undefined2)puVar4[0x34];
    uStack_4dfa = (undefined6)((ulong)puVar4[0x34] >> 0x10);
    if (puVar4[2] == 0) {
      *(undefined8 *)((long)&local_38 + lVar15) = 0x10025cbb0;
      uVar17 = FUN_1001cc310();
      *(undefined8 *)((long)&local_38 + lVar15) = 0x10025cbc0;
      cVar12 = _os_log_type_enabled(uVar17,0x10);
      if (cVar12 != '\0') {
        local_58 = 0x8220202;
        uStack_54 = 0x7a0a90;
        uStack_50 = 1;
        uStack_4c = 0x822;
        uStack_4a = 0x24b0;
        uStack_48 = 0x1007b;
        *(undefined8 *)((long)&local_38 + lVar15) = 0x10025e26b;
        __os_log_error_impl(0x100000000,uVar17,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      *(undefined8 *)((long)&local_38 + lVar15) = 0x10025cbd1;
      FUN_1001782e9(0,0);
    }
    else {
      lVar5 = puVar4[5];
      if (lVar5 == 0) {
        *(undefined8 *)((long)&local_38 + lVar15) = 0x10025ca48;
        uVar17 = FUN_1001cc310();
        *(undefined8 *)((long)&local_38 + lVar15) = 0x10025ca58;
        cVar12 = _os_log_type_enabled(uVar17,0x10);
        if (cVar12 != '\0') {
          local_58 = 0x8220202;
          uStack_54 = 0x7a168c;
          uStack_50 = 1;
          uStack_4c = 0x822;
          uStack_4a = 0xf8c9;
          uStack_48 = 0x10079;
          *(undefined8 *)((long)&local_38 + lVar15) = 0x10025e307;
          __os_log_error_impl(0x100000000,uVar17,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        *(undefined8 *)((long)&local_38 + lVar15) = 0x10025ca69;
        cVar12 = FUN_1001782e9(0,0);
        if (cVar12 != '\0') goto LAB_10025ca6d;
      }
      else {
LAB_10025ca6d:
        uVar17 = 0xffffffffffffffff;
        if (*(int *)(lVar5 + 0x10) != 1) {
          uVar17 = *(undefined8 *)(lVar5 + 0x20);
        }
        local_4df0 = (undefined4)uVar17;
        uStack_4dec = (undefined4)((ulong)uVar17 >> 0x20);
      }
      local_4df4 = local_4df4 | 1;
      lVar5 = puVar4[8];
      if (lVar5 == 0) {
        *(undefined8 *)((long)&local_38 + lVar15) = 0x10025ca9b;
        uVar17 = FUN_1001cc310();
        *(undefined8 *)((long)&local_38 + lVar15) = 0x10025caab;
        cVar12 = _os_log_type_enabled(uVar17,0x10);
        if (cVar12 != '\0') {
          local_58 = 0x8220202;
          uStack_54 = 0x7a168c;
          uStack_50 = 1;
          uStack_4c = 0x822;
          uStack_4a = 0xf9c5;
          uStack_48 = 0x10079;
          *(undefined8 *)((long)&local_38 + lVar15) = 0x10025e355;
          __os_log_error_impl(0x100000000,uVar17,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        *(undefined8 *)((long)&local_38 + lVar15) = 0x10025cabc;
        cVar12 = FUN_1001782e9(0,0);
        if (cVar12 != '\0') goto LAB_10025cac0;
      }
      else {
LAB_10025cac0:
        uVar17 = 0xffffffffffffffff;
        if (*(short *)(lVar5 + 0x62) != 1) {
          uVar17 = *(undefined8 *)(lVar5 + 0x18);
        }
        local_4de8 = (undefined4)uVar17;
        uStack_4de4 = (undefined4)((ulong)uVar17 >> 0x20);
      }
      uVar8 = CONCAT11(bStack_4df3,local_4df4);
      local_4df4 = local_4df4 | 2;
      if (local_4e09 == '\0') {
        uVar20 = *(uint *)((long)puVar4 + 0xc2);
        local_4de0 = CONCAT71(local_4de0._1_7_,(byte)uVar20 >> 2) & 0xffffffffffffff01;
        uVar19 = CONCAT13(uStack_4df1,CONCAT12(bStack_4df2,uVar8)) | 0x800002;
LAB_10025cbf0:
        local_4de0 = CONCAT62(local_4de0._2_6_,
                              CONCAT11((byte)(uVar20 >> 0x1d),(undefined1)local_4de0)) &
                     0xffffffffffff01ff;
        uVar19 = uVar19 | 4;
      }
      else {
        *(undefined8 *)((long)&local_38 + lVar15) = 0x10025cb05;
        cVar12 = FUN_10053916d(lVar18,0x7d);
        if (cVar12 != '\0') {
          local_4de0 = CONCAT71(local_4de0._1_7_,*(byte *)((long)puVar4 + 0xc2) >> 2) &
                       0xffffffffffffff01;
          bStack_4df2 = bStack_4df2 | 0x80;
        }
        *(undefined8 *)((long)&local_38 + lVar15) = 0x10025cb2f;
        cVar12 = FUN_10053916d(lVar18,0x5f);
        uVar19 = CONCAT13(uStack_4df1,CONCAT12(bStack_4df2,CONCAT11(bStack_4df3,local_4df4)));
        uVar20 = *(uint *)((long)puVar4 + 0xc2);
        if (cVar12 != '\0') goto LAB_10025cbf0;
      }
      local_4de0._0_6_ =
           CONCAT42(((uint)CONCAT21(*(ushort *)((long)puVar4 + 0xc6) >> 10,
                                    (byte)*(ushort *)((long)puVar4 + 0xc6) >> 5) |
                     (uVar20 >> 0x16 & 0xff) << 0x10 | (uVar20 >> 0xd) << 0x18) &
                    (uint)_DAT_100718e10,(undefined2)local_4de0);
      local_4dd8 = (byte)uVar20 >> 4 & 1;
      local_4dd7 = (byte)(uVar20 >> 0x13) & 1;
      local_4dd6 = (byte)(uVar20 >> 0x1a) & 1;
      local_4dd4 = *(uint *)(puVar4 + 0x33);
      local_4dd0 = *(undefined4 *)((long)puVar4 + 0x124);
      uVar20 = uVar19 | 0x3000f38;
      local_4df4 = (byte)uVar20;
      bStack_4df3 = (byte)(uVar20 >> 8);
      bStack_4df2 = (byte)(uVar19 >> 0x10);
      uStack_4df1 = (undefined1)(uVar20 >> 0x18);
      if (local_4e09 == '\0') {
LAB_10025ccb4:
        uVar17 = puVar4[0x32];
        local_4dcc = (undefined1)uVar17;
        uStack_4dcb = (undefined1)((ulong)uVar17 >> 8);
        uStack_4dca = (undefined4)((ulong)uVar17 >> 0x10);
        uStack_4dc6 = (undefined2)((ulong)uVar17 >> 0x30);
        uVar20 = uVar20 | 0x1000;
      }
      else {
        *(undefined8 *)((long)&local_38 + lVar15) = 0x10025ccaa;
        cVar12 = FUN_10053916d(lVar18,0x6f);
        uVar20 = CONCAT13(uStack_4df1,CONCAT12(bStack_4df2,CONCAT11(bStack_4df3,local_4df4)));
        if (cVar12 != '\0') goto LAB_10025ccb4;
      }
      uVar17 = puVar4[0x30];
      uStack_4dc4 = (undefined2)uVar17;
      uStack_4dc2 = (undefined4)((ulong)uVar17 >> 0x10);
      uStack_4dbe = (undefined2)((ulong)uVar17 >> 0x30);
      uStack_4dbc = (undefined6)puVar4[0x31];
      uStack_4db6 = (undefined2)((ulong)puVar4[0x31] >> 0x30);
      uVar17 = puVar4[0x2f];
      local_4db4 = (undefined2)uVar17;
      uStack_4db2 = (undefined4)((ulong)uVar17 >> 0x10);
      uStack_4dae = (undefined2)((ulong)uVar17 >> 0x30);
      bStack_4df3 = (byte)(uVar20 >> 8) | 0xe0;
      local_4df4 = (byte)uVar20;
      bStack_4df2 = (byte)(uVar20 >> 0x10);
      uStack_4df1 = (undefined1)(uVar20 >> 0x18);
      if (local_4e09 == '\0') {
        local_4dac = (undefined6)puVar4[0x2d];
        uStack_4da6 = (undefined2)((ulong)puVar4[0x2d] >> 0x30);
        uStack_4da4 = (undefined2)*(undefined4 *)(puVar4 + 0x2e);
        uStack_4da2 = (undefined2)((uint)*(undefined4 *)(puVar4 + 0x2e) >> 0x10);
        local_4da0 = *(undefined1 *)((long)puVar4 + 0x13e);
        uStack_4d9c = (undefined2)*(undefined4 *)(puVar4[0xf] + 0x38);
        local_4d9a = (undefined2)((uint)*(undefined4 *)(puVar4[0xf] + 0x38) >> 0x10);
        uVar20 = uVar20 | 0x1fe000;
LAB_10025ce13:
        uStack_4d98 = *(undefined2 *)(puVar4 + 0x28);
        uVar20 = uVar20 | 0x200000;
      }
      else {
        *(undefined8 *)((long)&local_38 + lVar15) = 0x10025cd0e;
        cVar12 = FUN_10053916d(lVar18,0x25);
        if (cVar12 != '\0') {
          local_4dac = (undefined6)puVar4[0x2d];
          uStack_4da6 = (undefined2)((ulong)puVar4[0x2d] >> 0x30);
          bStack_4df2 = bStack_4df2 | 1;
        }
        *(undefined8 *)((long)&local_38 + lVar15) = 0x10025cd34;
        cVar12 = FUN_10053916d(lVar18,0x25);
        if (cVar12 != '\0') {
          uStack_4da4 = (undefined2)*(undefined4 *)(puVar4 + 0x2e);
          uStack_4da2 = (undefined2)((uint)*(undefined4 *)(puVar4 + 0x2e) >> 0x10);
          bStack_4df2 = bStack_4df2 | 2;
        }
        *(undefined8 *)((long)&local_38 + lVar15) = 0x10025cd59;
        cVar12 = FUN_10053916d(lVar18,0xaf);
        if (cVar12 != '\0') {
          local_4da0 = *(undefined1 *)((long)puVar4 + 0x13e);
          bStack_4df2 = bStack_4df2 | 4;
        }
        *(undefined8 *)((long)&local_38 + lVar15) = 0x10025cd7e;
        cVar12 = FUN_10053916d(lVar18,0xb1);
        if (cVar12 != '\0') {
          uStack_4d9c = *(undefined2 *)(puVar4[0xf] + 0x38);
          bStack_4df2 = bStack_4df2 | 8;
        }
        *(undefined8 *)((long)&local_38 + lVar15) = 0x10025cda5;
        cVar12 = FUN_10053916d(lVar18,0xb2);
        if (cVar12 != '\0') {
          local_4d9a = *(undefined2 *)(puVar4[0xf] + 0x3a);
          bStack_4df2 = bStack_4df2 | 0x10;
        }
        *(undefined8 *)((long)&local_38 + lVar15) = 0x10025cdcc;
        cVar12 = FUN_10053916d(lVar18,0xb8);
        uVar20 = CONCAT13(uStack_4df1,CONCAT12(bStack_4df2,CONCAT11(bStack_4df3,local_4df4)));
        if (cVar12 != '\0') goto LAB_10025ce13;
      }
      local_4d76 = puVar4[0x16];
      local_4d86 = puVar4[0x14];
      lStack_4d7e = puVar4[0x15];
      local_4d96 = (undefined4)puVar4[0x12];
      uStack_4d92 = (undefined4)((ulong)puVar4[0x12] >> 0x20);
      uStack_4d8e = (undefined4)puVar4[0x13];
      uStack_4d8a = (undefined4)((ulong)puVar4[0x13] >> 0x20);
      bStack_4df2 = (byte)(uVar20 >> 0x10) | 0x40;
      local_4df4 = (byte)uVar20;
      bStack_4df3 = (byte)(uVar20 >> 8);
      uStack_4df1 = (undefined1)(uVar20 >> 0x18);
    }
    if (puVar4[2] == 0) {
      *(undefined8 *)((long)&local_38 + lVar15) = 0x10025d0e1;
      uVar17 = FUN_1001cc310();
      *(undefined8 *)((long)&local_38 + lVar15) = 0x10025d0f1;
      cVar12 = _os_log_type_enabled(uVar17,0x10);
      if (cVar12 != '\0') {
        local_58 = 0x8220202;
        uStack_54 = 0x7a0a90;
        uStack_50 = 1;
        uStack_4c = 0x822;
        uStack_4a = 0x24b0;
        uStack_48 = 0x1007b;
        *(undefined8 *)((long)&local_38 + lVar15) = 0x10025e2b9;
        __os_log_error_impl(0x100000000,uVar17,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      *(undefined8 *)((long)&local_38 + lVar15) = 0x10025d102;
      FUN_1001782e9(0,0);
    }
    else {
      if (local_4e09 == '\0') {
LAB_10025ce87:
        *(undefined8 *)((long)&local_38 + lVar15) = 0x10025ce9a;
        FUN_1001a8c1c(local_4e20,puVar4 + 0x2c);
        *(undefined8 *)((long)&local_38 + lVar15) = 0x10025ceaa;
        FUN_1001b7eb0(&local_58,local_4e20[0]);
        *(undefined8 *)((long)&local_38 + lVar15) = 0x10025ceba;
        FUN_1001b80b2(local_4d6a,&local_58);
        *(undefined8 *)((long)&local_38 + lVar15) = 0x10025cec3;
        FUN_1001b7a50(&local_58);
        local_4d6e = local_4d6e | 1;
        *(undefined8 *)((long)&local_38 + lVar15) = 0x10025ced6;
        FUN_1001ab006(local_4e20);
        if (local_4e09 != '\0') goto LAB_10025cedf;
LAB_10025cef4:
        *(undefined8 *)((long)&local_38 + lVar15) = 0x10025cefe;
        uVar17 = FUN_100480f6c(puVar4,0);
        *(undefined8 *)((long)&local_38 + lVar15) = 0x10025cf0a;
        FUN_1001a8d64(&local_58,uVar17);
        *(undefined8 *)((long)&local_38 + lVar15) = 0x10025cf1a;
        FUN_1001aa172(local_4e20,&local_58);
        *(undefined8 *)((long)&local_38 + lVar15) = 0x10025cf2d;
        FUN_1001a7b1c(local_4d5a,local_4e20);
        *(undefined8 *)((long)&local_38 + lVar15) = 0x10025cf39;
        FUN_1001a8fac(local_4e20);
        local_4d6e = local_4d6e | 2;
        *(undefined8 *)((long)&local_38 + lVar15) = 0x10025cf4f;
        FUN_100481021(local_4e20,puVar4);
        if (local_4e20[0] != (cfstringStruct *)0x0) {
          *(undefined8 *)((long)&local_38 + lVar15) = 0x10025cf6c;
          FUN_1001a7c10(local_4e30,local_4e20);
          *(undefined8 *)((long)&local_38 + lVar15) = 0x10025cf7f;
          FUN_1001a7b1c(local_4d4a,local_4e30);
          *(undefined8 *)((long)&local_38 + lVar15) = 0x10025cf8b;
          FUN_1001a7a94(local_4e30);
          local_4d6e = local_4d6e | 0x40;
        }
        *(undefined8 *)((long)&local_38 + lVar15) = 0x10025cf9e;
        FUN_1001a7a94(local_4e20);
        *(undefined8 *)((long)&local_38 + lVar15) = 0x10025cfa7;
        FUN_1001a8fac(&local_58);
        if (local_4e09 != '\0') goto LAB_10025cfb0;
LAB_10025cfc1:
        *(undefined8 *)((long)&local_38 + lVar15) = 0x10025cfcd;
        FUN_10047c600(&local_58,puVar4);
        *(undefined8 *)((long)&local_38 + lVar15) = 0x10025cfdd;
        FUN_1001b80b2(local_4d3a,&local_58);
        *(undefined8 *)((long)&local_38 + lVar15) = 0x10025cfe6;
        FUN_1001b7a50(&local_58);
        local_4d6e = local_4d6e | 4;
        if (local_4e09 != '\0') goto LAB_10025cff6;
LAB_10025d007:
        *(undefined8 *)((long)&local_38 + lVar15) = 0x10025d013;
        FUN_10047cad6(&local_58,puVar4);
        *(undefined8 *)((long)&local_38 + lVar15) = 0x10025d023;
        FUN_1001b80b2(local_4d2a,&local_58);
        *(undefined8 *)((long)&local_38 + lVar15) = 0x10025d02c;
        FUN_1001b7a50(&local_58);
        local_4d6e = local_4d6e | 0x10;
        if (local_4e09 != '\0') goto LAB_10025d03c;
LAB_10025d04d:
        lVar5 = puVar4[2];
        *(undefined8 *)((long)&local_38 + lVar15) = 0x10025d05f;
        FUN_1001dccc7(lVar5 + 0x2200);
        *(undefined8 *)((long)&local_38 + lVar15) = 0x10025d075;
        iVar14 = FUN_10047d582(puVar4,local_4e20,local_4e30);
        if (iVar14 == 0) {
          *(undefined8 *)((long)&local_38 + lVar15) = 0x10025d091;
          FUN_1001a833e(&local_58,local_4e20[0],(ulong)local_4e30[0] & 0xffffffff,0);
          *(undefined8 *)((long)&local_38 + lVar15) = 0x10025d0a1;
          FUN_1001a7b1c(local_4d1a,&local_58);
          *(undefined8 *)((long)&local_38 + lVar15) = 0x10025d0aa;
          FUN_1001a85d4(&local_58);
          local_4d6e = local_4d6e | 8;
        }
        *(undefined8 *)((long)&local_38 + lVar15) = 0x10025d0b9;
        FUN_1001dcd18(lVar5 + 0x2200);
        if (local_4e09 != '\0') goto LAB_10025d0c2;
      }
      else {
        *(undefined8 *)((long)&local_38 + lVar15) = 0x10025ce83;
        cVar12 = FUN_10053916d(lVar18,0x25);
        if (cVar12 != '\0') goto LAB_10025ce87;
LAB_10025cedf:
        *(undefined8 *)((long)&local_38 + lVar15) = 0x10025ceec;
        cVar12 = FUN_10053916d(lVar18,0xac);
        if (cVar12 != '\0') goto LAB_10025cef4;
LAB_10025cfb0:
        *(undefined8 *)((long)&local_38 + lVar15) = 0x10025cfbd;
        cVar12 = FUN_10053916d(lVar18,0x56);
        if (cVar12 != '\0') goto LAB_10025cfc1;
LAB_10025cff6:
        *(undefined8 *)((long)&local_38 + lVar15) = 0x10025d003;
        cVar12 = FUN_10053916d(lVar18,0x7f);
        if (cVar12 != '\0') goto LAB_10025d007;
LAB_10025d03c:
        *(undefined8 *)((long)&local_38 + lVar15) = 0x10025d049;
        cVar12 = FUN_10053916d(lVar18,0x54);
        if (cVar12 != '\0') goto LAB_10025d04d;
LAB_10025d0c2:
        *(undefined8 *)((long)&local_38 + lVar15) = 0x10025d0cf;
        cVar12 = FUN_10053916d(lVar18,0x71);
        if (cVar12 == '\0') goto LAB_10025d102;
      }
      local_4d6e = local_4d6e | 0x20;
    }
LAB_10025d102:
    uVar17 = puVar4[0xb];
    *(undefined8 *)((long)&local_38 + lVar15) = 0x10025d128;
    FUN_10030a4a4(uVar17,0x1e4,lVar16,local_4d0a,&local_36aa,0);
  }
  local_4e20[0] = &cf_isNewTrack;
  *(undefined8 *)((long)&local_38 + lVar15) = 0x10025d142;
  FUN_1001a7b90(&local_58);
  uVar11 = *(undefined1 *)(param_2 + 0x20);
  *(undefined8 *)((long)&local_38 + lVar15) = 0x10025d156;
  FUN_1001a9d34(local_4e38,&local_58,uVar11);
  *(undefined8 *)((long)&local_38 + lVar15) = 0x10025d15f;
  FUN_1001ab240(&local_58);
  local_4e20[0] = &cf_pid;
  *(undefined8 *)((long)&local_38 + lVar15) = 0x10025d179;
  FUN_1001a7b90(&local_58);
  *(undefined8 *)((long)&local_38 + lVar15) = 0x10025d190;
  FUN_10021f04c(local_4e38,&local_58,&local_4e08);
  *(undefined8 *)((long)&local_38 + lVar15) = 0x10025d199;
  FUN_1001ab240(&local_58);
  local_4e20[0] = &cf_kind;
  *(undefined8 *)((long)&local_38 + lVar15) = 0x10025d1b3;
  FUN_1001a7b90(&local_58);
  local_4e30[0] = &cf_track;
  *(undefined8 *)((long)&local_38 + lVar15) = 0x10025d1d4;
  FUN_10021f0aa(local_4e38,&local_58);
  *(undefined8 *)((long)&local_38 + lVar15) = 0x10025d1dd;
  FUN_1001ab240(&local_58);
  *(undefined8 *)((long)&local_38 + lVar15) = 0x10025d1f4;
  FUN_1001a833e(&local_58,&local_4e08,0x14,0);
  local_4e30[0] = &cf_create;
  *(undefined8 *)((long)&local_38 + lVar15) = 0x10025d211;
  FUN_1001a7b90(local_4e20);
  *(undefined8 *)((long)&local_38 + lVar15) = 0x10025d221;
  FUN_1001a7b90(local_4e50,&local_58);
  *(undefined8 *)((long)&local_38 + lVar15) = 0x10025d23b;
  FUN_1001a9c16(local_4e38,local_4e20,local_4e50);
  *(undefined8 *)((long)&local_38 + lVar15) = 0x10025d247;
  FUN_1001ab240(local_4e50);
  *(undefined8 *)((long)&local_38 + lVar15) = 0x10025d253;
  FUN_1001ab240(local_4e20);
  *(undefined8 *)((long)&local_38 + lVar15) = 0x10025d25c;
  FUN_1001a85d4(&local_58);
  if (CONCAT13(uStack_4df1,CONCAT12(bStack_4df2,CONCAT11(bStack_4df3,local_4df4))) != 0) {
    *(undefined8 *)((long)&local_38 + lVar15) = 0x10025d27c;
    FUN_1001a833e(&local_58,&local_4df4,0x86,0);
    local_4e30[0] = &cf_fixed;
    *(undefined8 *)((long)&local_38 + lVar15) = 0x10025d299;
    FUN_1001a7b90(local_4e20);
    *(undefined8 *)((long)&local_38 + lVar15) = 0x10025d2a9;
    FUN_1001a7b90(local_4e50,&local_58);
    *(undefined8 *)((long)&local_38 + lVar15) = 0x10025d2c3;
    FUN_1001a9c16(local_4e38,local_4e20,local_4e50);
    *(undefined8 *)((long)&local_38 + lVar15) = 0x10025d2cf;
    FUN_1001ab240(local_4e50);
    *(undefined8 *)((long)&local_38 + lVar15) = 0x10025d2db;
    FUN_1001ab240(local_4e20);
    *(undefined8 *)((long)&local_38 + lVar15) = 0x10025d2e4;
    FUN_1001a85d4(&local_58);
  }
  local_4e20[0] = &cf_validFields;
  *(undefined8 *)((long)&local_38 + lVar15) = 0x10025d2fe;
  FUN_1001a7b90(&local_58);
  local_4e50[0] = (ulong)local_4d6e;
  *(undefined8 *)((long)&local_38 + lVar15) = 0x10025d31c;
  FUN_10021f1aa(local_4e30,local_4e50,0);
  *(undefined8 *)((long)&local_38 + lVar15) = 0x10025d333;
  FUN_10021f14e(local_4e38,&local_58,local_4e30);
  *(undefined8 *)((long)&local_38 + lVar15) = 0x10025d33f;
  FUN_1001aae6c(local_4e30);
  *(undefined8 *)((long)&local_38 + lVar15) = 0x10025d348;
  FUN_1001ab240(&local_58);
  if ((local_4d6e & 1) != 0) {
    local_4e20[0] = &cf_artworkUUID;
    *(undefined8 *)((long)&local_38 + lVar15) = 0x10025d36c;
    FUN_1001a7b90(&local_58);
    *(undefined8 *)((long)&local_38 + lVar15) = 0x10025d383;
    FUN_10021f1e0(local_4e38,&local_58,local_4d6a);
    *(undefined8 *)((long)&local_38 + lVar15) = 0x10025d38c;
    FUN_1001ab240(&local_58);
  }
  if ((local_4d6e & 2) != 0) {
    local_4e20[0] = &cf_dataDict;
    *(undefined8 *)((long)&local_38 + lVar15) = 0x10025d3b0;
    FUN_1001a7b90(&local_58);
    *(undefined8 *)((long)&local_38 + lVar15) = 0x10025d3c3;
    FUN_1001a7b90(local_4e30,local_4d5a);
    *(undefined8 *)((long)&local_38 + lVar15) = 0x10025d3da;
    FUN_1001a9c16(local_4e38,&local_58,local_4e30);
    *(undefined8 *)((long)&local_38 + lVar15) = 0x10025d3e6;
    FUN_1001ab240(local_4e30);
    *(undefined8 *)((long)&local_38 + lVar15) = 0x10025d3ef;
    FUN_1001ab240(&local_58);
  }
  if ((local_4d6e & 4) != 0) {
    local_4e20[0] = &cf_longDescription;
    *(undefined8 *)((long)&local_38 + lVar15) = 0x10025d413;
    FUN_1001a7b90(&local_58);
    *(undefined8 *)((long)&local_38 + lVar15) = 0x10025d42a;
    FUN_10021f1e0(local_4e38,&local_58,local_4d3a);
    *(undefined8 *)((long)&local_38 + lVar15) = 0x10025d433;
    FUN_1001ab240(&local_58);
  }
  if ((local_4d6e & 0x10) != 0) {
    local_4e20[0] = &cf_collectionDescription;
    *(undefined8 *)((long)&local_38 + lVar15) = 0x10025d457;
    FUN_1001a7b90(&local_58);
    *(undefined8 *)((long)&local_38 + lVar15) = 0x10025d46e;
    FUN_10021f1e0(local_4e38,&local_58,local_4d2a);
    *(undefined8 *)((long)&local_38 + lVar15) = 0x10025d477;
    FUN_1001ab240(&local_58);
  }
  if ((local_4d6e & 8) != 0) {
    local_4e20[0] = &cf_movieInfo;
    *(undefined8 *)((long)&local_38 + lVar15) = 0x10025d49b;
    FUN_1001a7b90(&local_58);
    *(undefined8 *)((long)&local_38 + lVar15) = 0x10025d4ae;
    FUN_1001a7b90(local_4e30,local_4d1a);
    *(undefined8 *)((long)&local_38 + lVar15) = 0x10025d4c5;
    FUN_1001a9c16(local_4e38,&local_58,local_4e30);
    *(undefined8 *)((long)&local_38 + lVar15) = 0x10025d4d1;
    FUN_1001ab240(local_4e30);
    *(undefined8 *)((long)&local_38 + lVar15) = 0x10025d4da;
    FUN_1001ab240(&local_58);
  }
  if ((local_4d6e & 0x20) != 0) {
    local_4e20[0] = &cf_lyrics;
    *(undefined8 *)((long)&local_38 + lVar15) = 0x10025d4fe;
    FUN_1001a7b90(&local_58);
    *(undefined8 *)((long)&local_38 + lVar15) = 0x10025d513;
    FUN_1001a9d34(local_4e38,&local_58,1);
    *(undefined8 *)((long)&local_38 + lVar15) = 0x10025d51c;
    FUN_1001ab240(&local_58);
  }
  if ((local_4d6e & 0x40) != 0) {
    local_4e20[0] = &cf_removedKeys;
    *(undefined8 *)((long)&local_38 + lVar15) = 0x10025d540;
    FUN_1001a7b90(&local_58);
    *(undefined8 *)((long)&local_38 + lVar15) = 0x10025d553;
    FUN_1001a7b90(local_4e30,local_4d4a);
    *(undefined8 *)((long)&local_38 + lVar15) = 0x10025d56a;
    FUN_1001a9c16(local_4e38,&local_58,local_4e30);
    *(undefined8 *)((long)&local_38 + lVar15) = 0x10025d576;
    FUN_1001ab240(local_4e30);
    *(undefined8 *)((long)&local_38 + lVar15) = 0x10025d57f;
    FUN_1001ab240(&local_58);
  }
  if (local_4d0a[0] != 0) {
    *(undefined8 *)((long)&local_38 + lVar15) = 0x10025d59f;
    FUN_1001a833e(&local_58,local_4d0a,0x1660,0);
    local_4e30[0] = &cf_itTrackInfo;
    *(undefined8 *)((long)&local_38 + lVar15) = 0x10025d5bc;
    FUN_1001a7b90(local_4e20);
    *(undefined8 *)((long)&local_38 + lVar15) = 0x10025d5cc;
    FUN_1001a7b90(local_4e50,&local_58);
    *(undefined8 *)((long)&local_38 + lVar15) = 0x10025d5e6;
    FUN_1001a9c16(local_4e38,local_4e20,local_4e50);
    *(undefined8 *)((long)&local_38 + lVar15) = 0x10025d5f2;
    FUN_1001ab240(local_4e50);
    *(undefined8 *)((long)&local_38 + lVar15) = 0x10025d5fe;
    FUN_1001ab240(local_4e20);
    *(undefined8 *)((long)&local_38 + lVar15) = 0x10025d607;
    FUN_1001a85d4(&local_58);
  }
  if ((local_36aa != 0) || (local_36a2 != 0)) {
    *(undefined8 *)((long)&local_38 + lVar15) = 0x10025d632;
    FUN_1001a833e(&local_58,&local_36aa,0x3648,0);
    local_4e30[0] = &cf_itTrackInfoPriv;
    *(undefined8 *)((long)&local_38 + lVar15) = 0x10025d64f;
    FUN_1001a7b90(local_4e20);
    *(undefined8 *)((long)&local_38 + lVar15) = 0x10025d65f;
    FUN_1001a7b90(local_4e50,&local_58);
    *(undefined8 *)((long)&local_38 + lVar15) = 0x10025d679;
    FUN_1001a9c16(local_4e38,local_4e20,local_4e50);
    *(undefined8 *)((long)&local_38 + lVar15) = 0x10025d685;
    FUN_1001ab240(local_4e50);
    *(undefined8 *)((long)&local_38 + lVar15) = 0x10025d691;
    FUN_1001ab240(local_4e20);
    *(undefined8 *)((long)&local_38 + lVar15) = 0x10025d69a;
    FUN_1001a85d4(&local_58);
  }
  *(undefined8 *)((long)&local_38 + lVar15) = 0x10025d6a6;
  FUN_1001a85d4(local_4d1a);
  *(undefined8 *)((long)&local_38 + lVar15) = 0x10025d6b2;
  FUN_1001b7a50(local_4d2a);
  *(undefined8 *)((long)&local_38 + lVar15) = 0x10025d6be;
  FUN_1001b7a50(local_4d3a);
  *(undefined8 *)((long)&local_38 + lVar15) = 0x10025d6ca;
  FUN_1001a7a94(local_4d4a);
  *(undefined8 *)((long)&local_38 + lVar15) = 0x10025d6d6;
  FUN_1001a8fac(local_4d5a);
  *(undefined8 *)((long)&local_38 + lVar15) = 0x10025d6e2;
  FUN_1001b7a50(local_4d6a);
  *(undefined8 *)((long)&local_38 + lVar15) = 0x10025d6ee;
  FUN_10032f0f2(local_4e50);
  plVar21 = (long *)puVar4[0xb];
  if (plVar21 != (long *)0x0) {
    do {
      *(undefined8 *)((long)&local_38 + lVar15) = 0x10025d70b;
      cVar12 = FUN_1002e85fc(plVar21,0,0);
      if (cVar12 != '\0') {
        *(undefined8 *)((long)&local_38 + lVar15) = 0x10025d71f;
        FUN_10025c3d0(&local_4e08);
        *(undefined8 *)((long)&local_38 + lVar15) = 0x10025d72b;
        FUN_10032f0f2(local_4e30);
        local_4e08 = (undefined4)plVar21[5];
        uStack_4e04 = (undefined4)((ulong)plVar21[5] >> 0x20);
        *(undefined8 *)((long)&local_38 + lVar15) = 0x10025d73e;
        uVar11 = FUN_1002b458b(plVar21);
        local_4e00 = CONCAT31(local_4e00._1_3_,uVar11);
        iVar14 = *(int *)((long)plVar21 + 0x3c);
        local_4df4 = (byte)iVar14;
        bStack_4df3 = (byte)((uint)iVar14 >> 8);
        bStack_4df2 = (byte)((uint)iVar14 >> 0x10);
        uStack_4df1 = (undefined1)((uint)iVar14 >> 0x18);
        local_4df0 = (undefined4)plVar21[0xc];
        if (iVar14 == 0x53485244) {
          uStack_4dec = (undefined4)plVar21[0x13];
          local_4de8 = (undefined4)((ulong)plVar21[0x13] >> 0x20);
          uStack_4de4 = (undefined4)plVar21[0x15];
          local_4de0 = plVar21[0x16];
          local_4dd8 = *(byte *)((long)plVar21 + 0xac);
          local_4dd7 = *(byte *)((long)plVar21 + 0xad);
        }
        local_4dd4 = local_4dd4 | 4;
        local_4dd0._0_2_ = CONCAT11(*(undefined1 *)((long)plVar21 + 0x4d),(undefined1)local_4dd0);
        local_4dd0._2_2_ = local_4dd0._2_2_ & 0xfffe | *(ushort *)(plVar21 + 9) >> 1 & 1;
        uVar13 = local_4dd0._2_2_;
        if (iVar14 == 0x53485244) {
          *(undefined8 *)((long)&local_38 + lVar15) = 0x10025d7e1;
          cVar12 = FUN_1002b630e(plVar21);
          uVar13 = local_4dd0._2_2_;
          if ((cVar12 != '\0') &&
             (uVar13 = local_4dd0._2_2_ | 2, *(char *)((long)plVar21 + 0x45) != '\x01')) {
            uVar13 = local_4dd0._2_2_;
          }
        }
        uVar20 = *(uint *)(plVar21 + 9);
        uVar9 = (ushort)(uVar20 >> 8);
        local_4dd0 = CONCAT22(uVar9 & 0x400 |
                              (ushort)(uVar20 >> 0xe) & 0x3e0 |
                              ((ushort)(uVar20 >> 4) & 8 | uVar13 & 0xf803 | uVar9 & 4) +
                              ((ushort)uVar20 & 8) * 2,(undefined2)local_4dd0);
        local_4dcc = *(undefined1 *)((long)plVar21 + 0x47);
        uStack_4dcb = *(undefined1 *)((long)plVar21 + 0x46);
        uStack_4dca = (undefined4)plVar21[8];
        iVar14 = *(int *)((long)plVar21 + 0x3c);
        if (iVar14 == 0x46494c45) {
          uStack_4dc6 = (undefined2)*(undefined4 *)((long)plVar21 + 0xa4);
          uStack_4dc4 = (undefined2)((uint)*(undefined4 *)((long)plVar21 + 0xa4) >> 0x10);
          uStack_4dc2 = (undefined4)plVar21[0x15];
        }
        uStack_4dbe = (undefined2)plVar21[0x19];
        uStack_4dbc = (undefined6)((ulong)plVar21[0x19] >> 0x10);
        uStack_4db6 = (undefined2)*(undefined4 *)((long)plVar21 + 0x34);
        local_4db4 = (undefined2)((uint)*(undefined4 *)((long)plVar21 + 0x34) >> 0x10);
        uStack_4db2 = *(undefined4 *)((long)plVar21 + 100);
        uStack_4dae = (undefined2)plVar21[0xd];
        local_4dac = (undefined6)((ulong)plVar21[0xd] >> 0x10);
        uStack_4da6 = (undefined2)(int)plVar21[0xe];
        uStack_4da4 = (undefined2)((uint)(int)plVar21[0xe] >> 0x10);
        uVar3 = *(undefined4 *)((long)plVar21 + 0x54);
        uStack_4da2 = (undefined2)uVar3;
        local_4da0 = (undefined1)((uint)uVar3 >> 0x10);
        uStack_4d9f = (undefined1)((uint)uVar3 >> 0x18);
        local_4d9e = (undefined2)(int)plVar21[10];
        uStack_4d9c = (undefined2)((uint)(int)plVar21[10] >> 0x10);
        local_4d9a = (undefined2)(int)plVar21[0xb];
        uStack_4d98 = (undefined2)((uint)(int)plVar21[0xb] >> 0x10);
        local_4d96 = *(undefined4 *)((long)plVar21 + 0x7c);
        uStack_4d92 = (undefined4)plVar21[0x1c];
        uStack_4d8e = (undefined4)((ulong)plVar21[0x1c] >> 0x20);
        uStack_4d8a = (undefined4)plVar21[0x1d];
        local_4d86 = plVar21[0x1a];
        lStack_4d7e = plVar21[0x1b];
        local_4a8e = *(undefined2 *)((long)plVar21 + 0xec);
        pbVar6 = (byte *)plVar21[3];
        if ((*pbVar6 & 1) != 0) {
          *(undefined8 *)((long)&local_38 + lVar15) = 0x10025d93f;
          _memcpy(&local_4d76,pbVar6,0x240);
          local_4dd4 = local_4dd4 | 1;
        }
        pbVar6 = (byte *)plVar21[4];
        if ((*pbVar6 & 1) != 0) {
          local_4b36 = *(undefined8 *)pbVar6;
          uStack_4b2e = *(undefined8 *)(pbVar6 + 8);
          local_4b26 = *(undefined4 *)(pbVar6 + 0x10);
          uStack_4b22 = *(undefined4 *)(pbVar6 + 0x14);
          uStack_4b1e = *(undefined4 *)(pbVar6 + 0x18);
          uStack_4b1a = *(undefined4 *)(pbVar6 + 0x1c);
          local_4b16 = *(undefined8 *)(pbVar6 + 0x20);
          uStack_4b0e = *(undefined8 *)(pbVar6 + 0x28);
          local_4dd4 = local_4dd4 | 2;
        }
        pbVar6 = (byte *)plVar21[2];
        if ((*pbVar6 & 1) != 0) {
          local_4b06 = local_4b06 & 0xf0 | *pbVar6 >> 1 & 1 | *pbVar6 >> 1 & 2 | *pbVar6 >> 3 & 4 |
                       *pbVar6 >> 4 & 8;
          local_4b02 = *(undefined4 *)(pbVar6 + 4);
          local_4afe = *(undefined8 *)(pbVar6 + 8);
          uStack_4af6 = *(undefined8 *)(pbVar6 + 0x10);
          local_4aee = *(undefined8 *)(pbVar6 + 0x18);
          uStack_4ae6 = *(undefined8 *)(pbVar6 + 0x20);
          local_4ade = *(undefined8 *)(pbVar6 + 0x28);
          uStack_4ad6 = *(undefined8 *)(pbVar6 + 0x30);
          local_4ace = *(undefined8 *)(pbVar6 + 0x38);
          uStack_4ac6 = *(undefined8 *)(pbVar6 + 0x40);
          local_4abe = *(undefined8 *)(pbVar6 + 0x48);
          uStack_4ab6 = *(undefined8 *)(pbVar6 + 0x50);
          local_4aae = *(undefined8 *)(pbVar6 + 0x58);
          uStack_4aa6 = *(undefined8 *)(pbVar6 + 0x60);
          local_4a9e = *(undefined8 *)(pbVar6 + 0x84);
          uStack_4a96 = *(undefined8 *)(pbVar6 + 0x8c);
          local_4dd4 = local_4dd4 | 8;
        }
        if (iVar14 == 0x48545450) {
          *(undefined8 *)((long)&local_38 + lVar15) = 0x10025e0a6;
          FUN_1002b4b5e(&local_58,plVar21);
          *(undefined8 *)((long)&local_38 + lVar15) = 0x10025e0b8;
          FUN_1001b80b2(local_4a86,&local_58);
          *(undefined8 *)((long)&local_38 + lVar15) = 0x10025e0c0;
          FUN_1001b7a50(&local_58);
          *(undefined8 *)((long)&local_38 + lVar15) = 0x10025e0c8;
          cVar12 = FUN_1001b8428(local_4a86);
          uVar20 = 2;
          if (cVar12 == '\0') {
LAB_10025dabb:
            local_4a8a = local_4a8a | uVar20;
          }
        }
        else if (iVar14 == 0x46494c45) {
          *(undefined8 *)((long)&local_38 + lVar15) = 0x10025da5d;
          FUN_1002b4b5e(&local_58,plVar21);
          *(undefined8 *)((long)&local_38 + lVar15) = 0x10025da6f;
          FUN_1001b80b2(local_4a86,&local_58);
          *(undefined8 *)((long)&local_38 + lVar15) = 0x10025da77;
          FUN_1001b7a50(&local_58);
          *(undefined8 *)((long)&local_38 + lVar15) = 0x10025da7f;
          cVar12 = FUN_1001b8428(local_4a86);
          if (cVar12 == '\0') {
            local_4a8a = local_4a8a | 2;
          }
          *(undefined8 *)((long)&local_38 + lVar15) = 0x10025da95;
          FUN_1002b486a(&local_58,plVar21);
          *(undefined8 *)((long)&local_38 + lVar15) = 0x10025daa4;
          FUN_1001a7b1c(local_4a66,&local_58);
          *(undefined8 *)((long)&local_38 + lVar15) = 0x10025daac;
          FUN_1001a85d4(&local_58);
          uVar20 = 1;
          if (local_4a66[0] != 0) goto LAB_10025dabb;
        }
        *(undefined8 *)((long)&local_38 + lVar15) = 0x10025dacb;
        lVar18 = FUN_1002b7275(plVar21,0);
        if (lVar18 != 0) {
          *(undefined8 *)((long)&local_38 + lVar15) = 0x10025dadf;
          FUN_1001a8d64(local_4e20,lVar18);
          *(undefined8 *)((long)&local_38 + lVar15) = 0x10025daee;
          FUN_1001aa172(&local_58,local_4e20);
          *(undefined8 *)((long)&local_38 + lVar15) = 0x10025dafd;
          FUN_1001a7b1c(local_4a76,&local_58);
          *(undefined8 *)((long)&local_38 + lVar15) = 0x10025db05;
          FUN_1001a8fac(&local_58);
          *(undefined8 *)((long)&local_38 + lVar15) = 0x10025db11;
          FUN_1001a8fac(local_4e20);
        }
        local_4a8a = local_4a8a | 4;
        if ((*(byte *)(plVar21 + 9) & 0x20) != 0) {
          *(undefined8 *)((long)&local_38 + lVar15) = 0x10025db2b;
          lVar18 = FUN_1002af284(plVar21);
          if (lVar18 != 0) {
            *(undefined8 *)((long)&local_38 + lVar15) = 0x10025db42;
            FUN_100456f9e(&local_58,lVar18);
            plVar2 = plStack_4a4e;
            local_4a56 = (long *)CONCAT44(uStack_54,local_58);
            plVar10 = (long *)CONCAT26(uStack_4a,CONCAT24(uStack_4c,uStack_50));
            local_58 = 0;
            uStack_54 = 0;
            uStack_50 = 0;
            uStack_4c = 0;
            uStack_4a = 0;
            if (plStack_4a4e != (long *)0x0) {
              LOCK();
              plVar1 = plStack_4a4e + 1;
              lVar16 = *plVar1;
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (lVar16 == 0) {
                pcVar7 = *(code **)(*plStack_4a4e + 0x10);
                *(undefined8 *)((long)&local_38 + lVar15) = 0x10025db7d;
                plStack_4a4e = plVar10;
                (*pcVar7)(plVar2);
                *(undefined8 *)((long)&local_38 + lVar15) = 0x10025db85;
                std::__shared_weak_count::__release_weak();
                plVar10 = plStack_4a4e;
              }
            }
            plStack_4a4e = plVar10;
            plVar10 = (long *)CONCAT26(uStack_4a,CONCAT24(uStack_4c,uStack_50));
            if (plVar10 != (long *)0x0) {
              LOCK();
              plVar2 = plVar10 + 1;
              lVar16 = *plVar2;
              *plVar2 = *plVar2 + -1;
              UNLOCK();
              if (lVar16 == 0) {
                pcVar7 = *(code **)(*plVar10 + 0x10);
                *(undefined8 *)((long)&local_38 + lVar15) = 0x10025dba9;
                (*pcVar7)(plVar10);
                *(undefined8 *)((long)&local_38 + lVar15) = 0x10025dbb1;
                std::__shared_weak_count::__release_weak();
              }
            }
            local_4a8a = local_4a8a | 8;
            *(undefined8 *)((long)&local_38 + lVar15) = 0x10025dbc0;
            FUN_100175848(lVar18);
          }
        }
        if (*(long *)(plVar21[2] + 0x98) != 0) {
          *(undefined8 *)((long)&local_38 + lVar15) = 0x10025dbe6;
          FUN_1001a8d64(local_4e20);
          *(undefined8 *)((long)&local_38 + lVar15) = 0x10025dbf5;
          FUN_1001aa172(&local_58,local_4e20);
          *(undefined8 *)((long)&local_38 + lVar15) = 0x10025dc04;
          FUN_1001a7b1c(local_4a46,&local_58);
          *(undefined8 *)((long)&local_38 + lVar15) = 0x10025dc0c;
          FUN_1001a8fac(&local_58);
          *(undefined8 *)((long)&local_38 + lVar15) = 0x10025dc14;
          FUN_1001a8fac(local_4e20);
          local_4a8a = local_4a8a | 0x20;
        }
        local_4e20[0] = &cf_pid;
        *(undefined8 *)((long)&local_38 + lVar15) = 0x10025dc34;
        FUN_1001a7b90(&local_58,local_4e20);
        *(undefined8 *)((long)&local_38 + lVar15) = 0x10025dc4a;
        FUN_10021f04c(local_4e30,&local_58,&local_4e08);
        *(undefined8 *)((long)&local_38 + lVar15) = 0x10025dc59;
        FUN_1001ab240(&local_58);
        local_4e20[0] = &cf_kind;
        *(undefined8 *)((long)&local_38 + lVar15) = 0x10025dc6f;
        FUN_1001a7b90(&local_58,local_4e20);
        local_4e40 = &cf_instance;
        *(undefined8 *)((long)&local_38 + lVar15) = 0x10025dc93;
        FUN_10021f0aa(local_4e30,&local_58,&local_4e40);
        *(undefined8 *)((long)&local_38 + lVar15) = 0x10025dc9b;
        FUN_1001ab240(&local_58);
        *(undefined8 *)((long)&local_38 + lVar15) = 0x10025dcb1;
        FUN_1001a833e(&local_58,&local_4e08,0x34,0);
        local_4e40 = &cf_create;
        *(undefined8 *)((long)&local_38 + lVar15) = 0x10025dcd2;
        FUN_1001a7b90(local_4e20,&local_4e40);
        *(undefined8 *)((long)&local_38 + lVar15) = 0x10025dcdd;
        FUN_1001a7b90(&local_4e58,&local_58);
        *(undefined8 *)((long)&local_38 + lVar15) = 0x10025dcf9;
        FUN_1001a9c16(local_4e30,local_4e20,&local_4e58);
        *(undefined8 *)((long)&local_38 + lVar15) = 0x10025dd01;
        FUN_1001ab240(&local_4e58);
        *(undefined8 *)((long)&local_38 + lVar15) = 0x10025dd09;
        FUN_1001ab240(local_4e20);
        *(undefined8 *)((long)&local_38 + lVar15) = 0x10025dd11;
        FUN_1001a85d4(&local_58);
        if (local_4dd4 != 0) {
          *(undefined8 *)((long)&local_38 + lVar15) = 0x10025dd30;
          FUN_1001a833e(&local_58,&local_4dd4,0x34a,0);
          local_4e40 = &cf_fixed;
          *(undefined8 *)((long)&local_38 + lVar15) = 0x10025dd51;
          FUN_1001a7b90(local_4e20,&local_4e40);
          *(undefined8 *)((long)&local_38 + lVar15) = 0x10025dd63;
          FUN_1001a7b90(&local_4e58,&local_58);
          *(undefined8 *)((long)&local_38 + lVar15) = 0x10025dd75;
          FUN_1001a9c16(local_4e30,local_4e20,&local_4e58);
          *(undefined8 *)((long)&local_38 + lVar15) = 0x10025dd7d;
          FUN_1001ab240(&local_4e58);
          *(undefined8 *)((long)&local_38 + lVar15) = 0x10025dd85;
          FUN_1001ab240(local_4e20);
          *(undefined8 *)((long)&local_38 + lVar15) = 0x10025dd8d;
          FUN_1001a85d4(&local_58);
        }
        local_4e20[0] = &cf_validFields;
        *(undefined8 *)((long)&local_38 + lVar15) = 0x10025dda6;
        FUN_1001a7b90(&local_58,local_4e20);
        local_4e58 = (ulong)local_4a8a;
        *(undefined8 *)((long)&local_38 + lVar15) = 0x10025ddcb;
        FUN_10021f1aa(&local_4e40,&local_4e58,0);
        *(undefined8 *)((long)&local_38 + lVar15) = 0x10025dddd;
        FUN_10021f14e(local_4e30,&local_58,&local_4e40);
        *(undefined8 *)((long)&local_38 + lVar15) = 0x10025dde5;
        FUN_1001aae6c(&local_4e40);
        *(undefined8 *)((long)&local_38 + lVar15) = 0x10025dded;
        FUN_1001ab240(&local_58);
        if ((local_4a8a & 1) != 0) {
          local_4e20[0] = &cf_bookmarkURL;
          *(undefined8 *)((long)&local_38 + lVar15) = 0x10025de14;
          FUN_1001a7b90(&local_58,local_4e20);
          *(undefined8 *)((long)&local_38 + lVar15) = 0x10025de23;
          FUN_1001a7b90(&local_4e40,local_4a66);
          *(undefined8 *)((long)&local_38 + lVar15) = 0x10025de35;
          FUN_1001a9c16(local_4e30,&local_58,&local_4e40);
          *(undefined8 *)((long)&local_38 + lVar15) = 0x10025de3d;
          FUN_1001ab240(&local_4e40);
          *(undefined8 *)((long)&local_38 + lVar15) = 0x10025de45;
          FUN_1001ab240(&local_58);
        }
        if ((local_4a8a & 2) != 0) {
          local_4e20[0] = &cf_url;
          *(undefined8 *)((long)&local_38 + lVar15) = 0x10025de6c;
          FUN_1001a7b90(&local_58,local_4e20);
          *(undefined8 *)((long)&local_38 + lVar15) = 0x10025de82;
          FUN_10021f1e0(local_4e30,&local_58,local_4a86);
          *(undefined8 *)((long)&local_38 + lVar15) = 0x10025de8a;
          FUN_1001ab240(&local_58);
        }
        if ((local_4a8a & 4) != 0) {
          local_4e20[0] = &cf_dataDict;
          *(undefined8 *)((long)&local_38 + lVar15) = 0x10025deb1;
          FUN_1001a7b90(&local_58,local_4e20);
          *(undefined8 *)((long)&local_38 + lVar15) = 0x10025dec0;
          FUN_1001a7b90(&local_4e40,local_4a76);
          *(undefined8 *)((long)&local_38 + lVar15) = 0x10025ded2;
          FUN_1001a9c16(local_4e30,&local_58,&local_4e40);
          *(undefined8 *)((long)&local_38 + lVar15) = 0x10025deda;
          FUN_1001ab240(&local_4e40);
          *(undefined8 *)((long)&local_38 + lVar15) = 0x10025dee2;
          FUN_1001ab240(&local_58);
        }
        if ((local_4a8a & 8) != 0) {
          *(undefined8 *)((long)&local_38 + lVar15) = 0x10025def8;
          FUN_10032f0f2(&local_58);
          if (local_4a56 != (long *)0x0) {
            pcVar7 = *(code **)(*local_4a56 + 8);
            *(undefined8 *)((long)&local_38 + lVar15) = 0x10025df0a;
            uVar17 = (*pcVar7)();
            *(undefined8 *)((long)&local_38 + lVar15) = 0x10025df1c;
            FUN_1001a78d6(local_4e20,uVar17);
            *(undefined8 *)((long)&local_38 + lVar15) = 0x10025df27;
            FUN_1001a7b1c(&local_58,local_4e20);
            *(undefined8 *)((long)&local_38 + lVar15) = 0x10025df2f;
            FUN_1001a85d4(local_4e20);
          }
          local_4e40 = &cf_chapterData;
          *(undefined8 *)((long)&local_38 + lVar15) = 0x10025df50;
          FUN_1001a7b90(local_4e20,&local_4e40);
          *(undefined8 *)((long)&local_38 + lVar15) = 0x10025df62;
          FUN_1001a7b90(&local_4e58,&local_58);
          *(undefined8 *)((long)&local_38 + lVar15) = 0x10025df7b;
          FUN_1001a9c16(local_4e30,local_4e20,&local_4e58);
          *(undefined8 *)((long)&local_38 + lVar15) = 0x10025df83;
          FUN_1001ab240(&local_4e58);
          *(undefined8 *)((long)&local_38 + lVar15) = 0x10025df8b;
          FUN_1001ab240(local_4e20);
          *(undefined8 *)((long)&local_38 + lVar15) = 0x10025df93;
          FUN_1001a85d4(&local_58);
        }
        if ((local_4a8a & 0x20) != 0) {
          local_4e20[0] = &cf_bookInfo;
          *(undefined8 *)((long)&local_38 + lVar15) = 0x10025dfba;
          FUN_1001a7b90(&local_58,local_4e20);
          *(undefined8 *)((long)&local_38 + lVar15) = 0x10025dfd0;
          FUN_1001a7b90(&local_4e40,local_4a46);
          *(undefined8 *)((long)&local_38 + lVar15) = 0x10025dfe2;
          FUN_1001a9c16(local_4e30,&local_58,&local_4e40);
          *(undefined8 *)((long)&local_38 + lVar15) = 0x10025dfea;
          FUN_1001ab240(&local_4e40);
          *(undefined8 *)((long)&local_38 + lVar15) = 0x10025dff2;
          FUN_1001ab240(&local_58);
        }
        if (local_4e30[0] != (cfstringStruct *)0x0) {
          *(undefined8 *)((long)&local_38 + lVar15) = 0x10025e00b;
          FUN_1001a7b90(&local_58,local_4e30);
          *(undefined8 *)((long)&local_38 + lVar15) = 0x10025e01a;
          FUN_1001a7d28(local_4e50);
          *(undefined8 *)((long)&local_38 + lVar15) = 0x10025e022;
          FUN_1001ab240(&local_58);
        }
        *(undefined8 *)((long)&local_38 + lVar15) = 0x10025e02e;
        FUN_1001a8fac(local_4e30);
        *(undefined8 *)((long)&local_38 + lVar15) = 0x10025e03a;
        FUN_1001a8fac(local_4a46);
        if (plStack_4a4e != (long *)0x0) {
          LOCK();
          plVar10 = plStack_4a4e + 1;
          lVar18 = *plVar10;
          *plVar10 = *plVar10 + -1;
          UNLOCK();
          if (lVar18 == 0) {
            pcVar7 = *(code **)(*plStack_4a4e + 0x10);
            *(undefined8 *)((long)&local_38 + lVar15) = 0x10025e061;
            (*pcVar7)(plStack_4a4e);
            *(undefined8 *)((long)&local_38 + lVar15) = 0x10025e069;
            std::__shared_weak_count::__release_weak();
          }
        }
        *(undefined8 *)((long)&local_38 + lVar15) = 0x10025e075;
        FUN_1001a85d4(local_4a66);
        *(undefined8 *)((long)&local_38 + lVar15) = 0x10025e081;
        FUN_1001a8fac(local_4a76);
        *(undefined8 *)((long)&local_38 + lVar15) = 0x10025e08d;
        FUN_1001b7a50(local_4a86);
      }
      plVar21 = (long *)*plVar21;
    } while (plVar21 != (long *)0x0);
  }
  *(undefined8 *)((long)&local_38 + lVar15) = 0x10025e0e6;
  lVar18 = FUN_1001a7bfa(local_4e50);
  if (lVar18 != 0) {
    local_58 = 0x877070;
    uStack_54 = 1;
    *(undefined8 *)((long)&local_38 + lVar15) = 0x10025e105;
    FUN_1001a7b90(&local_4e08);
    *(undefined8 *)((long)&local_38 + lVar15) = 0x10025e118;
    FUN_1001a7b90(local_4e20,local_4e50);
    *(undefined8 *)((long)&local_38 + lVar15) = 0x10025e132;
    FUN_1001a9c16(local_4e38,&local_4e08,local_4e20);
    *(undefined8 *)((long)&local_38 + lVar15) = 0x10025e13e;
    FUN_1001ab240(local_4e20);
    *(undefined8 *)((long)&local_38 + lVar15) = 0x10025e14a;
    FUN_1001ab240(&local_4e08);
  }
  *(undefined8 *)((long)&local_38 + lVar15) = 0x10025e156;
  FUN_1001a7a94(local_4e50);
LAB_10025e156:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)((long)&local_38 + lVar15) = &UNK_10025e35f;
    ___stack_chk_fail();
  }
  return local_4e38;
}

