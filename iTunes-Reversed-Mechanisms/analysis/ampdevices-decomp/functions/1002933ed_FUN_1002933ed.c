// name: FUN_1002933ed
// address: 1002933ed

int FUN_1002933ed(int param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  long lVar2;
  undefined8 local_38;
  
  if (((param_1 == 0x44574e4c) || (param_1 == 0x4d46494c)) || (iVar1 = -0x32, param_1 == 0x46494c45)
     ) {
    iVar1 = FUN_1002934ca(param_1,param_2,0);
    if (iVar1 == 0) {
      lVar2 = FUN_1003ae1f8();
      if (lVar2 == 0) {
        iVar1 = -0x6c;
      }
      else {
        local_38 = 0;
        iVar1 = FUN_10029650a(param_1,param_2,lVar2,lVar2 + 0x1660,0,0,&local_38,0,0,0,0,0);
        *param_3 = local_38;
        FUN_1003ae783(lVar2 + 0x4ca8);
        FUN_1001c64c1(lVar2);
      }
    }
  }
  return iVar1;
}

