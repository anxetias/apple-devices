// name: FUN_1001bb4c2
// address: 1001bb4c2

ushort * FUN_1001bb4c2(long *param_1,ushort *param_2,ulong param_3)

{
  ulong uVar1;
  undefined2 *puVar2;
  ulong uVar4;
  long lVar3;
  
  uVar1 = FUN_1001b8378();
  uVar4 = param_3 & 0xffffffff;
  if (uVar1 < (param_3 & 0xffffffff)) {
    uVar4 = uVar1;
  }
  *param_2 = (ushort)uVar4;
  lVar3 = *param_1;
  if (lVar3 == 0) {
    puVar2 = &DAT_100711b00;
    if (param_1[1] == 0) goto LAB_1001bb4f6;
    FUN_1001b8454(param_1);
    lVar3 = *param_1;
    if (lVar3 == 0) goto LAB_1001bb4f6;
  }
  puVar2 = (undefined2 *)(lVar3 + 0xc);
LAB_1001bb4f6:
  _memcpy(param_2 + 1,puVar2,(ulong)((uint)*param_2 * 2));
  return param_2;
}

