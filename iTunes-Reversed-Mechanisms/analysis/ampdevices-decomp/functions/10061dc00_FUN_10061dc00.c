// name: FUN_10061dc00
// address: 10061dc00

int * FUN_10061dc00(long param_1,int *param_2,long param_3)

{
  ushort uVar1;
  long *plVar2;
  char cVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  undefined4 uVar12;
  long lVar13;
  long local_480 [2];
  int *local_470;
  long local_468;
  int *local_460;
  undefined1 local_458 [512];
  undefined4 local_258;
  char *local_254;
  undefined2 local_24c;
  char *local_24a;
  undefined8 local_238;
  undefined4 uStack_230;
  undefined2 uStack_22c;
  undefined2 uStack_22a;
  undefined6 uStack_228;
  undefined2 uStack_222;
  undefined6 uStack_220;
  undefined2 uStack_21a;
  uint uStack_218;
  undefined2 uStack_214;
  undefined4 local_210;
  undefined1 uStack_20c;
  undefined1 local_20b;
  undefined1 uStack_20a;
  undefined8 local_208;
  undefined8 local_200;
  undefined1 uStack_1f8;
  undefined7 uStack_1f7;
  undefined1 uStack_1f0;
  undefined8 uStack_1ef;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_468 = *(long *)(param_1 + 0x10);
  plVar2 = *(long **)(local_468 + 0x30);
  local_460 = (int *)0x0;
  if (*param_2 != 0x706c7374) {
    uVar8 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar8,0x10);
    if (cVar3 != '\0') {
      local_238._0_4_ = 0x8220202;
      local_238._4_4_ = 0x7ab58c;
      uStack_230 = 1;
      uStack_22c = 0x822;
      uStack_22a = 0x2d50;
      uStack_228 = 0x1007b;
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
    }
    cVar3 = FUN_1001782e9(0,1);
    if (cVar3 == '\0') {
      uVar8 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar8,0x10);
      if (cVar3 != '\0') {
        local_238._0_4_ = 0x8220202;
        local_238._4_4_ = 0x7a0a90;
        uStack_230 = 1;
        uStack_22c = 0x822;
        uStack_22a = 0x22ef;
        uStack_228 = 0x1007d;
        __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
      }
      FUN_1001782e9(0,0);
      piVar11 = (int *)0x0;
      goto LAB_10061e55c;
    }
  }
  FUN_1004870ae(param_2,local_458);
  if ((short)param_2[4] == 10) {
    local_470 = (int *)FUN_10048bbac(plVar2,0xb,0);
  }
  else {
    local_470 = (int *)FUN_10048b5ec(plVar2,*(undefined8 *)(param_2 + 0x18));
  }
  local_460 = local_470;
  local_480[0] = 0;
  local_480[1] = 0xffffffffffffffff;
  if ((*(char *)(local_468 + 0x372) != '\0') && (*(long *)(param_2 + 10) != 0)) {
    local_480[0] = FUN_10048b5ec(plVar2,*(undefined8 *)(*(long *)(param_2 + 10) + 0x60));
  }
  local_470 = local_460;
  if (local_460 == (int *)0x0) {
    local_238._0_4_ = 0;
    local_238._4_4_ = 0;
    uStack_218 = 0;
    uStack_214 = 0;
    local_210 = 0;
    uStack_20c = 0;
    local_20b = 0;
    uStack_20a = 0;
    local_208 = 0x3ff0000000000000;
    local_200 = 0;
    uStack_1f8 = 0;
    uStack_1f7 = 0;
    uStack_1f0 = 0;
    uStack_1ef = 0;
    uStack_230 = SUB84(local_458,0);
    uStack_22c = (undefined2)((ulong)local_458 >> 0x20);
    uStack_22a = (undefined2)((ulong)local_458 >> 0x30);
    uStack_228 = SUB86(local_480,0);
    uStack_222 = (undefined2)((ulong)local_480 >> 0x30);
    uStack_220 = (undefined6)*(undefined8 *)(param_2 + 0x18);
    uStack_21a = (undefined2)((ulong)*(undefined8 *)(param_2 + 0x18) >> 0x30);
    if ((*(byte *)(param_2 + 0xa6) & 2) == 0) {
      uVar1 = *(ushort *)(param_2 + 4);
      if (uVar1 < 0x13) {
        if (uVar1 == 10) {
          uStack_214 = 0xb;
        }
        else if (uVar1 == 0x11) {
          uStack_214 = 0x11;
        }
      }
      else if (uVar1 - 0x13 < 2) {
        uStack_214 = 0x14;
      }
      else if (uVar1 == 0x20) {
        uStack_214 = 0x20;
        local_20b = 1;
      }
      iVar7 = FUN_1002e2674(plVar2,0,&local_238,&local_460);
      piVar11 = local_460;
      if (iVar7 == -0x80) goto LAB_10061e55c;
      if (iVar7 != 0) {
        uVar8 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar8,0x10);
        piVar11 = local_460;
        if (cVar3 == '\0') goto LAB_10061e55c;
        local_24a = (char *)CONCAT44(local_24a._4_4_,iVar7);
LAB_10061e5cd:
        local_24c = 0x400;
        local_254 = "Assertion failure";
        local_258 = 0x8220202;
        __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_258,0x12);
        piVar11 = local_460;
        goto LAB_10061e55c;
      }
      if ((short)param_2[4] == 10) {
        FUN_1002b9206(local_460);
      }
    }
    else {
      iVar7 = FUN_100584d4e(plVar2,0,local_458,local_480,&local_460);
      piVar11 = local_460;
      if (iVar7 == -0x80) goto LAB_10061e55c;
      if (iVar7 != 0) {
        uVar8 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar8,0x10);
        piVar11 = local_460;
        if (cVar3 == '\0') goto LAB_10061e55c;
        local_24a = (char *)CONCAT44(local_24a._4_4_,iVar7);
        goto LAB_10061e5cd;
      }
    }
  }
  else {
    if (*(char *)(local_468 + 0x3a2) != '\0') {
      (**(code **)(*plVar2 + 0x10))(plVar2,0x61746d70,local_460,0,0);
    }
    if ((*(char *)(local_468 + 0x151d0) != '\0') &&
       (cVar3 = FUN_100490002(local_460), cVar3 != '\0')) {
      FUN_1004ed1a5(local_460);
    }
    if ((*(char *)(*(long *)(param_1 + 0x20) + 0xd31) == '\0') ||
       (*(char *)(*(long *)(param_1 + 0x20) + 0x28a) != '\0')) {
      FUN_10048b1e7(local_460);
    }
    else {
      uVar5 = FUN_10061d1d6(param_1,param_2,0);
      if (uVar5 == 0) {
        uVar8 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar8,0x10);
        if (cVar3 != '\0') {
          local_238._0_4_ = 0x8220202;
          local_238._4_4_ = 0x7a0a90;
          uStack_230 = 1;
          uStack_22c = 0x822;
          uStack_22a = 0x537a;
          uStack_228 = 0x1007f;
          __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
        }
        FUN_1001782e9(0,0);
        piVar11 = local_460;
        uVar8 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar8,0x10);
        if (cVar3 != '\0') {
          local_238._0_4_ = 0x8220202;
          local_238._4_4_ = 0x7a0a90;
          uStack_230 = 1;
          uStack_22c = 0x822;
          uStack_22a = 0x53ce;
          uStack_228 = 0x1007f;
          __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
        }
        FUN_1001782e9(0,0);
      }
      else {
        piVar11 = local_460;
        if ((uVar5 & 0xffdffffb) != 0) {
          uVar8 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar8,0x10);
          if (cVar3 != '\0') {
            local_238._0_4_ = 0x8220202;
            local_238._4_4_ = 0x7a0a90;
            uStack_230 = 1;
            uStack_22c = 0x822;
            uStack_22a = 0x5392;
            uStack_228 = 0x1007f;
            __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
          }
          FUN_1001782e9(0,0);
          piVar11 = local_460;
        }
      }
      lVar9 = FUN_100485529();
      if (lVar9 != 0) {
        lVar13 = 0;
        do {
          uVar6 = FUN_1004744bf(*(undefined8 *)(lVar9 + 8),0);
          if ((uVar6 & uVar5) == 0) {
            *(ushort *)(lVar9 + 0x60) = *(ushort *)(lVar9 + 0x60) & 0xfffd;
            lVar13 = lVar9;
          }
          else {
            *(ushort *)(lVar9 + 0x60) = *(ushort *)(lVar9 + 0x60) | 2;
            if ((param_3 != 0) && (*(long *)(*(long *)(lVar9 + 8) + 0x188) != 0)) {
              if (lVar13 == 0) {
                uVar12 = 0;
              }
              else {
                uVar12 = *(undefined4 *)(lVar13 + 0x40);
              }
              local_238 = *(long *)(lVar9 + 8) + 0x188;
              lVar10 = FUN_10033d31a(param_3,local_238,&DAT_100712240,&local_238,&local_258);
              *(undefined4 *)(lVar10 + 0x28) = uVar12;
            }
          }
          lVar9 = *(long *)(lVar9 + 0x18);
        } while (lVar9 != 0);
      }
      FUN_10048ac76(piVar11,0);
      FUN_1004897f6(piVar11,0);
    }
    FUN_100489136(local_460,&local_238);
    if ((uStack_218 & 1) != 0) {
      FUN_10048fb22(local_460,local_458,0);
    }
    piVar11 = local_460;
    if (local_460 != (int *)0x0) {
      if (*local_460 != 0x706c7374) {
        uVar8 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar8,0x10);
        if (cVar3 != '\0') {
          local_258 = 0x8220202;
          local_254 = "Assertion failure (expected to be true)";
          local_24c = 0x822;
          local_24a = "playlist->magic == \'plst\'";
          __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_258,0x16);
        }
        cVar3 = FUN_1001782e9(0,1);
        if (cVar3 == '\0') goto LAB_10061e232;
      }
      if (((*(byte *)(piVar11 + 0xa6) & 1) != 0) && (*(char *)((long)piVar11 + 0x2a3) != '\0')) {
        if (*param_2 == 0x706c7374) {
LAB_10061e15a:
          if (((*(byte *)(param_2 + 0xa6) & 1) != 0) && (*(char *)((long)param_2 + 0x2a3) != '\0'))
          goto LAB_10061e232;
        }
        else {
          uVar8 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar8,0x10);
          if (cVar3 != '\0') {
            local_258 = 0x8220202;
            local_254 = "Assertion failure (expected to be true)";
            local_24c = 0x822;
            local_24a = "playlist->magic == \'plst\'";
            __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_258,0x16);
          }
          cVar3 = FUN_1001782e9(0,1);
          if (cVar3 != '\0') goto LAB_10061e15a;
        }
        FUN_10036ae80(local_460);
      }
    }
  }
LAB_10061e232:
  FUN_10048f5c3(local_460,*(undefined8 *)(param_2 + 0x18));
  uVar8 = FUN_100308474(param_2);
  *(undefined8 *)(local_460 + 0xa2) = uVar8;
  *(undefined8 *)(local_460 + 0xa4) = *(undefined8 *)(param_2 + 0x18);
  FUN_1004862fd(param_2);
  piVar11 = local_460;
  FUN_10048768a(&local_258,param_2,0);
  uVar8 = FUN_1001bb41a(&local_258,&local_238);
  FUN_100487957(piVar11,uVar8);
  FUN_1001b7a50(&local_258);
  piVar11 = local_460;
  FUN_100487ce4(&local_238,param_2);
  FUN_100487e4d(piVar11,&local_238);
  FUN_1001b7a50(&local_238);
  piVar11 = local_460;
  FUN_10048826c(&local_238,param_2);
  FUN_10048828b(piVar11,&local_238);
  FUN_1001b7a50(&local_238);
  piVar11 = local_460;
  FUN_1004883aa(&local_238,param_2);
  FUN_1004883c9(piVar11,&local_238);
  FUN_1001b7a50(&local_238);
  piVar11 = local_460;
  FUN_1004883f9(&local_238,param_2);
  FUN_100488418(piVar11,&local_238);
  FUN_1001b7a50(&local_238);
  piVar11 = local_460;
  FUN_100488448(&local_238,param_2);
  FUN_100488467(piVar11,&local_238);
  FUN_1001b7a50(&local_238);
  uVar4 = FUN_100488488(param_2,&local_238);
  FUN_1004885dd(local_460,uVar4,(undefined4)local_238,1);
  *(undefined1 *)((long)local_460 + 0x439) = uVar4;
  if (((*(byte *)(param_2 + 0xa6) & 3) == 1) &&
     ((*(char *)((long)param_2 + 0x2a3) == '\0' || (*(char *)(local_468 + 0x388) != '\0')))) {
    cVar3 = FUN_100586027(param_2);
    if (cVar3 == '\0') {
      iVar7 = FUN_1005815a8(param_2 + 0xa8,&local_238);
      if (iVar7 == 0) {
        FUN_100581b2a(local_460,&local_238,1);
        FUN_10036aa7d(local_460);
        FUN_1005814bd(&local_238);
      }
    }
  }
  if ((*(char *)(local_468 + 0x3a2) != '\0') && (0xfff8 < (ushort)((short)param_2[4] - 0xcfU))) {
    *(short *)(local_460 + 4) = (short)param_2[4];
  }
  if (*(char *)(local_468 + 0x151d0) != '\0') {
    FUN_1004ece0d(local_460);
  }
  if (local_470 == (int *)0x0) {
    FUN_100488970(local_460);
    if ((local_480[0] != 0 && *(char *)(local_468 + 0x372) != '\0') &&
       ((*(byte *)(local_480[0] + 0x298) & 2) != 0)) {
      FUN_100585003(local_460);
    }
    FUN_100355d91(local_468,local_460,param_2,0);
    piVar11 = local_460;
  }
  else {
    if ((*(char *)(local_468 + 0x372) != '\0') && (local_480[0] != *(long *)(local_460 + 10))) {
      FUN_100489366(local_460,local_480);
    }
    FUN_100356f08(local_468,local_460,param_2,0);
    piVar11 = local_460;
  }
LAB_10061e55c:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return piVar11;
}

