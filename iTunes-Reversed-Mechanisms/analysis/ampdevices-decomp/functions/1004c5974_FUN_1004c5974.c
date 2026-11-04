// name: FUN_1004c5974
// address: 1004c5974

undefined8 FUN_1004c5974(long param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 local_28;
  
  local_28 = param_3;
  if ((*(long *)(param_1 + 0x18) == 0) ||
     (cVar1 = FUN_100167ab3(*(long *)(param_1 + 0x18),param_2,&local_28), cVar1 == '\0')) {
    if (*(long *)(param_1 + 0x20) == 0) {
      return param_3;
    }
    cVar1 = FUN_100167ab3(*(long *)(param_1 + 0x20),param_2,&local_28);
    if (cVar1 == '\0') {
      return param_3;
    }
  }
  return local_28;
}

