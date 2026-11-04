// name: FUN_1005e7882
// address: 1005e7882

undefined8 FUN_1005e7882(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 local_40 [16];
  undefined8 local_30;
  
  uVar1 = FUN_100170720(DAT_1008c4d90,0,PTR__kCFTypeArrayCallBacks_10082e130);
  lVar2 = *(long *)(param_1 + 0x60);
  if (lVar2 != 0) {
    do {
      FUN_1005e73f0(local_40,lVar2);
      FUN_1001b8d18(&local_30,local_40);
      FUN_1001709a5(uVar1,local_30);
      FUN_10014d890(&local_30);
      FUN_1001b7a50(local_40);
      lVar2 = *(long *)(lVar2 + 0x6878);
    } while (lVar2 != 0);
  }
  return uVar1;
}

