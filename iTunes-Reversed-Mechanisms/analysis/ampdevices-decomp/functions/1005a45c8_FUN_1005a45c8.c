// name: FUN_1005a45c8
// address: 1005a45c8

void FUN_1005a45c8(long *param_1)

{
  char cVar1;
  long lVar2;
  
  if (*(char *)((long)param_1 + 0x15a2) != '\0') {
    if (*(char *)((long)param_1 + 0x15a3) == '\0') {
      if (param_1[0x2d5] == 0) {
        lVar2 = FUN_10053855c(param_1[0x2be]);
        param_1[0x2d5] = lVar2;
      }
    }
    else {
      FUN_10017060f(param_1[0x2be]);
      lVar2 = FUN_100172473(DAT_1008c4d90,*param_1 + 0x14dd6,0x600);
      param_1[0x2be] = lVar2;
    }
    *(undefined1 *)((long)param_1 + 0x15a4) = *(undefined1 *)(*param_1 + 0x14de5);
    cVar1 = FUN_1001cd44e("dont-use-alex-voice",0,0);
    *(bool *)((long)param_1 + 0x15a5) = cVar1 == '\0';
    *(undefined1 *)(param_1 + 0x2b4) = 1;
  }
  FUN_1005a3fe4(param_1);
  return;
}

