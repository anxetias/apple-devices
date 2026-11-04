// name: FUN_1004d1c4c
// address: 1004d1c4c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004d1c4c(long param_1,undefined8 param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  uint *puVar6;
  long lVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined1 local_2e8 [72];
  ulong local_2a0;
  ulong local_298;
  ulong local_290;
  int local_288;
  int local_284;
  undefined1 local_280 [16];
  long local_270;
  undefined4 local_268;
  undefined8 local_264;
  undefined1 local_258 [512];
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (DAT_1008c75c0 != -1) {
    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
  }
  uVar8 = DAT_1008c75b8;
  cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
  if (cVar2 != '\0') {
    FUN_10017d520(&local_58,param_2);
    local_264 = FUN_1001b83ae(&local_58);
    local_268 = 0x8220102;
    __os_log_impl(0x100000000,uVar8,1,"sync> processing \"%{public}s\"",&local_268,0xc);
    FUN_1001b7a50(&local_58);
  }
  local_270 = 0;
  if (*(char *)(param_1 + 0x14cda) == '\0') {
    lVar5 = *(long *)(param_1 + 0x30);
  }
  else {
    lVar5 = FUN_1004e0c3f(param_1,1);
  }
  iVar3 = FUN_1004d4654(lVar5,local_258,&local_270);
  if (iVar3 == -0x80) {
LAB_1004d1e27:
    puVar6 = (uint *)0x0;
  }
  else {
    if (iVar3 != 0) {
      uVar8 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar8,0x10);
      if (cVar2 != '\0') {
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
        goto LAB_1004d1f8d;
      }
      goto LAB_1004d1e27;
    }
    iVar3 = FUN_10015ff27(param_2,local_2e8,0);
    if (iVar3 == -0x80) goto LAB_1004d1e84;
    if (iVar3 != 0) {
      uVar8 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar8,0x10);
      if (cVar2 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x400;
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
        __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
      goto LAB_1004d1e84;
    }
    iVar3 = FUN_100160c3f(local_2e8,&local_2a0);
    if (iVar3 == -0x80) goto LAB_1004d1e27;
    if (iVar3 != 0) {
      uVar8 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar8,0x10);
      if (cVar2 != '\0') {
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
LAB_1004d1f8d:
        local_4c = 0x400;
        local_54 = "Assertion failure";
        local_58 = 0x8220202;
        __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
      goto LAB_1004d1e27;
    }
    local_290 = 0x14;
    iVar4 = FUN_100160380(local_2e8,&local_290,&local_284);
    iVar3 = local_284;
    if (iVar4 == -0x80) goto LAB_1004d1e27;
    if (iVar4 != 0) {
      uVar8 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar8,0x10);
      if (cVar2 != '\0') {
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
        goto LAB_1004d1f8d;
      }
      goto LAB_1004d1e27;
    }
    if (local_284 == 0x6d68706f) {
      local_284 = 0x6f70686d;
      local_280 = pshufb(local_280,_DAT_100718a70);
    }
    else {
      if (local_284 != 0x6f70686d) {
        uVar8 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar8,0x10);
        if (cVar2 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "header.magic == kOTGPlaylistInfoFileHeaderMagic";
          __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
        goto LAB_1004d1e27;
      }
    }
    if (local_2a0 != (uint)(local_280._8_4_ * local_280._4_4_ + local_280._0_4_)) {
      uVar8 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar8,0x10);
      if (cVar2 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "header.headerSize + (header.recordSize * header.recordCount) == fileSize";
        __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
      goto LAB_1004d1e27;
    }
    local_288 = iVar3;
    FUN_100160772(local_2e8,local_280._0_4_);
    local_298 = 4;
    if (4 < (uint)local_280._4_4_) {
      local_298 = (ulong)(uint)local_280._4_4_;
    }
    puVar6 = (uint *)FUN_1001c63e1();
    if (puVar6 == (uint *)0x0) {
      uVar8 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar8,0x10);
      if (cVar2 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "recordBuffer != nullptr";
        __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
      goto LAB_1004d1e27;
    }
    if (local_280._8_4_ != 0) {
      uVar9 = 0;
      do {
        FUN_1001c62d9(puVar6,local_298);
        local_290 = (ulong)(uint)local_280._4_4_;
        iVar3 = FUN_100160380(local_2e8,&local_290,puVar6);
        if (iVar3 != 0) {
          if (iVar3 != -0x80) {
            uVar8 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar8,0x10);
            if (cVar2 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x400;
              local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
              __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_58,0x12);
            }
          }
          break;
        }
        uVar1 = *puVar6;
        if (local_288 == 0x6d68706f) {
          *puVar6 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
        }
        lVar7 = FUN_10031dca4(*(undefined8 *)(param_1 + 0x30));
        if (lVar7 != 0) {
          if (lVar5 != *(long *)(param_1 + 0x30)) {
            if (*(long *)(lVar7 + 0x188) == 0) {
              if (DAT_1008c7808 == '\0') {
                FUN_100538abf(&DAT_1008c77e8,&DAT_100753530);
                DAT_1008c7808 = '\x01';
              }
              _DAT_1008c77d8 = _DAT_1008c77f8;
              uRam00000001008c77e0 = uRam00000001008c7800;
              _DAT_1008c77c8 = _DAT_1008c77e8;
              uRam00000001008c77d0 = uRam00000001008c77f0;
              lVar7 = FUN_100306b8c(lVar5,lVar7,&DAT_1008c77c8,0,0,0);
            }
            else {
              lVar7 = FUN_100300729(lVar5);
            }
            if (lVar7 == 0) goto LAB_1004d2168;
          }
          FUN_100489a1f(local_270,lVar7,0);
        }
LAB_1004d2168:
        uVar9 = uVar9 + 1;
      } while (uVar9 < (uint)local_280._8_4_);
    }
  }
  if (local_270 != 0) {
    if (*(int *)(*(long *)(local_270 + 0x78) + 0x18) == 0) {
      FUN_100488d27(local_270,0,0);
    }
    else {
      FUN_100316c04();
      FUN_100436de8(param_1,local_270,0,0);
    }
    FUN_1002fbbfc(lVar5);
  }
  if (puVar6 != (uint *)0x0) {
    FUN_1001c64c1(puVar6);
  }
  FUN_10016013b(local_2e8);
LAB_1004d1e84:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

