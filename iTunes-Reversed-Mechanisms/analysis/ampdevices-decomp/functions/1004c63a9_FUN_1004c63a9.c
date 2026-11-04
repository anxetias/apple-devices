// name: FUN_1004c63a9
// address: 1004c63a9

void FUN_1004c63a9(undefined8 param_1,undefined4 param_2,undefined1 *param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined1 local_238 [520];
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_3 == (undefined1 *)0x0) {
    param_3 = local_238;
    FUN_1001c34b7(0x2af80005,param_3);
  }
  FUN_1001e0584(param_1,param_2,"^FILENAME",param_3);
  uVar1 = FUN_1001c15fb();
  FUN_1001bb41a(uVar1,local_238);
  FUN_1001e0584(param_1,param_2,"^APPNAME",local_238);
  FUN_1004c5ad0(param_4,local_238);
  FUN_1001e0584(param_1,param_2,"^ERRORNUMBER",local_238);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

