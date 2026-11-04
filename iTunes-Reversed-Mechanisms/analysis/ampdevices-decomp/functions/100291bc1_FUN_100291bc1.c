// name: FUN_100291bc1
// address: 100291bc1

int FUN_100291bc1(int param_1,int param_2,undefined4 *param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  undefined8 in_RAX;
  undefined4 local_34;
  
  local_34 = (undefined4)((ulong)in_RAX >> 0x20);
  iVar1 = FUN_100466aac(" 2PM2GPM2GPM 3PM3GPM3GPM 3PMGEPM3GPMAGPMGEPMGEPM 3PM!3PM3GPM 3PM!3pm3GPM 3PM 3PM3GPM 3PM 3pM3GPM 3PM3gpm3GPM 3PMYALP3GPM"
                        ,param_1,param_2,&local_34,0,param_4);
  iVar2 = 0;
  if ((iVar1 != 0) && (iVar2 = iVar1, (param_4 & 10) != 0)) {
    iVar2 = FUN_100466aac(&DAT_10073fe4c,param_1,param_2,&local_34,0,param_4);
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = local_34;
  }
  iVar1 = -0x32;
  if (param_2 == 0x4d503320) {
    iVar1 = iVar2;
  }
  if (param_1 != 0x4d504547) {
    iVar1 = iVar2;
  }
  return iVar1;
}

