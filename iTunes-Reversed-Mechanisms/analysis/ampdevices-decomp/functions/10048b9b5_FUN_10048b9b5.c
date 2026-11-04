// name: FUN_10048b9b5
// address: 10048b9b5

bool FUN_10048b9b5(int *param_1,ushort param_2)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (int *)0x0) {
LAB_10048ba28:
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "PlaylistIsValid(playlist)";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    bVar4 = false;
    FUN_1001782e9(0,0);
  }
  else {
    if (*param_1 != 0x706c7374) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure (expected to be true)";
        local_3c = 0x822;
        local_3a = "playlist->magic == \'plst\'";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      cVar1 = FUN_1001782e9(0,1);
      if (cVar1 == '\0') goto LAB_10048ba28;
    }
    uVar2 = (uint)param_2;
    if (uVar2 == 0x42f) {
      bVar4 = (*(ushort *)(param_1 + 4) & 0xfffe) == 10;
    }
    else {
      if (((0x46 < param_2) && (7 < uVar2 - 0x42f)) && (6 < uVar2 - 200)) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x822;
          local_3a = 
          "distinguishedPlaylistKind < kDistinguishedPlaylistKind_NumKinds || IsDefaultSmartPlaylistKind(distinguishedPlaylistKind) || ((distinguishedPlaylistKind>=kVirtualDistinguishedPlaylistKind_First) && (distinguishedPlaylistKind <=kVirtualDistinguishedPlaylistKind_Last))"
          ;
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
        FUN_1001782e9(0,0);
      }
      bVar4 = *(ushort *)(param_1 + 4) == param_2;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return bVar4;
}

