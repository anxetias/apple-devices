// name: FUN_100178023
// address: 100178023

void FUN_100178023(uint param_1,undefined8 param_2,undefined2 *param_3)

{
  undefined8 uVar1;
  double extraout_XMM0_Qa;
  
  uVar1 = _CFAbsoluteTimeGetGregorianDate
                    ((double)param_1 - *(double *)PTR__kCFAbsoluteTimeIntervalSince1904_10082e008,
                     param_2);
  *param_3 = (short)uVar1;
  param_3[1] = (short)(char)((ulong)uVar1 >> 0x20);
  param_3[2] = (short)(char)((ulong)uVar1 >> 0x28);
  param_3[3] = (short)(char)((ulong)uVar1 >> 0x30);
  param_3[4] = (short)(char)((ulong)uVar1 >> 0x38);
  param_3[5] = (short)(int)extraout_XMM0_Qa;
  return;
}

