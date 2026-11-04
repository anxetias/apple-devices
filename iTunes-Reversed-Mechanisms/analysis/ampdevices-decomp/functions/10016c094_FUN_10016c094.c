// name: FUN_10016c094
// address: 10016c094

void FUN_10016c094(undefined8 param_1,undefined8 *param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)*param_2;
  if (bVar1 < 0x6e) {
    if (bVar1 == 0x22) {
      FUN_10016c362();
      return;
    }
    if (bVar1 == 0x5b) {
      FUN_10016c97a();
      return;
    }
    if (bVar1 == 0x66) {
      FUN_10016c27c();
      return;
    }
  }
  else {
    if (bVar1 == 0x7b) {
      FUN_10016c726();
      return;
    }
    if (bVar1 == 0x74) {
      FUN_10016c1a2();
      return;
    }
    if (bVar1 == 0x6e) {
      FUN_10016c10a();
      return;
    }
  }
  FUN_10016cb00();
  return;
}

