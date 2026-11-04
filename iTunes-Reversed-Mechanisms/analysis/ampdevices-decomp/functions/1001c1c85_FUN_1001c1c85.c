// name: FUN_1001c1c85
// address: 1001c1c85

void FUN_1001c1c85(void)

{
  long lVar1;
  
  lVar1 = 0x30;
  do {
    *(undefined8 *)((long)&DAT_10089fb90 + lVar1) = 0;
    lVar1 = lVar1 + 0x60;
  } while (lVar1 != 0x25b0);
  ___cxa_atexit(FUN_1001c1c41,0,0x100000000);
  FUN_1001b7a44(&DAT_1008a2110);
  ___cxa_atexit(FUN_1001b7a50,&DAT_1008a2110,0x100000000);
  return;
}

