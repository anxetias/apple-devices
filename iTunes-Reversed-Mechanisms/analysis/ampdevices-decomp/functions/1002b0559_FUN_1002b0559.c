// name: FUN_1002b0559
// address: 1002b0559

undefined8 FUN_1002b0559(long param_1,uint param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_68;
  undefined4 uStack_64;
  uint local_60;
  undefined2 local_5c;
  char *local_5a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (((param_1 == 0) || (*(long *)(param_1 + 8) == 0)) ||
     (*(long *)(*(long *)(param_1 + 8) + 0x10) == 0)) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_68 = 0x8220202;
      uStack_64 = 0x7a0a90;
      local_60 = 1;
      local_5c = 0x822;
      local_5a = "TrackInstanceIsValid(trackInstance)";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
    }
    FUN_1001782e9(0,0);
    uVar2 = 0xffffffce;
  }
  else {
    uVar2 = 0;
    if ((param_2 & 0x20) == 0) {
      FUN_1002ae6f7(param_1);
      FUN_1001c62d9(&local_68,0x38);
      local_68 = (undefined4)param_1;
      uStack_64 = (undefined4)((ulong)param_1 >> 0x20);
      if (*(long *)(param_1 + 8) == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = *(undefined8 *)(*(long *)(param_1 + 8) + 0x10);
      }
      local_60 = param_2;
      uVar2 = FUN_1002fc1ae(uVar2,0x7464706c,&local_68);
      if (((int)uVar2 == 0) && (uVar2 = 0x2354, *(char *)(param_1 + 0x44) == '\x01')) {
        uVar2 = 0;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar2;
}

