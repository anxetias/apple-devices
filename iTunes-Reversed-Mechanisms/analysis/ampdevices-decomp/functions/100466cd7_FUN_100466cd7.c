// name: FUN_100466cd7
// address: 100466cd7

void FUN_100466cd7(undefined8 param_1,void *param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 local_4a0;
  undefined4 local_49c;
  undefined1 local_498 [44];
  undefined1 local_46c [1076];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_49c = param_5;
  ___bzero(local_498,0x460);
  _memcpy(local_46c,param_2,0x424);
  local_4a0 = 0;
  uVar1 = FUN_1003b73be(0x46494c45,local_498,0,&local_4a0);
  FUN_100466aac(param_1,uVar1,local_4a0,param_3,param_4,local_49c);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

