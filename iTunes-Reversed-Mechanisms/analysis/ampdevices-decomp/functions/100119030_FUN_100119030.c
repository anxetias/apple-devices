// name: FUN_100119030
// address: 100119030

undefined4 FUN_100119030(undefined4 *param_1,uint param_2)

{
  int iVar1;
  undefined1 local_1c [4];
  
  FUN_100117ae8(local_1c,*param_1,1);
  iVar1 = FUN_100117af2(local_1c);
  return *(undefined4 *)(&DAT_100704650 + (ulong)param_2 * 4 + (long)iVar1 * 0x38);
}

