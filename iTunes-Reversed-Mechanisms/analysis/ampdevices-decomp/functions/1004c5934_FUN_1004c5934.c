// name: FUN_1004c5934
// address: 1004c5934

long FUN_1004c5934(long param_1,undefined8 param_2)

{
  long lVar1;
  
  if ((*(long *)(param_1 + 0x18) != 0) &&
     (lVar1 = FUN_100171475(*(long *)(param_1 + 0x18),param_2), lVar1 != 0)) {
    return lVar1;
  }
  if (*(long *)(param_1 + 0x20) == 0) {
    return 0;
  }
  lVar1 = FUN_100171475(*(long *)(param_1 + 0x20),param_2);
  return lVar1;
}

