// name: FUN_100241e40
// address: 100241e40

undefined8 *
FUN_100241e40(undefined8 *param_1,undefined4 param_2,void *param_3,undefined1 param_4,int param_5,
             undefined8 param_6)

{
  undefined1 local_918 [24];
  undefined4 local_900;
  undefined1 local_4c4;
  undefined1 local_4c0 [1136];
  int local_50;
  undefined1 *local_48;
  undefined1 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_1001c62d9(local_918,0x8e0);
  local_4c4 = 1;
  local_900 = param_2;
  _memcpy(local_4c0,param_3,0x460);
  if (param_5 != 0) {
    local_50 = param_5;
    local_48 = local_4c0;
  }
  local_40 = param_4;
  FUN_100240d22(local_918,param_1,param_6);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

