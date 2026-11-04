// name: FUN_100587ce4
// address: 100587ce4

undefined8 FUN_100587ce4(undefined8 param_1,int *param_2)

{
  char cVar1;
  undefined8 uVar2;
  uint local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*param_2 == 0x28) {
    FUN_1001d1f8e(param_2,&local_38);
    if (CONCAT44(uStack_34,local_38) < 0x47) {
      uVar2 = FUN_10048bbac(param_1,local_38 & 0xffff,0);
    }
    else {
      uVar2 = FUN_10048b5ec(param_1);
    }
  }
  else {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      uStack_34 = 0x7a0a90;
      uStack_30 = 1;
      local_2c = 0x822;
      local_2a = "trackField == kITDBTrackField_PlaylistPersistentID";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    uVar2 = 0;
    FUN_1001782e9(0,0);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar2;
}

