// name: FUN_100454c18
// address: 100454c18

ulong FUN_100454c18(long param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 != 0) {
    if (*(int *)(param_2 + 8) != 0x616c6269) {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure (expected to be true)";
        local_3c = 0x822;
        local_3a = "inAlbumInfo->mMagic == kAlbumInfoMagic";
        __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: err == (%d)",&local_48,0x16);
      }
      cVar1 = FUN_1001782e9(0,1);
      if (cVar1 == '\0') goto LAB_100454c83;
    }
    if (*(long *)(param_2 + 0x48) != 0) {
      *(long *)(param_1 + 0x18) = param_2;
      uVar3 = CONCAT71((int7)((ulong)param_2 >> 8),1);
      goto LAB_100454ca7;
    }
  }
LAB_100454c83:
  uVar2 = FUN_1001cc310();
  cVar1 = _os_log_type_enabled(uVar2,0x10);
  if (cVar1 != '\0') {
    local_48 = 0x8220202;
    local_44 = "Assertion failure";
    local_3c = 0x822;
    local_3a = "AlbumInfo::IsValid(inAlbum)";
    __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: err == (%d)",&local_48,0x16);
  }
  uVar3 = 0;
  FUN_1001782e9(0,0);
LAB_100454ca7:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

