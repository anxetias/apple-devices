// name: FUN_1003a5286
// address: 1003a5286

undefined8 FUN_1003a5286(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  
  lVar1 = *param_2;
  if ((*(int *)(param_1 + 0x10) != 0) &&
     (iVar3 = FUN_100474dd0(lVar1,0), iVar3 != *(int *)(param_1 + 0x10))) {
    return 0;
  }
  lVar2 = **(long **)(param_1 + 8);
  if ((lVar2 == 0) || (*(ushort *)(lVar2 + 0x142) < *(ushort *)(lVar1 + 0x142))) {
    **(long **)(param_1 + 8) = lVar1;
  }
  return 0;
}

