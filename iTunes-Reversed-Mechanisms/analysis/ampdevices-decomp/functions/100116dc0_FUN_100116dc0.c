// name: FUN_100116dc0
// address: 100116dc0

void FUN_100116dc0(undefined8 *param_1)

{
  long lVar1;
  
  FUN_100114c50();
  *param_1 = &PTR_FUN_100835bc0;
  param_1[0x399e] = 0;
  param_1[0x399f] = 0;
  param_1[0x39a0] = 0x800000003c2;
  param_1[0x397a] = 0;
  param_1[0x397b] = 0;
  param_1[0x397c] = 0;
  param_1[0x397d] = 0;
  param_1[0x397e] = 0;
  param_1[0x397f] = 0;
  param_1[0x3980] = 0;
  param_1[0x3981] = 0;
  param_1[0x3982] = 0;
  param_1[0x3983] = 0;
  param_1[0x3984] = 0;
  param_1[0x3985] = 0;
  lVar1 = -0xc;
  do {
    param_1[lVar1 + 0x399e] = 0;
    (param_1 + lVar1 + 0x399e)[1] = 0;
    param_1[lVar1 + 0x3992] = 0;
    (param_1 + lVar1 + 0x3992)[1] = 0;
    lVar1 = lVar1 + 2;
  } while (lVar1 != 0);
  return;
}

