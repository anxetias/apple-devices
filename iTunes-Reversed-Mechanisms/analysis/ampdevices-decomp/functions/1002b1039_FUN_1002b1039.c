// name: FUN_1002b1039
// address: 1002b1039

undefined8 FUN_1002b1039(long param_1,void *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_458;
  char *local_454;
  undefined2 local_44c;
  char *local_44a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (((param_1 == 0) || (*(long *)(param_1 + 8) == 0)) ||
     (*(long *)(*(long *)(param_1 + 8) + 0x10) == 0)) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_44a = "TrackInstanceIsValid( inTrackInstance )";
LAB_1002b11d5:
      local_44c = 0x822;
      local_454 = "Assertion failure";
      local_458 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
    }
  }
  else {
    if (param_2 != (void *)0x0) {
      if (*(int *)(param_1 + 0x3c) == 0x46494c45) {
        if (*(char *)(param_1 + 0x44) != '\x01') goto LAB_1002b1186;
        FUN_1001c631b(*(undefined8 *)(param_1 + 0x80),&local_458,0x438);
        cVar1 = FUN_10017cbd0(&local_458);
        if (cVar1 != '\0') {
          _memcpy(param_2,&local_458,0x420);
          uVar2 = 0;
          goto LAB_1002b10fb;
        }
      }
      else {
        uVar2 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar2,0x10);
        if (cVar1 != '\0') {
          local_458 = 0x8220202;
          local_454 = "Assertion failure";
          local_44c = 0x822;
          local_44a = "inTrackInstance->trackKind == kITFileKind";
          __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
        }
        FUN_1001782e9(0x400,0);
LAB_1002b1186:
        FUN_1001c62d9(&local_458,0x438);
      }
      ___bzero(param_2,0x420);
      uVar2 = 0xffffffd5;
      goto LAB_1002b10fb;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_44a = "outFileSpec != __null";
      goto LAB_1002b11d5;
    }
  }
  FUN_1001782e9(0,0);
  uVar2 = 0xffffffce;
LAB_1002b10fb:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

