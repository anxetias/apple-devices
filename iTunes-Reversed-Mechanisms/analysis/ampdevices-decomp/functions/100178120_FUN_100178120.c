// name: FUN_100178120
// address: 100178120

void FUN_100178120(ushort *param_1,undefined8 param_2,ulong *param_3)

{
  ulong uVar1;
  double dVar2;
  
  dVar2 = (double)_CFGregorianDateGetAbsoluteTime
                            ((double)param_1[5],
                             (ulong)param_1[4] << 0x38 |
                             (ulong)(byte)param_1[2] << 0x28 |
                             (ulong)(byte)param_1[1] << 0x20 | (ulong)*param_1 |
                             (ulong)(byte)param_1[3] << 0x30);
  uVar1 = (ulong)(dVar2 + *(double *)PTR__kCFAbsoluteTimeIntervalSince1904_10082e008);
  *param_3 = (long)((dVar2 + *(double *)PTR__kCFAbsoluteTimeIntervalSince1904_10082e008) -
                   DAT_10070e4c0) & (long)uVar1 >> 0x3f | uVar1;
  return;
}

