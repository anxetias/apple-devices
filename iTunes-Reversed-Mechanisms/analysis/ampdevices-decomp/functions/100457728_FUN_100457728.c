// name: FUN_100457728
// address: 100457728

undefined8 FUN_100457728(undefined8 param_1,long param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 local_238 [512];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  ___bzero(local_238,0x200);
  FUN_1001767b3(*(undefined8 *)(param_2 + 8),param_3,param_4,0x200,local_238);
  FUN_1001b8dfc(param_1,local_238);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

