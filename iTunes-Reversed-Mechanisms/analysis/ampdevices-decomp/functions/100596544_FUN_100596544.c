// name: FUN_100596544
// address: 100596544

undefined8 FUN_100596544(int *param_1,long param_2,char param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_68;
  char *local_64;
  undefined2 local_5c;
  char *local_5a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 != 0) {
    if (*(int *)(param_2 + 8) != 0x616c6269) {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_68 = 0x8220202;
        local_64 = "Assertion failure (expected to be true)";
        local_5c = 0x822;
        local_5a = "inAlbumInfo->mMagic == kAlbumInfoMagic";
        __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: err == (%d)",&local_68,0x16);
      }
      cVar1 = FUN_1001782e9(0,1);
      if (cVar1 == '\0') goto LAB_1005965e0;
    }
    if (*(long *)(param_2 + 0x48) != 0) {
      if (param_3 == '\0') {
        FUN_1003a46a5(param_2,&local_68);
        uVar2 = FUN_100594f1e(param_1,&local_68,0,param_4);
      }
      else {
        uVar2 = 0xffffffce;
        if (((param_1 != (int *)0x0) && (*param_1 == 0x4f4c5354)) && (param_1[1] != 0)) {
          uVar2 = FUN_1005962c4(param_1,param_2,param_4);
        }
      }
      goto LAB_100596607;
    }
  }
LAB_1005965e0:
  uVar2 = FUN_1001cc310();
  cVar1 = _os_log_type_enabled(uVar2,0x10);
  if (cVar1 != '\0') {
    local_68 = 0x8220202;
    local_64 = "Assertion failure";
    local_5c = 0x822;
    local_5a = "AlbumInfoIsValid(albumInfo)";
    __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: err == (%d)",&local_68,0x16);
  }
  FUN_1001782e9(0,0);
  uVar2 = 0xffffffce;
LAB_100596607:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

