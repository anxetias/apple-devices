// name: FUN_1002ea320
// address: 1002ea320

bool FUN_1002ea320(long param_1)

{
  long lVar1;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    return false;
  }
  lVar1 = FUN_1001ab132(param_1 + 0x18);
  if (((lVar1 == 0) && (lVar1 = FUN_1001ab132(param_1 + 0x20), lVar1 == 0)) &&
     (lVar1 = FUN_1001ab132(param_1 + 0x28), lVar1 == 0)) {
    return *(long *)(param_1 + 0x30) == 0;
  }
  return false;
}

