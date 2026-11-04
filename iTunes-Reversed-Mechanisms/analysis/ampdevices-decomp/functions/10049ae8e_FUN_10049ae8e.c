// name: FUN_10049ae8e
// address: 10049ae8e

undefined8 FUN_10049ae8e(long param_1,undefined2 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  size_t sVar3;
  char local_828 [4];
  char *local_824;
  undefined2 local_81c;
  char *local_81a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
LAB_10049af07:
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_81a = "ITImageAlbumIsValid(album)";
LAB_10049afb7:
      local_81c = 0x822;
      local_824 = "Assertion failure";
      builtin_strncpy(local_828,"\x02\x02\"\b",4);
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: err == (%d)",local_828,0x16);
    }
  }
  else {
    cVar1 = FUN_100495380(*(undefined8 *)(param_1 + 8));
    if (cVar1 == '\0') goto LAB_10049af07;
    if (param_2 != (undefined2 *)0x0) {
      *param_2 = 0;
      uVar2 = FUN_10049ac7a(param_1,local_828,0x7ff);
      if ((int)uVar2 == 0) {
        sVar3 = _strlen(local_828);
        uVar2 = FUN_1001e5811(local_828,sVar3,param_2);
      }
      goto LAB_10049af2e;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_81a = "albumName != nullptr";
      goto LAB_10049afb7;
    }
  }
  FUN_1001782e9(0,0);
  uVar2 = 0xffffffce;
LAB_10049af2e:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

