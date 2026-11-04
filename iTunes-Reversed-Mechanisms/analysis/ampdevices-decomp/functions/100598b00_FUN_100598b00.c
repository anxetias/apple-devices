// name: FUN_100598b00
// address: 100598b00

undefined8 FUN_100598b00(long param_1,ulong *param_2)

{
  uint *puVar1;
  byte *pbVar2;
  ushort uVar3;
  ushort uVar4;
  long lVar5;
  bool bVar6;
  char cVar7;
  char cVar8;
  byte bVar9;
  undefined2 uVar10;
  uint uVar11;
  int iVar12;
  undefined4 uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined1 *puVar16;
  byte bVar17;
  uint uVar18;
  undefined *puVar19;
  byte bVar20;
  int iVar21;
  undefined8 *puVar22;
  ulong extraout_RDX;
  int iVar23;
  ulong *puVar24;
  ulong uVar25;
  uint uVar26;
  ulong uVar27;
  char *pcVar28;
  bool bVar29;
  bool bVar30;
  bool bVar31;
  undefined1 auVar32 [16];
  char local_1770 [80];
  ulong local_1720 [5];
  ulong *local_16f8;
  char *local_16f0;
  undefined8 local_16e8;
  int local_16e0;
  char local_16db;
  ushort local_16da;
  undefined1 *local_16d8;
  char local_16cb;
  char local_16ca;
  char local_16c9;
  ulong *local_16c8;
  int local_16bc;
  undefined1 local_16b8 [1056];
  undefined8 local_1298;
  undefined2 local_1290;
  uint local_1098 [2];
  undefined1 local_1090 [1048];
  undefined2 local_c78;
  ushort auStack_c76 [9];
  ushort auStack_c64 [246];
  undefined4 local_a78;
  ushort auStack_a62 [245];
  int local_878 [264];
  int local_458 [3];
  undefined2 uStack_44c;
  undefined2 uStack_44a;
  undefined2 uStack_448;
  undefined4 uStack_446;
  undefined8 uStack_40;
  long local_38;
  
  uStack_40 = 0x100598b18;
  auVar32 = FUN_100108310();
  puVar22 = auVar32._8_8_;
  lVar5 = -auVar32._0_8_;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    *(undefined8 *)((long)&local_38 + lVar5) = 0x100598d1e;
    uVar15 = FUN_1001cc310();
    *(undefined8 *)((long)&local_38 + lVar5) = 0x100598d2e;
    cVar7 = _os_log_type_enabled(uVar15,0x10);
    if (cVar7 != '\0') {
      local_458[0] = 0x8220202;
      local_458[1] = 0x7a0a90;
      local_458[2] = 1;
      uStack_44c = 0x822;
      uStack_44a = 0x7679;
      uStack_448 = 0x7d;
      uStack_446 = 1;
      *(undefined8 *)((long)&local_38 + lVar5) = 0x100598ebc;
      __os_log_error_impl(0x100000000,uVar15,0x10,"%{public}s: (%{public}s)",local_458,0x16);
    }
    *(undefined8 *)((long)&local_38 + lVar5) = 0x100598d3f;
    FUN_1001782e9(0,0);
LAB_100598d67:
    uVar15 = 0xffffffce;
    goto LAB_10059aebf;
  }
  if (param_2 == (ulong *)0x0) {
    *(undefined8 *)((long)&local_38 + lVar5) = 0x100598d46;
    uVar15 = FUN_1001cc310();
    *(undefined8 *)((long)&local_38 + lVar5) = 0x100598d56;
    cVar7 = _os_log_type_enabled(uVar15,0x10);
    if (cVar7 != '\0') {
      local_458[0] = 0x8220202;
      local_458[1] = 0x7a0a90;
      local_458[2] = 1;
      uStack_44c = 0x822;
      uStack_44a = 0xdd09;
      uStack_448 = 0x7c;
      uStack_446 = 1;
      *(undefined8 *)((long)&local_38 + lVar5) = 0x10059936d;
      __os_log_error_impl(0x100000000,uVar15,0x10,"%{public}s: (%{public}s)",local_458,0x16);
    }
    *(undefined8 *)((long)&local_38 + lVar5) = 0x100598d67;
    FUN_1001782e9(0,0);
    goto LAB_100598d67;
  }
  if (puVar22 != (undefined8 *)0x0) {
    *puVar22 = 0;
  }
  *(undefined8 *)((long)&local_38 + lVar5) = 0x100598b5a;
  local_16da = FUN_1002660d3(param_1);
  *(undefined8 *)((long)&local_38 + lVar5) = 0x100598b69;
  local_16bc = FUN_100266214(param_1);
  *(undefined8 *)((long)&local_38 + lVar5) = 0x100598b77;
  local_16ca = FUN_100266a70(param_1);
  *(undefined8 *)((long)&local_38 + lVar5) = 0x100598b85;
  local_16db = FUN_1002669ba(param_1);
  *(undefined8 *)((long)&local_38 + lVar5) = 0x100598b93;
  local_16cb = FUN_100266bdc(param_1);
  *(undefined8 *)((long)&local_38 + lVar5) = 0x100598ba1;
  local_16c9 = FUN_100266b26(param_1);
  *(undefined8 *)((long)&local_38 + lVar5) = 0x100598bb8;
  FUN_1001c62d9(local_16b8,0x420);
  *(undefined8 *)((long)&local_38 + lVar5) = 0x100598bc9;
  FUN_1001c62d9(local_1720,0x28);
  *(undefined8 *)((long)&local_38 + lVar5) = 0x100598bd8;
  local_16e0 = FUN_10026677e(param_1,local_16b8);
  *(undefined8 *)((long)&local_38 + lVar5) = 0x100598be8;
  local_16c8 = (ulong *)FUN_1001c63e1(0x6660);
  if (local_16c8 == (ulong *)0x0) {
    *(undefined8 *)((long)&local_38 + lVar5) = 0x100598d77;
    uVar15 = FUN_1001cc310();
    *(undefined8 *)((long)&local_38 + lVar5) = 0x100598d87;
    cVar7 = _os_log_type_enabled(uVar15,0x10);
    if (cVar7 != '\0') {
      local_458[0] = 0x8220202;
      local_458[1] = 0x7a0a90;
      local_458[2] = 1;
      uStack_44c = 0x822;
      uStack_44a = 0xab5f;
      uStack_448 = 0x7e;
      uStack_446 = 1;
      *(undefined8 *)((long)&local_38 + lVar5) = 0x10059946d;
      __os_log_error_impl(0x100000000,uVar15,0x10,"%{public}s: (%{public}s)",local_458,0x16);
    }
    *(undefined8 *)((long)&local_38 + lVar5) = 0x100598d98;
    FUN_1001782e9(0,0);
LAB_100598dc0:
    uVar15 = 0xffffff94;
    goto LAB_10059aebf;
  }
  *(undefined8 *)((long)&local_38 + lVar5) = 0x100598c07;
  local_16f8 = (ulong *)FUN_1001c63e1(0x6660);
  cVar8 = local_16c9;
  cVar7 = local_16ca;
  if (local_16f8 == (ulong *)0x0) {
    *(undefined8 *)((long)&local_38 + lVar5) = 0x100598d9f;
    uVar15 = FUN_1001cc310();
    *(undefined8 *)((long)&local_38 + lVar5) = 0x100598daf;
    cVar7 = _os_log_type_enabled(uVar15,0x10);
    if (cVar7 != '\0') {
      local_458[0] = 0x8220202;
      local_458[1] = 0x7a0a90;
      local_458[2] = 1;
      uStack_44c = 0x822;
      uStack_44a = 0xab7f;
      uStack_448 = 0x7e;
      uStack_446 = 1;
      *(undefined8 *)((long)&local_38 + lVar5) = 0x100599557;
      __os_log_error_impl(0x100000000,uVar15,0x10,"%{public}s: (%{public}s)",local_458,0x16);
    }
    *(undefined8 *)((long)&local_38 + lVar5) = 0x100598dc0;
    FUN_1001782e9(0,0);
    goto LAB_100598dc0;
  }
  *(undefined8 *)((long)&local_38 + lVar5) = 0x100598c3e;
  FUN_10059c41c(local_16bc,local_16ca,local_16c9,param_2);
  *(undefined8 *)((long)&local_38 + lVar5) = 0x100598c55;
  FUN_10059c41c(local_16bc,cVar7,cVar8,local_16c8);
  *(undefined8 *)((long)&local_38 + lVar5) = 0x100598c6c;
  FUN_10059c41c(local_16bc,cVar7,cVar8,local_16f8);
  *(undefined8 *)((long)&local_38 + lVar5) = 0x100598c74;
  local_16f0 = (char *)FUN_1002652df(param_1);
  if (local_16f0 == (char *)0x0) goto LAB_1005998b8;
  if (puVar22 != (undefined8 *)0x0) {
    *puVar22 = 0;
  }
  *(undefined8 *)((long)&local_38 + lVar5) = 0x100598cad;
  FUN_10059c41c(local_16bc,cVar7,cVar8,local_16c8);
  *(undefined8 *)((long)&local_38 + lVar5) = 0x100598cc7;
  local_16d8 = (undefined1 *)FUN_10016a9bd(DAT_1008c4d90,local_16f0,0,0);
  if (local_16d8 == (undefined1 *)0x0) {
    *(undefined8 *)((long)&local_38 + lVar5) = 0x100598dd0;
    uVar15 = FUN_1001cc310();
    *(undefined8 *)((long)&local_38 + lVar5) = 0x100598de0;
    cVar7 = _os_log_type_enabled(uVar15,0x10);
    if (cVar7 != '\0') {
      local_458[0] = 0x8220202;
      local_458[1] = 0x7a0a90;
      local_458[2] = 1;
      uStack_44c = 0x822;
      uStack_44a = 0xac4b;
      uStack_448 = 0x7e;
      uStack_446 = 1;
      *(undefined8 *)((long)&local_38 + lVar5) = 0x1005995a8;
      __os_log_error_impl(0x100000000,uVar15,0x10,"%{public}s: (%{public}s)");
    }
    *(undefined8 *)((long)&local_38 + lVar5) = 0x100598df1;
    FUN_1001782e9(0,0);
    *(undefined8 *)((long)&local_38 + lVar5) = 0x100598df8;
    FUN_10017060f(0);
    goto LAB_1005998ac;
  }
  *(undefined8 *)((long)&local_38 + lVar5) = 0x100598cf6;
  FUN_10059def0(local_16d8,&PTR_s_BuildID_10086ac00,0xb7,local_16c8);
  if (*(int *)((long)local_16c8 + 0x6604) == 0) {
    bVar29 = false;
  }
  else {
    bVar29 = (int)local_16c8[0xcc1] != 0;
  }
  *(bool *)((long)local_16c8 + 0x31a) = bVar29;
  if ((*(byte *)((long)local_16c8 + 0x30b) != 0) && (*(short *)((long)local_16c8 + 0x364) == 0)) {
    ((byte *)((long)local_16c8 + 0x364))[0] = 1;
    ((byte *)((long)local_16c8 + 0x364))[1] = 0;
  }
  *(undefined8 *)((long)&local_38 + lVar5) = 0x100598e34;
  lVar14 = FUN_10016696d(local_16d8,&cf_FairPlayCertificate);
  if (lVar14 != 0) {
    if (puVar22 != (undefined8 *)0x0) {
      *(undefined8 *)((long)&local_38 + lVar5) = 0x100598e51;
      uVar15 = FUN_1001705fc(lVar14);
      *puVar22 = uVar15;
    }
    bVar29 = *(byte *)((long)local_16c8 + 0x352) == 0;
    if (!bVar29) {
      *(byte *)((long)local_16c8 + 0x2e7) = 1;
    }
    *(bool *)((long)local_16c8 + 0x2e6) = bVar29;
    *(byte *)(local_16c8 + 0x5d) = 1;
  }
  if ((local_16bc == 0x6950686e) || (local_16bc == 0x69506164)) {
    *(undefined8 *)((long)&local_38 + lVar5) = 0x100598f03;
    FUN_10059def0(local_16d8,&PTR_s_CTN_10086ce50,10,local_16c8);
  }
  puVar24 = local_16c8;
  local_878[0] = 0;
  local_1098[0] = 0;
  local_a78 = 0;
  *(undefined8 *)((long)&local_38 + lVar5) = 0x100598f3a;
  uVar11 = _sscanf((char *)((long)local_16c8 + 0x16),"%u.%u.%u");
  if ((uVar11 & 0xfffffffe) != 2) {
    *(undefined8 *)((long)&local_38 + lVar5) = 0x100598f47;
    uVar15 = FUN_1001cc310();
    *(undefined8 *)((long)&local_38 + lVar5) = 0x100598f57;
    cVar7 = _os_log_type_enabled(uVar15,0x10);
    if (cVar7 != '\0') {
      local_458[0] = 0x8220202;
      local_458[1] = 0x7a0a90;
      local_458[2] = 1;
      uStack_44c = 0x822;
      uStack_44a = 0xc450;
      uStack_448 = 0x7a;
      uStack_446 = 1;
      *(undefined8 *)((long)&local_38 + lVar5) = 0x1005995f9;
      __os_log_error_impl(0x100000000,uVar15,0x10,"%{public}s: (%{public}s)");
    }
    *(undefined8 *)((long)&local_38 + lVar5) = 0x100598f68;
    FUN_1001782e9(0,0);
    puVar24 = local_16c8;
  }
  *(ushort *)((long)puVar24 + 0x14) =
       (ushort)local_a78 & 0xf | (ushort)((local_1098[0] & 0xf) << 4) | (ushort)(local_878[0] << 8);
  *(undefined8 *)((long)&local_38 + lVar5) = 0x100598fa8;
  lVar14 = FUN_100166b7f(local_16d8,&cf_AudioCodecs);
  if (lVar14 != 0) {
    *(undefined8 *)((long)&local_38 + lVar5) = 0x100598fc5;
    FUN_1001c62d9(local_458,0x10);
    puVar24 = local_16c8 + 0x81;
    local_458[0] = local_16bc;
    local_458[2] = (int)puVar24;
    uStack_44c = (undefined2)((ulong)puVar24 >> 0x20);
    uStack_44a = (undefined2)((ulong)puVar24 >> 0x30);
    *(undefined8 *)((long)&local_38 + lVar5) = 0x100598ff5;
    FUN_1001714c2(lVar14,FUN_1005a15c4);
    *(undefined8 *)((long)&local_38 + lVar5) = 0x100598ffd;
    FUN_10035d862(puVar24);
    uVar25 = *puVar24;
    if ((ulong)(uint)uVar25 != 0) {
      lVar14 = 0;
      do {
        iVar12 = *(int *)((long)local_16c8 + lVar14 + 0x40c);
        if (iVar12 < 0x61696666) {
          if (0x6161341f < iVar12) {
            if (iVar12 == 0x61613420) {
              uVar27 = 0x2000;
            }
            else {
              if (iVar12 != 0x61616320) goto LAB_1005990b1;
              uVar27 = 0x40200;
            }
            goto LAB_1005990ae;
          }
          if (iVar12 == 0x61613220) {
            uVar27 = 0x800;
            goto LAB_1005990ae;
          }
          if (iVar12 == 0x61613320) {
            uVar27 = 0x1000;
            goto LAB_1005990ae;
          }
        }
        else {
          if (iVar12 < 0x6d703320) {
            if (iVar12 == 0x61696666) {
              uVar27 = 0x40;
            }
            else {
              if (iVar12 != 0x616c6163) goto LAB_1005990b1;
              uVar27 = 0x80400;
            }
          }
          else {
            uVar27 = 0x80;
            if (iVar12 != 0x6d703320) {
              if (iVar12 != 0x77617665) goto LAB_1005990b1;
              uVar27 = 0x100;
            }
          }
LAB_1005990ae:
          *local_16c8 = *local_16c8 | uVar27;
        }
LAB_1005990b1:
        lVar14 = lVar14 + 0x24;
      } while ((ulong)(uint)uVar25 * 0x24 != lVar14);
    }
  }
  *(undefined8 *)((long)&local_38 + lVar5) = 0x1005990d1;
  auVar32 = FUN_100166b7f(local_16d8,&cf_VideoCodecs);
  uVar25 = auVar32._8_8_;
  if (auVar32._0_8_ != 0) {
    *(undefined8 *)((long)&local_38 + lVar5) = 0x1005990ee;
    FUN_1001c62d9(local_458,0x10);
    puVar1 = (uint *)((long)local_16c8 + 0x6dc);
    local_458[0] = local_16bc;
    local_458[2] = (int)puVar1;
    uStack_44c = (undefined2)((ulong)puVar1 >> 0x20);
    uStack_44a = (undefined2)((ulong)puVar1 >> 0x30);
    *(undefined8 *)((long)&local_38 + lVar5) = 0x10059911e;
    FUN_1001714c2(auVar32._0_8_,FUN_1005a1903);
    uVar11 = *puVar1;
    uVar25 = extraout_RDX;
    if ((ulong)uVar11 != 0) {
      lVar14 = 0;
      do {
        if ((*(int *)((long)local_16c8 + lVar14 + 0x6e0) == 0x61766331) &&
           (0x4c < *(byte *)((long)local_16c8 + lVar14 + 0x6f1))) {
          uVar26 = *(uint *)((long)local_16c8 + lVar14 + 0x70c);
          uVar18 = *(uint *)((long)local_16c8 + lVar14 + 0x710);
          uVar25 = (ulong)(uVar18 != uVar26);
          if (uVar26 != 0 && uVar18 == uVar26) {
            uVar26 = *(uint *)((long)local_16c8 + lVar14 + 0x6fc);
            uVar25 = (ulong)uVar18;
            uVar18 = uVar26 / uVar18;
            uVar25 = (ulong)uVar26 % uVar25;
          }
          if (0x2cf < uVar18) {
            *(byte *)((long)local_16c8 + 0x2f7) = 1;
            *(byte *)((long)local_16c8 + lVar14 + 0x6e5) = 1;
            if (0x437 < uVar18) {
              *(byte *)(local_16c8 + 0x5f) = 1;
              *(byte *)((long)local_16c8 + lVar14 + 0x6e6) = 1;
            }
          }
        }
        lVar14 = lVar14 + 0x31c;
      } while ((ulong)uVar11 * 0x31c - lVar14 != 0);
    }
  }
  *(undefined8 *)((long)&local_38 + lVar5) = 0x1005991d0;
  lVar14 = FUN_100166844(local_16d8,&cf_ImageSpecifications2,uVar25);
  if (lVar14 != 0) {
LAB_1005991ed:
    *(byte *)((long)local_16c8 + 0x2ec) = 1;
    uVar13 = *(undefined4 *)((long)local_16c8 + 0x234);
    *(undefined8 *)((long)&local_38 + lVar5) = 0x100599210;
    iVar12 = FUN_1005a05c0(uVar13,lVar14,local_16c8 + 0x8a2);
    if (iVar12 == 0) goto LAB_10059926b;
    *(undefined8 *)((long)&local_38 + lVar5) = 0x10059921c;
    uVar15 = FUN_1001cc310();
    *(undefined8 *)((long)&local_38 + lVar5) = 0x10059922c;
    cVar7 = _os_log_type_enabled(uVar15,0x10);
    if (cVar7 == '\0') goto LAB_100599883;
    uStack_44a = (undefined2)iVar12;
    uStack_448 = (undefined2)((uint)iVar12 >> 0x10);
    goto LAB_100599870;
  }
  *(undefined8 *)((long)&local_38 + lVar5) = 0x1005991e8;
  lVar14 = FUN_100166844(local_16d8,&cf_ImageSpecifications);
  if (lVar14 != 0) goto LAB_1005991ed;
LAB_10059926b:
  *(undefined8 *)((long)&local_38 + lVar5) = 0x10059927e;
  lVar14 = FUN_100166844(local_16d8,&cf_AlbumArt2);
  if (lVar14 != 0) {
LAB_10059929f:
    *(byte *)((long)local_16c8 + 0x303) = 1;
    uVar13 = *(undefined4 *)((long)local_16c8 + 0x234);
    *(undefined8 *)((long)&local_38 + lVar5) = 0x1005992c2;
    iVar12 = FUN_1005a05c0(uVar13,lVar14,local_16c8 + 0x9d1);
    if (iVar12 == 0) goto LAB_100599372;
    *(undefined8 *)((long)&local_38 + lVar5) = 0x1005992d2;
    uVar15 = FUN_1001cc310();
    *(undefined8 *)((long)&local_38 + lVar5) = 0x1005992e2;
    cVar7 = _os_log_type_enabled(uVar15,0x10);
    if (cVar7 != '\0') {
      uStack_44a = (undefined2)iVar12;
      uStack_448 = (undefined2)((uint)iVar12 >> 0x10);
      goto LAB_100599870;
    }
LAB_100599883:
    *(undefined8 *)((long)&local_38 + lVar5) = 0x100599888;
    uVar15 = FUN_1001cc310();
    *(undefined8 *)((long)&local_38 + lVar5) = 0x100599898;
    cVar7 = _os_log_type_enabled(uVar15,0x10);
    if (cVar7 != '\0') {
      local_458[0] = 0x8220202;
      local_458[1] = 0x7a0a90;
      local_458[2] = 1;
      uStack_44c = 0x400;
      uStack_44a = (undefined2)iVar12;
      uStack_448 = (undefined2)((uint)iVar12 >> 0x10);
      *(undefined8 *)((long)&local_38 + lVar5) = 0x100599f2e;
      __os_log_error_impl(0x100000000,uVar15,0x10,"%{public}s: err == (%d)");
    }
    *(undefined8 *)((long)&local_38 + lVar5) = 0x1005998ac;
    FUN_10017060f(local_16d8);
    goto LAB_1005998ac;
  }
  *(undefined8 *)((long)&local_38 + lVar5) = 0x100599296;
  lVar14 = FUN_100166844(local_16d8,&cf_AlbumArt);
  if (lVar14 != 0) goto LAB_10059929f;
LAB_100599372:
  *(undefined8 *)((long)&local_38 + lVar5) = 0x100599385;
  lVar14 = FUN_100166844(local_16d8,&cf_ChapterImageSpecs2);
  if (lVar14 == 0) {
    *(undefined8 *)((long)&local_38 + lVar5) = 0x10059939d;
    lVar14 = FUN_100166844(local_16d8,&cf_ChapterImageSpecs);
    if (lVar14 != 0) goto LAB_1005993a6;
  }
  else {
LAB_1005993a6:
    uVar13 = *(undefined4 *)((long)local_16c8 + 0x234);
    *(undefined8 *)((long)&local_38 + lVar5) = 0x1005993c2;
    iVar12 = FUN_1005a05c0(uVar13,lVar14,local_16c8 + 0xb00);
    if (iVar12 != 0) {
      *(undefined8 *)((long)&local_38 + lVar5) = 0x1005993d2;
      uVar15 = FUN_1001cc310();
      *(undefined8 *)((long)&local_38 + lVar5) = 0x1005993e2;
      cVar7 = _os_log_type_enabled(uVar15,0x10);
      if (cVar7 != '\0') {
        uStack_44a = (undefined2)iVar12;
        uStack_448 = (undefined2)((uint)iVar12 >> 0x10);
        goto LAB_100599870;
      }
      goto LAB_100599883;
    }
  }
  *(undefined8 *)((long)&local_38 + lVar5) = 0x100599485;
  lVar14 = FUN_100166b7f(local_16d8,&cf_VoiceMemoFormats);
  if (lVar14 != 0) {
    *(undefined8 *)((long)&local_38 + lVar5) = 0x1005994ac;
    iVar12 = FUN_1005a0ccc(lVar14,&cf_WAV,1,local_16c8);
    if (iVar12 == 0) {
      *(undefined8 *)((long)&local_38 + lVar5) = 0x100599619;
      iVar12 = FUN_1005a0ccc(lVar14,&cf_AIFF,2,local_16c8);
      if (iVar12 == 0) {
        *(undefined8 *)((long)&local_38 + lVar5) = 0x10059968f;
        iVar12 = FUN_1005a0ccc(lVar14,&cf_MP3,3,local_16c8);
        if (iVar12 == 0) {
          *(undefined8 *)((long)&local_38 + lVar5) = 0x100599705;
          iVar12 = FUN_1005a0ccc(lVar14,&cf_AAC,4,local_16c8);
          if (iVar12 == 0) {
            *(undefined8 *)((long)&local_38 + lVar5) = 0x10059977b;
            iVar12 = FUN_1005a0ccc(lVar14,&cf_AppleLossless,5,local_16c8);
            if (iVar12 == 0) goto LAB_1005997d6;
            *(undefined8 *)((long)&local_38 + lVar5) = 0x100599787;
            uVar15 = FUN_1001cc310();
            *(undefined8 *)((long)&local_38 + lVar5) = 0x100599797;
            cVar7 = _os_log_type_enabled(uVar15,0x10);
            if (cVar7 != '\0') {
              uStack_44a = (undefined2)iVar12;
              uStack_448 = (undefined2)((uint)iVar12 >> 0x10);
              goto LAB_100599870;
            }
          }
          else {
            *(undefined8 *)((long)&local_38 + lVar5) = 0x100599711;
            uVar15 = FUN_1001cc310();
            *(undefined8 *)((long)&local_38 + lVar5) = 0x100599721;
            cVar7 = _os_log_type_enabled(uVar15,0x10);
            if (cVar7 != '\0') {
              uStack_44a = (undefined2)iVar12;
              uStack_448 = (undefined2)((uint)iVar12 >> 0x10);
              goto LAB_100599870;
            }
          }
        }
        else {
          *(undefined8 *)((long)&local_38 + lVar5) = 0x10059969b;
          uVar15 = FUN_1001cc310();
          *(undefined8 *)((long)&local_38 + lVar5) = 0x1005996ab;
          cVar7 = _os_log_type_enabled(uVar15,0x10);
          if (cVar7 != '\0') {
            uStack_44a = (undefined2)iVar12;
            uStack_448 = (undefined2)((uint)iVar12 >> 0x10);
            goto LAB_100599870;
          }
        }
      }
      else {
        *(undefined8 *)((long)&local_38 + lVar5) = 0x100599625;
        uVar15 = FUN_1001cc310();
        *(undefined8 *)((long)&local_38 + lVar5) = 0x100599635;
        cVar7 = _os_log_type_enabled(uVar15,0x10);
        if (cVar7 != '\0') {
          uStack_44a = (undefined2)iVar12;
          uStack_448 = (undefined2)((uint)iVar12 >> 0x10);
          goto LAB_100599870;
        }
      }
    }
    else {
      *(undefined8 *)((long)&local_38 + lVar5) = 0x1005994bc;
      uVar15 = FUN_1001cc310();
      *(undefined8 *)((long)&local_38 + lVar5) = 0x1005994cc;
      cVar7 = _os_log_type_enabled(uVar15,0x10);
      if (cVar7 != '\0') {
        uStack_44a = (undefined2)iVar12;
        uStack_448 = (undefined2)((uint)iVar12 >> 0x10);
LAB_100599870:
        uStack_44c = 0x400;
        local_458[2] = 1;
        local_458[1] = 0x7a0a90;
        local_458[0] = 0x8220202;
        *(undefined8 *)((long)&local_38 + lVar5) = 0x100599883;
        __os_log_error_impl(0x100000000,uVar15,0x10,"%{public}s: err == (%d)");
      }
    }
    goto LAB_100599883;
  }
LAB_1005997d6:
  *(undefined8 *)((long)&local_38 + lVar5) = 0x1005997e9;
  lVar14 = FUN_100171475(local_16d8,&cf_SyncDataClasses);
  if (lVar14 != 0) {
    *(undefined8 *)((long)&local_38 + lVar5) = 0x100599808;
    uVar15 = FUN_100166b7f(local_16d8,&cf_OTASources);
    *(undefined8 *)((long)&local_38 + lVar5) = 0x10059981a;
    iVar12 = FUN_1005a0df0(lVar14,uVar15,local_16c8);
    if (iVar12 != 0) {
      *(undefined8 *)((long)&local_38 + lVar5) = 0x10059982a;
      uVar15 = FUN_1001cc310();
      *(undefined8 *)((long)&local_38 + lVar5) = 0x10059983a;
      cVar7 = _os_log_type_enabled(uVar15,0x10);
      if (cVar7 != '\0') {
        uStack_44a = (undefined2)iVar12;
        uStack_448 = (undefined2)((uint)iVar12 >> 0x10);
        goto LAB_100599870;
      }
      goto LAB_100599883;
    }
  }
  *(undefined8 *)((long)&local_38 + lVar5) = 0x10059a8b3;
  lVar14 = FUN_100166b7f(local_16d8,&cf_DisableTetheredSources);
  if (lVar14 != 0) {
    *(undefined8 *)((long)&local_38 + lVar5) = 0x10059a8c7;
    FUN_1005a11da(lVar14,local_16c8);
  }
  *(undefined8 *)((long)&local_38 + lVar5) = 0x10059a8da;
  lVar14 = FUN_100166b7f(local_16d8,&cf_com_apple_mobile_iTunes_SQLMusicLibraryPostProcessCommands);
  if (lVar14 != 0) {
    *(undefined8 *)((long)&local_38 + lVar5) = 0x10059a8ee;
    uVar15 = FUN_100166b7f(lVar14,&cf_SQLCommands);
    *(undefined8 *)((long)&local_38 + lVar5) = 0x10059a8fd;
    uVar13 = FUN_100167d66(uVar15,&cf_Version);
    *(undefined4 *)(local_16c8 + 0x80) = uVar13;
  }
  iVar12 = local_16bc;
  puVar24 = local_16c8;
  if (local_16bc == 0x69506f64 && local_16ca != '\0') {
    iVar23 = 0;
    if (((*(byte *)((long)local_16c8 + 0x2de) == 0) && ((byte)local_16c8[0x5c] == 0)) &&
       ((*(int *)((long)local_16c8 + 0x234) == 0 ||
        ((iVar23 = 0, local_16c9 == '\0' && (*(int *)((long)local_16c8 + 0xc) == 0)))))) {
      iVar23 = 0x460;
    }
  }
  else {
    if (((local_16bc != 0x69506164) && (local_16bc != 0x6950686e)) && (local_16bc != 0x69506f74)) {
      *(undefined8 *)((long)&local_38 + lVar5) = 0x10059aa04;
      cVar7 = FUN_100247cdd(local_16bc);
      if (cVar7 == '\0') {
        iVar23 = 0;
        goto LAB_10059aa56;
      }
    }
    iVar23 = 0x460;
    if (*(byte *)((long)puVar24 + 0xb6) != 0) {
      iVar23 = 0;
    }
    if (*(int *)((long)puVar24 + 0x234) + 1U < 2) {
      *(undefined8 *)((long)&local_38 + lVar5) = 0x10059aa3b;
      uVar13 = FUN_10059ccd3((byte *)((long)puVar24 + 0xb6));
      *(undefined4 *)((long)local_16c8 + 0x234) = uVar13;
      *(byte *)local_16c8 = (byte)*local_16c8 | 8;
      puVar24 = local_16c8;
      iVar12 = local_16bc;
    }
  }
LAB_10059aa56:
  iVar21 = *(int *)((long)puVar24 + 0x234);
  if (iVar21 == 0x2714) {
    *(undefined8 *)((long)&local_38 + lVar5) = 0x10059aa80;
    cVar7 = FUN_1001df957((byte *)((long)puVar24 + 0xb6),"iPhone3,1",0);
    puVar24 = local_16c8;
    iVar12 = local_16bc;
    if (cVar7 == '\0') {
      iVar21 = *(int *)((long)local_16c8 + 0x234);
    }
    else {
      pbVar2 = (byte *)((long)local_16c8 + 0x234);
      pbVar2[0] = 0x17;
      pbVar2[1] = 0x27;
      pbVar2[2] = 0;
      pbVar2[3] = 0;
      iVar21 = 0x2717;
    }
  }
  bVar20 = *(byte *)((long)puVar24 + 0x2b9);
  bVar9 = bVar20;
  if ((char)bVar20 < '\0') {
    uVar11 = iVar21 - 0x274f;
    if (uVar11 < 0x30) {
      if ((0x3e007fdbfffU >> ((ulong)uVar11 & 0x3f) & 1) == 0) {
        if (((0x9c1fe0024000U >> ((ulong)uVar11 & 0x3f) & 1) == 0) || (bVar9 = 10, bVar20 != 0xfe))
        goto LAB_10059b055;
      }
      else {
        bVar9 = 10;
        if (bVar20 != 0xfe) {
          bVar9 = bVar20 == 0xfd;
        }
      }
    }
    else {
LAB_10059b055:
      bVar9 = 0;
    }
  }
  *(byte *)((long)puVar24 + 0x2b9) = bVar9;
  bVar20 = *(byte *)((long)puVar24 + 0x2ba);
  bVar9 = bVar20;
  if ((-1 < (char)bVar20) || (bVar9 = 0, 0x2f < iVar21 - 0x274fU))
  goto switchD_10059b10e_caseD_276a;
  bVar17 = ~bVar20;
  switch(iVar21) {
  default:
    if (bVar20 < 0xf9) goto LAB_10059b1e0;
    uVar25 = 0xc0a1903021700;
LAB_10059b1d8:
    bVar9 = (byte)(uVar25 >> ((bVar17 & 7) << 3));
    break;
  case 0x275b:
  case 0x275e:
    if (6 < (byte)(-bVar20 - 3)) goto LAB_10059b49c;
    bVar17 = (-bVar20 - 3) * '\b';
    uVar25 = 0x17190c00000002;
LAB_10059b46a:
    bVar9 = (byte)(uVar25 >> (bVar17 & 0x3f));
    puVar24 = local_16c8;
    iVar12 = local_16bc;
    break;
  case 0x275c:
  case 0x275f:
    if (0xf8 < bVar20) {
      bVar17 = bVar17 << 3;
      uVar25 = 0xc000019021700;
      goto LAB_10059b46a;
    }
    goto LAB_10059b49c;
  case 0x275d:
  case 0x2760:
    if (bVar20 < 0xfc) goto LAB_10059b49c;
    bVar9 = (byte)(0x19021700 >> ((bVar17 & 3) << 3));
    puVar24 = local_16c8;
    iVar12 = local_16bc;
    break;
  case 0x2763:
  case 0x2764:
  case 0x2765:
  case 0x2766:
  case 0x2767:
  case 0x2768:
    if (0xfa < bVar20) {
      uVar25 = 0x300021700;
      goto LAB_10059b1d8;
    }
LAB_10059b1e0:
    bVar9 = 0;
    break;
  case 0x2769:
    if (8 < (byte)(-bVar20 - 2)) goto LAB_10059b49c;
    uVar25 = (ulong)(byte)(-bVar20 - 2);
    puVar19 = &DAT_10075a7d0;
LAB_10059b497:
    bVar9 = puVar19[uVar25];
    puVar24 = local_16c8;
    iVar12 = local_16bc;
    break;
  case 0x276a:
  case 0x276b:
    break;
  case 0x276c:
  case 0x276d:
  case 0x276e:
  case 0x276f:
  case 0x2770:
  case 0x2771:
  case 0x2772:
  case 0x2773:
    bVar9 = 0x17;
    if (bVar20 != 0xfe) {
      bVar9 = (bVar20 == 0xfd) * '\x02';
    }
    break;
  case 0x2778:
    if ((byte)(-bVar20 - 3) < 8) {
      bVar17 = (-bVar20 - 3) * '\b';
      uVar25 = 0x700000c18080302;
      goto LAB_10059b46a;
    }
    goto LAB_10059b49c;
  case 0x2779:
    if ((byte)(-bVar20 - 2) < 0xc) {
      uVar25 = (ulong)(byte)(-bVar20 - 2);
      puVar19 = &DAT_10075a7d9;
      goto LAB_10059b497;
    }
    goto LAB_10059b49c;
  case 0x277a:
  case 0x277b:
    if ((byte)(-bVar20 - 2) < 0xc) {
      uVar25 = (ulong)(byte)(-bVar20 - 2);
      puVar19 = &DAT_10075a7e5;
      goto LAB_10059b497;
    }
    goto LAB_10059b49c;
  case 0x277e:
    if (0xf8 < bVar20) {
      bVar17 = bVar17 << 3;
      uVar25 = 0xc000000021700;
      goto LAB_10059b46a;
    }
LAB_10059b49c:
    bVar9 = 0;
    puVar24 = local_16c8;
    iVar12 = local_16bc;
  }
switchD_10059b10e_caseD_276a:
  *(byte *)((long)puVar24 + 0x2ba) = bVar9;
  *(byte *)((long)puVar24 + 0x2e9) = 1;
  *(undefined8 *)((long)&local_38 + lVar5) = 0x10059b096;
  FUN_10059cf64(iVar12,local_16da,0x10,puVar24);
  *(undefined8 *)((long)&local_38 + lVar5) = 0x10059b0a2;
  FUN_10017060f(local_16d8);
  if (iVar23 == 0) {
    bVar31 = local_16e0 == 0;
    *(undefined8 *)((long)&local_38 + lVar5) = 0x10059b0c1;
    FUN_10017060f(local_16f0);
    uVar25 = local_16c8[0xc2f];
    bVar29 = true;
    bVar30 = true;
    if (uVar25 == 0 && bVar31) {
LAB_1005998c3:
      bVar29 = bVar30;
      *(undefined8 *)((long)&local_38 + lVar5) = 0x1005998d6;
      iVar12 = FUN_100189f61(local_16b8,local_1720);
      uVar25 = local_1720[0];
      if (iVar12 != 0) goto LAB_1005998e3;
    }
  }
  else {
LAB_1005998ac:
    *(undefined8 *)((long)&local_38 + lVar5) = 0x1005998b8;
    FUN_10017060f(local_16f0);
LAB_1005998b8:
    bVar29 = false;
    bVar30 = bVar29;
    if (local_16e0 == 0) goto LAB_1005998c3;
LAB_1005998e3:
    uVar25 = 0;
  }
  bVar30 = true;
  if (local_16bc < 0x57617463) {
    if (((local_16bc == 0x48416363) || (local_16bc == 0x48506f64)) || (local_16bc == 0x4d616320))
    goto LAB_1005999a2;
LAB_100599b76:
    puVar24 = local_16c8;
    if (bVar29) goto LAB_1005999bb;
    *(undefined8 *)((long)&local_38 + lVar5) = 0x100599b8a;
    uVar15 = FUN_1001cc310();
    *(undefined8 *)((long)&local_38 + lVar5) = 0x100599b9a;
    cVar7 = _os_log_type_enabled(uVar15,0x10);
    if (cVar7 != '\0') {
      local_458[0] = 0x8220202;
      local_458[1] = 0x7a0a90;
      local_458[2] = 1;
      uStack_44c = 0x822;
      uStack_44a = 0xab9c;
      uStack_448 = 0x7e;
      uStack_446 = 1;
      *(undefined8 *)((long)&local_38 + lVar5) = 0x10059ab1c;
      __os_log_error_impl(0x100000000,uVar15,0x10,"%{public}s: (%{public}s)",local_458,0x16);
    }
    *(undefined8 *)((long)&local_38 + lVar5) = 0x100599bab;
    FUN_1001782e9(0,0);
LAB_100599dfa:
    uVar15 = 0x460;
    goto LAB_10059aea7;
  }
  if (local_16bc < 0x69506f64) {
    if ((local_16bc != 0x57617463) && (local_16bc != 0x69427269)) goto LAB_100599b76;
  }
  else if (local_16bc != 0x69545620) {
    if (local_16bc != 0x69506f64) goto LAB_100599b76;
    if ((0x13d < local_16da || local_16ca == '\0') && !bVar29) {
      *(undefined8 *)((long)&local_38 + lVar5) = 0x100599dd9;
      uVar15 = FUN_1001cc310();
      *(undefined8 *)((long)&local_38 + lVar5) = 0x100599de9;
      cVar7 = _os_log_type_enabled(uVar15,0x10);
      if (cVar7 != '\0') {
        local_458[0] = 0x8220202;
        local_458[1] = 0x7a0a90;
        local_458[2] = 1;
        uStack_44c = 0x822;
        uStack_44a = 0xab9c;
        uStack_448 = 0x7e;
        uStack_446 = 1;
        *(undefined8 *)((long)&local_38 + lVar5) = 0x10059ab6d;
        __os_log_error_impl(0x100000000,uVar15,0x10,"%{public}s: (%{public}s)",local_458,0x16);
      }
      *(undefined8 *)((long)&local_38 + lVar5) = 0x100599dfa;
      FUN_1001782e9(0,0);
      goto LAB_100599dfa;
    }
    if (local_16e0 == 0 && local_16ca != '\0') {
      *(undefined8 *)((long)&local_38 + lVar5) = 0x10059999d;
      iVar12 = FUN_10059c5c1(local_16b8,local_16da,local_16f8);
      bVar30 = iVar12 != 0;
    }
  }
LAB_1005999a2:
  puVar24 = local_16f8;
  if (bVar29) {
    puVar24 = local_16c8;
  }
  if (bVar30 != true || bVar29) {
LAB_1005999bb:
    *(undefined8 *)((long)&local_38 + lVar5) = 0x1005999c8;
    _memcpy(param_2,puVar24,0x6660);
  }
  uVar3 = local_16da;
  param_2[0xc2f] = uVar25;
  uVar25 = 1;
  iVar12 = 0x40;
  do {
    if (((uVar25 & 0xfffff) != 0) && ((*param_2 & uVar25) == 0)) {
      *(undefined8 *)((long)&local_38 + lVar5) = 0x100599a04;
      FUN_10059cf64(local_16bc,uVar3,uVar25,param_2);
    }
    uVar25 = uVar25 * 2;
    iVar12 = iVar12 + -1;
  } while (iVar12 != 0);
  if (local_16f0 == (char *)0x0) {
    *(undefined8 *)((long)&local_38 + lVar5) = 0x100599a22;
    FUN_10035d862(param_2 + 0x81);
  }
  uVar4 = (ushort)param_2[0x6d];
  if (uVar4 < 4) {
    *(undefined1 *)((long)param_2 + 0x2e3) = 1;
    if (uVar4 < 2) {
      *(undefined1 *)((long)param_2 + 0x2e4) = 0;
    }
    else {
      *(undefined1 *)((long)param_2 + 0x2e4) = 1;
    }
  }
  else {
    *(undefined2 *)((long)param_2 + 0x2e3) = 0;
  }
  cVar7 = (*param_2 & 0x7c0) != 0;
  *(char *)((long)param_2 + 0x2eb) = cVar7;
  bVar29 = true;
  if (*(int *)((long)param_2 + 0x6dc) == 0) {
    bVar29 = *(char *)((long)param_2 + 0x2fd) != '\0';
  }
  *(bool *)((long)param_2 + 0x2f6) = bVar29;
  if ((*param_2 & 0x7c0) == 0) {
    *(undefined1 *)((long)param_2 + 0x315) = 0;
  }
  local_16f0 = (char *)((long)param_2 + 0x2fe);
  if (bVar29 == false) {
    *(undefined1 *)((long)param_2 + 0x2fc) = 0;
    *(undefined1 *)((long)param_2 + 0x302) = 0;
    local_16f0[0] = '\0';
    local_16f0[1] = '\0';
    local_16f0[2] = '\0';
    local_16f0[3] = '\0';
LAB_100599ad2:
    *(undefined2 *)((long)param_2 + 0x2f7) = 0;
  }
  else if ((*local_16f0 == '\0') && (*(char *)((long)param_2 + 0x2ff) == '\0')) goto LAB_100599ad2;
  if (*(char *)((long)param_2 + 0x2ea) == '\0') {
    local_16d8 = (undefined1 *)0x0;
    if (local_16e0 == 0) {
      local_16d8 = local_16b8;
    }
    *(undefined8 *)((long)&local_38 + lVar5) = 0x100599b0c;
    cVar8 = FUN_100247cdd(local_16bc);
    if (cVar8 == '\0') {
      if ((short)*(ushort *)((long)param_2 + 0x366) < 0) {
        *(undefined8 *)((long)&local_38 + lVar5) = 0x100599e0a;
        uVar15 = FUN_1001cc310();
        *(undefined8 *)((long)&local_38 + lVar5) = 0x100599e1a;
        cVar7 = _os_log_type_enabled(uVar15,0x10);
        if (cVar7 != '\0') {
          local_458[0] = 0x8220202;
          local_458[1] = 0x7a0a90;
          local_458[2] = 1;
          uStack_44c = 0x822;
          uStack_44a = 0xdb85;
          uStack_448 = 0x7e;
          uStack_446 = 1;
          *(undefined8 *)((long)&local_38 + lVar5) = 0x10059abfd;
          __os_log_error_impl(0x100000000,uVar15,0x10,"%{public}s: (%{public}s)",local_458,0x16);
        }
        *(undefined8 *)((long)&local_38 + lVar5) = 0x100599e2b;
        FUN_1001782e9(0,0);
      }
      else if ((short)uVar4 < 0) {
        *(undefined8 *)((long)&local_38 + lVar5) = 0x100599e6f;
        uVar15 = FUN_1001cc310();
        *(undefined8 *)((long)&local_38 + lVar5) = 0x100599e7f;
        cVar7 = _os_log_type_enabled(uVar15,0x10);
        if (cVar7 != '\0') {
          local_458[0] = 0x8220202;
          local_458[1] = 0x7a0a90;
          local_458[2] = 1;
          uStack_44c = 0x822;
          uStack_44a = 0xdbb1;
          uStack_448 = 0x7e;
          uStack_446 = 1;
          *(undefined8 *)((long)&local_38 + lVar5) = 0x10059af5f;
          __os_log_error_impl(0x100000000,uVar15,0x10,"%{public}s: (%{public}s)",local_458,0x16);
        }
        *(undefined8 *)((long)&local_38 + lVar5) = 0x100599e90;
        FUN_1001782e9(0,0);
      }
      else if (*(ushort *)((long)param_2 + 0x366) < uVar4) {
        if (*(char *)((long)param_2 + 0x37a) != '\0') {
          *(undefined8 *)((long)&local_38 + lVar5) = 0x100599be9;
          FUN_1001eb60a(local_458);
          *(undefined8 *)((long)&local_38 + lVar5) = 0x100599bfc;
          FUN_1001b7b04(local_878,(long)param_2 + 0x37a);
          *(undefined8 *)((long)&local_38 + lVar5) = 0x100599c0f;
          iVar12 = FUN_1001e6c16(local_458);
          *(undefined8 *)((long)&local_38 + lVar5) = 0x100599c1d;
          FUN_1001b7a50(local_878);
          *(undefined8 *)((long)&local_38 + lVar5) = 0x100599c29;
          FUN_1001b7a50(local_458);
          if (iVar12 < 0) goto LAB_100599b14;
          cVar7 = *(char *)((long)param_2 + 0x2eb);
        }
        if (cVar7 == '\0') {
LAB_100599cf3:
          cVar7 = *(char *)((long)param_2 + 0x2f6);
          if ((cVar7 != '\0') && ((ulong)*(uint *)((long)param_2 + 0x6dc) != 0)) {
            lVar14 = 0;
            do {
              if ((*(int *)((long)param_2 + lVar14 + 0x6e0) == 0x61766331) &&
                 (*(char *)((long)param_2 + lVar14 + 0x6e4) == '\0')) {
                *(undefined8 *)((long)&local_38 + lVar5) = 0x10059b019;
                uVar15 = FUN_1001cc310();
                *(undefined8 *)((long)&local_38 + lVar5) = 0x10059b029;
                cVar7 = _os_log_type_enabled(uVar15,0x10);
                if (cVar7 != '\0') {
                  local_458[0] = 0x8220202;
                  local_458[1] = 0x7a0a90;
                  local_458[2] = 1;
                  uStack_44c = 0x822;
                  uStack_44a = 0xdca3;
                  uStack_448 = 0x7e;
                  uStack_446 = 1;
                  *(undefined8 *)((long)&local_38 + lVar5) = 0x10059b4fd;
                  __os_log_error_impl(0x100000000,uVar15,0x10,"%{public}s: (%{public}s)",local_458,
                                      0x16);
                }
                *(undefined8 *)((long)&local_38 + lVar5) = 0x10059b03a;
                FUN_1001782e9(0,0);
                goto LAB_100599eb8;
              }
              lVar14 = lVar14 + 0x31c;
            } while ((ulong)*(uint *)((long)param_2 + 0x6dc) * 0x31c - lVar14 != 0);
          }
          if ((*(char *)((long)param_2 + 0x2db) == '\0') ||
             (*(char *)((long)param_2 + 0x2dc) != '\0')) goto LAB_100599b14;
          uVar11 = *(uint *)((long)param_2 + 0x234);
          uVar26 = uVar11 - 0x80;
          if (((uVar26 < 6) && ((0x35U >> (uVar26 & 0x1f) & 1) != 0)) || (uVar11 - 1 < 4)) {
            if (*(char *)((long)param_2 + 0x303) == '\0') {
              if (*(char *)((long)param_2 + 0x2ec) == '\0') {
                bVar29 = true;
                goto LAB_10059b241;
              }
              *(undefined8 *)((long)&local_38 + lVar5) = 0x10059b182;
              uVar15 = FUN_1001cc310();
              *(undefined8 *)((long)&local_38 + lVar5) = 0x10059b192;
              cVar7 = _os_log_type_enabled(uVar15,0x10);
              if (cVar7 != '\0') {
                local_458[0] = 0x8220202;
                local_458[1] = 0x7a0a90;
                local_458[2] = 1;
                uStack_44c = 0x822;
                uStack_44a = 0xdcf0;
                uStack_448 = 0x7e;
                uStack_446 = 1;
                *(undefined8 *)((long)&local_38 + lVar5) = 0x10059b7c4;
                __os_log_error_impl(0x100000000,uVar15,0x10,"%{public}s: (%{public}s)",local_458,
                                    0x16);
              }
              *(undefined8 *)((long)&local_38 + lVar5) = 0x10059b1a3;
              FUN_1001782e9(0,0);
            }
            else {
              *(undefined8 *)((long)&local_38 + lVar5) = 0x10059b149;
              uVar15 = FUN_1001cc310();
              *(undefined8 *)((long)&local_38 + lVar5) = 0x10059b159;
              cVar7 = _os_log_type_enabled(uVar15,0x10);
              if (cVar7 != '\0') {
                local_458[0] = 0x8220202;
                local_458[1] = 0x7a0a90;
                local_458[2] = 1;
                uStack_44c = 0x822;
                uStack_44a = 0xdcc6;
                uStack_448 = 0x7e;
                uStack_446 = 1;
                *(undefined8 *)((long)&local_38 + lVar5) = 0x10059b54e;
                __os_log_error_impl(0x100000000,uVar15,0x10,"%{public}s: (%{public}s)",local_458,
                                    0x16);
              }
              *(undefined8 *)((long)&local_38 + lVar5) = 0x10059b16a;
              FUN_1001782e9(0,0);
            }
          }
          else if (*(char *)((long)param_2 + 0x303) == '\0') {
            *(undefined8 *)((long)&local_38 + lVar5) = 0x10059b418;
            uVar15 = FUN_1001cc310();
            *(undefined8 *)((long)&local_38 + lVar5) = 0x10059b428;
            cVar7 = _os_log_type_enabled(uVar15,0x10);
            if (cVar7 != '\0') {
              local_458[0] = 0x8220202;
              local_458[1] = 0x7a0a90;
              local_458[2] = 1;
              uStack_44c = 0x822;
              uStack_44a = 0xdd14;
              uStack_448 = 0x7e;
              uStack_446 = 1;
              *(undefined8 *)((long)&local_38 + lVar5) = 0x10059badd;
              __os_log_error_impl(0x100000000,uVar15,0x10,"%{public}s: (%{public}s)",local_458,0x16)
              ;
            }
            *(undefined8 *)((long)&local_38 + lVar5) = 0x10059b439;
            FUN_1001782e9(0,0);
          }
          else if (*(char *)((long)param_2 + 0x2ec) == '\0') {
            *(undefined8 *)((long)&local_38 + lVar5) = 0x10059b558;
            uVar15 = FUN_1001cc310();
            *(undefined8 *)((long)&local_38 + lVar5) = 0x10059b568;
            cVar7 = _os_log_type_enabled(uVar15,0x10);
            if (cVar7 != '\0') {
              local_458[0] = 0x8220202;
              local_458[1] = 0x7a0a90;
              local_458[2] = 1;
              uStack_44c = 0x822;
              uStack_44a = 0xdd35;
              uStack_448 = 0x7e;
              uStack_446 = 1;
              *(undefined8 *)((long)&local_38 + lVar5) = 0x10059bb2e;
              __os_log_error_impl(0x100000000,uVar15,0x10,"%{public}s: (%{public}s)",local_458,0x16)
              ;
            }
            *(undefined8 *)((long)&local_38 + lVar5) = 0x10059b579;
            FUN_1001782e9(0,0);
          }
          else {
            bVar29 = false;
LAB_10059b241:
            if (uVar11 < 0x12) {
              if ((0x2beU >> (uVar11 & 0x1f) & 1) != 0) goto LAB_10059b383;
              if (uVar11 != 0x11) goto LAB_10059b36c;
              if (cVar7 == '\0') {
                *(undefined8 *)((long)&local_38 + lVar5) = 0x10059b9ac;
                uVar15 = FUN_1001cc310();
                *(undefined8 *)((long)&local_38 + lVar5) = 0x10059b9bc;
                cVar7 = _os_log_type_enabled(uVar15,0x10);
                if (cVar7 != '\0') {
                  local_458[0] = 0x8220202;
                  local_458[1] = 0x7a0a90;
                  local_458[2] = 1;
                  uStack_44c = 0x822;
                  uStack_44a = 0xdd74;
                  uStack_448 = 0x7e;
                  uStack_446 = 1;
                  *(undefined8 *)((long)&local_38 + lVar5) = 0x10059beed;
                  __os_log_error_impl(0x100000000,uVar15,0x10,"%{public}s: (%{public}s)",local_458,
                                      0x16);
                }
                *(undefined8 *)((long)&local_38 + lVar5) = 0x10059b9cd;
                FUN_1001782e9(0,0);
              }
              else if (*local_16f0 == '\0') {
                if (*(char *)((long)param_2 + 0x2ff) == '\0') goto LAB_10059b59a;
                *(undefined8 *)((long)&local_38 + lVar5) = 0x10059ba6b;
                uVar15 = FUN_1001cc310();
                *(undefined8 *)((long)&local_38 + lVar5) = 0x10059ba7b;
                cVar7 = _os_log_type_enabled(uVar15,0x10);
                if (cVar7 != '\0') {
                  local_458[0] = 0x8220202;
                  local_458[1] = 0x7a0a90;
                  local_458[2] = 1;
                  uStack_44c = 0x822;
                  uStack_44a = 0xddb3;
                  uStack_448 = 0x7e;
                  uStack_446 = 1;
                  *(undefined8 *)((long)&local_38 + lVar5) = 0x10059c124;
                  __os_log_error_impl(0x100000000,uVar15,0x10,"%{public}s: (%{public}s)",local_458,
                                      0x16);
                }
                *(undefined8 *)((long)&local_38 + lVar5) = 0x10059ba8c;
                FUN_1001782e9(0,0);
              }
              else {
                *(undefined8 *)((long)&local_38 + lVar5) = 0x10059b27e;
                uVar15 = FUN_1001cc310();
                *(undefined8 *)((long)&local_38 + lVar5) = 0x10059b28e;
                cVar7 = _os_log_type_enabled(uVar15,0x10);
                if (cVar7 != '\0') {
                  local_458[0] = 0x8220202;
                  local_458[1] = 0x7a0a90;
                  local_458[2] = 1;
                  uStack_44c = 0x822;
                  uStack_44a = 0xdd8f;
                  uStack_448 = 0x7e;
                  uStack_446 = 1;
                  *(undefined8 *)((long)&local_38 + lVar5) = 0x10059be9c;
                  __os_log_error_impl(0x100000000,uVar15,0x10,"%{public}s: (%{public}s)",local_458,
                                      0x16);
                }
                *(undefined8 *)((long)&local_38 + lVar5) = 0x10059b29f;
                FUN_1001782e9(0,0);
              }
            }
            else {
LAB_10059b36c:
              if ((uVar26 < 6) && ((0x35U >> (uVar26 & 0x1f) & 1) != 0)) {
LAB_10059b383:
                if (cVar7 != '\0') {
                  *(undefined8 *)((long)&local_38 + lVar5) = 0x10059b390;
                  uVar15 = FUN_1001cc310();
                  *(undefined8 *)((long)&local_38 + lVar5) = 0x10059b3a0;
                  cVar7 = _os_log_type_enabled(uVar15,0x10);
                  if (cVar7 != '\0') {
                    local_458[0] = 0x8220202;
                    local_458[1] = 0x7a0a90;
                    local_458[2] = 1;
                    uStack_44c = 0x822;
                    uStack_44a = 0xdd50;
                    uStack_448 = 0x7e;
                    uStack_446 = 1;
                    *(undefined8 *)((long)&local_38 + lVar5) = 0x10059b9a2;
                    __os_log_error_impl(0x100000000,uVar15,0x10,"%{public}s: (%{public}s)",local_458
                                        ,0x16);
                  }
                  *(undefined8 *)((long)&local_38 + lVar5) = 0x10059b3b1;
                  FUN_1001782e9(0,0);
                  goto LAB_100599eb8;
                }
              }
              else if (cVar7 == '\0') {
                *(undefined8 *)((long)&local_38 + lVar5) = 0x10059b9d7;
                uVar15 = FUN_1001cc310();
                *(undefined8 *)((long)&local_38 + lVar5) = 0x10059b9e7;
                cVar7 = _os_log_type_enabled(uVar15,0x10);
                if (cVar7 != '\0') {
                  local_458[0] = 0x8220202;
                  local_458[1] = 0x7a0a90;
                  local_458[2] = 1;
                  uStack_44c = 0x822;
                  uStack_44a = 0xdd74;
                  uStack_448 = 0x7e;
                  uStack_446 = 1;
                  *(undefined8 *)((long)&local_38 + lVar5) = 0x10059bf3e;
                  __os_log_error_impl(0x100000000,uVar15,0x10,"%{public}s: (%{public}s)",local_458,
                                      0x16);
                }
                *(undefined8 *)((long)&local_38 + lVar5) = 0x10059b9f8;
                FUN_1001782e9(0,0);
                goto LAB_100599eb8;
              }
              if ((int)uVar11 < 0x82) {
                if (uVar11 - 0x10 < 2) {
LAB_10059b59a:
                  if (*(char *)((long)param_2 + 0x30f) == '\0') {
                    *(undefined8 *)((long)&local_38 + lVar5) = 0x10059b8da;
                    uVar15 = FUN_1001cc310();
                    *(undefined8 *)((long)&local_38 + lVar5) = 0x10059b8ea;
                    cVar7 = _os_log_type_enabled(uVar15,0x10);
                    if (cVar7 != '\0') {
                      local_458[0] = 0x8220202;
                      local_458[1] = 0x7a0a90;
                      local_458[2] = 1;
                      uStack_44c = 0x822;
                      uStack_44a = 0xde0a;
                      uStack_448 = 0x7e;
                      uStack_446 = 1;
                      *(undefined8 *)((long)&local_38 + lVar5) = 0x10059bd58;
                      __os_log_error_impl(0x100000000,uVar15,0x10,"%{public}s: (%{public}s)",
                                          local_458,0x16);
                    }
                    *(undefined8 *)((long)&local_38 + lVar5) = 0x10059b8fb;
                    FUN_1001782e9(0,0);
                  }
                  else {
                    if (*(char *)((long)param_2 + 0x2ea) != '\0') goto LAB_10059b64f;
                    *(undefined8 *)((long)&local_38 + lVar5) = 0x10059b5bb;
                    uVar15 = FUN_1001cc310();
                    *(undefined8 *)((long)&local_38 + lVar5) = 0x10059b5cb;
                    cVar7 = _os_log_type_enabled(uVar15,0x10);
                    if (cVar7 != '\0') {
                      local_458[0] = 0x8220202;
                      local_458[1] = 0x7a0a90;
                      local_458[2] = 1;
                      uStack_44c = 0x822;
                      uStack_44a = 0xde24;
                      uStack_448 = 0x7e;
                      uStack_446 = 1;
                      *(undefined8 *)((long)&local_38 + lVar5) = 0x10059bf8f;
                      __os_log_error_impl(0x100000000,uVar15,0x10,"%{public}s: (%{public}s)",
                                          local_458,0x16);
                    }
                    *(undefined8 *)((long)&local_38 + lVar5) = 0x10059b5dc;
                    FUN_1001782e9(0,0);
                  }
                }
                else {
                  if (uVar11 != 0x80) goto LAB_10059b64f;
LAB_10059b633:
                  if (*(char *)((long)param_2 + 0x30c) == '\0') {
                    *(undefined8 *)((long)&local_38 + lVar5) = 0x10059b905;
                    uVar15 = FUN_1001cc310();
                    *(undefined8 *)((long)&local_38 + lVar5) = 0x10059b915;
                    cVar7 = _os_log_type_enabled(uVar15,0x10);
                    if (cVar7 != '\0') {
                      local_458[0] = 0x8220202;
                      local_458[1] = 0x7a0a90;
                      local_458[2] = 1;
                      uStack_44c = 0x822;
                      uStack_44a = 0xddd8;
                      uStack_448 = 0x7e;
                      uStack_446 = 1;
                      *(undefined8 *)((long)&local_38 + lVar5) = 0x10059bdfa;
                      __os_log_error_impl(0x100000000,uVar15,0x10,"%{public}s: (%{public}s)",
                                          local_458,0x16);
                    }
                    *(undefined8 *)((long)&local_38 + lVar5) = 0x10059b926;
                    FUN_1001782e9(0,0);
                  }
                  else {
                    if (*(char *)((long)param_2 + 0x30b) != '\0') goto LAB_10059b64f;
                    *(undefined8 *)((long)&local_38 + lVar5) = 0x10059ba02;
                    uVar15 = FUN_1001cc310();
                    *(undefined8 *)((long)&local_38 + lVar5) = 0x10059ba12;
                    cVar7 = _os_log_type_enabled(uVar15,0x10);
                    if (cVar7 != '\0') {
                      local_458[0] = 0x8220202;
                      local_458[1] = 0x7a0a90;
                      local_458[2] = 1;
                      uStack_44c = 0x822;
                      uStack_44a = 0xddf0;
                      uStack_448 = 0x7e;
                      uStack_446 = 1;
                      *(undefined8 *)((long)&local_38 + lVar5) = 0x10059bfe0;
                      __os_log_error_impl(0x100000000,uVar15,0x10,"%{public}s: (%{public}s)",
                                          local_458,0x16);
                    }
                    *(undefined8 *)((long)&local_38 + lVar5) = 0x10059ba23;
                    FUN_1001782e9(0,0);
                  }
                }
              }
              else {
                if (uVar11 - 0x84 < 2) {
                  if (*(char *)((long)param_2 + 0x30b) == '\0') {
                    *(undefined8 *)((long)&local_38 + lVar5) = 0x10059b5fb;
                    uVar15 = FUN_1001cc310();
                    *(undefined8 *)((long)&local_38 + lVar5) = 0x10059b60b;
                    cVar7 = _os_log_type_enabled(uVar15,0x10);
                    if (cVar7 != '\0') {
                      local_458[0] = 0x8220202;
                      local_458[1] = 0x7a0a90;
                      local_458[2] = 1;
                      uStack_44c = 0x822;
                      uStack_44a = 0xddf0;
                      uStack_448 = 0x7e;
                      uStack_446 = 1;
                      *(undefined8 *)((long)&local_38 + lVar5) = 0x10059bda9;
                      __os_log_error_impl(0x100000000,uVar15,0x10,"%{public}s: (%{public}s)",
                                          local_458,0x16);
                    }
                    *(undefined8 *)((long)&local_38 + lVar5) = 0x10059b61c;
                    FUN_1001782e9(0,0);
                    goto LAB_100599eb8;
                  }
                }
                else if (uVar11 == 0x82) goto LAB_10059b633;
LAB_10059b64f:
                if (bVar29) {
LAB_10059b653:
                  if (*(char *)((long)param_2 + 0x2e9) != '\0') {
                    uVar25 = param_2[0x73];
                    *(undefined8 *)((long)&local_38 + lVar5) = 0x10059b670;
                    uVar27 = FUN_10026647d(param_1);
                    if (((uVar27 ^ uVar25) & 0xfffffffffdffffff) != 0) {
                      *(undefined8 *)((long)&local_38 + lVar5) = 0x10059b684;
                      uVar15 = FUN_1001cc310();
                      *(undefined8 *)((long)&local_38 + lVar5) = 0x10059b694;
                      cVar7 = _os_log_type_enabled(uVar15,0x10);
                      if (cVar7 != '\0') {
                        local_458[0] = 0x8220202;
                        local_458[1] = 0x7a0a90;
                        local_458[2] = 1;
                        uStack_44c = 0x822;
                        uStack_44a = 0xdf21;
                        uStack_448 = 0x7e;
                        uStack_446 = 1;
                        *(undefined8 *)((long)&local_38 + lVar5) = 0x10059bb7f;
                        __os_log_error_impl(0x100000000,uVar15,0x10,"%{public}s: (%{public}s)",
                                            local_458,0x16);
                      }
                      *(undefined8 *)((long)&local_38 + lVar5) = 0x10059b6a5;
                      FUN_1001782e9(0,0);
                      goto LAB_100599eb8;
                    }
                  }
                  if (((param_2[0xc2f] == 0) || (699999999 < param_2[0xc2f] - 6500000000)) ||
                     (*(char *)((long)param_2 + 0x2dc) != '\0')) {
                    if (local_16e0 != 0) goto LAB_100599b14;
                    *(undefined8 *)((long)&local_38 + lVar5) = 0x10059b7f2;
                    iVar12 = FUN_1001888ba(local_16b8,".VolumeIcon.icns",local_458,0);
                    if (iVar12 == 0) {
                      local_1098[0] = local_1098[0] & 0xffffff00;
                      local_1098[1] = 0;
                      *(undefined8 *)((long)&local_38 + lVar5) = 0x10059b818;
                      iVar12 = FUN_100179fcc(local_458,1);
                      if (iVar12 == 0) {
                        *(undefined8 *)((long)&local_38 + lVar5) = 0x10059bb9c;
                        cVar7 = FUN_1001c5630(local_1090,&DAT_10075a320,0x10);
                        if (cVar7 != '\0') goto LAB_100599eb8;
                      }
                    }
                    *(undefined8 *)((long)&local_38 + lVar5) = 0x10059b835;
                    iVar12 = FUN_1001879bd(local_16b8,0,&local_16e8);
                    if (iVar12 == 0) {
                      local_a78 = CONCAT22(local_a78._2_2_,10);
                      lVar14 = -10;
                      do {
                        auStack_a62[lVar14] =
                             (ushort)(byte)((&UNK_10075a344)[lVar14] ^ (&DAT_10075a33a)[lVar14]);
                        lVar14 = lVar14 + 1;
                      } while (lVar14 != 0);
                      local_c78 = 9;
                      lVar14 = -9;
                      do {
                        auStack_c64[lVar14] =
                             (ushort)(byte)((&UNK_10075a362)[lVar14] ^ (&DAT_10075a359)[lVar14]);
                        lVar14 = lVar14 + 1;
                      } while (lVar14 != 0);
                      *(undefined8 *)((long)&local_38 + lVar5) = 0x10059b8bc;
                      iVar12 = FUN_100187bea(local_16e8,local_1098,local_1770,&local_1298);
                      if (iVar12 == 0) {
                        uVar11 = 0;
                        do {
                          if (local_1770[0] != '\0') {
                            *(undefined8 *)((long)&local_38 + lVar5) = 0x10059bbd3;
                            cVar7 = FUN_1001e538c(&local_1298,&local_a78,1);
                            if (cVar7 == '\0') {
                              *(undefined8 *)((long)&local_38 + lVar5) = 0x10059bbef;
                              cVar7 = FUN_1001e538c(&local_1298,&local_c78,1);
                              if (cVar7 == '\0') goto LAB_10059bbf5;
                            }
                            uVar11 = uVar11 + 1;
                          }
LAB_10059bbf5:
                          *(undefined8 *)((long)&local_38 + lVar5) = 0x10059bc12;
                          iVar12 = FUN_100187bea(local_16e8,local_1098,local_1770,&local_1298);
                        } while (iVar12 == 0);
                        *(undefined8 *)((long)&local_38 + lVar5) = 0x10059bc22;
                        FUN_100187c42(local_16e8);
                        if (1 < uVar11) goto LAB_100599eb8;
                      }
                      else {
                        *(undefined8 *)((long)&local_38 + lVar5) = 0x10059b8d0;
                        FUN_100187c42(local_16e8);
                      }
                    }
                    *(undefined8 *)((long)&local_38 + lVar5) = 0x10059bc47;
                    iVar12 = FUN_1001888ba(local_16d8,"DCIM",local_878,0);
                    if (iVar12 == 0) {
                      *(undefined8 *)((long)&local_38 + lVar5) = 0x10059bc64;
                      iVar12 = FUN_1001879bd(local_878,0,&local_16e8);
                      if (iVar12 == 0) {
                        local_1298 = 0x4c004100500004;
                        local_1290 = 0x4d;
                        *(undefined8 *)((long)&local_38 + lVar5) = 0x10059bca7;
                        iVar12 = FUN_100187bea(local_16e8,local_1098,&local_c78,&local_a78);
                        if (iVar12 == 0) {
                          do {
                            if ((char)local_c78 != '\0') {
                              *(undefined8 *)((long)&local_38 + lVar5) = 0x10059bcd6;
                              cVar7 = FUN_1001e538c(&local_a78,&local_1298,1);
                              if (cVar7 != '\0') {
                                *(undefined8 *)((long)&local_38 + lVar5) = 0x10059c135;
                                FUN_100187c42(local_16e8);
                                goto LAB_100599eb8;
                              }
                            }
                            *(undefined8 *)((long)&local_38 + lVar5) = 0x10059bcf7;
                            iVar12 = FUN_100187bea(local_16e8,local_1098,&local_c78,&local_a78);
                          } while (iVar12 == 0);
                        }
                        *(undefined8 *)((long)&local_38 + lVar5) = 0x10059bd07;
                        FUN_100187c42(local_16e8);
                      }
                    }
                    goto LAB_100599b14;
                  }
                  *(undefined8 *)((long)&local_38 + lVar5) = 0x10059b752;
                  uVar15 = FUN_1001cc310();
                  *(undefined8 *)((long)&local_38 + lVar5) = 0x10059b762;
                  cVar7 = _os_log_type_enabled(uVar15,0x10);
                  if (cVar7 != '\0') {
                    local_458[0] = 0x8220202;
                    local_458[1] = 0x7a0a90;
                    local_458[2] = 1;
                    uStack_44c = 0x822;
                    uStack_44a = 0xdf87;
                    uStack_448 = 0x7e;
                    uStack_446 = 1;
                    *(undefined8 *)((long)&local_38 + lVar5) = 0x10059c031;
                    __os_log_error_impl(0x100000000,uVar15,0x10,"%{public}s: (%{public}s)",local_458
                                        ,0x16);
                  }
                  *(undefined8 *)((long)&local_38 + lVar5) = 0x10059b773;
                  FUN_1001782e9(0,0);
                }
                else {
                  *(undefined8 *)((long)&local_38 + lVar5) = 0x10059b6b9;
                  cVar7 = FUN_1005a2085(param_2,param_2 + 0x9d1);
                  if (cVar7 == '\0') {
                    *(undefined8 *)((long)&local_38 + lVar5) = 0x10059b930;
                    uVar15 = FUN_1001cc310();
                    *(undefined8 *)((long)&local_38 + lVar5) = 0x10059b940;
                    cVar7 = _os_log_type_enabled(uVar15,0x10);
                    if (cVar7 != '\0') {
                      local_458[0] = 0x8220202;
                      local_458[1] = 0x7a0a90;
                      local_458[2] = 1;
                      uStack_44c = 0x822;
                      uStack_44a = 0xde47;
                      uStack_448 = 0x7e;
                      uStack_446 = 1;
                      *(undefined8 *)((long)&local_38 + lVar5) = 0x10059be4b;
                      __os_log_error_impl(0x100000000,uVar15,0x10,"%{public}s: (%{public}s)",
                                          local_458,0x16);
                    }
                    *(undefined8 *)((long)&local_38 + lVar5) = 0x10059b951;
                    FUN_1001782e9(0,0);
                  }
                  else {
                    *(undefined8 *)((long)&local_38 + lVar5) = 0x10059b6d0;
                    cVar7 = FUN_1005a2085(param_2,param_2 + 0xb00);
                    if (cVar7 == '\0') {
                      *(undefined8 *)((long)&local_38 + lVar5) = 0x10059ba2d;
                      uVar15 = FUN_1001cc310();
                      *(undefined8 *)((long)&local_38 + lVar5) = 0x10059ba3d;
                      cVar7 = _os_log_type_enabled(uVar15,0x10);
                      if (cVar7 != '\0') {
                        local_458[0] = 0x8220202;
                        local_458[1] = 0x7a0a90;
                        local_458[2] = 1;
                        uStack_44c = 0x822;
                        uStack_44a = 0xde90;
                        uStack_448 = 0x7e;
                        uStack_446 = 1;
                        *(undefined8 *)((long)&local_38 + lVar5) = 0x10059c082;
                        __os_log_error_impl(0x100000000,uVar15,0x10,"%{public}s: (%{public}s)",
                                            local_458,0x16);
                      }
                      *(undefined8 *)((long)&local_38 + lVar5) = 0x10059ba4e;
                      FUN_1001782e9(0,0);
                    }
                    else {
                      *(undefined8 *)((long)&local_38 + lVar5) = 0x10059b6e7;
                      cVar7 = FUN_1005a2085(param_2,param_2 + 0x8a2);
                      if (cVar7 != '\0') goto LAB_10059b653;
                      *(undefined8 *)((long)&local_38 + lVar5) = 0x10059b6f4;
                      uVar15 = FUN_1001cc310();
                      *(undefined8 *)((long)&local_38 + lVar5) = 0x10059b704;
                      cVar7 = _os_log_type_enabled(uVar15,0x10);
                      if (cVar7 != '\0') {
                        local_458[0] = 0x8220202;
                        local_458[1] = 0x7a0a90;
                        local_458[2] = 1;
                        uStack_44c = 0x822;
                        uStack_44a = 0xdedb;
                        uStack_448 = 0x7e;
                        uStack_446 = 1;
                        *(undefined8 *)((long)&local_38 + lVar5) = 0x10059c0d3;
                        __os_log_error_impl(0x100000000,uVar15,0x10,"%{public}s: (%{public}s)",
                                            local_458,0x16);
                      }
                      *(undefined8 *)((long)&local_38 + lVar5) = 0x10059b715;
                      FUN_1001782e9(0,0);
                    }
                  }
                }
              }
            }
          }
        }
        else {
          uVar25 = (ulong)(uint)param_2[0x81];
          if (uVar25 != 0) {
            uVar27 = 0;
            bVar6 = false;
            bVar31 = false;
            bVar30 = false;
            bVar29 = false;
            do {
              pcVar28 = (char *)((long)param_2 + uVar27 * 0x24 + 0x410);
              while( true ) {
                uVar27 = uVar27 + 1;
                iVar12 = *(int *)(pcVar28 + -4);
                if (iVar12 != 0x61616320) break;
                if (*pcVar28 == '\0') {
                  *(undefined8 *)((long)&local_38 + lVar5) = 0x10059ab77;
                  uVar15 = FUN_1001cc310();
                  *(undefined8 *)((long)&local_38 + lVar5) = 0x10059ab87;
                  cVar7 = _os_log_type_enabled(uVar15,0x10);
                  if (cVar7 != '\0') {
                    local_458[0] = 0x8220202;
                    local_458[1] = 0x7a0a90;
                    local_458[2] = 1;
                    uStack_44c = 0x822;
                    uStack_44a = 0xdc1b;
                    uStack_448 = 0x7e;
                    uStack_446 = 1;
                    *(undefined8 *)((long)&local_38 + lVar5) = 0x10059b2f0;
                    __os_log_error_impl(0x100000000,uVar15,0x10,"%{public}s: (%{public}s)",local_458
                                        ,0x16);
                  }
                  *(undefined8 *)((long)&local_38 + lVar5) = 0x10059ab98;
                  FUN_1001782e9(0,0);
                  goto LAB_100599eb8;
                }
                pcVar28 = pcVar28 + 0x24;
                bVar29 = true;
                if (uVar27 == uVar25) goto LAB_100599cd9;
              }
              if (iVar12 == 0x61613220) {
                bVar30 = true;
              }
              else if (iVar12 == 0x61613320) {
                bVar31 = true;
              }
              else if (iVar12 == 0x61613420) {
                bVar6 = true;
              }
            } while (uVar27 != uVar25);
            if (bVar29) {
LAB_100599cd9:
              if ((!bVar31 || !bVar30) || !bVar6) {
                *(undefined8 *)((long)&local_38 + lVar5) = 0x10059aeed;
                uVar15 = FUN_1001cc310();
                *(undefined8 *)((long)&local_38 + lVar5) = 0x10059aefd;
                cVar7 = _os_log_type_enabled(uVar15,0x10);
                if (cVar7 != '\0') {
                  local_458[0] = 0x8220202;
                  local_458[1] = 0x7a0a90;
                  local_458[2] = 1;
                  uStack_44c = 0x822;
                  uStack_44a = 0xdc4f;
                  uStack_448 = 0x7e;
                  uStack_446 = 1;
                  *(undefined8 *)((long)&local_38 + lVar5) = 0x10059b402;
                  __os_log_error_impl(0x100000000,uVar15,0x10,"%{public}s: (%{public}s)",local_458,
                                      0x16);
                }
                *(undefined8 *)((long)&local_38 + lVar5) = 0x10059af0e;
                FUN_1001782e9(0,0);
                goto LAB_100599eb8;
              }
              goto LAB_100599cf3;
            }
          }
          *(undefined8 *)((long)&local_38 + lVar5) = 0x10059aaaa;
          uVar15 = FUN_1001cc310();
          *(undefined8 *)((long)&local_38 + lVar5) = 0x10059aaba;
          cVar7 = _os_log_type_enabled(uVar15,0x10);
          if (cVar7 != '\0') {
            local_458[0] = 0x8220202;
            local_458[1] = 0x7a0a90;
            local_458[2] = 1;
            uStack_44c = 0x822;
            uStack_44a = 0xdc3e;
            uStack_448 = 0x7e;
            uStack_446 = 1;
            *(undefined8 *)((long)&local_38 + lVar5) = 0x10059b23a;
            __os_log_error_impl(0x100000000,uVar15,0x10,"%{public}s: (%{public}s)",local_458,0x16);
          }
          *(undefined8 *)((long)&local_38 + lVar5) = 0x10059aacb;
          FUN_1001782e9(0,0);
        }
      }
      else {
        *(undefined8 *)((long)&local_38 + lVar5) = 0x100599e97;
        uVar15 = FUN_1001cc310();
        *(undefined8 *)((long)&local_38 + lVar5) = 0x100599ea7;
        cVar7 = _os_log_type_enabled(uVar15,0x10);
        if (cVar7 != '\0') {
          local_458[0] = 0x8220202;
          local_458[1] = 0x7a0a90;
          local_458[2] = 1;
          uStack_44c = 0x822;
          uStack_44a = 0xdbdd;
          uStack_448 = 0x7e;
          uStack_446 = 1;
          *(undefined8 *)((long)&local_38 + lVar5) = 0x10059b00f;
          __os_log_error_impl(0x100000000,uVar15,0x10,"%{public}s: (%{public}s)",local_458,0x16);
        }
        *(undefined8 *)((long)&local_38 + lVar5) = 0x100599eb8;
        FUN_1001782e9(0,0);
      }
LAB_100599eb8:
      *(undefined8 *)((long)&local_38 + lVar5) = 0x100599ebd;
      uVar15 = FUN_1001cc310();
      *(undefined8 *)((long)&local_38 + lVar5) = 0x100599ecd;
      cVar7 = _os_log_type_enabled(uVar15,0x10);
      if (cVar7 != '\0') {
        local_458[0] = 0x8220202;
        local_458[1] = 0x7a0a90;
        local_458[2] = 1;
        uStack_44c = 0x822;
        uStack_44a = 0xabb6;
        uStack_448 = 0x7e;
        uStack_446 = 1;
        *(undefined8 *)((long)&local_38 + lVar5) = 0x10059a9dc;
        __os_log_error_impl(0x100000000,uVar15,0x10,"%{public}s: (%{public}s)",local_458,0x16);
      }
      *(undefined8 *)((long)&local_38 + lVar5) = 0x100599ede;
      FUN_1001782e9(0,0);
      uVar15 = 0x46f;
      goto LAB_10059aea7;
    }
  }
LAB_100599b14:
  if (local_16c9 != '\0' || (int)param_2[0xc30] == 0) {
    if (*(uint *)((long)param_2 + 0x618c) == 0) {
      uVar25 = param_2[0xc2f];
      if (uVar25 < 1000000000) {
        iVar12 = (int)((uVar25 & 0xffffffff) / 1000000);
      }
      else if (uVar25 >> 10 < 0x2e90edd) {
        iVar12 = (int)((uVar25 + 500000000) / 1000000000) * 1000;
      }
      else if (uVar25 >> 0xc < 0x2e90edd) {
        iVar12 = (int)((uVar25 + 2000000000) / 4000000000) * 4000;
      }
      else {
        iVar12 = (int)((uVar25 + 4000000000) / 8000000000) * 8000;
      }
    }
    else {
      iVar12 = (*(uint *)((long)param_2 + 0x618c) >> 7) * 0x7d;
    }
    *(int *)(param_2 + 0xc30) = iVar12;
  }
  bVar29 = true;
  if (*(byte *)((long)local_16c8 + 0x2e1) == 0) {
    bVar29 = *(byte *)((long)local_16f8 + 0x2e1) != 0;
  }
  *(bool *)((long)param_2 + 0x2e1) = bVar29;
  if (local_16bc < 0x69506f64) {
    if ((local_16bc == 0x69506164) || (local_16bc == 0x6950686e)) {
LAB_100599fb1:
      *(undefined2 *)((long)param_2 + 0x2e3) = 0;
      *(undefined1 *)((long)param_2 + 0x2e5) = 0;
      *(undefined1 *)((long)param_2 + 0x31c) = 1;
      *(bool *)((long)param_2 + 0x31d) = local_16bc == 0x6950686e;
      *(undefined1 *)((long)param_2 + 0x30a) = *(undefined1 *)((long)param_2 + 0x309);
      if (*(int *)((long)param_2 + 0xc) == 0) {
        *(undefined4 *)((long)param_2 + 0xc) = *(undefined4 *)((long)param_2 + 0x234);
      }
      if (local_16bc == 0x6950686e) {
        if ((*(char *)((long)param_2 + 0x326) != '\0') &&
           (*(short *)((long)param_2 + 0x14) == 0x100)) {
          puVar16 = (undefined1 *)((long)param_2 + 0x326);
LAB_10059a02c:
          *puVar16 = 0;
        }
      }
      else if (local_16bc == 0x69506f74) {
        puVar16 = (undefined1 *)((long)param_2 + 0x336);
        goto LAB_10059a02c;
      }
      uVar25 = (ulong)*(uint *)((long)param_2 + 0x6dc);
      if (uVar25 != 0) {
        uVar11 = *(uint *)((long)param_2 + 0x14);
        if ((uVar11 - 0x310 & 0xffff) < 0xf0) {
          lVar14 = 0;
          do {
            if ((*(int *)((long)param_2 + lVar14 + 0x6e0) == 0x61766331) &&
               ((cVar7 = *(char *)((long)param_2 + lVar14 + 0x6f1), cVar7 == 'd' || (cVar7 == 'M')))
               ) {
              *(undefined1 *)((long)param_2 + lVar14 + 0x6e9) = 1;
            }
            lVar14 = lVar14 + 0x31c;
          } while (uVar25 * 0x31c - lVar14 != 0);
        }
        if ((uVar11 & 0xffff) < 0x500) {
          *(undefined2 *)((long)param_2 + 0x2f7) = 0;
          lVar14 = (long)param_2 + 0x6e6;
          do {
            *(undefined2 *)(lVar14 + -1) = 0;
            lVar14 = lVar14 + 0x31c;
            uVar25 = uVar25 - 1;
          } while (uVar25 != 0);
        }
      }
      *(bool *)((long)param_2 + 0x361) = *(int *)((long)param_2 + 0x234) != 10000;
      if (*(char *)((long)param_2 + 0x2e2) == '\0') {
        *(undefined1 *)((long)param_2 + 0x2e2) = *(undefined1 *)((long)param_2 + 0x346);
      }
      if (((((short)param_2[0xcca] == 0) && (*(short *)((long)param_2 + 0x6652) == 0)) &&
          (*(float *)((long)param_2 + 0x6654) == 0.0)) &&
         ((!NAN(*(float *)((long)param_2 + 0x6654)) &&
          (uVar11 = *(int *)((long)param_2 + 0x234) - 10000, uVar11 < 0x13)))) {
        uVar25 = (ulong)uVar11;
        uVar10 = *(undefined2 *)(&DAT_10075a818 + uVar25 * 2);
        uVar13 = *(undefined4 *)(&DAT_10075a840 + uVar25 * 4);
        *(undefined2 *)(param_2 + 0xcca) = *(undefined2 *)(&DAT_10075a7f2 + uVar25 * 2);
        *(undefined2 *)((long)param_2 + 0x6652) = uVar10;
        *(undefined4 *)((long)param_2 + 0x6654) = uVar13;
      }
      if ((0x3ff < *(ushort *)((long)param_2 + 0x14)) &&
         (*(undefined1 *)((long)param_2 + 0x34c) = 1, 0x4ff < *(ushort *)((long)param_2 + 0x14))) {
        *(undefined1 *)((long)param_2 + 0x337) = 1;
      }
      *(undefined8 *)((long)&local_38 + lVar5) = 0x10059a137;
      cVar7 = FUN_100266cae(param_1);
      *(byte *)((long)param_2 + 0x3dc) = cVar7 == '\0' ^ 3;
      *(undefined8 *)((long)&local_38 + lVar5) = 0x10059a15b;
      FUN_1001b7b04(local_458,(undefined4 *)((long)param_2 + 0x36a));
      *(undefined8 *)((long)&local_38 + lVar5) = 0x10059a16e;
      FUN_1001b7b04(local_878,"10.3");
      *(undefined8 *)((long)&local_38 + lVar5) = 0x10059a181;
      iVar12 = FUN_1001e6c16(local_458,local_878);
      *(undefined8 *)((long)&local_38 + lVar5) = 0x10059a190;
      FUN_1001b7a50(local_878);
      *(undefined8 *)((long)&local_38 + lVar5) = 0x10059a19c;
      FUN_1001b7a50(local_458);
      if (iVar12 == 0) {
        *(undefined1 *)((long)param_2 + 0x36e) = 0;
        *(undefined4 *)((long)param_2 + 0x36a) = 0x352e3031;
      }
      if ((*(char *)((long)param_2 + 0x322) != '\0') && (0x5ff < *(ushort *)((long)param_2 + 0x14)))
      {
        *(undefined1 *)((long)param_2 + 0x323) = 1;
      }
      if ((*(char *)((long)param_2 + 0x3d6) == '\0') &&
         ((uVar11 = *(int *)((long)param_2 + 0x234) - 10000, 0x15 < uVar11 ||
          ((0x20810fU >> (uVar11 & 0x1f) & 1) == 0)))) {
        *(undefined1 *)((long)param_2 + 0x3d6) = 1;
      }
      uVar3 = *(ushort *)((long)param_2 + 0x14);
      if (*(char *)((long)param_2 + 0x34c) == '\0') {
LAB_10059a215:
        if (0x6ff < uVar3) {
          *(undefined2 *)((long)param_2 + 0x357) = 0x101;
          *(undefined1 *)((long)param_2 + 0x2f9) = 1;
          *(undefined1 *)(param_2 + 0x5e) = 1;
          if (0x7ff < uVar3) goto LAB_10059a364;
        }
LAB_10059a40b:
        *(undefined1 *)((long)param_2 + 0x331) = *(undefined1 *)((long)param_2 + 0x32d);
      }
      else {
        if (uVar3 < 0x800) {
          *(undefined1 *)((long)param_2 + 0x355) = 1;
          goto LAB_10059a215;
        }
        *(undefined2 *)((long)param_2 + 0x357) = 0x101;
        *(undefined1 *)((long)param_2 + 0x2f9) = 1;
        *(undefined1 *)(param_2 + 0x5e) = 1;
LAB_10059a364:
        *(undefined1 *)((long)param_2 + 0x2f5) = *(undefined1 *)((long)param_2 + 0x2ec);
        *(undefined1 *)((long)param_2 + 0x32e) = *(undefined1 *)((long)param_2 + 0x32d);
        *(undefined2 *)((long)param_2 + 0x359) = 0x101;
        if (uVar3 < 0x840) goto LAB_10059a40b;
        *(undefined1 *)((long)param_2 + 0x33a) = 0;
        *(undefined1 *)((long)param_2 + 0x35c) = 1;
        *(undefined1 *)((long)param_2 + 0x306) = 1;
        if (uVar3 < 0x900) goto LAB_10059a40b;
        *(undefined1 *)(param_2 + 0x66) = 1;
        *(undefined1 *)((long)param_2 + 0x2f1) = 1;
        if (((uVar3 < 0x930) || (*(undefined1 *)((long)param_2 + 0x35f) = 1, uVar3 < 0xa00)) ||
           (*(undefined1 *)((long)param_2 + 0x32f) = 1, uVar3 < 0xb00)) goto LAB_10059a40b;
        *(undefined1 *)((long)param_2 + 0x331) = 0;
        *(undefined1 *)((long)param_2 + 0x2f2) = 1;
        if (0xbff < uVar3) {
          if (0xf3f < uVar3) {
            *(undefined1 *)((long)param_2 + 0x34f) = 1;
          }
          goto switchD_10059a30f_caseD_7;
        }
      }
      *(undefined1 *)((long)param_2 + 0x356) = 1;
    }
  }
  else if (local_16bc == 0x69506f64) {
    uVar4 = *(ushort *)((long)param_2 + 10);
    bVar29 = *(char *)((long)param_2 + 0x30b) == '\0';
    *(bool *)((long)param_2 + 0x321) = 0x127 < uVar3 && bVar29;
    *(bool *)((long)param_2 + 0x31e) = 0x131 < uVar3 && bVar29;
    iVar12 = *(int *)((long)param_2 + 0x234);
    if ((iVar12 - 0x80U < 6) && ((0x35U >> (iVar12 - 0x80U & 0x1f) & 1) != 0)) {
      *(undefined1 *)((long)param_2 + 0x312) = 1;
      bVar20 = *(byte *)((long)param_2 + 0x3de);
      if (bVar20 == 0) {
        *(undefined1 *)((long)param_2 + 0x3de) = 0x29;
        bVar20 = 0x29;
      }
      if (*(char *)((long)param_2 + 0x3dd) == '\0') {
        *(byte *)((long)param_2 + 0x3dd) = bVar20 / 10;
      }
    }
    *(undefined1 *)((long)param_2 + 0x31c) = 1;
    if (((char)param_2[0x62] == '\0') && (*(char *)((long)param_2 + 0x311) == '\0')) {
      switch(iVar12) {
      case 6:
switchD_10059a7dc_caseD_6:
        if (uVar4 < 0x630) goto LAB_10059a893;
        break;
      case 7:
      case 8:
      case 10:
      case 0xd:
      case 0xe:
      case 0xf:
        break;
      case 9:
switchD_10059a7dc_caseD_9:
        if (uVar4 < 0x813) goto LAB_10059a893;
        break;
      case 0xb:
      case 0xc:
switchD_10059a30f_caseD_b:
        if (uVar4 < 0x901) {
          *(undefined4 *)(param_2 + 0x7a) = 0;
        }
        if (*(char *)((long)param_2 + 0x37a) == '\0') {
          *(undefined4 *)((long)param_2 + 0x37d) = 0x382e34;
          *(undefined4 *)((long)param_2 + 0x37a) = 0x342e3031;
        }
        break;
      case 0x10:
switchD_10059a30f_caseD_10:
        *(undefined1 *)((long)param_2 + 0x6659) = 1;
        break;
      default:
switchD_10059a30f_default:
        if (iVar12 == 0x84) {
          *(undefined2 *)((long)param_2 + 0x33f) = 0x101;
          *(undefined1 *)((long)param_2 + 0x341) = 1;
          if (*(char *)((long)param_2 + 0x3de) == ')') {
            *(undefined1 *)((long)param_2 + 0x3de) = 0x1f;
          }
        }
        else if (iVar12 == 0x85) {
          *(undefined1 *)((long)param_2 + 0x343) = 1;
          *(undefined4 *)((long)param_2 + 0x33f) = 0x1010101;
        }
      }
    }
    else {
      switch(iVar12) {
      case 6:
        if ((uVar4 & 0xfff0) == 0x620) {
          *(undefined2 *)(param_2 + 0x62) = 0;
        }
        goto switchD_10059a7dc_caseD_6;
      case 7:
      case 8:
      case 10:
      case 0xd:
      case 0xe:
      case 0xf:
        break;
      case 9:
        if (0x811 < uVar4) goto switchD_10059a7dc_caseD_9;
        *(undefined2 *)(param_2 + 0x62) = 0;
LAB_10059a893:
        *(undefined1 *)((long)param_2 + 0x345) = 1;
        break;
      case 0xb:
      case 0xc:
        goto switchD_10059a30f_caseD_b;
      case 0x10:
        goto switchD_10059a30f_caseD_10;
      default:
        goto switchD_10059a30f_default;
      }
    }
  }
  else if (local_16bc == 0x69506f74) goto LAB_100599fb1;
switchD_10059a30f_caseD_7:
  *(undefined1 *)((long)param_2 + 0x33f) = *(undefined1 *)((long)param_2 + 0x2eb);
  bVar29 = *(char *)((long)param_2 + 0x30c) == '\0';
  if (bVar29) {
    lVar14 = 800;
  }
  else {
    *(undefined1 *)((long)param_2 + 0x31d) = 1;
    lVar14 = 0x340;
  }
  *(bool *)((long)param_2 + lVar14) = !bVar29;
  cVar7 = *(char *)((long)param_2 + 0x352);
  if (cVar7 == '\0') {
    if (*(char *)((long)param_2 + 0x30f) != '\0') goto LAB_10059a4aa;
  }
  else {
    *(undefined2 *)((long)param_2 + 0x353) = 0x101;
    if (*(char *)((long)param_2 + 0x327) == '\0') {
      *(undefined1 *)((long)param_2 + 0x327) = *(undefined1 *)((long)param_2 + 0x326);
    }
    if (*(int *)((long)param_2 + 0x234) == 0x2716) {
      *(undefined1 *)((long)param_2 + 0x326) = 0;
    }
LAB_10059a4aa:
    *(undefined2 *)(param_2 + 0x62) = 0x101;
    *(undefined1 *)((long)param_2 + 0x31e) = 0;
  }
  uVar11 = *(uint *)((long)param_2 + 0x6dc);
  if ((ulong)uVar11 != 0) {
    lVar14 = 0;
    do {
      if ((*(int *)((long)param_2 + lVar14 + 0x6e0) == 0x61766331) &&
         (*(char *)((long)param_2 + lVar14 + 0x6f1) == 'B')) {
        *(undefined1 *)((long)param_2 + lVar14 + 0x6e9) = 1;
      }
      if (local_16cb != '\0') {
        *(undefined1 *)((long)param_2 + lVar14 + 0x6e7) = 1;
      }
      lVar14 = lVar14 + 0x31c;
    } while ((ulong)uVar11 * 0x31c - lVar14 != 0);
  }
  if (*(char *)((long)param_2 + 0x2f6) != '\0') {
    if (*(char *)((long)param_2 + 0x2f7) == '\0') {
      *(undefined2 *)((long)param_2 + 0x2fa) = 0;
    }
    else {
      uVar11 = (uint)*(ushort *)((long)param_2 + 0x6652);
      if ((ushort)(uint)param_2[0xcca] < *(ushort *)((long)param_2 + 0x6652)) {
        uVar11 = (uint)param_2[0xcca];
      }
      if ((uVar11 & 0xffff) < 0x438) {
        *(undefined2 *)((long)param_2 + 0x2fa) = 1;
      }
      else {
        *(undefined2 *)((long)param_2 + 0x2fa) = 2;
      }
    }
  }
  if (local_16cb == '\0' || local_16db == '\0') {
    cVar7 = '\0';
    *(undefined2 *)((long)param_2 + 0x32d) = 0;
    *(undefined2 *)((long)param_2 + 0x334) = 0;
    *(undefined1 *)((long)param_2 + 0x336) = 0;
    *(undefined1 *)((long)param_2 + 0x354) = 0;
    *(undefined4 *)(param_2 + 0x6a) = 0;
  }
  if (local_16c9 != '\0') {
    *(undefined4 *)(param_2 + 0x7a) = 0;
    *(undefined1 *)((long)param_2 + 0x2ea) = 0;
    if (*(char *)((long)param_2 + 0x309) == '\0') {
      *(undefined2 *)((long)param_2 + 0x307) = 0;
    }
    else {
      *(undefined2 *)((long)param_2 + 0x309) = 0;
      *(undefined2 *)((long)param_2 + 0x6632) = 0;
      *(undefined1 *)((long)param_2 + 0x6634) = 0;
      *(undefined8 *)((long)param_2 + 0x660c) = 0;
      *(undefined8 *)((long)param_2 + 0x6614) = 0;
      *(undefined8 *)((long)param_2 + 0x661c) = 0;
      *(undefined8 *)((long)param_2 + 0x6624) = 0;
      *(undefined8 *)((long)param_2 + 0x6629) = 0;
    }
  }
  if ((char)param_2[0x67] != '\0') {
    if (cVar7 == '\0') {
      *(undefined1 *)((long)param_2 + 0x339) = 1;
    }
    if ((int)param_2[0xcc7] == 0) {
      *(undefined4 *)(param_2 + 0xcc7) = 1;
    }
    if (*(int *)((long)param_2 + 0x663c) == 0) {
      *(undefined4 *)((long)param_2 + 0x663c) = 0x14;
    }
    if ((int)param_2[0xcc8] == 0) {
      *(undefined4 *)(param_2 + 0xcc8) = 1;
    }
    if (*(int *)((long)param_2 + 0x6644) == 0) {
      *(undefined4 *)((long)param_2 + 0x6644) = 0x14;
    }
    if ((int)param_2[0xcc9] == 0) {
      *(undefined4 *)(param_2 + 0xcc9) = 1;
    }
    if (*(int *)((long)param_2 + 0x664c) == 0) {
      *(undefined4 *)((long)param_2 + 0x664c) = 0x14;
    }
  }
  if (*(char *)((long)param_2 + 0x329) == '\0') {
    *(undefined2 *)((long)param_2 + 0x32a) = 0;
  }
  if (cVar7 != '\0') {
    *(undefined1 *)((long)param_2 + 0x30f) = 0;
    *(undefined8 *)((long)&local_38 + lVar5) = 0x10059a6d8;
    FUN_1001c62d9(param_2 + 0x9d1,0x978);
    *(undefined8 *)((long)&local_38 + lVar5) = 0x10059a6e9;
    FUN_1001c62d9(param_2 + 0xb00,0x978);
  }
  if ((*(short *)((long)param_2 + 0x3ba) == 0) || ((short)param_2[0x77] != 0))
  goto switchD_10059a72b_caseD_2721;
  iVar12 = *(int *)((long)param_2 + 0x234);
  switch(iVar12) {
  case 10000:
    uVar10 = 0x14;
    break;
  case 0x2711:
    uVar10 = 0x15;
    break;
  case 0x2712:
    uVar10 = 0x16;
    break;
  case 0x2713:
    uVar10 = 0x17;
    break;
  case 0x2714:
    uVar10 = 0x18;
    break;
  case 0x2715:
    uVar10 = 0x19;
    break;
  case 0x2716:
    uVar10 = 0x1c;
    break;
  case 0x2717:
    uVar10 = 0x1b;
    break;
  case 0x2718:
    uVar10 = 0x47;
    break;
  case 0x2719:
    uVar10 = 0x46;
    break;
  case 0x271a:
    uVar10 = 0x4a;
    break;
  case 0x271b:
    uVar10 = 0x4b;
    break;
  case 0x271c:
    uVar10 = 0x4c;
    break;
  case 0x271d:
    uVar10 = 0x4d;
    break;
  case 0x271e:
    uVar10 = 0x4e;
    break;
  case 0x271f:
    uVar10 = 0x48;
    break;
  case 0x2720:
    uVar10 = 0x49;
    break;
  case 0x2721:
  case 0x2722:
  case 0x272d:
  case 0x272e:
  case 0x272f:
  case 0x2735:
  case 0x2740:
  case 0x2741:
  case 0x2742:
  case 0x2743:
  case 0x2744:
  case 0x2748:
  case 0x2749:
  case 0x2751:
  case 0x2754:
  case 0x2755:
  case 0x2756:
  case 0x2757:
  case 0x2758:
  case 0x2759:
  case 0x275a:
    goto switchD_10059a72b_caseD_2721;
  case 0x2723:
    uVar10 = 0x4f;
    break;
  case 0x2724:
    uVar10 = 0x52;
    break;
  case 0x2725:
    uVar10 = 0x51;
    break;
  case 0x2726:
    uVar10 = 0x56;
    break;
  case 0x2727:
    uVar10 = 0x57;
    break;
  case 0x2728:
    uVar10 = 0x58;
    break;
  case 0x2729:
    uVar10 = 0x53;
    break;
  case 0x272a:
    uVar10 = 0x54;
    break;
  case 0x272b:
    uVar10 = 0x55;
    break;
  case 0x272c:
    uVar10 = 0x61;
    break;
  case 0x2730:
    uVar10 = 0x5e;
    break;
  case 0x2731:
    uVar10 = 0x5f;
    break;
  case 0x2732:
    uVar10 = 0x60;
    break;
  case 0x2733:
    uVar10 = 0x59;
    break;
  case 0x2734:
    uVar10 = 0x5a;
    break;
  case 0x2736:
    uVar10 = 0x65;
    break;
  case 0x2737:
    uVar10 = 0x67;
    break;
  case 0x2738:
    uVar10 = 0x68;
    break;
  case 0x2739:
    uVar10 = 0x69;
    break;
  case 0x273a:
    uVar10 = 0x6a;
    break;
  case 0x273b:
    uVar10 = 0x6b;
    break;
  case 0x273c:
    uVar10 = 0x6d;
    break;
  case 0x273d:
    uVar10 = 0x6e;
    break;
  case 0x273e:
    uVar10 = 0x71;
    break;
  case 0x273f:
    uVar10 = 0x72;
    break;
  case 0x2745:
    uVar10 = 0x78;
    break;
  case 0x2746:
    uVar10 = 0x79;
    break;
  case 0x2747:
    uVar10 = 0x7b;
    break;
  case 0x274a:
    uVar10 = 0x87;
    break;
  case 0x274b:
    uVar10 = 0x88;
    break;
  case 0x274c:
    uVar10 = 0x7e;
    break;
  case 0x274d:
    uVar10 = 0x7f;
    break;
  case 0x274e:
    uVar10 = 0x81;
    break;
  case 0x274f:
    uVar10 = 0x89;
    break;
  case 0x2750:
    uVar10 = 0x8a;
    break;
  case 0x2752:
    uVar10 = 0x8b;
    break;
  case 0x2753:
    uVar10 = 0x8c;
    break;
  case 0x275b:
    uVar10 = 0x9d;
    break;
  case 0x275c:
    uVar10 = 0x9e;
    break;
  case 0x275d:
    uVar10 = 0x9f;
    break;
  case 0x275e:
    uVar10 = 0xa0;
    break;
  case 0x275f:
    uVar10 = 0xa1;
    break;
  case 0x2760:
    uVar10 = 0xa2;
    break;
  case 0x2761:
    uVar10 = 0xaa;
    break;
  case 0x2762:
    uVar10 = 0xab;
    break;
  case 0x2763:
    uVar10 = 0xb8;
    break;
  case 0x2764:
    uVar10 = 0xb9;
    break;
  case 0x2765:
    uVar10 = 0xba;
    break;
  case 0x2766:
    uVar10 = 0xbb;
    break;
  case 0x2767:
    uVar10 = 0xbc;
    break;
  case 0x2768:
    uVar10 = 0xbd;
    break;
  default:
    switch(iVar12) {
    case 6:
      uVar10 = 0x1e;
      break;
    case 7:
    case 8:
    case 10:
    case 0xd:
    case 0xe:
      goto switchD_10059a72b_caseD_2721;
    case 9:
      uVar10 = 0x28;
      break;
    case 0xb:
      uVar10 = 0x1f;
      break;
    case 0xc:
      uVar10 = 0x29;
      break;
    case 0xf:
      uVar10 = 0x2a;
      break;
    case 0x10:
      uVar10 = 0x2b;
      break;
    case 0x11:
      uVar10 = 0x2c;
      break;
    case 0x12:
      uVar10 = 0x2d;
      break;
    default:
      if (iVar12 == 0x84) {
        uVar10 = 0x32;
        break;
      }
      goto switchD_10059a72b_caseD_2721;
    }
  }
  *(undefined2 *)(param_2 + 0x77) = uVar10;
switchD_10059a72b_caseD_2721:
  uVar11 = *(int *)((long)param_2 + 0x234) - 10000;
  if ((uVar11 < 0xc) && ((0x8d5U >> (uVar11 & 0x1f) & 1) != 0)) {
    *(undefined1 *)((long)param_2 + 0x6402) = 1;
  }
  *(undefined1 *)(param_2 + 0x68) = 1;
  uVar15 = 0;
  if (*(char *)((long)param_2 + 0x2ec) != '\0') {
    *(undefined8 *)((long)&local_38 + lVar5) = 0x10059aea7;
    FUN_10029af0c(param_2 + 0x8a2);
  }
LAB_10059aea7:
  *(undefined8 *)((long)&local_38 + lVar5) = 0x10059aeb3;
  FUN_1001c64c1(local_16c8);
  *(undefined8 *)((long)&local_38 + lVar5) = 0x10059aebf;
  FUN_1001c64c1(local_16f8);
LAB_10059aebf:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)((long)&local_38 + lVar5) = 0x10059ba58;
    ___stack_chk_fail();
  }
  return uVar15;
}

