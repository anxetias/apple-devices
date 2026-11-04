// name: FUN_10040bf4c
// address: 10040bf4c

void FUN_10040bf4c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6,undefined1 param_7,undefined1 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined1 local_290;
  undefined2 local_28f;
  undefined1 local_28d;
  undefined1 local_28c;
  undefined1 local_28a;
  undefined1 local_288;
  undefined1 local_282;
  byte local_281;
  undefined8 local_27c;
  code *local_260;
  long local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined2 local_238 [256];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_240 = param_5;
  if (param_4 == 0) {
    local_238[0] = 0;
  }
  else {
    FUN_1001e1c39(param_4,local_238);
  }
  FUN_1001c62d9(&local_290,0x50);
  local_28f = 0x101;
  local_282 = 1;
  local_28a = param_7;
  local_288 = param_8;
  local_281 = 2;
  if (*(int *)(param_1 + 0x84) == 0x646f5069) {
    local_281 = (*(byte *)(param_1 + 0x2d1a) & 0x20) == 0 ^ 3;
  }
  local_260 = FUN_10040f8c0;
  local_28d = 1;
  local_250 = param_9;
  local_248 = param_10;
  if (param_6 != 0) {
    local_28c = *(undefined1 *)(param_6 + 0x30);
    local_27c = *(undefined8 *)(param_6 + 0x28);
  }
  local_258 = param_1;
  FUN_100182f9b(1,param_2,param_3,local_238,local_240,&local_290);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

