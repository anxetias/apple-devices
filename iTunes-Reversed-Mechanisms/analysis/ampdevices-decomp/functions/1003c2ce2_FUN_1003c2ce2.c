// name: FUN_1003c2ce2
// address: 1003c2ce2

void FUN_1003c2ce2(long *param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x10))();
  if ((cVar1 == '\x12') &&
     (iVar2 = FUN_100466aac(" PG3 pg3 pg3PPG3ppg3ppg3 2G3 2g3 2g32PG32pg32pg3",param_2[0x22e],
                            param_2[0x22f],param_1 + 0x90,(long)param_1 + 0x484,*param_2),
     iVar2 == 0)) {
    return;
  }
  cVar1 = (**(code **)(*param_1 + 0x10))(param_1);
  if (cVar1 != '\x12') {
    return;
  }
  FUN_100466aac(" V4M V4M V4MPVOMPVOMPVOM VOMVooMVooM 4PM 4PM 4PM GPMGEPMGEPMGEPMGEPMGEPM",
                param_2[0x22e],param_2[0x22f],param_1 + 0x90,(long)param_1 + 0x484,*param_2);
  return;
}

