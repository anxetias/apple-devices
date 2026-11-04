// name: FUN_100534dbd
// address: 100534dbd

void FUN_100534dbd(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  undefined1 local_648 [1056];
  undefined1 local_228 [512];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001c34b7(0x800002,local_228);
  iVar1 = FUN_10032046f(param_1,param_2,1,local_648,0);
  if (iVar1 == 0) {
    FUN_1005349a4(local_648,local_228,1,param_3,0);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

