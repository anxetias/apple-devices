// name: FUN_100241f22
// address: 100241f22

undefined8 *
FUN_100241f22(undefined8 *param_1,undefined1 param_2,undefined4 param_3,void *param_4,
             undefined4 param_5,undefined8 param_6)

{
  undefined1 local_918 [4];
  undefined1 local_914;
  undefined1 local_913;
  undefined4 local_900;
  undefined1 local_4c4;
  undefined1 local_4c0 [1124];
  undefined4 local_5c;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_1001c62d9(local_918,0x8e0);
  local_913 = 1;
  local_4c4 = 1;
  local_914 = param_2;
  local_900 = param_3;
  _memcpy(local_4c0,param_4,0x460);
  local_5c = param_5;
  FUN_100240d22(local_918,param_1,param_6);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

