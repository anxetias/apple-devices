// name: FUN_1001cc2b1
// address: 1001cc2b1

ulong FUN_1001cc2b1(void)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 local_20 [16];
  
  FUN_1001c15c6(local_20);
  cVar1 = FUN_1001b8428(local_20);
  uVar4 = CONCAT71((int7)((ulong)local_20 >> 8),1);
  if (cVar1 == '\0') {
    uVar3 = FUN_1001b83ae(local_20);
    uVar2 = FUN_1001ebe9f(uVar3);
    uVar4 = (ulong)uVar2 ^ 1;
  }
  FUN_1001b7a50(local_20);
  return uVar4 & 0xffffffff;
}

