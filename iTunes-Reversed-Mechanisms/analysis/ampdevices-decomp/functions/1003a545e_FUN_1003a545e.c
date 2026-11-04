// name: FUN_1003a545e
// address: 1003a545e

undefined8 FUN_1003a545e(long param_1,undefined8 *param_2)

{
  uint *puVar1;
  long lVar2;
  uint uVar3;
  
  lVar2 = *(long *)(param_1 + 8);
  uVar3 = FUN_100474dd0(*param_2,0);
  puVar1 = (uint *)(lVar2 + 0x78);
  *puVar1 = *puVar1 | uVar3;
  return 0;
}

