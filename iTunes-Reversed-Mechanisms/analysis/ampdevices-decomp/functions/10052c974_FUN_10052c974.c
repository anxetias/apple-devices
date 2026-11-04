// name: FUN_10052c974
// address: 10052c974

int FUN_10052c974(long param_1,undefined8 *param_2)

{
  int iVar1;
  
  FUN_1001e9de0(param_1 + 0x550);
  iVar1 = FUN_10017cfbe(*(undefined8 *)(param_1 + 0x5a0),param_2);
  if (iVar1 == 0) {
    *(undefined8 *)(param_1 + 0x510) = *param_2;
  }
  FUN_1001e9eb9(param_1 + 0x550);
  return iVar1;
}

