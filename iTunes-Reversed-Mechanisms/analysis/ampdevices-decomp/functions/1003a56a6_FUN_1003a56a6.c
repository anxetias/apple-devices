// name: FUN_1003a56a6
// address: 1003a56a6

undefined8 FUN_1003a56a6(long param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_100481a53(*param_2);
  if (cVar1 == '\0') {
    **(byte **)(param_1 + 8) = 0;
    uVar2 = 0x2349;
  }
  else {
    uVar2 = 0x2349;
    if ((**(byte **)(param_1 + 8) & 1) != 0) {
      uVar2 = 0;
    }
  }
  return uVar2;
}

