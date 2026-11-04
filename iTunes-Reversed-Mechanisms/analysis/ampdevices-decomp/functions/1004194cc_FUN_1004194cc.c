// name: FUN_1004194cc
// address: 1004194cc

undefined * FUN_1004194cc(uint param_1)

{
  undefined *puVar1;
  
  if (param_1 < 0xe) {
    puVar1 = &DAT_1007494cc + *(int *)(&DAT_1007494cc + (ulong)param_1 * 4);
  }
  else {
    puVar1 = (undefined *)0x0;
  }
  return puVar1;
}

