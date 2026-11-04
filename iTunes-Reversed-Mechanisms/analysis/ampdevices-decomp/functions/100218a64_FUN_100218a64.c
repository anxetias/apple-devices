// name: FUN_100218a64
// address: 100218a64

void FUN_100218a64(long param_1,long *param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  char cVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 local_38;
  long local_34;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar1 = *(long *)(param_1 + 8);
  lVar2 = *param_2;
  if (lVar2 == 0) {
    uVar5 = FUN_1001705fc(*param_3);
    *(undefined8 *)(lVar1 + 11000) = uVar5;
    *(undefined4 *)(lVar1 + 0x2af0) = 0;
  }
  else {
    cVar3 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0x10);
    if (cVar3 != '\0') {
      local_38 = 0x8400102;
      local_34 = lVar2;
      __os_log_error_impl(0x100000000,PTR___os_log_default_10082cb88,0x10,
                          "ERROR checking activation server status: %@",&local_38,0xc);
    }
    FUN_1001aab96(&local_38,param_2);
    uVar4 = FUN_1001aab4a(&local_38);
    *(undefined4 *)(lVar1 + 0x2af0) = uVar4;
    FUN_1001aaad2(&local_38);
  }
  FUN_1001e8f15(lVar1 + 0x2b00);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

