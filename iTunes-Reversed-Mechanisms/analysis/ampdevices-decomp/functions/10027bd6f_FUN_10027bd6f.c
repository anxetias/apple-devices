// name: FUN_10027bd6f
// address: 10027bd6f

ulong FUN_10027bd6f(void)

{
  uint uVar1;
  undefined1 local_110 [256];
  
  FUN_10027a94e(local_110);
  uVar1 = FUN_100158922(local_110,&cf_ratings_mode);
  FUN_10015811a(local_110);
  return CONCAT71((int7)((ulong)local_110 >> 8),(uVar1 & 0xfd) == 1) & 0xffffffff;
}

