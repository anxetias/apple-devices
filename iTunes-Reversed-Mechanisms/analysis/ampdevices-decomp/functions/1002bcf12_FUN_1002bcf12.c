// name: FUN_1002bcf12
// address: 1002bcf12

bool FUN_1002bcf12(undefined8 param_1,char param_2)

{
  uint uVar1;
  bool bVar2;
  
  uVar1 = FUN_1004744bf(param_1,0);
  if (((uVar1 & 0xfe182321) == 0) && ((uVar1 & 8) == 0 || param_2 != '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = (uVar1 >> 0x10 & 1) == 0;
  }
  return bVar2;
}

