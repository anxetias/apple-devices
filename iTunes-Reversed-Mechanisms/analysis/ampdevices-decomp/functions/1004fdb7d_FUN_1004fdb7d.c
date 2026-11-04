// name: FUN_1004fdb7d
// address: 1004fdb7d

byte FUN_1004fdb7d(long param_1,int param_2)

{
  byte bVar1;
  
  if ((((param_2 == 0x72657364) || (*(char *)(param_1 + 0x14cd8) != '\0')) &&
      (*(char *)(param_1 + 0x6aeb) == '\0')) &&
     (((*(char *)(param_1 + 0x6aec) == '\0' && (*(char *)(param_1 + 0x6afb) == '\0')) &&
      (*(char *)(param_1 + 0x6af2) == '\0')))) {
    bVar1 = FUN_10039e077(*(undefined4 *)(param_1 + 0x28),1,0);
    bVar1 = bVar1 ^ 1;
  }
  else {
    bVar1 = 0;
  }
  return bVar1;
}

