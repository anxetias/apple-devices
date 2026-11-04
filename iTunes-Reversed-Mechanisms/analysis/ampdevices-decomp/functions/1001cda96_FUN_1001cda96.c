// name: FUN_1001cda96
// address: 1001cda96

void FUN_1001cda96(undefined8 param_1,long param_2,char *param_3,undefined1 *param_4)

{
  char local_58 [40];
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  *param_4 = 0;
  FUN_1001e3312(param_1,param_4);
  if (param_2 != 0) {
    _snprintf(local_58,0x20,":%llu",param_2);
    FUN_1001df1e7(local_58,param_4,0x100);
  }
  if ((param_3 != (char *)0x0) && (*param_3 != '\0')) {
    FUN_1001df1e7(":",param_4,0x100);
    FUN_1001df1e7(param_3,param_4,0x100);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

