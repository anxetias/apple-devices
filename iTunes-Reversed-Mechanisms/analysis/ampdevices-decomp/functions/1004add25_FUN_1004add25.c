// name: FUN_1004add25
// address: 1004add25

long FUN_1004add25(long param_1)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "inPlaylistItemSpec != __null";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_10030252b();
    if (lVar2 != 0) goto LAB_1004ade22;
    lVar2 = FUN_100490af0(param_1);
    if ((lVar2 == 0) || (*(long *)(lVar2 + 8) == 0)) {
      lVar2 = 0;
      goto LAB_1004ade22;
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 8) + 0x58);
    if ((*(int *)(lVar2 + 0x3c) == 0x44574e4c) || (*(int *)(lVar2 + 0x3c) == 0x48545450))
    goto LAB_1004ade22;
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = 
      "(trackInstance->trackKind == kITDownloadKind) || (trackInstance->trackKind == kITURLKind)";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
  }
  FUN_1001782e9(0,0);
LAB_1004ade22:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

