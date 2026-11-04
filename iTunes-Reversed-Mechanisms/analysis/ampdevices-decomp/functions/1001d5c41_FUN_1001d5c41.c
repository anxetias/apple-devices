// name: FUN_1001d5c41
// address: 1001d5c41

undefined8 FUN_1001d5c41(undefined8 param_1,undefined8 param_2,uint param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined8 local_450;
  undefined8 local_448;
  uint local_440;
  undefined1 local_43c [1036];
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001c62d9(&local_450,0x420);
  uVar1 = 0xffffffce;
  if (param_3 < 0x401) {
    local_450 = 0x800000001;
    local_448 = 0x2000;
    local_440 = param_3;
    FUN_1001c631b(param_2,local_43c,param_3);
    uVar1 = FUN_1001d5942(param_1,2,&local_450,1,param_4);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

