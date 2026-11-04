// name: FUN_1005826bd
// address: 1005826bd

ulong FUN_1005826bd(int *param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  double dVar4;
  undefined3 uVar5;
  long *plVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  char cVar11;
  undefined1 uVar12;
  char cVar13;
  byte bVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  undefined8 uVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  undefined8 uVar24;
  char *pcVar25;
  uint uVar26;
  int *piVar27;
  int iVar28;
  uint uVar29;
  bool bVar30;
  undefined8 local_588;
  undefined8 uStack_580;
  double local_488;
  ulong local_480;
  long local_478;
  long *local_470;
  undefined **local_468;
  long *local_460;
  long local_458;
  long *local_450;
  undefined8 local_448;
  ulong local_440;
  long local_438;
  long *plStack_430;
  undefined8 local_428;
  undefined8 uStack_420;
  char *local_418;
  ulong local_410;
  undefined8 local_408;
  undefined8 uStack_400;
  long local_3f0;
  ulong local_3e8;
  undefined8 local_3e0;
  undefined8 local_3d8;
  undefined8 local_3d0;
  undefined8 local_3c8;
  undefined1 local_3b9;
  ulong local_3b8;
  int *local_3b0;
  uint local_3a4;
  char local_39d;
  uint local_39c;
  undefined4 local_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined2 uStack_38c;
  undefined2 uStack_38a;
  undefined2 uStack_388;
  undefined4 uStack_386;
  undefined2 local_382;
  char *local_380;
  undefined2 local_378;
  undefined4 local_376;
  undefined2 local_372;
  char *local_370;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined1 local_200;
  undefined1 uStack_1ff;
  undefined1 local_1fe;
  undefined1 uStack_1fd;
  undefined2 local_1fc;
  undefined2 local_1fa;
  undefined6 uStack_1f8;
  undefined2 uStack_1f2;
  undefined8 uStack_1f0;
  undefined4 local_1e8;
  undefined1 local_1e0 [400];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (int *)0x0) {
LAB_10058289f:
    uVar19 = FUN_1001cc310();
    cVar11 = _os_log_type_enabled(uVar19,0x10);
    if (cVar11 != '\0') {
      local_208 = 0x8220202;
      uStack_204 = 0x7a0a90;
      local_200 = 1;
      uStack_1ff = 0;
      local_1fe = 0;
      uStack_1fd = 0;
      local_1fc = 0x822;
      local_1fa = 0xa159;
      uStack_1f8 = 0x1007b;
      __os_log_error_impl(0x100000000,uVar19,0x10,"%{public}s: (%{public}s)",&local_208,0x16);
    }
    FUN_1001782e9(0,0);
    uVar20 = 0;
    goto LAB_100583e3c;
  }
  if (*param_1 != 0x706c7374) {
    uVar19 = FUN_1001cc310();
    cVar11 = _os_log_type_enabled(uVar19,0x10);
    if (cVar11 != '\0') {
      local_208 = 0x8220202;
      uStack_204 = 0x7ab58c;
      local_200 = 1;
      uStack_1ff = 0;
      local_1fe = 0;
      uStack_1fd = 0;
      local_1fc = 0x822;
      local_1fa = 0x2d50;
      uStack_1f8 = 0x1007b;
      __os_log_error_impl(0x100000000,uVar19,0x10,"%{public}s: (%{public}s)",&local_208,0x16);
    }
    cVar11 = FUN_1001782e9(0,1);
    if (cVar11 == '\0') goto LAB_10058289f;
  }
  local_408 = 0;
  uStack_400 = (long *)0x0;
  local_438 = 0;
  plStack_430 = (long *)0x0;
  local_208 = 0x844f40;
  uStack_204 = 1;
  local_200 = 0;
  uStack_1ff = 0;
  local_1fe = 0;
  uStack_1f8 = 0;
  uStack_1f2 = 0;
  uStack_1f0 = 0;
  local_1e8 = 0;
  local_50 = 0;
  uStack_48 = 0;
  FUN_1001c62d9(local_1e0,400);
  local_488 = (double)FUN_1001ebd46();
  if ((*(byte *)(param_1 + 0xa6) & 1) == 0) {
    uVar19 = FUN_1001cc310();
    cVar11 = _os_log_type_enabled(uVar19,0x10);
    if (cVar11 != '\0') {
      local_398 = 0x8220202;
      uStack_394 = 0x7a0a90;
      uStack_390 = 1;
      uStack_38c = 0x822;
      uStack_38a = 0x9c5e;
      uStack_388 = 0x7e;
      uStack_386 = 1;
      __os_log_error_impl(0x100000000,uVar19,0x10,"%{public}s: (%{public}s)",&local_398,0x16);
    }
    FUN_1001782e9(0,0);
  }
  local_448 = *(undefined8 *)(param_1 + 2);
  uVar12 = FUN_100482222(param_1,1);
  local_3b9 = FUN_1003166a1(local_448,uVar12);
  plVar6 = uStack_400;
  local_408 = 0;
  uStack_400 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    lVar21 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar21 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar6 = plStack_430;
  local_438 = 0;
  plStack_430 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    lVar21 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar21 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      std::__shared_weak_count::__release_weak();
    }
  }
  uVar20 = FUN_10048604a(local_448);
  if (uVar20 == 0) {
    uVar19 = FUN_1001cc310();
    cVar11 = _os_log_type_enabled(uVar19,0x10);
    if (cVar11 != '\0') {
      local_398 = 0x8220202;
      uStack_394 = 0x7a0a90;
      uStack_390 = 1;
      uStack_38c = 0x822;
      uStack_38a = 0x9fc7;
      uStack_388 = 0x7c;
      uStack_386 = 1;
      __os_log_error_impl(0x100000000,uVar19,0x10,"%{public}s: (%{public}s)",&local_398,0x16);
    }
    uVar20 = 0;
    FUN_1001782e9(0,0);
    goto LAB_100583dd2;
  }
  if (*(char *)((long)param_1 + 0x2a1) == '\0') {
    uVar26 = param_1[0xb1];
    if (uVar26 == 0) {
      uVar19 = FUN_1001cc310();
      cVar11 = _os_log_type_enabled(uVar19,0x10);
      if (cVar11 != '\0') {
        local_398 = 0x8220202;
        uStack_394 = 0x7a0a90;
        uStack_390 = 1;
        uStack_38c = 0x822;
        uStack_38a = 0x9ca5;
        uStack_388 = 0x7e;
        uStack_386 = 1;
        __os_log_error_impl(0x100000000,uVar19,0x10,"%{public}s: (%{public}s)",&local_398,0x16);
      }
      FUN_1001782e9(0,0);
      uVar26 = param_1[0xb1];
    }
    cVar11 = *(char *)((long)param_1 + 0x2a6);
    local_3e8 = 0;
    local_440 = 0;
    local_3a4 = 0;
    local_3e0 = 0;
    local_3d8 = 0;
    local_3d0 = 0;
    goto LAB_100582b7c;
  }
  switch((char)param_1[0xaf]) {
  case '\0':
    uVar26 = param_1[0xae] * 0x3c;
    break;
  case '\x01':
    uVar19 = FUN_1001eafe3();
    if ((char)uVar19 == '\0') {
      local_440 = (ulong)(uint)param_1[0xae] << 0x14;
    }
    else {
      local_440 = (ulong)(uint)param_1[0xae] * 1000000;
    }
    goto LAB_100582b02;
  case '\x02':
    local_3a4 = param_1[0xae];
    local_3d0 = CONCAT71((uint7)(uint3)(local_3a4 >> 8),1);
    local_3e8 = 0;
    local_440 = 0;
    local_3e0 = 0;
    local_3d8 = 0;
    goto LAB_100582b36;
  case '\x03':
    uVar26 = param_1[0xae] * 0xe10;
    break;
  case '\x04':
    uVar19 = FUN_1001eafe3();
    if ((char)uVar19 == '\0') {
      local_440 = (ulong)(uint)param_1[0xae] << 0x1e;
    }
    else {
      local_440 = (ulong)(uint)param_1[0xae] * 1000000000;
    }
LAB_100582b02:
    local_3d8 = CONCAT71((int7)((ulong)uVar19 >> 8),1);
    local_3e8 = 0;
    local_3e0 = 0;
    goto LAB_100582b2b;
  default:
    local_3e8 = 0;
    local_3e0 = 0;
    goto LAB_100582a97;
  }
  local_3e8 = (ulong)uVar26;
  local_3e0 = CONCAT71((uint7)(uint3)(uVar26 >> 8),1);
LAB_100582a97:
  local_440 = 0;
  local_3d8 = 0;
LAB_100582b2b:
  local_3a4 = 0;
  local_3d0 = 0;
LAB_100582b36:
  FUN_10031d3e5(param_1[0xb0],&local_398);
  uVar17 = local_3c8._4_4_;
  uVar26 = param_1[0xb0];
  if (*(char *)((long)param_1 + 0x2a5) == '\0') {
    cVar11 = (char)uStack_394;
    if (*(char *)((long)param_1 + 0x2a2) != '\0') goto LAB_100582b7c;
    local_3c8 = (ulong)local_3c8._4_4_ << 0x20;
    if ((uVar26 < 0x37) && ((0x4600002c400800U >> ((ulong)uVar26 & 0x3f) & 1) != 0)) {
      local_3c8 = CONCAT44(uVar17,(int)CONCAT71((uint7)(uint3)(uVar26 >> 8),1));
    }
  }
  else {
    cVar11 = (char)uStack_394 == '\0';
LAB_100582b7c:
    local_3c8 = (ulong)local_3c8._4_4_ << 0x20;
  }
  if ((*(char *)((long)param_1 + 0x2a2) == '\0') || (*(long *)(param_1 + 0xaa) == 0)) {
    local_3f0 = 0;
  }
  else {
    FUN_1001cf1a0();
    local_3f0 = *(long *)(param_1 + 0xaa);
  }
  bVar30 = true;
  local_39c = 0x70;
  local_3b0 = param_1;
  if ((short)param_1[4] == 0x3d) {
    cVar11 = '\x01';
LAB_100582c32:
    local_418 = (char *)((long)local_3b0 + 0x2a3);
    if (*(char *)((long)local_3b0 + 0x2a3) != '\0') {
      local_3b8 = (ulong)local_39c;
      goto LAB_100582c61;
    }
    local_3b8 = (ulong)local_39c;
    if (local_39c == 2) {
      FUN_10015805a(&local_588);
      local_588 = &PTR_FUN_100854ac0;
      FUN_100360d56(&local_398,&local_588,PTR_cf_smartShuffleOptions_100854aa8);
      uVar12 = FUN_10015829e(&local_588,PTR_cf_keepAlbumsTogether_100854a78);
      FUN_10037f23e(&local_428,uVar20,0,uVar12,0,&local_398);
      plVar6 = uStack_400;
      uStack_400 = uStack_420;
      local_408 = local_428;
      local_428 = 0;
      uStack_420 = (long *)0x0;
      if (plVar6 != (long *)0x0) {
        LOCK();
        plVar1 = plVar6 + 1;
        lVar21 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar21 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (uStack_420 != (long *)0x0) {
        LOCK();
        plVar6 = uStack_420 + 1;
        lVar21 = *plVar6;
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (lVar21 == 0) {
          (**(code **)(*uStack_420 + 0x10))(uStack_420);
          std::__shared_weak_count::__release_weak();
        }
      }
      FUN_10015811a(&local_588);
      local_39c = 2;
      local_3b8 = 2;
      goto LAB_100583473;
    }
LAB_100582ebd:
    local_588 = (undefined **)0x0;
    uStack_580 = (long *)0x0;
    local_428 = 0;
    uStack_420 = (long *)0x0;
    FUN_10037f0ce(&local_398,uVar20,0x1a,0,1);
    uVar10 = uStack_390;
    uVar9 = uStack_394;
    uVar8 = local_398;
    plVar6 = uStack_580;
    uVar7 = CONCAT22(uStack_38a,uStack_38c);
    local_398 = 0;
    uStack_394 = 0;
    uStack_390 = 0;
    uStack_38c = 0;
    uStack_38a = 0;
    local_588 = (undefined **)CONCAT44(uVar9,uVar8);
    uStack_580 = (long *)CONCAT44(uVar7,uVar10);
    if (plVar6 != (long *)0x0) {
      LOCK();
      plVar1 = plVar6 + 1;
      lVar21 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar21 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        std::__shared_weak_count::__release_weak();
      }
    }
    plVar6 = (long *)CONCAT26(uStack_38a,CONCAT24(uStack_38c,uStack_390));
    if (plVar6 != (long *)0x0) {
      LOCK();
      plVar1 = plVar6 + 1;
      lVar21 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar21 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (local_588 != (undefined **)0x0) {
      if (*(char *)((long)local_588 + 0xc) == '\0') {
        local_398 = 0;
        uStack_394 = 0;
        uStack_390 = 0;
        uStack_38c = 0;
        uStack_38a = 0;
        FUN_100217418(&local_588,&local_398);
        FUN_10021e316(&local_398);
      }
      else {
        FUN_10037ede2(uVar20,0x1a,0);
      }
    }
    FUN_10037f0ce(&local_398,uVar20,0x1b,0,1);
    uVar10 = uStack_390;
    uVar9 = uStack_394;
    uVar8 = local_398;
    plVar6 = uStack_420;
    uVar7 = CONCAT22(uStack_38a,uStack_38c);
    local_398 = 0;
    uStack_394 = 0;
    uStack_390 = 0;
    uStack_38c = 0;
    uStack_38a = 0;
    local_428 = CONCAT44(uVar9,uVar8);
    uStack_420 = (long *)CONCAT44(uVar7,uVar10);
    if (plVar6 != (long *)0x0) {
      LOCK();
      plVar1 = plVar6 + 1;
      lVar21 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar21 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        std::__shared_weak_count::__release_weak();
      }
    }
    plVar6 = (long *)CONCAT26(uStack_38a,CONCAT24(uStack_38c,uStack_390));
    if (plVar6 != (long *)0x0) {
      LOCK();
      plVar1 = plVar6 + 1;
      lVar21 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar21 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (local_428 != 0) {
      if (*(char *)(local_428 + 0xc) == '\0') {
        local_398 = 0;
        uStack_394 = 0;
        uStack_390 = 0;
        uStack_38c = 0;
        uStack_38a = 0;
        FUN_100217418(&local_428,&local_398);
        FUN_10021e316(&local_398);
      }
      else {
        FUN_10037ede2(uVar20,0x1b,0);
      }
    }
    if (bVar30) {
      FUN_1002f90cd(&local_478,*(undefined8 *)(local_3b0 + 2));
      if (local_478 == 0) {
        uVar19 = FUN_1001cc310();
        cVar13 = _os_log_type_enabled(uVar19,0x10);
        if (cVar13 != '\0') {
          local_398 = 0x8220202;
          uStack_394 = 0x7a0a90;
          uStack_390 = 1;
          uStack_38c = 0x822;
          uStack_38a = 0x9cc8;
          uStack_388 = 0x7e;
          uStack_386 = 1;
          __os_log_error_impl(0x100000000,uVar19,0x10,"%{public}s: (%{public}s)",&local_398,0x16);
        }
        bVar30 = true;
        FUN_1001782e9(0,0);
      }
      else if ((local_39c == 1) && (cVar11 == '\0')) {
        FUN_100203686(&local_408,&local_478);
        bVar30 = false;
      }
      else {
        FUN_10037b356(&local_398,local_478);
        FUN_100217418(&local_408,&local_398);
        FUN_10021e316(&local_398);
        bVar30 = false;
        FUN_10037aa86(local_408,local_3b0,local_39c);
      }
      if (local_470 != (long *)0x0) {
        LOCK();
        plVar6 = local_470 + 1;
        lVar21 = *plVar6;
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (lVar21 == 0) {
          (**(code **)(*local_470 + 0x10))(local_470);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (local_478 != 0) goto LAB_10058331d;
    }
    else {
      FUN_10037f0ce(&local_398,uVar20,local_39c,0,0);
      uVar10 = uStack_390;
      uVar9 = uStack_394;
      uVar8 = local_398;
      plVar6 = uStack_400;
      uVar7 = CONCAT22(uStack_38a,uStack_38c);
      local_398 = 0;
      uStack_394 = 0;
      uStack_390 = 0;
      uStack_38c = 0;
      uStack_38a = 0;
      local_408 = CONCAT44(uVar9,uVar8);
      uStack_400 = (long *)CONCAT44(uVar7,uVar10);
      if (plVar6 != (long *)0x0) {
        LOCK();
        plVar1 = plVar6 + 1;
        lVar21 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar21 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
          std::__shared_weak_count::__release_weak();
        }
      }
      plVar6 = (long *)CONCAT26(uStack_38a,CONCAT24(uStack_38c,uStack_390));
      if (plVar6 != (long *)0x0) {
        LOCK();
        plVar1 = plVar6 + 1;
        lVar21 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar21 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
          std::__shared_weak_count::__release_weak();
        }
      }
LAB_10058331d:
      if (local_588 != (undefined **)0x0) {
        local_468 = local_588;
        local_460 = uStack_580;
        if (uStack_580 != (long *)0x0) {
          LOCK();
          uStack_580[1] = uStack_580[1] + 1;
          UNLOCK();
        }
        FUN_10037ec25(uVar20,0x1a,0);
        if (local_460 != (long *)0x0) {
          LOCK();
          plVar6 = local_460 + 1;
          lVar21 = *plVar6;
          *plVar6 = *plVar6 + -1;
          UNLOCK();
          if (lVar21 == 0) {
            (**(code **)(*local_460 + 0x10))(local_460);
            std::__shared_weak_count::__release_weak();
          }
        }
      }
      if (local_428 == 0) {
        bVar30 = false;
      }
      else {
        local_458 = local_428;
        local_450 = uStack_420;
        if (uStack_420 != (long *)0x0) {
          LOCK();
          uStack_420[1] = uStack_420[1] + 1;
          UNLOCK();
        }
        FUN_10037ec25(uVar20,0x1b,0);
        bVar30 = false;
        if (local_450 != (long *)0x0) {
          LOCK();
          plVar6 = local_450 + 1;
          lVar21 = *plVar6;
          *plVar6 = *plVar6 + -1;
          UNLOCK();
          bVar30 = false;
          if (lVar21 == 0) {
            (**(code **)(*local_450 + 0x10))(local_450);
            std::__shared_weak_count::__release_weak();
          }
        }
      }
    }
    if (uStack_420 != (long *)0x0) {
      LOCK();
      plVar6 = uStack_420 + 1;
      lVar21 = *plVar6;
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (lVar21 == 0) {
        (**(code **)(*uStack_420 + 0x10))(uStack_420);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (uStack_580 != (long *)0x0) {
      LOCK();
      plVar6 = uStack_580 + 1;
      lVar21 = *plVar6;
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (lVar21 == 0) {
        (**(code **)(*uStack_580 + 0x10))(uStack_580);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (!bVar30) goto LAB_100583473;
    if (bVar30) goto LAB_100583cd6;
  }
  else {
    local_39c = 1;
    if ((*(byte *)(param_1 + 0xa6) & 2) != 0) goto LAB_100582c32;
    if (local_3f0 == 0) {
      bVar30 = false;
    }
    else {
      FUN_1002899cf(local_3f0,&local_398);
      cVar13 = FUN_10053916d(&local_398,0x28);
      bVar30 = cVar13 != '\0';
    }
    local_39c = uVar26;
    if (uVar26 != 0) goto LAB_100582c32;
    local_418 = (char *)((long)local_3b0 + 0x2a3);
    local_39c = 7;
    local_3b8 = 0;
    if (*(char *)((long)local_3b0 + 0x2a3) == '\0') goto LAB_100582ebd;
LAB_100582c61:
    piVar27 = local_3b0;
    lVar21 = FUN_10036a7b7(local_3b0);
    if (lVar21 == 0) {
      *(undefined1 *)(piVar27 + 0xa8) = 0;
LAB_100583cd6:
      bVar30 = true;
      uVar20 = 0;
    }
    else {
      FUN_10036a342(&local_398,uVar20,lVar21);
      uVar10 = uStack_390;
      uVar9 = uStack_394;
      uVar8 = local_398;
      plVar6 = uStack_400;
      uVar7 = CONCAT22(uStack_38a,uStack_38c);
      local_398 = 0;
      uStack_394 = 0;
      uStack_390 = 0;
      uStack_38c = 0;
      uStack_38a = 0;
      local_408 = CONCAT44(uVar9,uVar8);
      uStack_400 = (long *)CONCAT44(uVar7,uVar10);
      if (plVar6 != (long *)0x0) {
        LOCK();
        plVar1 = plVar6 + 1;
        lVar21 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar21 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
          std::__shared_weak_count::__release_weak();
        }
      }
      plVar6 = (long *)CONCAT26(uStack_38a,CONCAT24(uStack_38c,uStack_390));
      if (plVar6 != (long *)0x0) {
        LOCK();
        plVar1 = plVar6 + 1;
        lVar21 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar21 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (((local_408 == 0) ||
          ((uint)((ulong)(*(long *)(local_408 + 0x18) - *(long *)(local_408 + 0x10)) >> 3) < 10)) &&
         (*(long *)(piVar27 + 0xe8) != 0)) {
        FUN_100203686(&local_408,piVar27 + 0xe8);
      }
      local_398 = 0;
      uStack_394 = 0;
      uStack_390 = 0;
      uStack_38c = 0;
      uStack_38a = 0;
      FUN_100217418(piVar27 + 0xe8,&local_398);
      plVar6 = (long *)CONCAT26(uStack_38a,CONCAT24(uStack_38c,uStack_390));
      if (plVar6 != (long *)0x0) {
        LOCK();
        plVar1 = plVar6 + 1;
        lVar21 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar21 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
          std::__shared_weak_count::__release_weak();
        }
      }
LAB_100583473:
      piVar27 = local_3b0;
      if (local_408 == 0) {
        uVar19 = FUN_1001cc310();
        cVar11 = _os_log_type_enabled(uVar19,0x10);
        if (cVar11 != '\0') {
          pcVar25 = "sourceTable != nullptr";
LAB_100583f3e:
          uStack_38c = 0x822;
          uStack_390 = 1;
          uStack_394 = 0x7a0a90;
          local_398 = 0x8220202;
          uStack_38a = SUB82(pcVar25,0);
          uStack_388 = (undefined2)((ulong)pcVar25 >> 0x10);
          uStack_386 = (undefined4)((ulong)pcVar25 >> 0x20);
          __os_log_error_impl(0x100000000,uVar19,0x10,"%{public}s: (%{public}s)",&local_398,0x16);
        }
LAB_1005837db:
        uVar20 = 0;
        FUN_1001782e9(0,0);
        bVar30 = true;
      }
      else {
        FUN_1004848f8(local_3b0,0x16);
        FUN_1004848f8(piVar27,0x17);
        FUN_1004848f8(piVar27,0x44);
        FUN_1004848f8(piVar27,0x45);
        local_410 = CONCAT71(local_410._1_7_,(char)piVar27[0xa9]);
        if (local_3f0 != 0) {
          local_200 = 1;
          iVar15 = FUN_1001cf3f5();
          if ((iVar15 != -0x80) && (iVar15 != 0)) {
            uVar19 = FUN_1001cc310();
            cVar13 = _os_log_type_enabled(uVar19,0x10);
            if (cVar13 != '\0') {
              local_398 = 0x8220202;
              uStack_394 = 0x7a0a90;
              uStack_390 = 1;
              uStack_38c = 0x400;
              uStack_38a = (undefined2)iVar15;
              uStack_388 = (undefined2)((uint)iVar15 >> 0x10);
              __os_log_error_impl(0x100000000,uVar19,0x10,"%{public}s: err == (%d)",&local_398,0x12)
              ;
            }
          }
        }
        iVar15 = (int)((ulong)(*(long *)(local_408 + 0x18) - *(long *)(local_408 + 0x10)) >> 3);
        local_39d = cVar11;
        if (iVar15 != 0) {
          iVar28 = 0;
          local_480 = (ulong)((int)local_3b8 - 0x16);
          do {
            lVar21 = FUN_10037b3b0(local_408,iVar28);
            if (lVar21 != 0) {
              lVar2 = *(long *)(lVar21 + 8);
              lVar22 = FUN_10028a8b3(lVar2);
              if (lVar22 != 0) {
                if ((*(byte *)(lVar2 + 0xc5) & 0x10) == 0) {
                  cVar11 = FUN_10047669e(lVar2);
                  if (cVar11 != '\0') goto LAB_1005835ca;
LAB_100583591:
                  if (((local_3f0 != 0) &&
                      (cVar11 = FUN_10028935c(lVar21,local_3f0,&local_208), cVar11 == '\0')) ||
                     (((char)local_410 != '\0' && (cVar11 = FUN_1004746c0(lVar2), cVar11 != '\0'))))
                  goto LAB_1005835ca;
                  cVar11 = FUN_1004815af(lVar2);
                  uVar17 = 0;
                  uVar26 = 0;
                  if (cVar11 != '\0') goto LAB_1005835cd;
                  uVar26 = uVar17;
                  if ((char)local_3c8 == '\0') {
LAB_10058369f:
                    uVar20 = FUN_1004744bf(lVar2,0);
                    if ((((uVar20 & 0x1004000) == 0) || (uVar26 = 0, (short)local_3b0[4] == 6)) &&
                       ((-1 < (short)uVar20 ||
                        (((short)local_3b0[4] == 0x45 || (uVar26 = uVar17, (short)local_3b0[4] == 7)
                         ))))) {
                      uVar26 = (uint)((uVar20 & 0x61000) == 0);
                    }
                  }
                  else {
                    iVar16 = (int)local_3b8;
                    if (iVar16 < 0x31) {
                      if ((uint)local_480 < 8) {
                    /* WARNING: Could not recover jumptable at 0x000100583624. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                        uVar20 = (*(code *)(&DAT_1005841a8 +
                                           *(int *)(&DAT_1005841a8 + local_480 * 4)))();
                        return uVar20;
                      }
                      if (iVar16 == 0xb) {
                        iVar16 = *(int *)(lVar22 + 0x5c);
joined_r0x00010058368a:
                        uVar26 = 0;
                        if (iVar16 == 0) goto LAB_1005835cd;
                      }
                      goto LAB_10058369f;
                    }
                    if (iVar16 == 0x31) {
                      iVar16 = *(int *)(lVar2 + 0x150);
                      goto joined_r0x00010058368a;
                    }
                    if (iVar16 == 0x32) {
                      if (*(int *)(lVar2 + 0x158) != 0) goto LAB_10058369f;
                    }
                    else if (iVar16 != 0x36) goto LAB_10058369f;
                  }
                }
                else {
                  if ((short)local_3b0[4] == 4) goto LAB_100583591;
LAB_1005835ca:
                  uVar26 = 0;
                }
LAB_1005835cd:
                *(uint *)(lVar2 + 0xc) = uVar26;
              }
            }
            iVar28 = iVar28 + 1;
          } while (iVar15 != iVar28);
        }
        cVar11 = local_39d;
        piVar27 = local_3b0;
        if (local_3f0 != 0) {
          FUN_1001d1de8(local_3f0);
          iVar15 = FUN_1001cf778(local_3f0);
          if ((iVar15 != -0x80) && (iVar15 != 0)) {
            uVar19 = FUN_1001cc310();
            cVar13 = _os_log_type_enabled(uVar19,0x10);
            if (cVar13 != '\0') {
              local_398 = 0x8220202;
              uStack_394 = 0x7a0a90;
              uStack_390 = 1;
              uStack_38c = 0x400;
              uStack_38a = (undefined2)iVar15;
              uStack_388 = (undefined2)((uint)iVar15 >> 0x10);
              __os_log_error_impl(0x100000000,uVar19,0x10,"%{public}s: err == (%d)",&local_398,0x12)
              ;
            }
          }
        }
        local_3b8 = 0;
        if (*local_418 == '\0') {
          lVar21 = FUN_100485529(piVar27);
          if (lVar21 == 0) {
            local_3b8 = 0;
          }
          else {
            local_3b8 = 0;
            do {
              lVar2 = *(long *)(lVar21 + 8);
              if (lVar2 != 0) {
                if (*(int *)(lVar2 + 0xc) == 1) {
                  *(undefined4 *)(lVar2 + 0xc) = 2;
                }
                else {
                  local_3b8 = CONCAT71((int7)((ulong)lVar2 >> 8),1);
                  FUN_1004861af(lVar21,1);
                }
              }
              lVar21 = *(long *)(lVar21 + 0x18);
            } while (lVar21 != 0);
          }
        }
        if ((local_39c == 2) && (*(char *)((long)piVar27 + 0x2a1) != '\0')) {
          if (local_438 == 0) {
            FUN_10037f0ce(&local_398,piVar27,2,0,0);
            FUN_100217418(&local_438,&local_398);
            FUN_10021e316(&local_398);
            if (local_438 == 0) {
              uVar19 = FUN_1001cc310();
              cVar11 = _os_log_type_enabled(uVar19,0x10);
              if (cVar11 != '\0') {
                pcVar25 = "existingTable != nullptr";
                goto LAB_100583f3e;
              }
              goto LAB_1005837db;
            }
          }
          iVar15 = (int)((ulong)(*(long *)(local_438 + 0x18) - *(long *)(local_438 + 0x10)) >> 3);
          if (iVar15 == 0) goto LAB_100583a37;
          iVar28 = 0;
          local_39c = 0;
          local_410 = 0;
          local_3c8 = 0;
          uVar26 = 0;
          do {
            lVar21 = FUN_10037b3b0(local_438,iVar28);
            if (lVar21 != 0) {
              lVar2 = *(long *)(lVar21 + 8);
              uVar20 = FUN_10028a8b3(lVar2);
              if (uVar20 != 0) {
                if ((lVar2 == 0) || (*(int *)(lVar2 + 0xc) == 0)) {
                  if ((*(int *)(lVar21 + 0x5c) == 0) && (*local_418 == '\0')) {
                    uVar19 = FUN_1001cc310();
                    cVar11 = _os_log_type_enabled(uVar19,0x10);
                    if (cVar11 != '\0') {
                      local_398 = 0x8220202;
                      uStack_394 = 0x7a0a90;
                      uStack_390 = 1;
                      uStack_38c = 0x822;
                      uStack_38a = 0x9d12;
                      uStack_388 = 0x7e;
                      uStack_386 = 1;
                      __os_log_error_impl(0x100000000,uVar19,0x10,"%{public}s: (%{public}s)",
                                          &local_398,0x16);
                    }
                    FUN_1001782e9(0,0);
                  }
                }
                else {
                  if ((char)local_39c == '\0') {
                    uVar26 = *(uint *)(uVar20 + 100) / 1000 + uVar26;
                    local_3c8 = local_3c8 + *(long *)(uVar20 + 0x68);
                    uVar17 = (int)local_410 + 1;
                    local_410 = (ulong)uVar17;
                    uVar5 = (undefined3)(uVar17 >> 8);
                    uVar20 = (ulong)CONCAT31(uVar5,local_3a4 < uVar17);
                    if ((((byte)local_3e0 & (uint)local_3e8 < uVar26) != 0) ||
                       ((local_440 < local_3c8 & (byte)local_3d8) != 0)) goto LAB_10058399d;
                    bVar14 = local_3a4 < uVar17 & (byte)local_3d0;
                    uVar20 = (ulong)CONCAT31(uVar5,bVar14);
                    if (bVar14 != 0) goto LAB_10058399d;
                    local_39c = 0;
                  }
                  else {
LAB_10058399d:
                    local_39c = (uint)CONCAT71((int7)(uVar20 >> 8),1);
                    uVar19 = FUN_1004861af(lVar21,1);
                    local_3b8 = CONCAT71((int7)((ulong)uVar19 >> 8),1);
                  }
                  *(undefined4 *)(lVar2 + 0xc) = 0;
                }
              }
            }
            iVar28 = iVar28 + 1;
          } while (iVar15 != iVar28);
          uVar20 = local_3c8;
          uVar23 = local_410;
          cVar11 = local_39d;
          if ((char)local_39c == '\0') goto LAB_100583a3b;
LAB_100583c44:
          if ((char)local_3b8 == '\0') {
            piVar27 = local_3b0;
            cVar11 = '\0';
          }
          else {
LAB_100583c54:
            piVar27 = local_3b0;
            FUN_100314020(local_3b0);
LAB_100583c5c:
            FUN_10048ac76(piVar27,0);
            cVar11 = '\x01';
          }
        }
        else {
LAB_100583a37:
          uVar26 = 0;
          uVar20 = 0;
          uVar23 = 0;
LAB_100583a3b:
          uVar17 = (uint)((ulong)(*(long *)(local_408 + 0x18) - *(long *)(local_408 + 0x10)) >> 3);
          if (uVar17 == 0) goto LAB_100583c44;
          uVar29 = 0;
          local_418 = (char *)0x0;
          local_39c = 0;
          local_410 = uVar23;
          local_3c8 = uVar20;
          do {
            uVar18 = ~uVar29 + uVar17;
            if (cVar11 == '\0') {
              uVar18 = uVar29;
            }
            lVar21 = FUN_10037b3b0(local_408,uVar18);
            uVar20 = local_3b8;
            if (lVar21 != 0) {
              lVar2 = *(long *)(lVar21 + 8);
              uVar23 = FUN_10028a8b3(lVar2);
              uVar20 = local_3b8;
              if ((lVar2 != 0 && uVar23 != 0) && (iVar15 = *(int *)(lVar2 + 0xc), iVar15 != 0)) {
                if (*(char *)((long)local_3b0 + 0x2a1) == '\0') {
LAB_100583b6b:
                  if (iVar15 == 1) {
                    if ((char)local_418 == '\0') {
                      uVar23 = FUN_100314020(local_3b0);
                    }
                    local_418 = (char *)CONCAT71((int7)(uVar23 >> 8),1);
                    FUN_1003a790f(lVar21,0,local_3b0,0,0);
                    uVar20 = local_3b8;
                  }
                }
                else {
                  if ((char)local_39c == '\0') {
                    uVar26 = *(uint *)(uVar23 + 100) / 1000 + uVar26;
                    local_3c8 = local_3c8 + *(long *)(uVar23 + 0x68);
                    uVar18 = (int)local_410 + 1;
                    local_410 = (ulong)uVar18;
                    uVar5 = (undefined3)(uVar18 >> 8);
                    uVar23 = (ulong)CONCAT31(uVar5,local_3a4 < uVar18);
                    if ((((byte)local_3e0 & (uint)local_3e8 < uVar26) == 0) &&
                       ((local_440 < local_3c8 & (byte)local_3d8) == 0)) {
                      bVar14 = local_3a4 < uVar18 & (byte)local_3d0;
                      uVar23 = (ulong)CONCAT31(uVar5,bVar14);
                      if (bVar14 == 0) {
                        local_39c = 0;
                        goto LAB_100583b6b;
                      }
                    }
                  }
                  local_39c = (uint)CONCAT71((int7)(uVar23 >> 8),1);
                  if (iVar15 == 2) {
                    for (puVar3 = *(undefined8 **)(lVar2 + 0x68); puVar3 != (undefined8 *)0x0;
                        puVar3 = (undefined8 *)puVar3[10]) {
                      if ((int *)*puVar3 == local_3b0) {
                        uVar20 = CONCAT71((int7)(uVar20 >> 8),1);
                        FUN_1004861af(puVar3,1);
                      }
                    }
                  }
                }
              }
            }
            local_3b8 = uVar20;
            uVar29 = uVar29 + 1;
            cVar11 = local_39d;
          } while (uVar29 != uVar17);
          piVar27 = local_3b0;
          cVar11 = (char)local_418;
          if ((char)local_3b8 != '\0') {
            if ((char)local_418 == '\0') goto LAB_100583c54;
            goto LAB_100583c5c;
          }
        }
        FUN_10031c15f(local_448);
        FUN_1001cf5c9(local_3f0);
        if (cVar11 == '\0') {
          uVar19 = *(undefined8 *)(piVar27 + 2);
          uVar12 = FUN_100482222(piVar27,1);
          FUN_100316867(uVar19,uVar12,local_3b9);
        }
        else {
          FUN_100484df3(piVar27);
        }
        FUN_1005821b3(piVar27,0);
        if (cVar11 == '\0') goto LAB_100583cd6;
        FUN_1003142ca(piVar27);
        uVar20 = 1;
        bVar30 = false;
      }
    }
    if (DAT_1008c2618 != -1) {
      _dispatch_once(&DAT_1008c2618,&PTR___NSConcreteGlobalBlock_10086a960);
    }
    uVar19 = DAT_1008c2610;
    cVar11 = _os_log_type_enabled(DAT_1008c2610,1);
    if (cVar11 != '\0') {
      FUN_100486ef1(&local_588,local_3b0);
      uVar24 = FUN_1001b83ae(&local_588);
      dVar4 = (double)FUN_1001ebd46();
      local_380 = "true";
      if (bVar30) {
        local_380 = "false";
      }
      dVar4 = (double)(float)(dVar4 - local_488);
      local_376 = *(undefined4 *)(*(long *)(local_3b0 + 0x1e) + 0x18);
      local_398 = 0x8220502;
      uStack_394 = (undefined4)uVar24;
      uStack_390 = (undefined4)((ulong)uVar24 >> 0x20);
      uStack_38c = 0x800;
      uStack_38a = SUB82(dVar4,0);
      uStack_388 = (undefined2)((ulong)dVar4 >> 0x10);
      uStack_386 = (undefined4)((ulong)dVar4 >> 0x20);
      local_382 = 0x820;
      local_378 = 0x400;
      local_372 = 0x820;
      local_370 = "application";
      __os_log_impl(0x100000000,uVar19,1,
                    "spl> Updating smart playlist \"%{public}s\": elapsed = %f, changed = %s, num tracks = %d, context = %s"
                    ,&local_398,0x30);
      FUN_1001b7a50(&local_588);
    }
  }
LAB_100583dd2:
  FUN_100286d70(&local_208);
  if (plStack_430 != (long *)0x0) {
    LOCK();
    plVar6 = plStack_430 + 1;
    lVar21 = *plVar6;
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (lVar21 == 0) {
      (**(code **)(*plStack_430 + 0x10))(plStack_430);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (uStack_400 != (long *)0x0) {
    LOCK();
    plVar6 = uStack_400 + 1;
    lVar21 = *plVar6;
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (lVar21 == 0) {
      (**(code **)(*uStack_400 + 0x10))(uStack_400);
      std::__shared_weak_count::__release_weak();
    }
  }
LAB_100583e3c:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar20 & 0xff;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

