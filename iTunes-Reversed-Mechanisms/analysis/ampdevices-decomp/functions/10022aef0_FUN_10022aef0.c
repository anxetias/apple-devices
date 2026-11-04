// name: FUN_10022aef0
// address: 10022aef0

undefined4 * FUN_10022aef0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_1001c629e(0xd70,&DAT_100711c6e);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0x69707266;
    FUN_10022c186(puVar1 + 0x218);
  }
  return puVar1;
}

