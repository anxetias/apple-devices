// name: FUN_1004c659a
// address: 1004c659a

undefined8
FUN_1004c659a(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined4 param_8)

{
  short *psVar1;
  short *psVar2;
  short local_838 [512];
  short local_438 [512];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001bb41a(param_4,local_438);
  FUN_1001bb41a(param_6,local_838);
  psVar1 = local_438;
  if (local_438[0] == 0) {
    psVar1 = (short *)0x0;
  }
  psVar2 = local_838;
  if (local_838[0] == 0) {
    psVar2 = (short *)0x0;
  }
  FUN_1004c5c38(*param_1,param_2,param_3,psVar1,param_5,psVar2,param_7,param_8);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

