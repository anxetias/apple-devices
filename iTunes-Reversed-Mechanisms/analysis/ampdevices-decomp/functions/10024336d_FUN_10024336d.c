// name: FUN_10024336d
// address: 10024336d

void FUN_10024336d(uint param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 *param_7)

{
  char cVar1;
  short sVar2;
  undefined1 local_210 [20];
  undefined4 local_1fc;
  undefined1 local_1f8 [8];
  undefined1 local_1f0 [32];
  undefined1 local_1d0 [16];
  undefined1 local_1c0 [16];
  undefined1 local_1b0 [16];
  undefined1 local_1a0 [48];
  undefined1 local_170 [16];
  undefined1 local_160;
  undefined2 local_15e;
  undefined4 local_118;
  undefined1 local_58;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_10044eef2(local_1f8);
  local_1fc = 3;
  if (param_1 < 4) {
    local_1fc = *(undefined4 *)((long)&PTR___mh_execute_header_100719900 + (ulong)param_1 * 4);
  }
  FUN_1001b8172(local_1d0,param_2);
  FUN_1001b8172(local_1c0,param_3);
  FUN_1001b8172(local_1f0,param_4);
  FUN_1001c334a(local_210,0x5db30003);
  FUN_1001b80b2(local_1b0,local_210);
  FUN_1001b7a50(local_210);
  cVar1 = FUN_1001b8428(param_5);
  if (cVar1 == '\0') {
    FUN_1001c334a(local_210,0x5db3001a);
    FUN_1001b80b2(local_1a0,local_210);
    FUN_1001b7a50(local_210);
  }
  local_15e = 1;
  FUN_1001b8172(local_170,param_6);
  local_118 = local_1fc;
  if (param_7 != (undefined1 *)0x0) {
    local_160 = *param_7;
  }
  sVar2 = FUN_100242b38(local_1f8);
  if (sVar2 == 2) {
    FUN_1001a6371(param_5,1);
  }
  if (param_7 != (undefined1 *)0x0) {
    *param_7 = local_58;
  }
  FUN_10020dfaa(local_1f8);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

