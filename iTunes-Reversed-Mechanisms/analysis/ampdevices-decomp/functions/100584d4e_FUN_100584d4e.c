// name: FUN_100584d4e
// address: 100584d4e

int FUN_100584d4e(long param_1,undefined1 param_2,short *param_3,undefined8 param_4,long *param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 local_668 [2];
  undefined1 local_666;
  undefined8 local_640;
  undefined1 local_638 [512];
  long local_438 [64];
  undefined4 local_238;
  char *local_234;
  undefined2 local_22c;
  char *local_22a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_5 == (long *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_22a = "returnedPlaylist != nullptr";
LAB_100584f7c:
      local_22c = 0x822;
      local_234 = "Assertion failure";
      local_238 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
    }
  }
  else {
    *param_5 = 0;
    if (param_1 != 0) {
      if (*(int *)(param_1 + 0x80) != 0x74646174) {
        local_640 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(local_640,0x10);
        if (cVar1 != '\0') {
          local_238 = 0x8220202;
          local_234 = "Assertion failure (expected to be true)";
          local_22c = 0x822;
          local_22a = "trackData->magic == \'tdat\'";
          __os_log_error_impl(0x100000000,local_640,0x10,"%{public}s: (%{public}s)",&local_238,0x16)
          ;
        }
        cVar1 = FUN_1001782e9(0,1);
        if (cVar1 == '\0') goto LAB_100584e65;
      }
      local_640 = param_4;
      FUN_1005813a4(local_668,0);
      local_666 = 1;
      if ((param_3 == (short *)0x0) || (*param_3 == 0)) {
        FUN_1001c34b7(0x23280003,local_438);
        FUN_1001c34b7(0x23280004,local_638);
        FUN_10048c7a0(param_1,local_438,local_638,&local_238);
      }
      else {
        FUN_1001e1c39(param_3,&local_238);
      }
      iVar2 = FUN_1005817ee(param_1,param_2,0,local_668,&local_238,local_640,local_438);
      if (iVar2 == 0) {
        *(byte *)(local_438[0] + 0x298) = *(byte *)(local_438[0] + 0x298) | 2;
      }
      FUN_1005814bd(local_668);
      *param_5 = local_438[0];
      goto LAB_100584f2c;
    }
LAB_100584e65:
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_22a = "TrackDataIsValid(trackData)";
      goto LAB_100584f7c;
    }
  }
  FUN_1001782e9(0,0);
  iVar2 = -0x32;
LAB_100584f2c:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

