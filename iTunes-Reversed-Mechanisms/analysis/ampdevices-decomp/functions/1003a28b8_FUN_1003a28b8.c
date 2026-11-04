// name: FUN_1003a28b8
// address: 1003a28b8

int FUN_1003a28b8(long param_1,undefined8 param_2,uint *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 != 0) {
    if (*(int *)(param_1 + 8) != 0x616c6269) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure (expected to be true)";
        local_3c = 0x822;
        local_3a = "inAlbumInfo->mMagic == kAlbumInfoMagic";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      cVar1 = FUN_1001782e9(0,1);
      if (cVar1 == '\0') goto LAB_1003a2979;
    }
    if ((*(long *)(param_1 + 0x48) != 0) && (*(int *)(param_1 + 0x10) == 2)) {
      iVar2 = FUN_1001de13c(*(long *)(param_1 + 0x48) + 0x1cb0,*(undefined4 *)(param_1 + 0x100),
                            param_2,param_3);
      if ((iVar2 != -0x80) && (iVar2 != 0)) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x400;
          local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_48,0x12);
        }
      }
      if (param_3 != (uint *)0x0) {
        *param_3 = *param_3 >> 1;
      }
      goto LAB_1003a29a1;
    }
  }
LAB_1003a2979:
  uVar3 = FUN_1001cc310();
  cVar1 = _os_log_type_enabled(uVar3,0x10);
  if (cVar1 != '\0') {
    local_48 = 0x8220202;
    local_44 = "Assertion failure";
    local_3c = 0x822;
    local_3a = "AlbumInfoIsValid(this) && (this->GetAlbumKind() == kAlbumKind_Other)";
    __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
  }
  FUN_1001782e9(0,0);
  iVar2 = -0x32;
LAB_1003a29a1:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

