// name: FUN_1005295b5
// address: 1005295b5

void FUN_1005295b5(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  short *psVar1;
  short *psVar2;
  short local_438 [256];
  short local_238 [256];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001bb41a(param_3,local_238);
  FUN_1001bb41a(param_4,local_438);
  psVar1 = local_238;
  if (local_238[0] == 0) {
    psVar1 = (short *)0x0;
  }
  psVar2 = local_438;
  if (local_438[0] == 0) {
    psVar2 = (short *)0x0;
  }
  FUN_1005293c1(param_1,param_2,psVar1,psVar2,param_5,0);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

