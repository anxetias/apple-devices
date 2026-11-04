// name: FUN_1003539aa
// address: 1003539aa

undefined1 FUN_1003539aa(long param_1,long param_2)

{
  char cVar1;
  
  if ((*(int *)(param_1 + 0x4ee8) != 0) || (*(char *)(param_1 + 0x3a2) != '\0')) {
    if (*(char *)(param_1 + 0x356) == '\0') {
      if (*(short *)(param_2 + 0x10) == 0x20) {
        return *(undefined1 *)(param_1 + 0x38a);
      }
    }
    else {
      cVar1 = FUN_1002e5b96(param_2);
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}

