// name: FUN_10019bdcb
// address: 10019bdcb

undefined8 FUN_10019bdcb(long *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_1 == (long *)0x0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_100699378(uVar2);
    }
    FUN_1001782e9(0,0);
    uVar2 = 0xffffffce;
  }
  else {
    param_1[4] = 0;
    FUN_1001eed65(param_1 + 3);
    if (*param_1 != 0) {
      FUN_1001732be(*param_1,0,0,0);
      FUN_1001730da(*param_1);
      FUN_10017060f(*param_1);
      *param_1 = 0;
    }
    FUN_10017060f(param_1[0x12]);
    uVar2 = 0;
    param_1[0x12] = 0;
    FUN_10017060f(param_1[0x13]);
    param_1[0x13] = 0;
    FUN_10017060f(param_1[10]);
    param_1[10] = 0;
    *(undefined1 *)((long)param_1 + 0x101) = 0;
    FUN_10017060f(param_1[0xb]);
    param_1[0xb] = 0;
    FUN_1001c652e(param_1[0x21]);
    param_1[0x21] = 0;
    param_1[0x16] = -1;
    param_1[0x17] = 0;
    param_1[1] = 0;
  }
  return uVar2;
}

