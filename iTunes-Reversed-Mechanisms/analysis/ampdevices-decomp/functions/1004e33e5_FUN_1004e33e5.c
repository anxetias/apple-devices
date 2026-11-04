// name: FUN_1004e33e5
// address: 1004e33e5

undefined1 FUN_1004e33e5(undefined4 *param_1)

{
  long lVar1;
  
  lVar1 = FUN_100306d78();
  while( true ) {
    if (lVar1 == 0) {
      return 0;
    }
    if ((*(int *)(lVar1 + 0x84) == 0x646f5069) && (*(short *)(lVar1 + 0x27b0) != 0)) break;
    lVar1 = FUN_100306e32(lVar1);
  }
  if (param_1 == (undefined4 *)0x0) {
    return 1;
  }
  *param_1 = *(undefined4 *)(lVar1 + 0x2d08);
  return 1;
}

