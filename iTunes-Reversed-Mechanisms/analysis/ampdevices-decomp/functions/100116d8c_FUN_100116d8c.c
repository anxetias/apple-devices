// name: FUN_100116d8c
// address: 100116d8c

undefined * FUN_100116d8c(int param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = (undefined *)0x0;
  if (param_1 == 0x80) {
    puVar2 = &DAT_100703f70;
  }
  puVar1 = &DAT_100702f70;
  if (param_1 != 0x400) {
    puVar1 = puVar2;
  }
  return puVar1;
}

