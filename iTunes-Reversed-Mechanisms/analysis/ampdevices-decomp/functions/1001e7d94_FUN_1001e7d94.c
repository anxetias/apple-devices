// name: FUN_1001e7d94
// address: 1001e7d94

void FUN_1001e7d94(long param_1,ulong param_2)

{
  short sVar1;
  long lVar2;
  
  if (param_2 != 0) {
    lVar2 = 0;
    do {
      *(undefined *)(param_1 + lVar2) = (&DAT_100712040)[*(byte *)(param_1 + lVar2)];
      sVar1 = (short)lVar2;
      lVar2 = lVar2 + 1;
    } while ((ulong)(long)(short)(sVar1 + 2) <= param_2);
  }
  return;
}

