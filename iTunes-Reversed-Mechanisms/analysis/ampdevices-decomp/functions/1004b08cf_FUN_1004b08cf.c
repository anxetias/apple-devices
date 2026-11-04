// name: FUN_1004b08cf
// address: 1004b08cf

void FUN_1004b08cf(long param_1,undefined8 param_2)

{
  long lVar1;
  
  if (*(char *)(param_1 + 0x50) != '\0') {
    FUN_10016843e(param_2,&cf_md5,param_1 + 9,0);
  }
  if (*(char *)(param_1 + 8) != '\0') {
    FUN_100168b0b(param_2,&cf_disable_md5,1,1);
    return;
  }
  lVar1 = FUN_1004b09b3(param_1 + 0x50);
  if (lVar1 != 0) {
    FUN_100171502(param_2,&cf_partial_md5,lVar1);
    FUN_10017060f(lVar1);
  }
  if (((*(char *)(param_1 + 0x110) != '\0') && (*(long *)(param_1 + 0x108) != 0)) &&
     (*(char *)(param_1 + 0x111) == '\0')) {
    lVar1 = FUN_1004b09b3(param_1 + 0x118);
    if (lVar1 != 0) {
      FUN_100171502(param_2,&cf_segment_md5,lVar1);
      FUN_10017060f(lVar1);
      return;
    }
  }
  return;
}

