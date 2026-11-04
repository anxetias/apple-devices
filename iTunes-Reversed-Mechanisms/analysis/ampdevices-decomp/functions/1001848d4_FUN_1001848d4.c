// name: FUN_1001848d4
// address: 1001848d4

void FUN_1001848d4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 local_270;
  undefined8 *local_268;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_208;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_3 == 0) {
    FUN_1001c62d9(&local_238,0x38);
    local_230 = 0;
    puVar1 = &local_238;
    local_238 = param_2;
    local_208 = param_4;
  }
  else {
    FUN_1001e04f5(param_3,&local_238);
    FUN_1001c62d9(&local_270,0x38);
    puVar1 = &local_270;
    local_270 = param_2;
    local_268 = &local_238;
    local_240 = param_4;
  }
  FUN_10018166a(param_1,puVar1);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

