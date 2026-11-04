// name: FUN_1004c5428
// address: 1004c5428

bool FUN_1004c5428(long param_1,undefined8 param_2,int param_3)

{
  char cVar1;
  bool bVar2;
  
  if ((param_3 == 0) || (*(long *)(param_1 + 0x18) == 0)) {
    bVar2 = false;
  }
  else {
    cVar1 = FUN_100171439(*(long *)(param_1 + 0x18),param_2);
    bVar2 = cVar1 != '\0';
  }
  if (((char)param_3 != '\x01') && (bVar2 == false)) {
    if (*(long *)(param_1 + 0x20) == 0) {
      bVar2 = false;
    }
    else {
      cVar1 = FUN_100171439(*(long *)(param_1 + 0x20),param_2);
      bVar2 = cVar1 != '\0';
    }
  }
  return bVar2;
}

