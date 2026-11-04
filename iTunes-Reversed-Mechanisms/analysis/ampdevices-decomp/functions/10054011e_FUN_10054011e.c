// name: FUN_10054011e
// address: 10054011e

bool FUN_10054011e(long *param_1)

{
  char cVar1;
  
  cVar1 = *(char *)((long)param_1 + 0x4ba);
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*param_1 + 0x220))();
    cVar1 = '\x02' - cVar1;
    *(char *)((long)param_1 + 0x4ba) = cVar1;
  }
  return cVar1 == '\x01';
}

