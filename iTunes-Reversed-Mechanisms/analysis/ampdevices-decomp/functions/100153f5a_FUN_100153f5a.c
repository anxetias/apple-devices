// name: FUN_100153f5a
// address: 100153f5a

undefined4 FUN_100153f5a(long *param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 local_20 [8];
  
  lVar1 = *param_1;
  if (*(long *)(lVar1 + 0x18) == 0) {
    uVar2 = 0;
  }
  else {
    FUN_1001a7b90(local_20);
    uVar2 = FUN_1001a9000(lVar1 + 0x18,local_20);
    FUN_1001ab240(local_20);
  }
  return uVar2;
}

