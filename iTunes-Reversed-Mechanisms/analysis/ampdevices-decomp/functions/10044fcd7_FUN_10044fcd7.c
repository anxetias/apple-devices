// name: FUN_10044fcd7
// address: 10044fcd7

int FUN_10044fcd7(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  short sVar1;
  long lVar2;
  long local_68 [4];
  long *local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_10028593a(local_68,param_6);
  sVar1 = FUN_10044fb85(param_1,param_2,param_3,param_4,param_5,0,local_68);
  if (local_48 == local_68) {
    lVar2 = 0x20;
  }
  else {
    lVar2 = 0x28;
    if (local_48 == (long *)0x0) goto LAB_10044fd57;
  }
  (**(code **)(*local_48 + lVar2))();
LAB_10044fd57:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return (int)sVar1;
}

