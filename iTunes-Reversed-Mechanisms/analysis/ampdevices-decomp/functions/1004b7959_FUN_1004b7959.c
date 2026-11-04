// name: FUN_1004b7959
// address: 1004b7959

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004b7959(long param_1,long param_2,uint param_3,undefined4 param_4)

{
  long *plVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  ulong uVar5;
  long lVar6;
  ulong *puVar7;
  char cVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  undefined8 ***pppuVar12;
  undefined1 *puVar13;
  ulong uVar14;
  long lVar15;
  bool bVar16;
  bool bVar17;
  float fVar18;
  undefined8 uVar19;
  double dVar20;
  undefined1 auVar21 [16];
  double local_4b8;
  double local_4b0;
  long lStack_4a8;
  undefined8 local_4a0;
  undefined4 uStack_498;
  undefined4 uStack_494;
  double local_490;
  undefined4 uStack_488;
  undefined4 uStack_484;
  double local_480;
  int local_478;
  int local_474;
  undefined8 local_470;
  undefined1 local_3d0 [16];
  undefined1 local_3c0 [16];
  double local_3b0;
  long lStack_3a8;
  undefined4 local_3a0;
  undefined4 uStack_39c;
  undefined8 uStack_398;
  double local_390;
  undefined4 uStack_388;
  undefined4 uStack_384;
  double local_380;
  undefined1 local_378 [16];
  undefined1 local_368 [16];
  undefined1 local_358 [16];
  undefined1 local_348 [16];
  undefined8 local_338;
  double local_330;
  undefined8 local_328;
  long *plStack_320;
  undefined1 local_318 [16];
  undefined1 local_308 [20];
  undefined4 local_2f4;
  undefined1 local_2f0 [16];
  undefined1 local_2e0 [16];
  undefined1 local_2d0 [16];
  undefined1 local_2c0 [16];
  long local_2b0;
  uint local_2a4;
  undefined1 *local_2a0;
  undefined1 local_298 [16];
  undefined8 **local_288;
  ulong uStack_280;
  ulong local_278;
  ulong *local_268;
  ulong *puStack_260;
  ulong *local_258;
  ulong **local_248 [2];
  uint local_238;
  char *local_234;
  undefined2 local_22c;
  char *local_22a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar10 = *(long *)(param_1 + 0x18);
  if (*(int *)(lVar10 + 0x170) - 0x1f47U < 2) goto LAB_1004b8c87;
  uVar14 = (ulong)param_3;
  *(long *)(param_1 + 0x13c0) = *(long *)(param_1 + 0x13c0) + uVar14;
  local_2f4 = param_4;
  local_2b0 = param_2;
  local_2a4 = param_3;
  uVar19 = FUN_1001ebd46();
  *(undefined8 *)(param_1 + 0x13c8) = uVar19;
  *(long *)(lVar10 + 0x650) = *(long *)(lVar10 + 0x650) + uVar14;
  *(long *)(lVar10 + 0x758) = *(long *)(lVar10 + 0x758) + uVar14;
  if ((*(char *)(lVar10 + 0x779) != '\0') && (lVar11 = *(long *)(lVar10 + 0x38), lVar11 != 0)) {
    *(long *)(lVar11 + 0x650) = *(long *)(lVar11 + 0x650) + uVar14;
    *(long *)(lVar11 + 0x758) = *(long *)(lVar11 + 0x758) + uVar14;
  }
  lVar11 = *(long *)(param_1 + 0x13a8);
  if (lVar11 == -1) {
    uVar19 = 0xffffffffffffffff;
  }
  else {
    uVar19 = *(undefined8 *)(param_1 + 0x13c0);
  }
  *(undefined8 *)(lVar10 + 0x200) = uVar19;
  *(long *)(lVar10 + 0x208) = lVar11;
  local_238 = local_238 & 0xffff0000;
  lVar11 = *(long *)(param_1 + 0x18);
  FUN_1001c62d9(&local_3b0,0x38);
  FUN_1004ab44e(lVar11,&lStack_3a8,&local_3a0);
  local_4b8 = 0.0;
  uVar19 = FUN_1004bfd78(lVar11);
  fVar18 = (float)FUN_1001ced62(uVar19,local_4b8);
  local_380 = (double)fVar18;
  if (lStack_3a8 == -1) {
    lVar15 = -1;
  }
  else {
    lVar6 = CONCAT44(uStack_39c,local_3a0);
    lVar15 = -1;
    if (lStack_3a8 <= lVar6) {
      lVar15 = lVar6 - lStack_3a8;
    }
    if (lVar6 == -1) {
      lVar15 = -1;
    }
  }
  FUN_1001c62d9(&local_4b8,0xe8);
  local_2a0 = (undefined1 *)DAT_100700af8;
  dVar20 = DAT_100700af8;
  if (*(char *)(lVar11 + 0x6b0) != '\0') {
    if (*(char *)(lVar11 + 0x6b1) == '\0') {
      dVar20 = (double)FUN_1001ebd46();
    }
    else {
      dVar20 = *(double *)(lVar11 + 0x6a8);
    }
    dVar20 = dVar20 - *(double *)(lVar11 + 0x6a0);
  }
  local_4a0 = (long)*(double *)(lVar11 + 0x750);
  local_4b8 = dVar20;
  if (-1 < lVar15) {
    if (lVar15 == 0) {
      local_2a0 = (undefined1 *)0x0;
    }
    else {
      local_2a0 = (undefined1 *)DAT_100700af8;
      dVar20 = DAT_100700af8;
      if (*(char *)(lVar11 + 0x670) != '\0') {
        if (*(char *)(lVar11 + 0x671) == '\0') {
          dVar20 = (double)FUN_1001ebd46();
        }
        else {
          dVar20 = *(double *)(lVar11 + 0x668);
        }
        dVar20 = dVar20 - *(double *)(lVar11 + 0x660);
      }
      if (((*(double *)(lVar11 + 0x718) <= dVar20) && (0 < *(long *)(lVar11 + 0x650))) &&
         (dVar20 = (double)*(long *)(lVar11 + 0x650) / dVar20, 0.0 < dVar20)) {
        local_2a0 = (undefined1 *)((double)lVar15 / dVar20);
      }
    }
  }
  local_4b0 = (double)local_2a0;
  local_4a0 = local_4a0 << 3;
  FUN_1001c631b(lVar11 + 0x658,&local_490,0xc0);
  local_390 = local_4b0;
  uStack_398 = local_4a0;
  FUN_1001c334a(local_3c0,0x12c0012);
  local_2a0 = local_3c0;
  FUN_1001c334a(local_358,0x12c0019);
  FUN_1001b7a5c(local_348,*(long *)(param_1 + 0x18) + 0x130);
  uVar19 = FUN_1001b8336(local_348);
  FUN_1001bb630(local_368,local_358,uVar19);
  local_338 = FUN_1001b8336(local_368);
  lVar11 = *(long *)(param_1 + 0x18);
  FUN_1001b7a44(local_308);
  FUN_1001c62d9(&local_4b8,0x50);
  uVar2 = *(uint *)(lVar11 + 0x118);
  if (uVar2 - 4 < 0x3e5) {
    FUN_1001b7a44(&local_268);
    if ((*(char *)(lVar11 + 0x778) == '\0') && (*(long *)(lVar11 + 0x1b60) != -1)) {
      FUN_1001e17d3(&local_288,*(long *)(lVar11 + 0x1b60),1,0);
      if (uVar2 == 1000) {
        FUN_1001c334a(local_2d0,0x12c000a);
        FUN_1001bbec4(local_248,local_2d0,&local_288);
        FUN_1001b80b2(&local_268,local_248);
        FUN_1001b7a50(local_248);
        FUN_1001b7a50(local_2d0);
      }
      else {
        FUN_1001b8172(&local_268,&local_288);
      }
LAB_1004b8160:
      FUN_1001b7a50(&local_288);
    }
    else {
      if (uVar2 == 1000) {
        FUN_1001c334a(&local_288,0x12c0009);
        FUN_1001b80b2(&local_268,&local_288);
        goto LAB_1004b8160;
      }
      FUN_1001b82d4(&local_268,"-",1);
    }
    FUN_1001b7a88(local_2c0,&local_268);
    FUN_1001b7a50(&local_268);
    FUN_1001b80b2(local_308,local_2c0);
    puVar13 = local_2c0;
  }
  else {
    local_4b8 = (double)((ulong)local_4b8 & 0xffffffff00000000);
    local_4b0 = local_3b0;
    lStack_4a8 = lStack_3a8;
    local_4a0 = CONCAT44(uStack_39c,local_3a0);
    uStack_498 = (undefined4)uStack_398;
    uStack_494 = uStack_398._4_4_;
    local_490 = local_390;
    uStack_488 = uStack_388;
    uStack_484 = uStack_384;
    local_480 = local_380;
    if ((uVar2 & 0xfffffffe) == 2) {
      if (uVar2 == 3) {
        local_478 = (0.0 < local_380) + 0x12c0003;
        local_490 = 0.0;
      }
    }
    else {
      local_490 = 0.0;
      if (uVar2 < 2) {
        local_478 = 0x12c0002;
      }
      else {
        local_478 = 0x12c0006;
        if (((uVar2 == 2000) && (*(int *)(lVar11 + 0x170) != 0x1f42)) &&
           ((local_474 = FUN_1004ab38c(lVar11), local_474 - 0x1f41U < 2 ||
            ((local_474 == 0 || (local_474 == -0x80)))))) {
          local_474 = 0;
        }
      }
    }
    local_470 = 0xffffffff00000000;
    FUN_1001b7a44(local_2d0);
    FUN_1001b7a44(local_2c0);
    FUN_1001b7a44(local_2f0);
    FUN_1001b7a44(local_2e0);
    bVar16 = lStack_4a8 != -1;
    bVar17 = local_4a0 != -1;
    if (local_478 != 0) {
      FUN_1001c334a(&local_268);
      FUN_1001b80b2(local_2e0,&local_268);
      FUN_1001b7a50(&local_268);
    }
    if (0.0 < local_480) {
      FUN_1001b8e86(&local_288,(long)local_480,1);
      FUN_1001bbec4(&local_268,local_2e0,&local_288);
      FUN_1001b80b2(local_2e0,&local_268);
      FUN_1001b7a50(&local_268);
      FUN_1001b7a50(&local_288);
    }
    lVar11 = local_4a0;
    if ((bVar16 && bVar17) && (((ulong)local_4b8 & 1) == 0)) {
      FUN_1001e17d3(&local_268,lStack_4a8,1,0);
      FUN_1001e17d3(&local_288,lVar11,1,0);
      FUN_1001c334a(local_248,0x12c0001);
      FUN_1001bbf68(local_298,local_248,&local_268,&local_288);
      FUN_1001b7a50(local_248);
      FUN_1001b7a50(&local_288);
      FUN_1001b7a50(&local_268);
      FUN_1001b80b2(local_2c0,local_298);
      FUN_1001b7a50(local_298);
    }
    local_330 = local_490;
    if (0.0 < local_490) {
      FUN_1001b7a44(local_298);
      if (DAT_100700b00 <= local_330) {
        if (DAT_10074b9e0 <= local_330) {
          if (DAT_10074b9e8 <= local_330) {
            auVar21._8_8_ = 0;
            auVar21._0_8_ = local_330 / DAT_10074b9f0;
            auVar21 = roundsd(ZEXT816(0),auVar21,10);
            if ((int)(long)auVar21._0_8_ != 1) {
              FUN_1001c334a(&local_288,0x12c000f);
              FUN_1001b8e86(local_248,(long)auVar21._0_8_ & 0xffffffff,1);
              FUN_1001bbec4(&local_268,&local_288,local_248);
              FUN_1001b80b2(local_298,&local_268);
              goto LAB_1004b82f3;
            }
            FUN_1001c334a(&local_268,0x12c0010);
            FUN_1001b80b2(local_298,&local_268);
            goto LAB_1004b8243;
          }
          auVar4._8_8_ = 0;
          auVar4._0_8_ = local_330 / DAT_10070e580;
          auVar21 = roundsd(ZEXT816(0),auVar4,10);
          if ((int)(long)auVar21._0_8_ == 1) {
            FUN_1001c334a(&local_268,0x12c000e);
            FUN_1001b80b2(local_298,&local_268);
            goto LAB_1004b8243;
          }
          FUN_1001c334a(&local_288,0x12c000d);
          FUN_1001b8e86(local_248,(long)auVar21._0_8_ & 0xffffffff,1);
          FUN_1001bbec4(&local_268,&local_288,local_248);
          FUN_1001b80b2(local_298,&local_268);
LAB_1004b82f3:
          FUN_1001b7a50(&local_268);
          FUN_1001b7a50(local_248);
          pppuVar12 = &local_288;
        }
        else {
          auVar3._8_8_ = 0;
          auVar3._0_8_ = local_330;
          auVar21 = roundsd(ZEXT816(0),auVar3,10);
          if ((int)(long)auVar21._0_8_ != 1) {
            FUN_1001c334a(&local_288,0x12c000b);
            FUN_1001b8e86(local_248,(long)auVar21._0_8_ & 0xffffffff,1);
            FUN_1001bbec4(&local_268,&local_288,local_248);
            FUN_1001b80b2(local_298,&local_268);
            goto LAB_1004b82f3;
          }
          FUN_1001c334a(&local_268,0x12c000c);
          FUN_1001b80b2(local_298,&local_268);
LAB_1004b8243:
          pppuVar12 = (undefined8 ***)&local_268;
        }
        FUN_1001b7a50(pppuVar12);
      }
      else {
        FUN_1001b82d4(local_298,"",0);
      }
      FUN_1001b80b2(local_2f0,local_298);
      FUN_1001b7a50(local_298);
      if (((int)local_470 == 1) && (uVar5 = CONCAT44(uStack_494,uStack_498), 0 < (long)uVar5)) {
        FUN_1001b7a44(&local_268);
        FUN_1001b7a44(local_298);
        if (uVar5 < 0x3e9) {
          FUN_1001b90b6(local_248,uVar5);
          FUN_1001df366(&local_288,local_248);
          FUN_1001b80b2(&local_268,&local_288);
          FUN_1001b7a50(&local_288);
          FUN_1001b7a50(local_248);
          FUN_1001c334a(local_248,0x12c001c);
          FUN_1001bbec4(&local_288,local_248,&local_268);
          FUN_1001b80b2(local_298,&local_288);
        }
        else if (uVar5 < 0xf4241) {
          FUN_1001bb78a((double)((float)(long)uVar5 / DAT_100717f3c),local_248,"%0.1f");
          FUN_1001df366(&local_288,local_248);
          FUN_1001b80b2(&local_268,&local_288);
          FUN_1001b7a50(&local_288);
          FUN_1001b7a50(local_248);
          FUN_1001c334a(local_248,0x12c001d);
          FUN_1001bbec4(&local_288,local_248,&local_268);
          FUN_1001b80b2(local_298,&local_288);
        }
        else {
          FUN_1001bb78a((double)((float)(long)uVar5 / _DAT_10074b9f8),local_248,"%0.1f");
          FUN_1001df366(&local_288,local_248);
          FUN_1001b80b2(&local_268,&local_288);
          FUN_1001b7a50(&local_288);
          FUN_1001b7a50(local_248);
          FUN_1001c334a(local_248,0x12c001e);
          FUN_1001bbec4(&local_288,local_248,&local_268);
          FUN_1001b80b2(local_298,&local_288);
        }
        FUN_1001b7a50(&local_288);
        FUN_1001b7a50(local_248);
        FUN_1001b7a50(&local_268);
        FUN_1001c334a(&local_288,0x12c0015);
        FUN_1001bbf68(&local_268,&local_288,local_298,local_2f0);
        FUN_1001b80b2(local_2f0,&local_268);
        FUN_1001b7a50(&local_268);
        FUN_1001b7a50(&local_288);
        FUN_1001b7a50(local_298);
      }
    }
    local_268 = (ulong *)0x0;
    puStack_260 = (ulong *)0x0;
    local_258 = (ulong *)0x0;
    cVar8 = FUN_1001b8428(local_2c0);
    puVar7 = puStack_260;
    if (cVar8 == '\0') {
      if (puStack_260 < local_258) {
        FUN_1001b7a5c(puStack_260,local_2c0);
        puStack_260 = puVar7 + 2;
      }
      else {
        puStack_260 = (ulong *)FUN_1001bd8dc(&local_268,local_2c0);
      }
    }
    cVar8 = FUN_1001b8428(local_2f0);
    puVar7 = puStack_260;
    if (cVar8 == '\0') {
      if (puStack_260 < local_258) {
        FUN_1001b7a5c(puStack_260,local_2f0);
        puStack_260 = puVar7 + 2;
      }
      else {
        puStack_260 = (ulong *)FUN_1001bd8dc(&local_268,local_2f0);
      }
    }
    cVar8 = FUN_1001b8428(local_2e0);
    puVar7 = puStack_260;
    if (cVar8 == '\0') {
      if (puStack_260 < local_258) {
        FUN_1001b7a5c(puStack_260,local_2e0);
        puStack_260 = puVar7 + 2;
      }
      else {
        puStack_260 = (ulong *)FUN_1001bd8dc(&local_268,local_2e0);
      }
    }
    if (puStack_260 == local_268) {
      FUN_1001b7b04(local_318,"");
    }
    else {
      local_288 = (undefined8 **)0x0;
      uStack_280 = 0;
      local_278 = 0;
      FUN_1001c334a(local_248,0x12c0011);
      uVar5 = uStack_280;
      if (uStack_280 < local_278) {
        FUN_1001b7a88(uStack_280,local_248);
        uStack_280 = uVar5 + 0x10;
      }
      else {
        uStack_280 = FUN_1001de980(&local_288,local_248);
      }
      FUN_1001b7a50(local_248);
      FUN_1001c334a(local_248,0x12c0012);
      uVar5 = uStack_280;
      if (uStack_280 < local_278) {
        FUN_1001b7a88(uStack_280,local_248);
        uStack_280 = uVar5 + 0x10;
      }
      else {
        uStack_280 = FUN_1001de980(&local_288,local_248);
      }
      FUN_1001b7a50(local_248);
      FUN_1001c334a(local_248,0x12c0013);
      uVar5 = uStack_280;
      if (uStack_280 < local_278) {
        FUN_1001b7a88(uStack_280,local_248);
        uStack_280 = uVar5 + 0x10;
      }
      else {
        uStack_280 = FUN_1001de980(&local_288,local_248);
      }
      FUN_1001b7a50(local_248);
      FUN_1001bc178(local_248,&local_288,&local_268);
      FUN_1001b80b2(local_2d0,local_248);
      FUN_1001b7a50(local_248);
      if (local_474 != 0) {
        FUN_1001c334a(local_298,0x12c0007);
        FUN_1001b90b6(local_378,(long)local_474);
        FUN_1001bbec4(local_248,local_298,local_378);
        FUN_1001bbcfe(local_2d0,local_248);
        FUN_1001b7a50(local_248);
        FUN_1001b7a50(local_378);
        FUN_1001b7a50(local_298);
      }
      FUN_1001b7a88(local_318,local_2d0);
      local_248[0] = (ulong **)&local_288;
      FUN_1001370f4();
    }
    local_288 = &local_268;
    FUN_1001370f4();
    FUN_1001b7a50(local_2e0);
    FUN_1001b7a50(local_2f0);
    FUN_1001b7a50(local_2c0);
    FUN_1001b7a50(local_2d0);
    FUN_1001b80b2(local_308,local_318);
    puVar13 = local_318;
  }
  FUN_1001b7a50(puVar13);
  uVar19 = FUN_1001b8336(local_308);
  FUN_1001bb630(local_3d0,local_3c0,local_338,uVar19);
  FUN_1001b7a50(local_308);
  FUN_1001b7a50(local_368);
  FUN_1001b7a50(local_348);
  FUN_1001b7a50(local_358);
  FUN_1001b7a50(local_3c0);
  local_2a0 = local_3d0;
  FUN_1001bb41a(local_2a0,&local_238);
  lVar11 = *(long *)(param_1 + 0x18);
  local_328 = *(undefined8 *)(lVar11 + 0x150);
  plStack_320 = *(long **)(lVar11 + 0x158);
  if (*(long *)(lVar11 + 0x158) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(lVar11 + 0x158) + 8);
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  iVar9 = FUN_1001ceb3c(&local_328,0x7570726d,*(undefined8 *)(lVar10 + 0x200),
                        *(undefined8 *)(lVar10 + 0x208),&local_238);
  if (plStack_320 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_320 + 1;
    lVar11 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plStack_320 + 0x10))(plStack_320);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (iVar9 != 0) {
    FUN_1004ac2b6(*(undefined8 *)(param_1 + 0x18),0,iVar9,0);
  }
  FUN_1001b7a50(local_3d0);
  if (local_2b0 == 0) {
LAB_1004b8c63:
    lVar10 = *(long *)(param_1 + 0x13a8);
    if (lVar10 == -1) goto LAB_1004b8c87;
    lVar11 = *(long *)(param_1 + 0x13c0);
  }
  else {
    iVar9 = *(int *)(lVar10 + 0x140);
    if (iVar9 == 0x6e6f7469) {
      lVar10 = *(long *)(param_1 + 0x18);
      if (*(code **)(lVar10 + 0x80) != (code *)0x0) {
        (**(code **)(lVar10 + 0x80))(lVar10,0x64617461,local_2b0,uVar14,lVar10 + 0x90);
      }
      goto LAB_1004b8c63;
    }
    if (iVar9 == 0x6d656d72) {
      if (*(long *)(param_1 + 0xb40) == 0) {
        uVar19 = FUN_1001cc310();
        cVar8 = _os_log_type_enabled(uVar19,0x10);
        if (cVar8 != '\0') {
          local_238 = 0x8220202;
          local_234 = "Assertion failure";
          local_22c = 0x822;
          local_22a = "inLeafInfo->downloadedData != __null";
          __os_log_error_impl(0x100000000,uVar19,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
        }
        FUN_1001782e9(0,0);
        goto LAB_1004b8c87;
      }
      FUN_1001710c1(*(long *)(param_1 + 0xb40),local_2b0,uVar14);
      goto LAB_1004b8c63;
    }
    if (iVar9 != 0x66696c65) goto LAB_1004b8c63;
    if ((char)local_2f4 == '\0') {
      FUN_1004b930f(param_1,local_2b0,local_2a4,1,0);
      goto LAB_1004b8c63;
    }
    if (*(long *)(param_1 + 0xb30) == 0) {
      if (0x1ffff < local_2a4) goto LAB_1004b8c09;
LAB_1004b8bc6:
      lVar10 = FUN_100170ea9(DAT_1008c4d90,0x20000);
      *(long *)(param_1 + 0xb30) = lVar10;
      if (lVar10 != 0) goto LAB_1004b8be9;
      FUN_1004ac2b6(*(undefined8 *)(param_1 + 0x18),0,0xffffff94,0);
      goto LAB_1004b8c63;
    }
    lVar10 = FUN_100170ef7();
    if (lVar10 + uVar14 < 0x20000) {
      lVar10 = *(long *)(param_1 + 0xb30);
      if (lVar10 == 0) goto LAB_1004b8bc6;
LAB_1004b8be9:
      FUN_1001710c1(lVar10,local_2b0,uVar14);
    }
    else {
      if (lVar10 != 0) {
        FUN_1004b620b(param_1,0);
      }
LAB_1004b8c09:
      FUN_1004b930f(param_1,local_2b0,local_2a4,1,1);
    }
    lVar10 = *(long *)(param_1 + 0x13a8);
    if (lVar10 == -1) goto LAB_1004b8c87;
    lVar11 = *(long *)(param_1 + 0x13c0);
    if (lVar10 <= lVar11) {
      FUN_1004b620b(param_1,1);
      goto LAB_1004b8c63;
    }
  }
  if (lVar10 <= lVar11) {
    *(undefined1 *)(*(long *)(param_1 + 0x18) + 0x178) = 1;
  }
LAB_1004b8c87:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

