// name: FUN_1003908e2
// address: 1003908e2

undefined8
FUN_1003908e2(undefined8 param_1,undefined8 param_2,int param_3,undefined2 param_4,
             undefined1 param_5,undefined1 param_6,undefined8 param_7,undefined1 *param_8)

{
  undefined8 uVar1;
  int local_3c;
  undefined8 local_38;
  
  *param_8 = 0;
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_1001de13c(param_2,param_3,&local_38,&local_3c);
    if (local_3c != 0 && (int)uVar1 == 0) {
      uVar1 = FUN_100390974(param_1,local_38,local_3c,param_4,param_5,param_6,param_7);
      *param_8 = 1;
    }
  }
  return uVar1;
}

