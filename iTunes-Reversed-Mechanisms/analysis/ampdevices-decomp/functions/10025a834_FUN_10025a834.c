// name: FUN_10025a834
// address: 10025a834

void FUN_10025a834(long param_1,long *param_2,undefined8 *param_3)

{
  long lVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 local_38;
  long local_34;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar1 = *param_2;
  if (lVar1 == 0) {
    uVar4 = FUN_1001705fc(*param_3);
    **(undefined8 **)(param_1 + 0x10) = uVar4;
    **(undefined4 **)(param_1 + 0x18) = 0;
  }
  else {
    cVar2 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0x10);
    if (cVar2 != '\0') {
      local_38 = 0x8400102;
      local_34 = lVar1;
      __os_log_error_impl(0x100000000,PTR___os_log_default_10082cb88,0x10,
                          "ERROR obtaining iPhone carrier string from store: %@",&local_38,0xc);
    }
    FUN_1001aab96(&local_38,param_2);
    uVar3 = FUN_1001aab4a(&local_38);
    **(undefined4 **)(param_1 + 0x18) = uVar3;
    FUN_1001aaad2(&local_38);
  }
  *(undefined1 *)(*(long *)(param_1 + 8) + 1) = 1;
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

