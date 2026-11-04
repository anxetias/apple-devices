// name: FUN_100116d62
// address: 100116d62

undefined * FUN_100116d62(int param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = (undefined *)0x0;
  if (param_1 == 0x80) {
    puVar2 = &DAT_100702d70;
  }
  puVar1 = &DAT_100701d70;
  if (param_1 != 0x400) {
    puVar1 = puVar2;
  }
  return puVar1;
}

