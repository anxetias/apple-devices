// name: FUN_1001cc660
// address: 1001cc660

ulong FUN_1001cc660(void)

{
  ulong uVar1;
  char local_19;
  
  local_19 = '\0';
  uVar1 = 0;
  if ((DAT_1008c5394 < 1) && (DAT_1008c5390 < 1)) {
    uVar1 = 0;
    FUN_1001c6987(&DAT_1008c53d0,0x706d6572,&local_19,0,0);
    if (local_19 == '\0') {
      FUN_1001c6987(&DAT_1008c53d0,0x706d6c72,&local_19,0,0);
      uVar1 = CONCAT71((int7)((ulong)&local_19 >> 8),local_19 == '\0');
    }
  }
  return uVar1 & 0xffffffff;
}

