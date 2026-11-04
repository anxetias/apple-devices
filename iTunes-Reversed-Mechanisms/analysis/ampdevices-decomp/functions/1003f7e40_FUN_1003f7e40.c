// name: FUN_1003f7e40
// address: 1003f7e40

undefined4 FUN_1003f7e40(uint param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 < 0x6f) {
    uVar1 = *(undefined4 *)((long)&PTR___mh_execute_header_100747f94 + (ulong)param_1 * 4);
  }
  return uVar1;
}

