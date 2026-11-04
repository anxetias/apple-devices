// name: FUN_10035ceef
// address: 10035ceef

void FUN_10035ceef(undefined4 *param_1)

{
  long lVar1;
  
  *param_1 = 0;
  lVar1 = 0;
  do {
    FUN_1001c62d9((long)param_1 + lVar1 + 4,0x24);
    *(undefined4 *)((long)param_1 + lVar1 + 0x14) = 0x473b8000;
    *(undefined8 *)((long)param_1 + lVar1 + 0x1c) = 0xffffffffffffffff;
    *(undefined4 *)((long)param_1 + lVar1 + 0x24) = 0xffffffff;
    *(undefined4 *)((long)param_1 + lVar1 + 9) = 0x1010101;
    lVar1 = lVar1 + 0x24;
  } while (lVar1 != 0x2d0);
  return;
}

