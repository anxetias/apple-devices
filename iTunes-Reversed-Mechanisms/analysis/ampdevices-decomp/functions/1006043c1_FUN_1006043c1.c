// name: FUN_1006043c1
// address: 1006043c1

void FUN_1006043c1(undefined8 param_1,ulong param_2)

{
  char cVar1;
  ulong uVar2;
  int *piVar3;
  undefined1 local_40 [16];
  
  FUN_1001b7a44();
  piVar3 = &DAT_10075ec74;
  uVar2 = 0;
  do {
    if ((param_2 >> (uVar2 & 0x3f) & 1) != 0) {
      cVar1 = FUN_1001b8428(param_1);
      if (cVar1 == '\0') {
        FUN_1001b7b04(local_40,", ");
        FUN_1001bbcfe(param_1,local_40);
        FUN_1001b7a50(local_40);
      }
      FUN_1001b7b04(local_40,(long)&DAT_10075ec74 + (long)*piVar3);
      FUN_1001bbcfe(param_1,local_40);
      FUN_1001b7a50(local_40);
    }
    uVar2 = uVar2 + 1;
    piVar3 = piVar3 + 1;
  } while (uVar2 != 0x30);
  return;
}

