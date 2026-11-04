// name: FUN_1003f6a41
// address: 1003f6a41

int FUN_1003f6a41(long param_1,long param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong *puVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  undefined8 local_3b8;
  int local_3b0 [2];
  undefined8 local_3a8;
  int local_3a0;
  int local_39c;
  byte local_394;
  undefined2 local_393;
  undefined1 local_391;
  undefined4 local_390;
  undefined8 local_38c;
  undefined2 local_380;
  undefined1 local_37e;
  byte local_37d;
  undefined4 local_37c;
  undefined8 local_378;
  undefined4 local_36c;
  undefined4 uStack_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 local_35c;
  undefined1 local_358;
  undefined1 local_357;
  undefined1 local_356;
  char local_355;
  byte local_353;
  undefined4 local_350;
  undefined8 local_32c;
  undefined4 local_324;
  undefined4 local_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined1 local_30f;
  undefined1 local_30e;
  byte local_30d;
  undefined4 local_30c;
  undefined4 local_2f0;
  undefined4 local_2ec;
  long local_2e8;
  long local_2e0;
  int local_2d4;
  long local_2d0;
  char local_2c8;
  undefined1 uStack_2c7;
  undefined1 uStack_2c6;
  byte bStack_2c5;
  uint uStack_2c4;
  uint local_2c0;
  undefined2 local_2bc;
  undefined1 local_2ba;
  undefined1 uStack_2b9;
  undefined2 uStack_2b8;
  undefined2 uStack_2b6;
  undefined4 local_2b4;
  undefined4 local_27c;
  undefined4 local_23c;
  undefined2 local_a8;
  byte local_a6;
  byte local_a5;
  undefined8 local_a0;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_2e8 = param_2 + 0x178;
  local_2f0 = param_3;
  local_2ec = param_4;
  FUN_1001dccc7();
  iVar3 = FUN_100160255(*(undefined8 *)(param_1 + 0x100000),&local_3b8);
  if (iVar3 == -0x80) goto LAB_1003f7d53;
  if (iVar3 == 0) {
    FUN_1001c62d9(&local_3a8,0xb8);
    local_394 = *(byte *)(param_2 + 0x240) >> 2 & 1;
    local_3a8 = 0xb87079686d;
    local_390 = *(undefined4 *)(param_2 + 0x26c);
    local_350 = *(undefined4 *)(param_2 + 0x270);
    local_38c = *(undefined8 *)(param_2 + 0x60);
    local_320 = *(undefined4 *)(param_2 + 0x1d8);
    uStack_31c = *(undefined4 *)(param_2 + 0x1dc);
    uStack_318 = *(undefined4 *)(param_2 + 0x1e0);
    uStack_314 = *(undefined4 *)(param_2 + 0x1e4);
    local_393 = 0;
    local_356 = *(undefined1 *)(param_2 + 0x10);
    local_2c8 = '\0';
    uVar4 = FUN_100492887(param_2);
    local_37c = FUN_1003f7e40(uVar4);
    local_355 = local_2c8;
    local_380 = 1;
    local_37d = *(byte *)(param_2 + 0x298) >> 1 & 1;
    local_36c = *(undefined4 *)(param_2 + 0x288);
    uStack_368 = *(undefined4 *)(param_2 + 0x28c);
    uStack_364 = *(undefined4 *)(param_2 + 0x290);
    uStack_360 = *(undefined4 *)(param_2 + 0x294);
    local_35c = FUN_1003f7e40(*(undefined4 *)(param_2 + 0x430));
    local_353 = (byte)(*(uint *)(param_2 + 0x330) >> 0xc) & 1;
    local_32c = *(undefined8 *)(param_2 + 0x390);
    local_324 = *(undefined4 *)(param_2 + 0x398);
    if (*(long *)(param_2 + 0x28) != 0) {
      local_378 = *(undefined8 *)(*(long *)(param_2 + 0x28) + 0x60);
    }
    local_30f = *(undefined1 *)(param_2 + 0x438);
    local_30e = *(undefined1 *)(param_2 + 0x439);
    local_30d = *(byte *)(param_2 + 0x242) & 1;
    local_30c = *(undefined4 *)(param_2 + 0x43c);
    switch(*(undefined2 *)(param_2 + 0x10)) {
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
      local_358 = (undefined1)*(undefined2 *)(param_2 + 0x10);
      break;
    case 10:
    case 0xb:
      local_37e = 1;
      break;
    case 0x11:
      local_391 = 1;
      break;
    case 0x13:
    case 0x14:
      local_357 = 1;
    }
    local_2c8 = -0x48;
    uStack_2c7 = 0;
    uStack_2c6 = 0;
    bStack_2c5 = 0;
    uStack_2c4 = 0;
    iVar3 = FUN_100160894(*(undefined8 *)(param_1 + 0x100000),&local_2c8,&local_3a8);
    if (iVar3 == -0x80) goto LAB_1003f7d53;
    if (iVar3 == 0) {
      local_2d0 = param_1;
      iVar3 = FUN_1003f32d1(param_1,local_2e8,*(undefined4 *)(param_2 + 0x1c8),1,1,
                            *(undefined4 *)(param_1 + 0x100138),&local_2d0,&local_2c8);
      if ((iVar3 == 0) && (local_2c8 != '\0')) {
        local_39c = local_39c + 1;
      }
      else {
        if (iVar3 == -0x80) goto LAB_1003f7d53;
        if (iVar3 != 0) {
          uVar8 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar8,0x10);
          if (cVar2 == '\0') goto LAB_1003f7d53;
          local_2ba = (undefined1)iVar3;
          uStack_2b9 = (undefined1)((uint)iVar3 >> 8);
          uStack_2b8 = (undefined2)((uint)iVar3 >> 0x10);
          goto LAB_1003f6d76;
        }
      }
      iVar3 = FUN_1003f32d1(param_1,local_2e8,*(undefined4 *)(param_2 + 0x1cc),2,1,
                            *(undefined4 *)(param_1 + 0x100138),&local_2d0,&local_2c8);
      if ((iVar3 == 0) && (local_2c8 != '\0')) {
        local_39c = local_39c + 1;
      }
      else {
        if (iVar3 == -0x80) goto LAB_1003f7d53;
        if (iVar3 != 0) {
          uVar8 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar8,0x10);
          if (cVar2 == '\0') goto LAB_1003f7d53;
          local_2ba = (undefined1)iVar3;
          uStack_2b9 = (undefined1)((uint)iVar3 >> 8);
          uStack_2b8 = (undefined2)((uint)iVar3 >> 0x10);
          goto LAB_1003f6d76;
        }
      }
      cVar2 = FUN_100487b13(param_2);
      if (cVar2 != '\0') {
        FUN_100487ce4(&local_2c8,param_2);
        iVar3 = FUN_1003f7e59(param_1,&local_2c8,3,*(undefined4 *)(param_1 + 0x100138),&local_2d0);
        FUN_1001b7a50(&local_2c8);
        if (iVar3 == -0x80) goto LAB_1003f7d53;
        if (iVar3 != 0) {
          uVar8 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar8,0x10);
          if (cVar2 == '\0') goto LAB_1003f7d53;
          local_2ba = (undefined1)iVar3;
          uStack_2b9 = (undefined1)((uint)iVar3 >> 8);
          uStack_2b8 = (undefined2)((uint)iVar3 >> 0x10);
          goto LAB_1003f6d76;
        }
        local_39c = local_39c + 1;
      }
      cVar2 = FUN_10048825b(param_2);
      if (cVar2 != '\0') {
        FUN_10048826c(&local_2c8,param_2);
        iVar3 = FUN_1003f7e59(param_1,&local_2c8,4,2,&local_2d0);
        FUN_1001b7a50(&local_2c8);
        if (iVar3 == -0x80) goto LAB_1003f7d53;
        if (iVar3 != 0) {
          uVar8 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar8,0x10);
          if (cVar2 == '\0') goto LAB_1003f7d53;
          local_2ba = (undefined1)iVar3;
          uStack_2b9 = (undefined1)((uint)iVar3 >> 8);
          uStack_2b8 = (undefined2)((uint)iVar3 >> 0x10);
          goto LAB_1003f6d76;
        }
        local_39c = local_39c + 1;
      }
      FUN_1001c62d9(&local_2c8,0x270);
      uStack_2c4 = (uint)*(undefined8 *)(param_2 + 0x33c);
      local_2c0 = (uint)((ulong)*(undefined8 *)(param_2 + 0x33c) >> 0x20);
      uVar13 = *(uint *)(param_2 + 0x330);
      local_a6 = (byte)(uVar13 >> 0x11) & 1;
      local_a5 = (byte)(uVar13 >> 0x12) & 1;
      local_a8 = *(undefined2 *)(param_2 + 0x344);
      bStack_2c5 = (byte)(uVar13 >> 0x14) & 1;
      local_a0 = *(undefined8 *)(param_2 + 0x346);
      local_2c8 = '\0';
      uStack_2c7 = 0;
      uVar4 = FUN_100492887(param_2,0);
      local_2b4 = FUN_1003f7e40(uVar4);
      uStack_2b6 = 1;
      if (*(char *)(param_1 + 0x100127) != '\0') {
        FUN_1003f7eed(&local_2c8);
      }
      FUN_1003f625f(param_1,&local_2c8,0x270,100,&local_2d0);
      local_39c = local_39c + 1;
      FUN_1001c62d9(&local_2c8,0x14c);
      uVar13 = *(uint *)(param_2 + 0x3f0);
      uStack_2c4 = 0x10;
      if (uVar13 < 0x10) {
        uStack_2c4 = uVar13;
      }
      if (uVar13 != 0) {
        _memcpy(&local_2bc,(void *)(param_2 + 0x3f4),(ulong)(uStack_2c4 - 1) * 4 + 4);
      }
      local_2c8 = '\x01';
      local_2c0 = 1;
      local_27c = 4;
      local_23c = 0x78;
      if (*(char *)(param_1 + 0x100127) != '\0') {
        FUN_1003f7f6e(&local_2c8);
      }
      FUN_1003f625f(param_1,&local_2c8,0x14c,0x66,&local_2d0);
      local_39c = local_39c + 1;
      if (((*(byte *)(param_2 + 0x298) & 1) != 0) &&
         ((*(char *)(param_2 + 0x2a3) == '\0' || ((*(byte *)(param_1 + 0x10001a) & 1) != 0)))) {
        FUN_1001c62d9(&local_2c8,0x48);
        local_2c8 = *(char *)(param_2 + 0x2a0);
        uStack_2c6 = *(undefined1 *)(param_2 + 0x2a1);
        uStack_2c7 = *(undefined1 *)(param_2 + 0x2a2);
        uVar13 = *(uint *)(param_2 + 0x2b8);
        local_2bc = CONCAT11(local_2bc._1_1_,*(undefined1 *)(param_2 + 0x2a4));
        local_2c0 = uVar13;
        uVar5 = FUN_1003f7e40(*(undefined4 *)(param_2 + 0x2c0));
        local_2bc = CONCAT11(*(undefined1 *)(param_2 + 0x2a5),(undefined1)local_2bc);
        local_2ba = *(undefined1 *)(param_2 + 0x2a3);
        uStack_2c4 = uVar5;
        iVar3 = FUN_1003f7e40(*(undefined4 *)(param_2 + 0x2c4));
        uStack_2b8 = (undefined2)iVar3;
        uStack_2b6 = (undefined2)((uint)iVar3 >> 0x10);
        switch(*(undefined1 *)(param_2 + 700)) {
        case 0:
          bStack_2c5 = 1;
          break;
        case 1:
          bStack_2c5 = 2;
          break;
        case 2:
          bStack_2c5 = 3;
          break;
        case 3:
          bStack_2c5 = 4;
          break;
        case 4:
          bStack_2c5 = 5;
          break;
        default:
          bStack_2c5 = 1;
          local_2c0 = 0x3d;
          uVar13 = 0x3d;
        }
        if (*(char *)(param_1 + 0x100127) != '\0') {
          uStack_2c4 = uVar5 << 0x18;
          local_2c0 = uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 |
                      uVar13 << 0x18;
          uStack_2b8 = 0;
          uStack_2b6 = (undefined2)((uint)(iVar3 << 0x18) >> 0x10);
        }
        FUN_1003f625f(param_1,&local_2c8,0x48,0x32,&local_2d0);
        local_39c = local_39c + 1;
        if ((*(long *)(param_2 + 0x2a8) != 0) && (local_2d4 = FUN_1001d153d(), local_2d4 != 0)) {
          lVar7 = FUN_1001c63e1(local_2d4);
          if (lVar7 == 0) {
            iVar6 = -0x6c;
          }
          else {
            iVar6 = FUN_100289fdc(*(undefined8 *)(param_2 + 0x2a8),lVar7,local_2d4);
            if (iVar6 == 0) {
              FUN_1003f625f(param_1,lVar7,local_2d4,0x33,&local_2d0);
              local_39c = local_39c + 1;
              FUN_1001c64c1(lVar7);
              goto LAB_1003f73c0;
            }
            FUN_1001c64c1(lVar7);
            iVar3 = -0x80;
            if (iVar6 == -0x80) goto LAB_1003f7d53;
          }
          uVar8 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar8,0x10);
          iVar3 = iVar6;
          if (cVar2 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x400;
            local_4a = (char *)CONCAT44(local_4a._4_4_,iVar6);
            __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_58,0x12);
          }
          goto LAB_1003f7d53;
        }
LAB_1003f73c0:
        piVar1 = *(int **)(param_2 + 0x2b0);
        if (((piVar1 != (int *)0x0) && (*piVar1 == 0x4f4c5354)) && (piVar1[1] != 0)) {
          uVar9 = (*(long *)(piVar1 + 4) - *(long *)(piVar1 + 2) >> 3) * 0x6db6db6db6db6db7;
          iVar3 = (int)uVar9;
          if (iVar3 != 0) {
            local_2e0 = FUN_1001c6429((uVar9 & 0xffffffff) << 3);
            if (local_2e0 == 0) {
              uVar8 = FUN_1001cc310();
              cVar2 = _os_log_type_enabled(uVar8,0x10);
              if (cVar2 != '\0') {
                local_58 = 0x8220202;
                local_54 = "Assertion failure";
                local_4c = 0x822;
                local_4a = "persistentIDList != nullptr";
                __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_58,0x16
                                   );
              }
              FUN_1001782e9(0,0);
              iVar3 = -0x6c;
              goto LAB_1003f7d53;
            }
            uVar13 = 0;
            iVar6 = 0;
            do {
              puVar10 = (ulong *)FUN_1005968ea(*(undefined8 *)(param_2 + 0x2b0),iVar6,0);
              if (puVar10 != (ulong *)0x0) {
                uVar9 = *puVar10;
                uVar12 = uVar9 >> 0x38 | (uVar9 & 0xff000000000000) >> 0x28 |
                         (uVar9 & 0xff0000000000) >> 0x18 | (uVar9 & 0xff00000000) >> 8 |
                         (uVar9 & 0xff000000) << 8 | (uVar9 & 0xff0000) << 0x18 |
                         (uVar9 & 0xff00) << 0x28 | uVar9 << 0x38;
                if (*(char *)(param_1 + 0x100127) == '\0') {
                  uVar12 = uVar9;
                }
                uVar9 = (ulong)uVar13;
                uVar13 = uVar13 + 1;
                *(ulong *)(local_2e0 + uVar9 * 8) = uVar12;
              }
              iVar6 = iVar6 + 1;
            } while (iVar3 != iVar6);
            if (uVar13 != 0) {
              FUN_1003f625f(param_1,local_2e0,uVar13 << 3,0x36,&local_2d0);
              local_39c = local_39c + 1;
            }
            FUN_1001c64c1(local_2e0);
          }
        }
      }
      lVar7 = FUN_100492e62(param_2,0);
      if ((lVar7 != 0) && (lVar11 = FUN_100171426(lVar7), 0 < lVar11)) {
        iVar3 = FUN_1003f6757(param_1,lVar7,0x37,&local_2d0);
        if (iVar3 != 0) {
          uVar8 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar8,0x10);
          if (cVar2 == '\0') goto LAB_1003f7d53;
          local_2ba = (undefined1)iVar3;
          uStack_2b9 = (undefined1)((uint)iVar3 >> 8);
          uStack_2b8 = (undefined2)((uint)iVar3 >> 0x10);
          goto LAB_1003f6d76;
        }
        local_39c = local_39c + 1;
      }
      iVar3 = (int)local_2d0 - (int)param_1;
      if (iVar3 != 0) {
        local_2c8 = (char)iVar3;
        uStack_2c7 = (undefined1)((uint)iVar3 >> 8);
        uStack_2c6 = (undefined1)((uint)iVar3 >> 0x10);
        bStack_2c5 = (byte)((uint)iVar3 >> 0x18);
        uStack_2c4 = 0;
        iVar3 = FUN_100160894(*(undefined8 *)(param_1 + 0x100000),&local_2c8,param_1);
        if (iVar3 == -0x80) goto LAB_1003f7d53;
        if (iVar3 != 0) {
          uVar8 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar8,0x10);
          if (cVar2 == '\0') goto LAB_1003f7d53;
          local_2ba = (undefined1)iVar3;
          uStack_2b9 = (undefined1)((uint)iVar3 >> 8);
          uStack_2b8 = (undefined2)((uint)iVar3 >> 0x10);
          goto LAB_1003f6d76;
        }
      }
      if ((*(byte *)(param_2 + 0x240) & 4) == 0) {
LAB_1003f75a3:
        if ((char)local_2f0 != '\0') {
          iVar3 = FUN_1003f889a(param_1,&local_3a8,**(undefined8 **)(param_2 + 0x78),
                                (*(undefined8 **)(param_2 + 0x78))[1],(undefined1)local_2ec);
          if (iVar3 == -0x80) goto LAB_1003f7d53;
          if (iVar3 != 0) {
            uVar8 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar8,0x10);
            if (cVar2 == '\0') goto LAB_1003f7d53;
            local_2ba = (undefined1)iVar3;
            uStack_2b9 = (undefined1)((uint)iVar3 >> 8);
            uStack_2b8 = (undefined2)((uint)iVar3 >> 0x10);
            goto LAB_1003f6d76;
          }
        }
        iVar3 = FUN_100160255(*(undefined8 *)(param_1 + 0x100000),local_3b0);
        if (iVar3 == -0x80) goto LAB_1003f7d53;
        if (iVar3 == 0) {
          local_3a0 = local_3b0[0] - (int)local_3b8;
          if (*(char *)(param_1 + 0x100127) != '\0') {
            FUN_1003f8d18(&local_3a8);
          }
          local_2c8 = -0x48;
          uStack_2c7 = 0;
          uStack_2c6 = 0;
          bStack_2c5 = 0;
          uStack_2c4 = 0;
          iVar3 = FUN_100160a0d(*(undefined8 *)(param_1 + 0x100000),local_3b8,&local_2c8,&local_3a8)
          ;
          if ((iVar3 == -0x80) || (iVar3 == 0)) goto LAB_1003f7d53;
          uVar8 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar8,0x10);
          if (cVar2 == '\0') goto LAB_1003f7d53;
          local_2ba = (undefined1)iVar3;
          uStack_2b9 = (undefined1)((uint)iVar3 >> 8);
          uStack_2b8 = (undefined2)((uint)iVar3 >> 0x10);
        }
        else {
          uVar8 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar8,0x10);
          if (cVar2 == '\0') goto LAB_1003f7d53;
          local_2ba = (undefined1)iVar3;
          uStack_2b9 = (undefined1)((uint)iVar3 >> 8);
          uStack_2b8 = (undefined2)((uint)iVar3 >> 0x10);
        }
      }
      else {
        uVar13 = *(uint *)(param_1 + 0x100018);
        if ((uVar13 & 4) == 0) {
LAB_1003f759b:
          if ((uVar13 & 8) == 0) goto LAB_1003f75a3;
          iVar3 = FUN_1003f7fdb(param_1,&local_3a8,param_2,0x2c);
          if (iVar3 == -0x80) goto LAB_1003f7d53;
          if (iVar3 == 0) {
            iVar3 = FUN_1003f7fdb(param_1,&local_3a8,param_2,0x2d);
            if (iVar3 == -0x80) goto LAB_1003f7d53;
            if (iVar3 == 0) {
              iVar3 = FUN_1003f7fdb(param_1,&local_3a8,param_2,0x2e);
              if (iVar3 == -0x80) goto LAB_1003f7d53;
              if (iVar3 == 0) goto LAB_1003f75a3;
              uVar8 = FUN_1001cc310();
              cVar2 = _os_log_type_enabled(uVar8,0x10);
              if (cVar2 == '\0') goto LAB_1003f7d53;
              local_2ba = (undefined1)iVar3;
              uStack_2b9 = (undefined1)((uint)iVar3 >> 8);
              uStack_2b8 = (undefined2)((uint)iVar3 >> 0x10);
            }
            else {
              uVar8 = FUN_1001cc310();
              cVar2 = _os_log_type_enabled(uVar8,0x10);
              if (cVar2 == '\0') goto LAB_1003f7d53;
              local_2ba = (undefined1)iVar3;
              uStack_2b9 = (undefined1)((uint)iVar3 >> 8);
              uStack_2b8 = (undefined2)((uint)iVar3 >> 0x10);
            }
          }
          else {
            uVar8 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar8,0x10);
            if (cVar2 == '\0') goto LAB_1003f7d53;
            local_2ba = (undefined1)iVar3;
            uStack_2b9 = (undefined1)((uint)iVar3 >> 8);
            uStack_2b8 = (undefined2)((uint)iVar3 >> 0x10);
          }
        }
        else {
          iVar3 = FUN_1003f7fdb(param_1,&local_3a8,param_2,5);
          if (iVar3 == -0x80) goto LAB_1003f7d53;
          if (iVar3 == 0) {
            iVar3 = FUN_1003f7fdb(param_1,&local_3a8,param_2,7);
            if (iVar3 == -0x80) goto LAB_1003f7d53;
            if (iVar3 == 0) {
              iVar3 = FUN_1003f7fdb(param_1,&local_3a8,param_2,6);
              if (iVar3 == -0x80) goto LAB_1003f7d53;
              if (iVar3 == 0) {
                iVar3 = FUN_1003f7fdb(param_1,&local_3a8,param_2,9);
                if (iVar3 == -0x80) goto LAB_1003f7d53;
                if (iVar3 == 0) {
                  iVar3 = FUN_1003f7fdb(param_1,&local_3a8,param_2,0x18);
                  if (iVar3 == -0x80) goto LAB_1003f7d53;
                  if (iVar3 == 0) {
                    iVar3 = FUN_1003f7fdb(param_1,&local_3a8,param_2,0x33);
                    if (iVar3 == -0x80) goto LAB_1003f7d53;
                    if (iVar3 == 0) {
                      iVar3 = FUN_1003f7fdb(param_1,&local_3a8,param_2,0x35);
                      if (iVar3 == -0x80) goto LAB_1003f7d53;
                      if (iVar3 == 0) {
                        uVar13 = *(uint *)(param_1 + 0x100018);
                        goto LAB_1003f759b;
                      }
                      uVar8 = FUN_1001cc310();
                      cVar2 = _os_log_type_enabled(uVar8,0x10);
                      if (cVar2 == '\0') goto LAB_1003f7d53;
                      local_2ba = (undefined1)iVar3;
                      uStack_2b9 = (undefined1)((uint)iVar3 >> 8);
                      uStack_2b8 = (undefined2)((uint)iVar3 >> 0x10);
                    }
                    else {
                      uVar8 = FUN_1001cc310();
                      cVar2 = _os_log_type_enabled(uVar8,0x10);
                      if (cVar2 == '\0') goto LAB_1003f7d53;
                      local_2ba = (undefined1)iVar3;
                      uStack_2b9 = (undefined1)((uint)iVar3 >> 8);
                      uStack_2b8 = (undefined2)((uint)iVar3 >> 0x10);
                    }
                  }
                  else {
                    uVar8 = FUN_1001cc310();
                    cVar2 = _os_log_type_enabled(uVar8,0x10);
                    if (cVar2 == '\0') goto LAB_1003f7d53;
                    local_2ba = (undefined1)iVar3;
                    uStack_2b9 = (undefined1)((uint)iVar3 >> 8);
                    uStack_2b8 = (undefined2)((uint)iVar3 >> 0x10);
                  }
                }
                else {
                  uVar8 = FUN_1001cc310();
                  cVar2 = _os_log_type_enabled(uVar8,0x10);
                  if (cVar2 == '\0') goto LAB_1003f7d53;
                  local_2ba = (undefined1)iVar3;
                  uStack_2b9 = (undefined1)((uint)iVar3 >> 8);
                  uStack_2b8 = (undefined2)((uint)iVar3 >> 0x10);
                }
              }
              else {
                uVar8 = FUN_1001cc310();
                cVar2 = _os_log_type_enabled(uVar8,0x10);
                if (cVar2 == '\0') goto LAB_1003f7d53;
                local_2ba = (undefined1)iVar3;
                uStack_2b9 = (undefined1)((uint)iVar3 >> 8);
                uStack_2b8 = (undefined2)((uint)iVar3 >> 0x10);
              }
            }
            else {
              uVar8 = FUN_1001cc310();
              cVar2 = _os_log_type_enabled(uVar8,0x10);
              if (cVar2 == '\0') goto LAB_1003f7d53;
              local_2ba = (undefined1)iVar3;
              uStack_2b9 = (undefined1)((uint)iVar3 >> 8);
              uStack_2b8 = (undefined2)((uint)iVar3 >> 0x10);
            }
          }
          else {
            uVar8 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar8,0x10);
            if (cVar2 == '\0') goto LAB_1003f7d53;
            local_2ba = (undefined1)iVar3;
            uStack_2b9 = (undefined1)((uint)iVar3 >> 8);
            uStack_2b8 = (undefined2)((uint)iVar3 >> 0x10);
          }
        }
      }
    }
    else {
      uVar8 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar8,0x10);
      if (cVar2 == '\0') goto LAB_1003f7d53;
      local_2ba = (undefined1)iVar3;
      uStack_2b9 = (undefined1)((uint)iVar3 >> 8);
      uStack_2b8 = (undefined2)((uint)iVar3 >> 0x10);
    }
  }
  else {
    uVar8 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar8,0x10);
    if (cVar2 == '\0') goto LAB_1003f7d53;
    local_2ba = (undefined1)iVar3;
    uStack_2b9 = (undefined1)((uint)iVar3 >> 8);
    uStack_2b8 = (undefined2)((uint)iVar3 >> 0x10);
  }
LAB_1003f6d76:
  local_2c0 = 1;
  uStack_2c4 = 0x7a0a90;
  bStack_2c5 = 8;
  uStack_2c6 = 0x22;
  uStack_2c7 = 2;
  local_2c8 = '\x02';
  local_2bc = 0x400;
  __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_2c8,0x12);
LAB_1003f7d53:
  FUN_1001dcd18(local_2e8);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

