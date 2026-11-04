// name: FUN_1001e81a1
// address: 1001e81a1

void FUN_1001e81a1(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  bool bVar4;
  
  FUN_1001e821c();
  puVar2 = DAT_1008a2a30;
  while (puVar2 != &DAT_1008a2a38) {
    FUN_10017060f(puVar2[5]);
    puVar1 = (undefined8 *)puVar2[1];
    puVar3 = puVar2;
    if ((undefined8 *)puVar2[1] == (undefined8 *)0x0) {
      do {
        puVar2 = (undefined8 *)puVar3[2];
        bVar4 = (undefined8 *)*puVar2 != puVar3;
        puVar3 = puVar2;
      } while (bVar4);
    }
    else {
      do {
        puVar2 = puVar1;
        puVar1 = (undefined8 *)*puVar2;
      } while ((undefined8 *)*puVar2 != (undefined8 *)0x0);
    }
  }
  FUN_1002a41f4(&DAT_1008a2a30,DAT_1008a2a38);
  DAT_1008a2a30 = &DAT_1008a2a38;
  DAT_1008a2a38 = 0;
  uRam00000001008a2a40 = 0;
  return;
}

