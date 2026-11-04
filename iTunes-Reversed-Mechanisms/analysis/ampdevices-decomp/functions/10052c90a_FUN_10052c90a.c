// name: FUN_10052c90a
// address: 10052c90a

int FUN_10052c90a(long param_1,ulong param_2)

{
  int iVar1;
  
  if ((*(char *)(param_1 + 0x500) != '\x01') ||
     (iVar1 = 0x2351, param_2 <= *(ulong *)(param_1 + 0x508))) {
    FUN_1001e9de0(param_1 + 0x550);
    iVar1 = FUN_10017d068(*(undefined8 *)(param_1 + 0x5a0),param_2);
    if (iVar1 == 0) {
      *(ulong *)(param_1 + 0x510) = param_2;
    }
    FUN_1001e9eb9(param_1 + 0x550);
  }
  return iVar1;
}

