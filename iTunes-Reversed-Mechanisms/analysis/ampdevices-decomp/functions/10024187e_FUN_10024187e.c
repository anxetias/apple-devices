// name: FUN_10024187e
// address: 10024187e

void FUN_10024187e(long *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x10))();
  if ((cVar1 == '\x12') &&
     (iVar2 = FUN_100466d97(" PG3 pg3 pg3PPG3ppg3ppg3 2G3 2g3 2g32PG32pg32pg3",param_2,param_3),
     iVar2 == 0)) {
    return;
  }
  cVar1 = (**(code **)(*param_1 + 0x10))(param_1);
  if ((cVar1 == '\x12') &&
     (iVar2 = FUN_100466d97(" V4M V4M V4MPVOMPVOMPVOM VOMVooMVooM 4PM 4PM 4PM GPMGEPMGEPMGEPMGEPMGEPM"
                            ,param_2,param_3), iVar2 == 0)) {
    return;
  }
  FUN_1001e1c39(param_2,param_3);
  return;
}

