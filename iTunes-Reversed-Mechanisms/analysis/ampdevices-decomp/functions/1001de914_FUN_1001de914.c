// name: FUN_1001de914
// address: 1001de914

bool FUN_1001de914(long *param_1,undefined8 *param_2,undefined4 *param_3)

{
  int iVar1;
  bool bVar2;
  
  if ((*param_1 == 0) || ((int)param_1[1] == 0)) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0;
    }
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = 0;
    }
    bVar2 = false;
  }
  else {
    iVar1 = FUN_1001de14e(*param_1,(int)param_1[1],0);
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0;
    }
    bVar2 = iVar1 == 0;
  }
  return bVar2;
}

