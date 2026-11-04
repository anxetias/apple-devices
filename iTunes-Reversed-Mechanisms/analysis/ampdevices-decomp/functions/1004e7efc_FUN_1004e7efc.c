// name: FUN_1004e7efc
// address: 1004e7efc

bool FUN_1004e7efc(long param_1)

{
  bool bVar1;
  
  if (((*(char *)(DAT_1008c76a0 + 0x1a93) == '\0') &&
      ((*(char *)(DAT_1008c76a0 + 0x1a91) == '\0' || (*(char *)(param_1 + 0x6afa) != '\0')))) &&
     ((*(char *)(param_1 + 0x3a2) == '\0' || (*(char *)(param_1 + 0x16847) == '\0')))) {
    bVar1 = true;
    if ((*(long *)(param_1 + 0x16688) != 0) && (*(char *)(param_1 + 0x16843) == '\0')) {
      bVar1 = *(char *)(param_1 + 0x16844) != '\0';
    }
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

