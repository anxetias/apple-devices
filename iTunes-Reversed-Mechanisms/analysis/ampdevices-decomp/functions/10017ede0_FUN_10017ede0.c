// name: FUN_10017ede0
// address: 10017ede0

void FUN_10017ede0(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 local_270;
  undefined8 *local_268;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_208;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == 0) {
    FUN_1001c62d9(&local_238,0x38);
    local_230 = 0;
    puVar1 = &local_238;
    local_238 = param_1;
    local_208 = param_3;
  }
  else {
    FUN_1001e04f5(param_2,&local_238);
    FUN_1001c62d9(&local_270,0x38);
    puVar1 = &local_270;
    local_270 = param_1;
    local_268 = &local_238;
    local_240 = param_3;
  }
  FUN_10017e4d0(puVar1);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

