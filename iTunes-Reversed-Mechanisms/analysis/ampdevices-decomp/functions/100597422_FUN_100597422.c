// name: FUN_100597422
// address: 100597422

long FUN_100597422(long param_1,long param_2,byte param_3)

{
  ulong uVar1;
  double dVar2;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    _CFAbsoluteTimeGetCurrent();
    uVar1 = _CFAbsoluteTimeGetGregorianDate(0);
    dVar2 = (double)_CFGregorianDateGetAbsoluteTime(0,uVar1 & 0xffffffffffff,0);
    *(int *)(param_1 + 8) = (int)dVar2;
    dVar2 = (double)_CFGregorianDateGetAbsoluteTime
                              (DAT_100759668,uVar1 & 0xffffffffffff | 0x3b17000000000000,0);
    *(int *)(param_1 + 0xc) = (int)dVar2;
    *(undefined1 *)(param_1 + 0x10) = 1;
  }
  return *(int *)(param_1 + 8 + (ulong)(param_3 ^ 1) * 4) + param_2;
}

