// name: FUN_1005400ea
// address: 1005400ea

bool FUN_1005400ea(long *param_1)

{
  char cVar1;
  
  cVar1 = *(char *)((long)param_1 + 0x4b9);
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*param_1 + 0x228))();
    cVar1 = '\x02' - cVar1;
    *(char *)((long)param_1 + 0x4b9) = cVar1;
  }
  return cVar1 == '\x01';
}

