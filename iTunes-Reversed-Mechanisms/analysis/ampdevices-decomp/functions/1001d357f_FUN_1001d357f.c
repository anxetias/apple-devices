// name: FUN_1001d357f
// address: 1001d357f

void FUN_1001d357f(undefined8 param_1,int param_2)

{
  char *pcVar1;
  char *pcVar2;
  char local_68 [72];
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  pcVar2 = "";
  if (param_2 == 1) {
    pcVar2 = "IMMEDIATE";
  }
  pcVar1 = "EXCLUSIVE";
  if (param_2 != 2) {
    pcVar1 = pcVar2;
  }
  _snprintf(local_68,0x40,"BEGIN %s TRANSACTION",pcVar1);
  FUN_1001d302b(param_1,local_68,0,0);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

