// name: FUN_100601448
// address: 100601448

bool FUN_100601448(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 local_1a;
  undefined1 local_19;
  
  cVar1 = FUN_1003251d2();
  FUN_1002eb5ec(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x40),0,&local_1a,&local_19);
  bVar2 = true;
  if (cVar1 == '\0') {
    if (*(char *)(param_1 + 0x68) == '\x01') {
      if (*(long *)(param_1 + 0x50) == 0) {
        bVar2 = *(long *)(param_1 + 0x58) != 0;
      }
      else if (*(long *)(param_1 + 0x58) != 0) {
        cVar1 = FUN_100170633();
        bVar2 = cVar1 == '\0';
      }
    }
    else {
      bVar2 = false;
    }
  }
  return bVar2;
}

