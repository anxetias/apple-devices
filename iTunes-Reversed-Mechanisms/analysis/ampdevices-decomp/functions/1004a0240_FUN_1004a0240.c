// name: FUN_1004a0240
// address: 1004a0240

void FUN_1004a0240(long param_1)

{
  long lVar1;
  char cVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  long local_70 [2];
  cfstringStruct *local_60;
  undefined4 local_58 [4];
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(long *)(param_1 + 0x18) == 0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "mDataDict != nullptr";
      __os_log_error_impl(0x100000000,uVar4,0x10,"ch>      LIBRARY PREFS modifiedFields 0x%0.16llx",
                          &local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    *(undefined1 *)(param_1 + 0x170) = 1;
    FUN_1001a7b90(&local_60);
    FUN_10032f0f2(local_58);
    FUN_10032f0f2(&local_48);
    lVar1 = param_1 + 0x18;
    cVar2 = FUN_1001a92ae(lVar1,&local_60,&local_48);
    puVar5 = local_58;
    if (cVar2 != '\0') {
      puVar5 = &local_48;
    }
    FUN_1001a7a9e(local_70,puVar5);
    FUN_1001a85d4(&local_48);
    FUN_1001a85d4(local_58);
    FUN_1001ab240(&local_60);
    if (local_70[0] != 0) {
      pvVar3 = (void *)FUN_1001a8626(local_70);
      _memcpy((void *)(param_1 + 0x28),pvVar3,0xbe);
    }
    FUN_1001a85d4(local_70);
    FUN_1001aa318(local_70);
    FUN_10032f0f2(&local_48);
    local_60 = &cf_geniusCUID;
    FUN_1001a7b90(local_58);
    cVar2 = FUN_1001a921a(lVar1,local_58,local_70);
    FUN_1001ab240(local_58);
    if (cVar2 != '\0') {
      FUN_1001b8264(param_1 + 0xf0,local_70);
      *(byte *)(param_1 + 0xe8) = *(byte *)(param_1 + 0xe8) | 1;
    }
    local_60 = &cf_geniusOptedOutCUID;
    FUN_1001a7b90(local_58);
    cVar2 = FUN_1001a921a(lVar1,local_58,local_70);
    FUN_1001ab240(local_58);
    if (cVar2 != '\0') {
      FUN_1001b8264(param_1 + 0x100,local_70);
      *(byte *)(param_1 + 0xe8) = *(byte *)(param_1 + 0xe8) | 2;
    }
    local_60 = &cf_cloudMusicTroveID;
    FUN_1001a7b90(local_58);
    cVar2 = FUN_1001a921a(lVar1,local_58,local_70);
    FUN_1001ab240(local_58);
    if (cVar2 != '\0') {
      FUN_1001b8264(param_1 + 0x110,local_70);
      *(byte *)(param_1 + 0xe8) = *(byte *)(param_1 + 0xe8) | 4;
    }
    local_60 = &cf_geniusKeyHeader;
    FUN_1001a7b90(local_58);
    cVar2 = FUN_1001a92ae(lVar1,local_58,&local_48);
    FUN_1001ab240(local_58);
    if (cVar2 != '\0') {
      FUN_1001a7ad8(param_1 + 0x120,&local_48);
      *(byte *)(param_1 + 0xe8) = *(byte *)(param_1 + 0xe8) | 8;
    }
    local_60 = &cf_mediaFolderLocation;
    FUN_1001a7b90(local_58);
    cVar2 = FUN_1001a92ae(lVar1,local_58,&local_48);
    FUN_1001ab240(local_58);
    if (cVar2 != '\0') {
      FUN_1001a7ad8(param_1 + 0x130,&local_48);
      *(byte *)(param_1 + 0xe8) = *(byte *)(param_1 + 0xe8) | 0x10;
    }
    local_60 = &cf_mediaFolderURL;
    FUN_1001a7b90(local_58);
    cVar2 = FUN_1001a921a(lVar1,local_58,local_70);
    FUN_1001ab240(local_58);
    if (cVar2 != '\0') {
      FUN_1001b8264(param_1 + 0x140,local_70);
      *(byte *)(param_1 + 0xe8) = *(byte *)(param_1 + 0xe8) | 0x20;
    }
    local_60 = &cf_iTunesLibraryLocation;
    FUN_1001a7b90(local_58);
    cVar2 = FUN_1001a92ae(lVar1,local_58,&local_48);
    FUN_1001ab240(local_58);
    if (cVar2 != '\0') {
      FUN_1001a7ad8(param_1 + 0x150,&local_48);
      *(byte *)(param_1 + 0xe8) = *(byte *)(param_1 + 0xe8) | 0x40;
    }
    local_60 = &cf_cloudSupportedFeatures;
    FUN_1001a7b90(local_58);
    cVar2 = FUN_1001a921a(lVar1,local_58,local_70);
    FUN_1001ab240(local_58);
    if (cVar2 != '\0') {
      FUN_1001b8264(param_1 + 0x160,local_70);
      *(byte *)(param_1 + 0xe8) = *(byte *)(param_1 + 0xe8) | 0x80;
    }
    FUN_1001a85d4(&local_48);
    FUN_1001ab006(local_70);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

