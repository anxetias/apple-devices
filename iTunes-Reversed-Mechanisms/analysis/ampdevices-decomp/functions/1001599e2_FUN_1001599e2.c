// name: FUN_1001599e2
// address: 1001599e2

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1001599e2(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  bool bVar4;
  undefined1 local_28 [16];
  
  FUN_10015a0ac(local_28,&DAT_10088ff48);
  FUN_1002a41f4(&DAT_10088fed0,DAT_10088fed8);
  _DAT_10088fed0 = &DAT_10088fed8;
  DAT_10088fed8 = 0;
  uRam000000010088fee0 = 0;
  FUN_1002a41f4(&DAT_10088fee8,DAT_10088fef0);
  _DAT_10088fee8 = &DAT_10088fef0;
  DAT_10088fef0 = 0;
  uRam000000010088fef8 = 0;
  FUN_1002a41f4(&DAT_10088ff00,DAT_10088ff08);
  _DAT_10088ff00 = &DAT_10088ff08;
  DAT_10088ff08 = 0;
  uRam000000010088ff10 = 0;
  FUN_1002a41f4(&DAT_10088ff18,DAT_10088ff20);
  _DAT_10088ff18 = &DAT_10088ff20;
  DAT_10088ff20 = 0;
  uRam000000010088ff28 = 0;
  puVar2 = DAT_10088ff30;
  while (puVar2 != &DAT_10088ff38) {
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
  FUN_1002a41f4(&DAT_10088ff30,DAT_10088ff38);
  DAT_10088ff30 = &DAT_10088ff38;
  DAT_10088ff38 = 0;
  uRam000000010088ff40 = 0;
  FUN_10015a142(local_28);
  return;
}

