// name: FUN_1003b7ca6
// address: 1003b7ca6

void FUN_1003b7ca6(ulong param_1,ulong param_2,ulong param_3,ulong param_4,ushort *param_5,
                  ushort *param_6,ulong *param_7)

{
  int iVar1;
  
  if ((((param_1 & param_3) != 0 || (param_2 & param_4) != 0) && (*param_5 == *param_6)) &&
     (iVar1 = _memcmp(param_5 + 1,param_6 + 1,(ulong)((uint)*param_5 * 2)), iVar1 == 0)) {
    *param_7 = param_3 | *param_7;
    param_7[1] = param_4 | param_7[1];
  }
  return;
}

