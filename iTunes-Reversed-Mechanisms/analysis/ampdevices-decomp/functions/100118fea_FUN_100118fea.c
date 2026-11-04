// name: FUN_100118fea
// address: 100118fea

undefined4 FUN_100118fea(undefined4 *param_1,uint param_2)

{
  int iVar1;
  undefined1 local_1c [4];
  
  FUN_100117ae8(local_1c,*param_1,1);
  iVar1 = FUN_100117af2(local_1c);
  return *(undefined4 *)(&DAT_100704250 + (ulong)param_2 * 4 + (long)iVar1 * 0x40);
}

