// name: FUN_1001ab4b0
// address: 1001ab4b0

ulong FUN_1001ab4b0(undefined8 param_1)

{
  int iVar1;
  undefined1 local_20 [16];
  
  FUN_1001ab45a(local_20,param_1);
  iVar1 = FUN_1001ba026(local_20,"file");
  FUN_1001b7a50(local_20);
  return CONCAT71((int7)((ulong)local_20 >> 8),iVar1 == 0) & 0xffffffff;
}

