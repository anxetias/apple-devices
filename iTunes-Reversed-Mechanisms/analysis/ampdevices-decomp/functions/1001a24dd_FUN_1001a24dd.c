// name: FUN_1001a24dd
// address: 1001a24dd

void FUN_1001a24dd(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  FUN_1001e9de0(&DAT_10089cae8);
  puVar1 = DAT_10089cb30;
  while (puVar2 = DAT_10089cb40, puVar1 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar1;
    FUN_1001c64c1();
  }
  while (puVar2 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar2;
    FUN_1001c64c1();
  }
  FUN_1001e9eb9(&DAT_10089cae8);
  FUN_1001e9d75(&DAT_10089cae8);
  return;
}

