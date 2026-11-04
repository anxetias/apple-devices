// name: FUN_1005d1e25
// address: 1005d1e25

ulong FUN_1005d1e25(undefined8 param_1)

{
  char cVar1;
  undefined8 unaff_R14;
  ulong uVar2;
  long local_30 [2];
  undefined7 uVar3;
  
  cVar1 = FUN_1002e3e3b();
  uVar3 = (undefined7)((ulong)unaff_R14 >> 8);
  uVar2 = CONCAT71(uVar3,1);
  if (cVar1 == '\0') {
    FUN_1004814a5(local_30,param_1);
    uVar2 = CONCAT71(uVar3,local_30[0] != 0);
    FUN_1001a85d4(local_30);
  }
  return uVar2 & 0xffffffff;
}

