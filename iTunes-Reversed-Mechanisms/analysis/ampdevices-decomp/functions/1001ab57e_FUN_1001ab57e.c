// name: FUN_1001ab57e
// address: 1001ab57e

ulong FUN_1001ab57e(undefined8 param_1)

{
  int iVar1;
  undefined1 local_20 [16];
  
  FUN_1001ab45a(local_20,param_1);
  iVar1 = FUN_1001ba026(local_20,"https");
  FUN_1001b7a50(local_20);
  return CONCAT71((int7)((ulong)local_20 >> 8),iVar1 == 0) & 0xffffffff;
}

