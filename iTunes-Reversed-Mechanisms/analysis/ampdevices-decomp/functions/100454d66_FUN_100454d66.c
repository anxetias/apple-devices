// name: FUN_100454d66
// address: 100454d66

undefined8 FUN_100454d66(undefined8 param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  char cVar3;
  byte bVar4;
  char cVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined4 uVar8;
  long lVar9;
  ulong local_2d8;
  undefined8 uStack_2d0;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  byte local_2a0;
  undefined7 uStack_29f;
  undefined1 local_298 [16];
  undefined1 local_288 [16];
  undefined1 local_278 [16];
  undefined1 local_268 [16];
  undefined8 local_258;
  cfstringStruct *local_250;
  cfstringStruct *local_248 [2];
  undefined4 local_238;
  char *local_234;
  undefined2 local_22c;
  char *local_22a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar2 = *(long *)(param_2 + 0x18);
  if (lVar2 == 0) {
    uVar6 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar6,0x10);
    if (cVar5 != '\0') {
      local_238 = 0x8220202;
      local_234 = "Assertion failure";
      local_22c = 0x822;
      local_22a = "albumInfo != nullptr";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_238,0x16);
    }
    FUN_1001782e9(0,0);
    FUN_10032f0f2(param_1);
    goto LAB_100455508;
  }
  FUN_10045493e(&local_2d8);
  cVar5 = *(char *)(param_2 + 0x20);
  local_2b8 = 0;
  uStack_2b0 = 0;
  local_2c8 = 0;
  uStack_2c4 = 0;
  uStack_2c0 = 0;
  uStack_2bc = 0;
  local_2d8 = 0;
  uStack_2d0 = 0;
  local_2a8 = 0;
  FUN_100454900();
  if (*(int *)(lVar2 + 8) == 0x616c6269) {
LAB_100454e09:
    if (*(long *)(lVar2 + 0x48) == 0) goto LAB_100454ede;
    if (*(int *)(lVar2 + 8) == 0x616c6269) {
LAB_100454e5a:
      uStack_2d0 = *(undefined8 *)(lVar2 + 0x20);
      local_2c8 = *(undefined4 *)(lVar2 + 0x10);
      bVar4 = FUN_1003a2088(lVar2);
      uStack_2c4 = (undefined4)*(undefined8 *)(lVar2 + 0x30);
      uStack_2c0 = (undefined4)((ulong)*(undefined8 *)(lVar2 + 0x30) >> 0x20);
      if (*(int *)(lVar2 + 0x10) == 2) {
        local_2b8._0_2_ = CONCAT11(*(char *)(lVar2 + 0x108) != '\0',bVar4);
        uStack_2bc = 0;
      }
      else {
        local_2b8._0_2_ = (ushort)bVar4;
        uStack_2bc = 0;
        if (*(int *)(lVar2 + 0x10) == 4) {
          uStack_2bc = *(undefined4 *)(lVar2 + 0x100);
        }
      }
      uVar7 = local_2d8 | 1;
      if (cVar5 == '\0') {
        local_2b8._0_7_ = CONCAT16(*(undefined1 *)(lVar2 + 0xe6),(int6)local_2b8) & 0xff0000ffffffff
        ;
        local_2b8 = (ulong)(uint7)local_2b8;
        uStack_2b0 = *(undefined8 *)(lVar2 + 0xd0);
        local_2a8 = CONCAT44(*(undefined4 *)(lVar2 + 0x84),*(undefined4 *)(lVar2 + 0xe0));
        local_2d8 = local_2d8 | 0x37;
      }
      else {
        uVar1 = *(uint *)(param_2 + 0x24);
        if ((uVar1 & 8) != 0) {
          local_2b8._0_6_ = (uint6)(uint)local_2b8;
          uVar7 = local_2d8 | 3;
        }
        local_2d8 = uVar7;
        if ((uVar1 & 0x10) != 0) {
          local_2b8._0_7_ = CONCAT16(*(undefined1 *)(lVar2 + 0xe6),(uint6)local_2b8);
          local_2a8 = CONCAT44(*(undefined4 *)(lVar2 + 0x84),(undefined4)local_2a8);
          local_2d8 = uVar7 | 4;
        }
        if ((uVar1 & 1) != 0) {
          uStack_2b0 = *(undefined8 *)(lVar2 + 0xd0);
          local_2a8 = CONCAT44(local_2a8._4_4_,*(undefined4 *)(lVar2 + 0xe0));
          local_2d8 = local_2d8 | 0x30;
        }
        if ((uVar1 & 2) == 0) goto LAB_100455061;
      }
      local_2b8 = CONCAT17(*(undefined1 *)(lVar2 + 0xe4),(uint7)local_2b8);
      local_2d8 = local_2d8 | 8;
    }
    else {
      uVar6 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar6,0x10);
      if (cVar3 != '\0') {
        local_238 = 0x8220202;
        local_234 = "Assertion failure (expected to be true)";
        local_22c = 0x822;
        local_22a = "inAlbumInfo->mMagic == kAlbumInfoMagic";
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_238,0x16);
      }
      cVar3 = FUN_1001782e9(0,1);
      if ((cVar3 != '\0') && (*(long *)(lVar2 + 0x48) != 0)) goto LAB_100454e5a;
      uVar6 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar6,0x10);
      if (cVar3 != '\0') {
        local_238 = 0x8220202;
        local_234 = "Assertion failure";
        local_22c = 0x822;
        local_22a = "AlbumInfoIsValid(inAlbumInfo)";
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_238,0x16);
      }
      FUN_1001782e9(0,0);
    }
LAB_100455061:
    if (*(int *)(lVar2 + 8) != 0x616c6269) {
      uVar6 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar6,0x10);
      if (cVar3 != '\0') {
        local_238 = 0x8220202;
        local_234 = "Assertion failure (expected to be true)";
        local_22c = 0x822;
        local_22a = "inAlbumInfo->mMagic == kAlbumInfoMagic";
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_238,0x16);
      }
      cVar3 = FUN_1001782e9(0,1);
      if (cVar3 != '\0') goto LAB_10045509c;
LAB_1004551e7:
      uVar6 = FUN_1001cc310();
      cVar5 = _os_log_type_enabled(uVar6,0x10);
      if (cVar5 != '\0') {
        local_22a = "AlbumInfoIsValid(inAlbumInfo)";
        goto LAB_1004555fa;
      }
      goto LAB_100455204;
    }
LAB_10045509c:
    lVar9 = *(long *)(lVar2 + 0x48);
    if (lVar9 == 0) goto LAB_1004551e7;
    FUN_1001de8ee(lVar2 + 0xb8,&local_238);
    FUN_1001b8dfc(local_248,&local_238);
    FUN_1001b80b2(local_298,local_248);
    FUN_1001b7a50(local_248);
    if (*(int *)(lVar2 + 0x10) == 2) {
      lVar9 = lVar9 + 0x1cb0;
      FUN_1001ddc17(&local_238,lVar9,*(undefined4 *)(lVar2 + 0x100),0);
      FUN_1001b80b2(local_288,&local_238);
      FUN_1001b7a50(&local_238);
      uVar8 = 0;
      if (*(int *)(lVar2 + 0x10) == 2) {
        uVar8 = *(undefined4 *)(lVar2 + 0x104);
      }
      FUN_1001ddc17(&local_238,lVar9,uVar8,0);
      FUN_1001b80b2(local_278,&local_238);
      FUN_1001b7a50(&local_238);
    }
    local_2a0 = local_2a0 | 1;
    if ((cVar5 == '\0') || ((*(byte *)(param_2 + 0x24) & 1) != 0)) {
      FUN_1001a8c1c(local_248,lVar2 + 200);
      FUN_1001b7eb0(&local_238,local_248[0]);
      FUN_1001b80b2(local_268,&local_238);
      FUN_1001b7a50(&local_238);
      local_2a0 = local_2a0 | 2;
      FUN_1001ab006(local_248);
    }
  }
  else {
    uVar6 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar6,0x10);
    if (cVar3 != '\0') {
      local_238 = 0x8220202;
      local_234 = "Assertion failure (expected to be true)";
      local_22c = 0x822;
      local_22a = "inAlbumInfo->mMagic == kAlbumInfoMagic";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_238,0x16);
    }
    cVar3 = FUN_1001782e9(0,1);
    if (cVar3 != '\0') goto LAB_100454e09;
LAB_100454ede:
    uVar6 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar6,0x10);
    if (cVar5 != '\0') {
      local_22a = "AlbumInfo::IsValid(inAlbumInfo)";
LAB_1004555fa:
      local_22c = 0x822;
      local_234 = "Assertion failure";
      local_238 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_238,0x16);
    }
LAB_100455204:
    FUN_1001782e9(0,0);
  }
  FUN_10032f0f2(param_1);
  local_248[0] = &cf_pid;
  FUN_1001a7b90(&local_238);
  FUN_10021f04c(param_1,&local_238,&uStack_2d0);
  FUN_1001ab240(&local_238);
  local_248[0] = &cf_kind;
  FUN_1001a7b90(&local_238);
  local_250 = &cf_album;
  FUN_10021f0aa(param_1,&local_238);
  FUN_1001ab240(&local_238);
  if (local_2d8 != 0) {
    FUN_1001a833e(&local_238,&local_2d8,0x38,0);
    local_250 = &cf_fixed;
    FUN_1001a7b90(local_248);
    FUN_1001a7b90(&local_258,&local_238);
    FUN_1001a9c16(param_1,local_248,&local_258);
    FUN_1001ab240(&local_258);
    FUN_1001ab240(local_248);
    FUN_1001a85d4(&local_238);
  }
  local_248[0] = &cf_validFields;
  FUN_1001a7b90(&local_238);
  local_258 = CONCAT71(uStack_29f,local_2a0);
  FUN_10021f1aa(&local_250,&local_258,0);
  FUN_10021f14e(param_1,&local_238,&local_250);
  FUN_1001aae6c(&local_250);
  FUN_1001ab240(&local_238);
  if ((local_2a0 & 1) != 0) {
    cVar5 = FUN_1001b8428(local_298);
    if (cVar5 == '\0') {
      local_248[0] = &cf_name;
      FUN_1001a7b90(&local_238);
      FUN_10021f1e0(param_1,&local_238,local_298);
      FUN_1001ab240(&local_238);
    }
    cVar5 = FUN_1001b8428(local_288);
    if (cVar5 == '\0') {
      local_248[0] = &cf_trackArtist;
      FUN_1001a7b90(&local_238);
      FUN_10021f1e0(param_1,&local_238,local_288);
      FUN_1001ab240(&local_238);
    }
    cVar5 = FUN_1001b8428(local_278);
    if (cVar5 == '\0') {
      local_248[0] = &cf_albumArtist;
      FUN_1001a7b90(&local_238);
      FUN_10021f1e0(param_1,&local_238,local_278);
      FUN_1001ab240(&local_238);
    }
  }
  if ((local_2a0 & 2) != 0) {
    local_248[0] = &cf_artworkUUID;
    FUN_1001a7b90(&local_238);
    FUN_10021f1e0(param_1,&local_238,local_268);
    FUN_1001ab240(&local_238);
  }
  FUN_1001b7a50(local_268);
  FUN_1001b7a50(local_278);
  FUN_1001b7a50(local_288);
  FUN_1001b7a50(local_298);
LAB_100455508:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return param_1;
}

