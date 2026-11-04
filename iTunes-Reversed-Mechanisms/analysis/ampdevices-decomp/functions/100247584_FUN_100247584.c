// name: FUN_100247584
// address: 100247584

undefined1 FUN_100247584(long param_1,uint param_2,uint param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 < 0x60) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_2a = "prefsSize >= sizeof(DulcimerPhotosFolderPrefsHeader)";
LAB_1002476af:
      local_2c = 0x822;
      local_34 = "Assertion failure";
      local_38 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
  }
  else if ((ulong)*(uint *)(param_1 + 0xc) + 0x60 == (ulong)param_2) {
    uVar3 = 1;
    if ((param_3 == 0) || (*(ushort *)(param_1 + 4) <= param_3)) goto LAB_100247671;
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_2a = "prefs->majorVersion <= supportedMajorVersion || supportedMajorVersion == 0";
      goto LAB_1002476af;
    }
  }
  else {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_2a = 
      "prefsSize == (sizeof(DulcimerPhotosFolderPrefsHeader) + prefs->syncFolderDataLength)";
      goto LAB_1002476af;
    }
  }
  uVar3 = 0;
  FUN_1001782e9(0,0);
LAB_100247671:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

