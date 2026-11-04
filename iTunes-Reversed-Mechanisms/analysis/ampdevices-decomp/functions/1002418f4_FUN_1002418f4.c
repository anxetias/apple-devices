// name: FUN_1002418f4
// address: 1002418f4

undefined8 FUN_1002418f4(long *param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  cVar1 = (**(code **)(*param_1 + 0x10))();
  if (cVar1 == '\x12') {
    iVar2 = FUN_100466cd7(" PG3 pg3 pg3PPG3ppg3ppg3 2G3 2g3 2g32PG32pg32pg3",param_2,param_3,param_4
                          ,0xf);
    if (iVar2 != 0) goto LAB_100241934;
LAB_10024197f:
    uVar3 = 0;
  }
  else {
LAB_100241934:
    cVar1 = (**(code **)(*param_1 + 0x10))(param_1);
    if (cVar1 == '\x12') {
      iVar2 = FUN_100466cd7(" V4M V4M V4MPVOMPVOMPVOM VOMVooMVooM 4PM 4PM 4PM GPMGEPMGEPMGEPMGEPMGEPM"
                            ,param_2,param_3,param_4,0xf);
      if (iVar2 == 0) goto LAB_10024197f;
    }
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0;
    }
    uVar3 = 0xffffffce;
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 0;
    }
  }
  return uVar3;
}

