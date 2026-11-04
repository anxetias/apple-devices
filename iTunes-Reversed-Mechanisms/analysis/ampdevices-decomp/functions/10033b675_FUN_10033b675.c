// name: FUN_10033b675
// address: 10033b675

bool FUN_10033b675(long param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = FUN_1002bddb8(param_1,*(undefined1 *)(param_2 + 0x372));
  bVar2 = true;
  if (cVar1 == '\0') {
    if (((*(short *)(param_1 + 0x10) == 0x23) || (*(short *)(param_1 + 0x10) == 0x20)) &&
       (*(char *)(param_2 + 0x38a) != '\0')) {
      bVar2 = *(char *)(param_2 + 0x14df8) == '\0';
    }
    else {
      bVar2 = false;
    }
  }
  return bVar2;
}

