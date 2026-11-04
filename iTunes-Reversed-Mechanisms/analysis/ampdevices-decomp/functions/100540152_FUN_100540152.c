// name: FUN_100540152
// address: 100540152

bool FUN_100540152(long *param_1)

{
  char cVar1;
  
  cVar1 = *(char *)((long)param_1 + 0x4bb);
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*param_1 + 0x230))();
    cVar1 = '\x02' - cVar1;
    *(char *)((long)param_1 + 0x4bb) = cVar1;
  }
  return cVar1 == '\x01';
}

