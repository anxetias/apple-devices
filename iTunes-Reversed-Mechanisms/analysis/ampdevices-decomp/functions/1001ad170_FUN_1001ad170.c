// name: FUN_1001ad170
// address: 1001ad170

undefined8 FUN_1001ad170(void)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1001ad188();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x58);
  }
  return uVar2;
}

