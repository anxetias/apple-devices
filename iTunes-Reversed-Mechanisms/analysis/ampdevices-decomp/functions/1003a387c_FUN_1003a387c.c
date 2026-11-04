// name: FUN_1003a387c
// address: 1003a387c

undefined8 FUN_1003a387c(long param_1,long param_2)

{
  undefined1 uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == 0) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "inTrackInfo != nullptr";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    uVar3 = 0xffffffce;
    goto LAB_1003a3999;
  }
  if (*(long *)(param_2 + 0x28) == 0) {
    if ((*(long *)(param_2 + 0x30) != 0) || (*(long *)(param_2 + 0x38) != 0)) {
      uVar3 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar3,0x10);
      if (cVar2 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x822;
        local_3a = 
        "(inTrackInfo->nextTrackInAlbumPrivate == nullptr) && (inTrackInfo->prevTrackInAlbumPrivate == nullptr)"
        ;
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      FUN_1001782e9(0,0);
    }
LAB_1003a391e:
    FUN_1003a3b18(param_1,param_2);
  }
  else if (*(long *)(param_2 + 0x28) != param_1) {
    FUN_1003a3a5a(param_2);
    goto LAB_1003a391e;
  }
  *(ushort *)(param_1 + 0xf8) =
       (ushort)*(undefined4 *)(param_1 + 0xf8) & 0xad37 |
       (ushort)(*(long *)(param_1 + 0x40) == 0) << 6;
  FUN_10039ffa2(param_1);
  if ((*(byte *)(param_1 + 0xfa) & 1) == 0) {
    FUN_1003a3f50(param_1);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  uVar1 = FUN_1003a2088(param_1);
  cVar2 = FUN_100276fe0(uVar3,uVar1);
  if (cVar2 == '\0') {
    *(byte *)(param_1 + 0xfa) = *(byte *)(param_1 + 0xfa) | 2;
  }
  else {
    FUN_1003a2334(param_1);
    FUN_1003a3ffe(param_1);
  }
  uVar3 = 0;
LAB_1003a3999:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

