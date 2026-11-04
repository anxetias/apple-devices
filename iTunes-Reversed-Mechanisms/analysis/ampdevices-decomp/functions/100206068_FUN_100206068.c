// name: FUN_100206068
// address: 100206068

bool FUN_100206068(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 local_1a;
  undefined1 local_19;
  
  cVar1 = FUN_1003251d2();
  FUN_1002eb5ec(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x40),0,&local_1a,&local_19);
  bVar2 = true;
  if ((cVar1 == '\0') && (*(int *)(param_1 + 0x70) == *(int *)(param_1 + 0x6c))) {
    if (*(char *)(param_1 + 0x68) == '\0') {
      cVar1 = FUN_100170633(*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x50));
      bVar2 = cVar1 == '\0';
    }
    else {
      bVar2 = false;
    }
  }
  return bVar2;
}

