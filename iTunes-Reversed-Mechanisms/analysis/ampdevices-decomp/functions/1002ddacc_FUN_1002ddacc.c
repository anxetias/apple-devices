// name: FUN_1002ddacc
// address: 1002ddacc

undefined * FUN_1002ddacc(uint param_1)

{
  undefined *puVar1;
  
  if (param_1 - 0x2737 < 0xffffffda) {
    if (param_1 - 0x2afc < 0xfffffffd) {
      if (param_1 < 0x71) {
        puVar1 = *(undefined **)(&DAT_100852b00 + (ulong)param_1 * 8);
      }
      else {
        puVar1 = (undefined *)0x0;
      }
    }
    else {
      puVar1 = &DAT_100745130;
    }
    return puVar1;
  }
  puVar1 = (undefined *)FUN_10055f37f();
  return puVar1;
}

