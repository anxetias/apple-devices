// name: FUN_1004ffa54
// address: 1004ffa54

void FUN_1004ffa54(uint param_1,byte param_2,char param_3)

{
  ushort uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = 0;
  lVar2 = FUN_100279630();
  while ((uVar1 = *(ushort *)(lVar2 + 0xcbc + lVar4 * 4), uVar1 != 0 && (uVar1 != param_1))) {
    lVar4 = lVar4 + 1;
    if ((int)lVar4 == 0x10) {
      return;
    }
  }
  if (param_2 <= *(byte *)(lVar2 + 0xcbe + lVar4 * 4)) {
    return;
  }
  *(short *)(lVar2 + 0xcbc + lVar4 * 4) = (short)param_1;
  *(byte *)(lVar2 + 0xcbe + lVar4 * 4) = param_2;
  if (param_3 == '\0') {
    return;
  }
  uVar3 = FUN_1001c156e();
  FUN_1001c6987(uVar3,0x69707365,param_1,param_2,0);
  return;
}

