// name: FUN_1004a0cdc
// address: 1004a0cdc

undefined8 FUN_1004a0cdc(long param_1,byte *param_2)

{
  byte bVar1;
  long lVar2;
  char cVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong *puVar7;
  undefined1 local_1e0 [16];
  ulong local_1d0;
  undefined1 local_1c8 [8];
  undefined1 local_1c0 [16];
  cfstringStruct *local_1b0;
  cfstringStruct *local_1a8;
  ulong local_1a0;
  undefined1 local_198 [184];
  byte local_e0;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  bVar1 = *param_2;
  lVar2 = *(long *)(param_1 + 8);
  FUN_10032f0f2(local_1c0);
  FUN_10049f3b8(&local_1a0);
  lVar4 = FUN_1002796f8(bVar1,0);
  local_1d0 = 0;
  FUN_1001bb78a(local_1e0,"media-domain:%u",bVar1);
  if (*(long *)(lVar2 + 0x20) == 0) {
    puVar7 = (ulong *)0x0;
  }
  else {
    if (((bVar1 & 1) == 0) && ((bVar1 & 2) == 0)) {
      local_1d0 = 0;
    }
    else {
      local_1d0 = FUN_1002bc5c8();
    }
    uVar5 = FUN_1003c5880();
    cVar3 = _os_log_type_enabled(uVar5,1);
    if (cVar3 != '\0') {
      local_58 = 0x8000100;
      uStack_54 = (undefined4)local_1d0;
      uStack_50 = (undefined4)(local_1d0 >> 0x20);
      __os_log_impl(0x100000000,uVar5,1,"pk>      LIBRARY PREFS modifiedFields 0x%0.8llx",&local_58,
                    0xc);
    }
    FUN_1002bbfbc(*(undefined8 *)(lVar2 + 0x20),bVar1,lVar4);
    puVar7 = &local_1d0;
  }
  local_1a0 = 0;
  FUN_10049f2e8();
  if (lVar4 == 0) {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = 0x7a0a90;
      uStack_50 = 1;
      local_4c = 0x822;
      local_4a = "inLibraryPrefs != nullptr";
      __os_log_error_impl(0x100000000,uVar5,0x10,"ch>      LIBRARY PREFS modifiedFields 0x%0.16llx",
                          &local_58,0x16);
    }
    FUN_1001782e9(0,0);
    goto LAB_1004a0fe8;
  }
  local_58 = 0;
  uStack_54 = 0;
  FUN_100384098(lVar4,puVar7,local_198);
  local_1a0 = local_1a0 | CONCAT44(uStack_54,local_58);
  if (puVar7 == (ulong *)0x0) {
    FUN_1001b8172(local_d8,lVar4 + 0x30);
    local_e0 = local_e0 | 1;
LAB_1004a0eac:
    FUN_1001b8172(local_c8,lVar4 + 0x40);
    local_e0 = local_e0 | 2;
    if (puVar7 != (ulong *)0x0) {
      uVar6 = *puVar7;
      goto LAB_1004a0ecb;
    }
    FUN_1001b8172(local_b8,lVar4 + 0x70);
    local_e0 = local_e0 | 4;
LAB_1004a0f0a:
    FUN_1001a7ad8(local_a8,lVar4 + 0x50);
    local_e0 = local_e0 | 8;
    if (puVar7 != (ulong *)0x0) {
      uVar6 = *puVar7;
      goto LAB_1004a0f29;
    }
    FUN_1001a7ad8(local_98,lVar4 + 0xd0);
    local_e0 = local_e0 | 0x10;
LAB_1004a0f6e:
    FUN_1001b8172(local_88,lVar4 + 0xe0);
    local_e0 = local_e0 | 0x20;
    if (puVar7 != (ulong *)0x0) {
      uVar6 = *puVar7;
      goto LAB_1004a0f8d;
    }
    FUN_1001a7ad8(local_78,lVar4 + 0xf0);
    local_e0 = local_e0 | 0x40;
  }
  else {
    uVar6 = *puVar7;
    if ((uVar6 & 0x40) != 0) {
      FUN_1001b8172(local_d8,lVar4 + 0x30);
      local_e0 = local_e0 | 1;
      uVar6 = *puVar7;
    }
    if ((char)uVar6 < '\0') goto LAB_1004a0eac;
LAB_1004a0ecb:
    if (((uint)uVar6 >> 0xc & 1) != 0) {
      FUN_1001b8172(local_b8,lVar4 + 0x70);
      local_e0 = local_e0 | 4;
      uVar6 = *puVar7;
    }
    if (((uint)uVar6 >> 8 & 1) != 0) goto LAB_1004a0f0a;
LAB_1004a0f29:
    if (((uint)uVar6 >> 0x1d & 1) != 0) {
      FUN_1001a7ad8(local_98,lVar4 + 0xd0);
      local_e0 = local_e0 | 0x10;
      uVar6 = *puVar7;
    }
    if (((uint)uVar6 >> 0x1e & 1) != 0) goto LAB_1004a0f6e;
LAB_1004a0f8d:
    if ((uVar6 >> 0x22 & 1) != 0) {
      FUN_1001a7ad8(local_78,lVar4 + 0xf0);
      local_e0 = local_e0 | 0x40;
      uVar6 = *puVar7;
    }
    if ((uVar6 >> 0x27 & 1) == 0) goto LAB_1004a0fe8;
  }
  FUN_1001b8172(local_68,lVar4 + 0x98);
  local_e0 = local_e0 | 0x80;
LAB_1004a0fe8:
  if (local_1a0 != 0) {
    FUN_1001a833e(&local_58,&local_1a0,0xc0,0);
    local_1a8 = &cf_fixed;
    FUN_1001a7b90(&local_1b0);
    FUN_1001a7b90(local_1c8,&local_58);
    FUN_1001a9c16(local_1c0,&local_1b0,local_1c8);
    FUN_1001ab240(local_1c8);
    FUN_1001ab240(&local_1b0);
    FUN_1001a85d4(&local_58);
  }
  if ((local_e0 & 1) != 0) {
    local_1b0 = &cf_geniusCUID;
    FUN_1001a7b90(&local_58);
    FUN_10021f1e0(local_1c0,&local_58,local_d8);
    FUN_1001ab240(&local_58);
  }
  if ((local_e0 & 2) != 0) {
    local_1b0 = &cf_geniusOptedOutCUID;
    FUN_1001a7b90(&local_58);
    FUN_10021f1e0(local_1c0,&local_58,local_c8);
    FUN_1001ab240(&local_58);
  }
  if ((local_e0 & 4) != 0) {
    local_1b0 = &cf_cloudMusicTroveID;
    FUN_1001a7b90(&local_58);
    FUN_10021f1e0(local_1c0,&local_58,local_b8);
    FUN_1001ab240(&local_58);
  }
  if ((local_e0 & 8) != 0) {
    local_1b0 = &cf_geniusKeyHeader;
    FUN_1001a7b90(&local_58);
    FUN_1001a7b90(&local_1a8,local_a8);
    FUN_1001a9c16(local_1c0,&local_58,&local_1a8);
    FUN_1001ab240(&local_1a8);
    FUN_1001ab240(&local_58);
  }
  if ((local_e0 & 0x10) != 0) {
    local_1b0 = &cf_mediaFolderLocation;
    FUN_1001a7b90(&local_58);
    FUN_1001a7b90(&local_1a8,local_98);
    FUN_1001a9c16(local_1c0,&local_58,&local_1a8);
    FUN_1001ab240(&local_1a8);
    FUN_1001ab240(&local_58);
  }
  if ((local_e0 & 0x20) != 0) {
    local_1b0 = &cf_mediaFolderURL;
    FUN_1001a7b90(&local_58);
    FUN_10021f1e0(local_1c0,&local_58,local_88);
    FUN_1001ab240(&local_58);
  }
  if ((local_e0 & 0x40) != 0) {
    local_1b0 = &cf_iTunesLibraryLocation;
    FUN_1001a7b90(&local_58);
    FUN_1001a7b90(&local_1a8,local_78);
    FUN_1001a9c16(local_1c0,&local_58,&local_1a8);
    FUN_1001ab240(&local_1a8);
    FUN_1001ab240(&local_58);
  }
  if ((char)local_e0 < '\0') {
    local_1b0 = &cf_cloudSupportedFeatures;
    FUN_1001a7b90(&local_58);
    FUN_10021f1e0(local_1c0,&local_58,local_68);
    FUN_1001ab240(&local_58);
  }
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  FUN_1001aaf14(&local_1b0,local_1e0);
  FUN_1001a7bac(&local_58,&local_1b0);
  FUN_1001a7b90(&local_1a8,local_1c0);
  FUN_1001a9c16(uVar5,&local_58,&local_1a8);
  FUN_1001ab240(&local_1a8);
  FUN_1001ab240(&local_58);
  FUN_1001ab006(&local_1b0);
  FUN_1001b7a50(local_1e0);
  FUN_1001b7a50(local_68);
  FUN_1001a85d4(local_78);
  FUN_1001b7a50(local_88);
  FUN_1001a85d4(local_98);
  FUN_1001a85d4(local_a8);
  FUN_1001b7a50(local_b8);
  FUN_1001b7a50(local_c8);
  FUN_1001b7a50(local_d8);
  FUN_1001a8fac(local_1c0);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return 0;
}

