// name: FUN_1001c3cfb
// address: 1001c3cfb

ulong FUN_1001c3cfb(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  
  FUN_1001c0f9c();
  FUN_1001c4afd();
  cVar1 = FUN_100171502(DAT_1008a2258,param_2,param_1);
  FUN_1001c0fad();
  return CONCAT71((int7)((ulong)param_2 >> 8),cVar1 != '\0') & 0xffffffff;
}

