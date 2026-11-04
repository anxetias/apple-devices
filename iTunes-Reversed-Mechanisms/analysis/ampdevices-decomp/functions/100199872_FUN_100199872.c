// name: FUN_100199872
// address: 100199872

void FUN_100199872(int *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_1 != (int *)0x0) {
    if (*param_1 == 0x6874646c) {
      FUN_100199903(param_1);
      FUN_10017060f(*(undefined8 *)(param_1 + 0x18));
      FUN_10017060f(*(undefined8 *)(param_1 + 0xc));
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      FUN_10017060f(*(undefined8 *)(param_1 + 0x12));
      param_1[0x12] = 0;
      param_1[0x13] = 0;
      FUN_10017060f(*(undefined8 *)(param_1 + 0x16));
      *param_1 = 0;
      FUN_1001c64c1(param_1);
      return;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_100697c90(uVar2);
    }
    FUN_1001782e9(0,0);
  }
  return;
}

