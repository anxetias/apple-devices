// name: FUN_100273f7c
// address: 100273f7c

ulong FUN_100273f7c(long param_1)

{
  char cVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 unaff_RBX;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "inAlbumInfo != __null";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_38,0x16);
    }
    uVar2 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    if ((*(int *)(param_1 + 0x10) == 2) &&
       ((*(long *)(param_1 + 0xb8) == 0 || (*(int *)(param_1 + 0xc0) == 0)))) {
      uVar2 = FUN_1003a1ec0();
      if ((uVar2 & 0x20) != 0) {
        uVar2 = CONCAT71((int7)((ulong)unaff_RBX >> 8),(uVar2 & 0xffffffdf) == 0);
        goto LAB_100273fec;
      }
    }
    uVar2 = 0;
  }
LAB_100273fec:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return uVar2 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

