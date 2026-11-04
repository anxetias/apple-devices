// name: FUN_1001a29f2
// address: 1001a29f2

ulong FUN_1001a29f2(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  uint local_28;
  undefined4 local_24;
  
  FUN_1001b7a44(local_48);
  if (param_3 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10069c846(uVar2);
    }
    uVar3 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    cVar1 = FUN_1001a27c9(param_1,param_2,&local_28,&local_24);
    uVar3 = CONCAT71((int7)((ulong)param_2 >> 8),cVar1 != '\0');
    if (cVar1 != '\0') {
      FUN_1001b7b34(local_38,(ulong)local_28 + param_1,local_24);
      FUN_1001b80b2(local_48,local_38);
      FUN_1001b7a50(local_38);
      cVar1 = FUN_1001baf00(local_48,0xfffd);
      if (cVar1 != '\0') {
        FUN_1001b8110(local_38,param_1 + (ulong)local_28,local_24,0x201);
        cVar1 = FUN_1001baf00(local_38,0xfffd);
        if (cVar1 == '\0') {
          FUN_1001b8172(local_48,local_38);
        }
        FUN_1001b7a50(local_38);
      }
    }
    FUN_1001b8172(param_3,local_48);
  }
  FUN_1001b7a50(local_48);
  return uVar3 & 0xffffffff;
}

