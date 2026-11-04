// name: FUN_100326456
// address: 100326456

undefined8 FUN_100326456(undefined8 param_1,long param_2)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  char cVar4;
  ushort uVar5;
  uint uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  int iVar12;
  int iVar13;
  undefined1 local_338 [8];
  cfstringStruct *local_330;
  cfstringStruct *local_328;
  cfstringStruct *pcStack_320;
  undefined8 local_318;
  cfstringStruct *local_308 [2];
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  int local_2f0;
  undefined2 local_2ec;
  undefined6 uStack_2ea;
  undefined1 local_2e4;
  byte local_2e3;
  byte local_2e2;
  undefined2 local_2e0;
  ulong local_2de;
  undefined8 local_2d6;
  int local_2ce;
  byte local_2ca;
  undefined1 local_2c9;
  undefined1 local_2c8;
  byte local_2c7;
  int local_2c6;
  undefined8 local_2c2;
  int local_2ba;
  byte local_2b5;
  byte local_2b4;
  byte local_2b3;
  int local_2b2;
  undefined8 local_2ae;
  int local_2a6;
  undefined8 local_292;
  undefined1 local_28a [104];
  undefined1 local_222;
  undefined1 local_221;
  undefined1 local_220;
  undefined1 local_21f;
  undefined4 local_21e;
  int local_21a;
  undefined1 local_216;
  undefined1 local_215;
  undefined1 local_214;
  undefined4 local_212;
  undefined1 local_20d;
  byte local_162;
  byte bStack_161;
  undefined6 uStack_160;
  undefined1 local_15a [16];
  undefined1 local_14a [16];
  long local_13a [2];
  undefined1 local_12a [16];
  long local_11a [2];
  undefined1 local_10a [16];
  undefined1 local_fa [16];
  undefined1 local_ea [16];
  long local_da [2];
  undefined1 local_ca [16];
  long local_ba [2];
  long local_aa [2];
  long local_9a [2];
  long local_8a [2];
  long local_7a [2];
  undefined8 local_68;
  undefined4 local_60;
  undefined2 uStack_5c;
  undefined2 uStack_5a;
  undefined6 local_58;
  undefined2 uStack_52;
  long *local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  piVar1 = *(int **)(param_2 + 0x18);
  if (piVar1 == (int *)0x0) {
    uVar7 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar7,0x10);
    if (cVar4 != '\0') {
      local_2f8 = 0x8220202;
      uStack_2f4 = 0x7a0a90;
      local_2f0 = 1;
      local_2ec = 0x822;
      uStack_2ea = 0x1007b8d24;
      local_2e4 = 0;
      local_2e3 = 0;
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_2f8,0x16);
    }
    FUN_1001782e9(0,0);
    FUN_10032f0f2(param_1);
    goto LAB_10032779d;
  }
  FUN_100325b88(&local_2f8);
  cVar4 = *(char *)(param_2 + 0x21);
  FUN_100325e44(&local_2f8);
  if (*piVar1 == 0x706c7374) goto LAB_1003264b4;
  uVar7 = FUN_1001cc310();
  cVar3 = _os_log_type_enabled(uVar7,0x10);
  if (cVar3 != '\0') {
    local_68._0_4_ = 0x8220202;
    local_68._4_4_ = 0x7ab58c;
    local_60 = 1;
    uStack_5c = 0x822;
    uStack_5a = 0x2d50;
    local_58 = 0x1007b;
    __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
  }
  cVar3 = FUN_1001782e9(0,1);
  if (cVar3 == '\0') {
    uVar7 = FUN_1001cc310();
LAB_100326db4:
    cVar4 = _os_log_type_enabled(uVar7,0x10);
    if (cVar4 != '\0') {
      local_68._0_4_ = 0x8220202;
      local_68._4_4_ = 0x7a0a90;
      local_60 = 1;
      uStack_5c = 0x822;
      uStack_5a = 0xd1f6;
      local_58 = 0x1007b;
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    if (*piVar1 == 0x706c7374) {
LAB_1003264b4:
      local_2f8 = (undefined4)*(undefined8 *)(piVar1 + 0x18);
      uStack_2f4 = (undefined4)((ulong)*(undefined8 *)(piVar1 + 0x18) >> 0x20);
      local_2f0 = piVar1[0x9b];
      local_2e4 = FUN_100482222(piVar1,1);
      local_2ec = (undefined2)*(undefined8 *)(piVar1 + 0x98);
      uStack_2ea = (undefined6)((ulong)*(undefined8 *)(piVar1 + 0x98) >> 0x10);
      local_2e3 = *(byte *)(piVar1 + 0xa6) & 1;
      local_2e2 = *(byte *)(piVar1 + 0xa6) >> 1 & 1;
      local_2e0 = (undefined2)piVar1[4];
    }
    else {
      uVar7 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar7,0x10);
      if (cVar3 != '\0') {
        local_68._0_4_ = 0x8220202;
        local_68._4_4_ = 0x7ab58c;
        local_60 = 1;
        uStack_5c = 0x822;
        uStack_5a = 0x2d50;
        local_58 = 0x1007b;
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
      }
      cVar3 = FUN_1001782e9(0,1);
      if (cVar3 != '\0') goto LAB_1003264b4;
      uVar7 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar7,0x10);
      if (cVar3 != '\0') {
        local_68._0_4_ = 0x8220202;
        local_68._4_4_ = 0x7a0a90;
        local_60 = 1;
        uStack_5c = 0x822;
        uStack_5a = 0xd1f6;
        local_58 = 0x1007b;
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
      }
      FUN_1001782e9(0,0);
    }
    if (*piVar1 == 0x706c7374) {
LAB_10032654f:
      if (*(long *)(piVar1 + 10) == 0) {
        local_2d6 = 0;
      }
      else {
        local_2d6 = *(undefined8 *)(*(long *)(piVar1 + 10) + 0x60);
      }
      uVar11 = local_2de | 1;
      if (cVar4 == '\0') {
        local_2c6 = piVar1[0x9c];
        uVar11 = local_2de | 3;
LAB_10032669f:
        local_2c2 = *(undefined8 *)(piVar1 + 0xe4);
        local_2ba = piVar1[0xe6];
        if (cVar4 != '\0') {
          uVar8 = *(ulong *)(param_2 + 0x28);
          local_2de = uVar11 | 4;
          goto LAB_1003266d1;
        }
        uVar6 = piVar1[0x90];
        local_2b5 = (byte)(uVar6 >> 0x13) & 1;
        local_2de = uVar11 | 0x14;
LAB_100326753:
        local_2ce = piVar1[0x9e];
        local_2ca = (byte)(uVar6 >> 0x17) & 1;
        if (cVar4 != '\0') {
          uVar8 = *(ulong *)(param_2 + 0x28);
          local_2de = local_2de | 0x2000;
          goto LAB_10032678c;
        }
        local_2c9 = (undefined1)piVar1[0x10e];
        local_2a6 = piVar1[0x10f];
        local_2b4 = (byte)(uVar6 >> 0x14) & 1;
        local_2c8 = (undefined1)piVar1[0x13b];
        local_2b2 = piVar1[0x13a];
        local_2ae = *(undefined8 *)(piVar1 + 0x138);
        local_2de = local_2de | 0x7c20;
LAB_10032688c:
        if (((short)piVar1[4] == 0x27) || ((short)piVar1[4] == 0x14)) {
          local_292 = *(undefined8 *)(piVar1 + 0x13c);
        }
        else {
          local_292 = 0;
        }
        local_2de = local_2de | 0x40;
        if (cVar4 != '\0') {
          uVar8 = *(ulong *)(param_2 + 0x28);
          goto LAB_1003268c1;
        }
LAB_1003268c8:
        cVar3 = FUN_100493080(local_28a,piVar1 + 0x74,0);
        if (cVar3 != '\0') {
          local_2de = local_2de | 0x80;
        }
        if (cVar4 != '\0') {
          uVar8 = *(ulong *)(param_2 + 0x28);
          goto LAB_1003268f1;
        }
        local_2b3 = (byte)((uint)piVar1[0x90] >> 0x19) & 1;
        local_2c7 = (byte)((uint)piVar1[0x90] >> 0x10) & 1;
        local_2de = local_2de | 0x18000;
      }
      else {
        uVar8 = *(ulong *)(param_2 + 0x28);
        if (((uint)uVar8 >> 0x14 & 1) != 0) {
          local_2c6 = piVar1[0x9c];
          uVar11 = local_2de | 3;
        }
        local_2de = uVar11;
        if (((uint)uVar8 >> 0x15 & 1) != 0) goto LAB_10032669f;
LAB_1003266d1:
        if (((uint)uVar8 >> 0x18 & 1) != 0) {
          local_2b5 = (byte)((uint)piVar1[0x90] >> 0x13) & 1;
          local_2de = local_2de | 0x10;
        }
        if (((uint)uVar8 >> 0x19 & 1) != 0) {
          uVar6 = piVar1[0x90];
          goto LAB_100326753;
        }
LAB_10032678c:
        if ((uVar8 & 0x20) != 0) {
          local_2c9 = (undefined1)piVar1[0x10e];
          local_2a6 = piVar1[0x10f];
          local_2de = local_2de | 0x4000;
        }
        uVar6 = (uint)uVar8;
        if ((uVar6 >> 0xc & 1) != 0) {
          local_2b4 = (byte)((uint)piVar1[0x90] >> 0x14) & 1;
          local_2de = local_2de | 0x20;
        }
        if ((uVar6 >> 0x10 & 1) != 0) {
          local_2c8 = (undefined1)piVar1[0x13b];
          local_2de = local_2de | 0x800;
        }
        if ((uVar8 & 8) != 0) {
          local_2b2 = piVar1[0x13a];
          local_2ae = *(undefined8 *)(piVar1 + 0x138);
          local_2de = local_2de | 0x1400;
        }
        if ((uVar6 >> 0x16 & 1) != 0) goto LAB_10032688c;
LAB_1003268c1:
        if ((uVar8 & 0x808000) != 0) goto LAB_1003268c8;
LAB_1003268f1:
        if ((uVar8 >> 0x26 & 1) != 0) {
          local_2b3 = (byte)((uint)piVar1[0x90] >> 0x19) & 1;
          local_2de = local_2de | 0x8000;
        }
        if ((uVar8 >> 0x27 & 1) != 0) {
          local_2c7 = *(byte *)((long)piVar1 + 0x242) & 1;
          local_2de = local_2de | 0x10000;
        }
        if (((uint)uVar8 >> 0x11 & 1) == 0) goto LAB_100326975;
      }
      if ((*(byte *)(piVar1 + 0xa6) & 1) != 0) {
        local_2de = local_2de | 0x100;
        local_222 = (undefined1)piVar1[0xa8];
        local_220 = *(undefined1 *)((long)piVar1 + 0x2a1);
        local_221 = *(undefined1 *)((long)piVar1 + 0x2a2);
        local_216 = (undefined1)piVar1[0xa9];
        local_21a = piVar1[0xae];
        local_21e = FUN_100383317(piVar1[0xb0]);
        local_215 = *(undefined1 *)((long)piVar1 + 0x2a5);
        local_214 = *(undefined1 *)((long)piVar1 + 0x2a3);
        local_212 = FUN_100383317(piVar1[0xb1]);
        local_20d = *(undefined1 *)((long)piVar1 + 0x2a7);
        switch((char)piVar1[0xaf]) {
        case '\0':
          local_21f = 1;
          break;
        case '\x01':
          local_21f = 2;
          break;
        case '\x02':
          local_21f = 3;
          break;
        case '\x03':
          local_21f = 4;
          break;
        case '\x04':
          local_21f = 5;
          break;
        default:
          local_21f = 1;
          local_21a = 0x3d;
        }
      }
    }
    else {
      uVar7 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar7,0x10);
      if (cVar3 != '\0') {
        local_68._0_4_ = 0x8220202;
        local_68._4_4_ = 0x7ab58c;
        local_60 = 1;
        uStack_5c = 0x822;
        uStack_5a = 0x2d50;
        local_58 = 0x1007b;
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
      }
      cVar3 = FUN_1001782e9(0,1);
      if (cVar3 != '\0') goto LAB_10032654f;
      uVar7 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar7,0x10);
      if (cVar3 != '\0') {
        local_68._0_4_ = 0x8220202;
        local_68._4_4_ = 0x7a0a90;
        local_60 = 1;
        uStack_5c = 0x822;
        uStack_5a = 0xd1f6;
        local_58 = 0x1007b;
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
      }
      FUN_1001782e9(0,0);
    }
LAB_100326975:
    if (*piVar1 != 0x706c7374) {
      uVar7 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar7,0x10);
      if (cVar3 != '\0') {
        local_68._0_4_ = 0x8220202;
        local_68._4_4_ = 0x7ab58c;
        local_60 = 1;
        uStack_5c = 0x822;
        uStack_5a = 0x2d50;
        local_58 = 0x1007b;
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
      }
      cVar3 = FUN_1001782e9(0,1);
      if (cVar3 == '\0') {
        uVar7 = FUN_1001cc310();
        goto LAB_100326db4;
      }
    }
    if ((cVar4 == '\0') || (uVar11 = *(ulong *)(param_2 + 0x28), (uVar11 & 1) != 0)) {
      FUN_100486d8f(&local_68,piVar1);
      FUN_1001b80b2(local_15a,&local_68);
      FUN_1001b7a50(&local_68);
      local_162 = local_162 | 1;
      if (cVar4 != '\0') {
        uVar11 = *(ulong *)(param_2 + 0x28);
        goto LAB_1003269f1;
      }
LAB_1003269f5:
      FUN_1001a8c1c(&local_328,piVar1 + 0x136);
      FUN_1001b7eb0(&local_68,local_328);
      FUN_1001b80b2(local_14a,&local_68);
      FUN_1001b7a50(&local_68);
      local_162 = local_162 | 2;
      FUN_1001ab006(&local_328);
      if (cVar4 != '\0') {
        uVar11 = *(ulong *)(param_2 + 0x28);
        goto LAB_100326a4d;
      }
LAB_100326a57:
      uVar7 = FUN_100492e62(piVar1,0);
      FUN_1001a8d64(&local_68,uVar7);
      FUN_1001aa172(&local_328,&local_68);
      FUN_1001a7b1c(local_13a,&local_328);
      FUN_1001a8fac(&local_328);
      local_162 = local_162 | 4;
      FUN_100492f17(&local_328,piVar1);
      if (local_328 != (cfstringStruct *)0x0) {
        FUN_1001a7c10(local_308,&local_328);
        FUN_1001a7b1c(local_12a,local_308);
        FUN_1001a7a94(local_308);
        local_162 = local_162 | 0x80;
      }
      FUN_1001a7a94(&local_328);
      FUN_1001a8fac(&local_68);
      if (cVar4 != '\0') {
        uVar11 = *(ulong *)(param_2 + 0x28);
        goto LAB_100326b13;
      }
LAB_100326b17:
      FUN_10048768a(&local_68,piVar1,0);
      FUN_1001b80b2(local_10a,&local_68);
      FUN_1001b7a50(&local_68);
      local_162 = local_162 | 0x10;
      if (cVar4 != '\0') {
        uVar11 = *(ulong *)(param_2 + 0x28);
        goto LAB_100326b4e;
      }
LAB_100326b52:
      FUN_100487ce4(&local_68,piVar1);
      FUN_1001b80b2(local_fa,&local_68);
      FUN_1001b7a50(&local_68);
      local_162 = local_162 | 0x20;
      if (cVar4 != '\0') {
        uVar11 = *(ulong *)(param_2 + 0x28);
        goto LAB_100326b87;
      }
LAB_100326b8d:
      if ((*(byte *)(piVar1 + 0xa6) & 1) != 0) {
        if (*(long *)(piVar1 + 0xaa) != 0) {
          uVar7 = FUN_10028a1a8();
          FUN_1001a78d6(&local_68,uVar7);
          FUN_1001a7b1c(local_11a,&local_68);
          FUN_1001a85d4(&local_68);
        }
        local_162 = local_162 | 8;
      }
      if (cVar4 != '\0') {
        uVar11 = *(ulong *)(param_2 + 0x28);
        goto LAB_100326bdd;
      }
LAB_100326be7:
      if (((((*(byte *)(piVar1 + 0xa6) & 1) != 0) &&
           (piVar2 = *(int **)(piVar1 + 0xac), piVar2 != (int *)0x0)) && (*piVar2 == 0x4f4c5354)) &&
         ((piVar2[1] != 0 &&
          (iVar12 = (int)((ulong)(*(long *)(piVar2 + 4) - *(long *)(piVar2 + 2)) >> 3) * -0x49249249
          , iVar12 != 0)))) {
        iVar13 = 0;
        do {
          plVar9 = (long *)FUN_1005968ea(*(undefined8 *)(piVar1 + 0xac),iVar13,0);
          if (plVar9 != (long *)0x0) {
            local_328 = (cfstringStruct *)*plVar9;
            FUN_10014f7ae(&local_68,&local_328,0);
            FUN_1001a814c(local_da,&local_68);
            FUN_1001aae6c(&local_68);
            local_162 = local_162 | 0x40;
          }
          iVar13 = iVar13 + 1;
        } while (iVar12 != iVar13);
      }
      if (cVar4 != '\0') {
        uVar11 = *(ulong *)(param_2 + 0x28);
        goto LAB_100326cb2;
      }
    }
    else {
LAB_1003269f1:
      if ((uVar11 & 8) != 0) goto LAB_1003269f5;
LAB_100326a4d:
      if (((uint)uVar11 >> 0x12 & 1) != 0) goto LAB_100326a57;
LAB_100326b13:
      if ((uVar11 & 2) != 0) goto LAB_100326b17;
LAB_100326b4e:
      if ((uVar11 & 4) != 0) goto LAB_100326b52;
LAB_100326b87:
      if (((uint)uVar11 >> 0x11 & 1) != 0) goto LAB_100326b8d;
LAB_100326bdd:
      if (((uint)uVar11 >> 0x13 & 1) != 0) goto LAB_100326be7;
LAB_100326cb2:
      if ((uVar11 >> 0x25 & 1) == 0) goto LAB_100326dd5;
    }
    FUN_100488006(&local_68,piVar1);
    FUN_1001b80b2(local_ea,&local_68);
    FUN_1001b7a50(&local_68);
    bStack_161 = bStack_161 | 1;
  }
LAB_100326dd5:
  FUN_10032f0f2(param_1);
  local_328 = &cf_pid;
  FUN_1001a7b90(&local_68);
  FUN_10021f04c(param_1,&local_68,&local_2f8);
  FUN_1001ab240(&local_68);
  local_328 = &cf_kind;
  FUN_1001a7b90(&local_68);
  local_308[0] = &cf_playlist;
  FUN_10021f0aa(param_1,&local_68);
  FUN_1001ab240(&local_68);
  local_328 = &cf_isNewPlaylist;
  FUN_1001a7b90(&local_68);
  FUN_1001a9d34(param_1,&local_68,*(undefined1 *)(param_2 + 0x30));
  FUN_1001ab240(&local_68);
  local_328 = &cf_hasSocialItemLookup;
  FUN_1001a7b90(&local_68);
  FUN_1001a9d34(param_1,&local_68,0);
  FUN_1001ab240(&local_68);
  FUN_1001a833e(&local_68,&local_2f8,0x1a,0);
  local_308[0] = &cf_create;
  FUN_1001a7b90(&local_328);
  FUN_1001a7b90(&local_330,&local_68);
  FUN_1001a9c16(param_1,&local_328,&local_330);
  FUN_1001ab240(&local_330);
  FUN_1001ab240(&local_328);
  FUN_1001a85d4(&local_68);
  if (local_2de != 0) {
    FUN_1001a833e(&local_68,&local_2de,0x17c,0);
    local_308[0] = &cf_fixed;
    FUN_1001a7b90(&local_328);
    FUN_1001a7b90(&local_330,&local_68);
    FUN_1001a9c16(param_1,&local_328,&local_330);
    FUN_1001ab240(&local_330);
    FUN_1001ab240(&local_328);
    FUN_1001a85d4(&local_68);
  }
  local_328 = &cf_validFields;
  FUN_1001a7b90(&local_68,&local_328);
  local_330 = (cfstringStruct *)CONCAT62(uStack_160,CONCAT11(bStack_161,local_162));
  FUN_10021f1aa(local_308,&local_330,0);
  FUN_10021f14e(param_1,&local_68,local_308);
  FUN_1001aae6c(local_308);
  FUN_1001ab240(&local_68);
  if ((local_162 & 1) != 0) {
    cVar4 = FUN_1001b8428(local_15a);
    if (cVar4 == '\0') {
      local_328 = &cf_name;
      FUN_1001a7b90(&local_68);
      FUN_10021f1e0(param_1,&local_68,local_15a);
      FUN_1001ab240(&local_68);
    }
  }
  if ((local_162 & 2) != 0) {
    cVar4 = FUN_1001b8428(local_14a);
    if (cVar4 == '\0') {
      local_328 = &cf_artworkUUID;
      FUN_1001a7b90(&local_68);
      FUN_10021f1e0(param_1,&local_68,local_14a);
      FUN_1001ab240(&local_68);
    }
  }
  uVar5 = CONCAT11(bStack_161,local_162);
  if (((local_162 & 4) != 0) && (local_13a[0] != 0)) {
    local_328 = &cf_dataDict;
    FUN_1001a7b90(&local_68);
    FUN_1001a7b90(local_308,local_13a);
    FUN_1001a9c16(param_1,&local_68,local_308);
    FUN_1001ab240(local_308);
    FUN_1001ab240(&local_68);
    uVar5 = CONCAT11(bStack_161,local_162);
  }
  if (((uVar5 & 8) != 0) && (local_11a[0] != 0)) {
    local_328 = &cf_splCriteria;
    FUN_1001a7b90(&local_68);
    FUN_1001a7b90(local_308,local_11a);
    FUN_1001a9c16(param_1,&local_68,local_308);
    FUN_1001ab240(local_308);
    FUN_1001ab240(&local_68);
    uVar5 = CONCAT11(bStack_161,local_162);
  }
  if ((uVar5 & 0x10) != 0) {
    cVar4 = FUN_1001b8428(local_10a);
    if (cVar4 == '\0') {
      local_328 = &cf_description;
      FUN_1001a7b90(&local_68);
      FUN_10021f1e0(param_1,&local_68,local_10a);
      FUN_1001ab240(&local_68);
    }
  }
  if ((local_162 & 0x20) != 0) {
    cVar4 = FUN_1001b8428(local_fa);
    if (cVar4 == '\0') {
      local_328 = &cf_longDesc;
      FUN_1001a7b90(&local_68);
      FUN_10021f1e0(param_1,&local_68,local_fa);
      FUN_1001ab240(&local_68);
    }
  }
  uVar6 = (uint)CONCAT11(bStack_161,local_162);
  if (((local_162 & 0x40) != 0) && (local_da[0] != 0)) {
    local_328 = &cf_geniusSeed;
    FUN_1001a7b90(&local_68);
    FUN_1001a7b90(local_308,local_da);
    FUN_1001a9c16(param_1,&local_68,local_308);
    FUN_1001ab240(local_308);
    FUN_1001ab240(&local_68);
    uVar6 = (uint)CONCAT11(bStack_161,local_162);
  }
  if ((char)uVar6 < '\0') {
    local_328 = &cf_removedKeys;
    FUN_1001a7b90(&local_68);
    FUN_1001a7b90(local_308,local_12a);
    FUN_1001a9c16(param_1,&local_68,local_308);
    FUN_1001ab240(local_308);
    FUN_1001ab240(&local_68);
    uVar6 = (uint)CONCAT11(bStack_161,local_162);
  }
  if ((uVar6 >> 8 & 1) != 0) {
    cVar4 = FUN_1001b8428(local_ea);
    if (cVar4 == '\0') {
      local_328 = &cf_coverRecipe;
      FUN_1001a7b90(&local_68);
      FUN_10021f1e0(param_1,&local_68,local_ea);
      FUN_1001ab240(&local_68);
    }
  }
  if ((bStack_161 & 2) != 0) {
    cVar4 = FUN_1001b8428(local_ca);
    if (cVar4 == '\0') {
      local_328 = &cf_inviteURL;
      FUN_1001a7b90(&local_68);
      FUN_10021f1e0(param_1,&local_68,local_ca);
      FUN_1001ab240(&local_68);
    }
  }
  uVar6 = (uint)CONCAT11(bStack_161,local_162);
  if (((bStack_161 >> 2 & 1) != 0) && (local_ba[0] != 0)) {
    local_328 = &cf_collaborators;
    FUN_1001a7b90(&local_68);
    FUN_1001a7b90(local_308,local_ba);
    FUN_1001a9c16(param_1,&local_68,local_308);
    FUN_1001ab240(local_308);
    FUN_1001ab240(&local_68);
    uVar6 = (uint)CONCAT11(bStack_161,local_162);
  }
  if (((uVar6 >> 0xb & 1) != 0) && (local_aa[0] != 0)) {
    local_328 = &cf_pendingCollaborators;
    FUN_1001a7b90(&local_68);
    FUN_1001a7b90(local_308,local_aa);
    FUN_1001a9c16(param_1,&local_68,local_308);
    FUN_1001ab240(local_308);
    FUN_1001ab240(&local_68);
    uVar6 = (uint)CONCAT11(bStack_161,local_162);
  }
  if (((uVar6 >> 0xc & 1) != 0) && (local_9a[0] != 0)) {
    local_328 = &cf_reactions;
    FUN_1001a7b90(&local_68);
    FUN_1001a7b90(local_308,local_9a);
    FUN_1001a9c16(param_1,&local_68,local_308);
    FUN_1001ab240(local_308);
    FUN_1001ab240(&local_68);
    uVar6 = (uint)CONCAT11(bStack_161,local_162);
  }
  if (((uVar6 >> 0xd & 1) != 0) && (local_8a[0] != 0)) {
    local_328 = &cf_collaborativeItemData;
    FUN_1001a7b90(&local_68);
    FUN_1001a7b90(local_308,local_8a);
    FUN_1001a9c16(param_1,&local_68,local_308);
    FUN_1001ab240(local_308);
    FUN_1001ab240(&local_68);
    uVar6 = (uint)CONCAT11(bStack_161,local_162);
  }
  if (((uVar6 >> 0xe & 1) != 0) && (local_7a[0] != 0)) {
    local_328 = &cf_collaborativePlaylistEdits;
    FUN_1001a7b90(&local_68);
    FUN_1001a7b90(local_308,local_7a);
    FUN_1001a9c16(param_1,&local_68,local_308);
    FUN_1001ab240(local_308);
    FUN_1001ab240(&local_68);
  }
  if (*(char *)(param_2 + 0x20) == '\x01') {
    if (*piVar1 != 0x706c7374) {
      uVar7 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar7,0x10);
      if (cVar4 != '\0') {
        local_68._0_4_ = 0x8220202;
        local_68._4_4_ = 0x7ab58c;
        local_60 = 1;
        uStack_5c = 0x822;
        uStack_5a = 0x2d50;
        local_58 = 0x1007b;
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
      }
      cVar4 = FUN_1001782e9(0,1);
      if (cVar4 == '\0') {
        uVar7 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar7,0x10);
        if (cVar4 != '\0') {
          local_68._0_4_ = 0x8220202;
          local_68._4_4_ = 0x7a0a90;
          local_60 = 1;
          uStack_5c = 0x822;
          uStack_5a = 0xd1f6;
          local_58 = 0x1007b;
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
        }
        FUN_1001782e9(0,0);
        goto LAB_100327791;
      }
    }
    if ((((*(byte *)(piVar1 + 0xa6) & 1) == 0) || ((char)piVar1[0xa8] != '\x01')) &&
       (cVar4 = FUN_1002e86fc(piVar1,0,0x6370636e), cVar4 != '\0')) {
      local_328 = (cfstringStruct *)0x0;
      pcStack_320 = (cfstringStruct *)0x0;
      local_318 = 0;
      local_68._0_4_ = 0x8544c0;
      local_68._4_4_ = 1;
      local_60 = (undefined4)param_2;
      uStack_5c = (undefined2)((ulong)param_2 >> 0x20);
      uStack_5a = (undefined2)((ulong)param_2 >> 0x30);
      local_58 = SUB86(&local_328,0);
      uStack_52 = (undefined2)((ulong)&local_328 >> 0x30);
      local_48 = &local_68;
      FUN_100485677(piVar1,&local_68);
      if (local_48 == &local_68) {
        lVar10 = 0x20;
LAB_10032769b:
        (**(code **)(*local_48 + lVar10))();
      }
      else {
        lVar10 = 0x28;
        if (local_48 != (long *)0x0) goto LAB_10032769b;
      }
      if ((long)pcStack_320 - (long)local_328 == 0) {
        local_330 = &cf_noItems;
        FUN_1001a7b90(local_308);
        FUN_1001a9d34(param_1,local_308,1);
        FUN_1001ab240(local_308);
      }
      else {
        FUN_1001a833e(local_308,local_328,(long)pcStack_320 - (long)local_328,0);
        if (local_308[0] != (cfstringStruct *)0x0) {
          FUN_1001a7b90(&local_330);
          FUN_1001a7b90(local_338,local_308);
          FUN_1001a9c16(param_1,&local_330,local_338);
          FUN_1001ab240(local_338);
          FUN_1001ab240(&local_330);
        }
        FUN_1001a85d4(local_308);
      }
      if (local_328 != (cfstringStruct *)0x0) {
        pcStack_320 = local_328;
        operator_delete(local_328);
      }
    }
  }
LAB_100327791:
  FUN_10032b478(&local_162);
LAB_10032779d:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return param_1;
}

