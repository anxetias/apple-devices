// name: FUN_1004225fd
// address: 1004225fd

ulong FUN_1004225fd(undefined8 param_1)

{
  short sVar1;
  undefined8 uVar2;
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  undefined1 local_20 [16];
  
  uVar2 = FUN_100416f20(0x69506f64,0x10cc0136);
  FUN_1001b7eb0(local_40,uVar2);
  FUN_1001c334a(local_30,0x5db3000e);
  FUN_1001c334a(local_20,0x5db30004);
  sVar1 = FUN_10044f9f1(local_40,local_30,local_20,param_1,0);
  FUN_1001b7a50(local_20);
  FUN_1001b7a50(local_30);
  FUN_1001b7a50(local_40);
  return CONCAT71((int7)((ulong)param_1 >> 8),sVar1 == 1) & 0xffffffff;
}

