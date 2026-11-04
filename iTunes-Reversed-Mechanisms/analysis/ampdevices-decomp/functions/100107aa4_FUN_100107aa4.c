// name: FUN_100107aa4
// address: 100107aa4

undefined8 * FUN_100107aa4(uint param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x0;
  if ((param_1 < 0x14) && ((0xa0016U >> (param_1 & 0x1f) & 1) != 0)) {
    puVar1 = operator_new(0xa8);
    FUN_100107b22(puVar1);
    *puVar1 = &PTR_FUN_10082fe98;
    FUN_100119222(puVar1 + 0xf);
  }
  return puVar1;
}

